#include <atomic>
#include <csignal>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <thread>
#include <grpcpp/channel.h>
#include <memory>
#include <grpcpp/client_context.h>
#include <grpcpp/impl/codegen/sync_stream.h>
#include "jadecore.h"

class GreetingClient {
public:
    GreetingClient(const GreetingClient&) = delete;

    GreetingClient(GreetingClient&&) = delete;

    GreetingClient& operator=(const GreetingClient&) = delete;

    GreetingClient& operator=(GreetingClient&&) = delete;

    // only for C++11, return static local var reference is thread safe
    static GreetingClient& getInstance() {
        static GreetingClient kSingleInstance;
        return kSingleInstance;
    }

    bool init(const std::string& name, const std::string& server) {
        name_ = name;
        stub_ = JadeCore::RpcBase::NewStub(grpc::CreateChannel(server, grpc::InsecureChannelCredentials()));
        return true;
    }

    void run() {
        running_ = true;
        stream_ = stub_->Handle(&context_);

        std::thread thread_for_reply{ [this] {
            JadeCore::Command reply;
            while (stream_->Read(&reply)) {
            }
        } };

        std::thread thread_for_request{ [this] {
            uint64_t increase_name{0};
            JadeCore::Command request;

            while (running_) {
                request.set_operation(1);
                //request.set_request();
            	
                if (!stream_->Write(request)) {
                    break;
                }
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
            }
        } };

        if (thread_for_reply.joinable()) { thread_for_reply.join(); }
        if (thread_for_request.joinable()) { thread_for_request.join(); }
    }

    void stop() {
        if (!running_) { return; }
        running_ = false;
        context_.TryCancel();
    }

private:
    GreetingClient() = default;

    virtual ~GreetingClient() = default;

public:
    std::atomic_bool running_{ false };

    std::unique_ptr<JadeCore::RpcBase::Stub> stub_;
    ::grpc::ClientContext context_{};
    std::unique_ptr<
        grpc::ClientReaderWriter<JadeCore::Command, JadeCore::Command>>
        stream_{};
    std::string name_{};
};


void handler(int sig) {
    GreetingClient::getInstance().stop();
}

int main(int argc, const char** argv) {
    signal(SIGTERM, handler);
    signal(SIGINT, handler);
    
    std::string client_name{ "client_name" };
    if (argc >= 2) {
        client_name = argv[1];
    }

    std::string server_address{ "127.0.0.1:50051" };
    if (argc >= 3) {
        server_address = argv[2];
    }

    try {
        if (!GreetingClient::getInstance().init(client_name, server_address)) {
            return 1;
        }
        GreetingClient::getInstance().run();
    }
    catch (std::exception & e) {
        return 1;
    }

    return 0;
}