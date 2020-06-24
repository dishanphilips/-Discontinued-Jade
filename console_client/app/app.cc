#pragma once

#include <iostream>
#include <memory>
#include <string>

#include <grpcpp/grpcpp.h>

#include "../../core/gen/server.pb.h"
#include "../../core/gen/server.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using JadeCore::CommandRequest;
using JadeCore::CommandResponse;
using JadeCore::RpcBase;

class GreeterClient {
public:
    GreeterClient(std::shared_ptr<Channel> channel) : stub_(RpcBase::NewStub(channel)) {}

    std::string GetInfo(const std::string& message) {

        JadeCore::InfoRequest* info = new JadeCore::InfoRequest();
        info->set_message("jiji");
    	
    	// Data we are sending to the server.
        CommandRequest request;
        request.set_operation(1);
        request.set_request(info->SerializeAsString());

        // Container for the data we expect from the server.
        CommandResponse reply;

        // Context for the client. It could be used to convey extra information to
        // the server and/or tweak certain RPC behaviors.
        ClientContext context;

        // The actual RPC.
        Status status = stub_->Handle(&context, request, &reply);

        // Act upon its status.
        if (status.ok()) {
            return reply.response();
        }
        else {
            std::cout << status.error_code() << ": " << status.error_message()
                << std::endl;
            return "RPC failed";
        }
    }

private:
    std::unique_ptr<RpcBase::Stub> stub_;
};

int main(int argc, char** argv) {
    std::string target_str;
    std::string arg_str("--target");
    if (argc > 1) {
        std::string arg_val = argv[1];
        size_t start_pos = arg_val.find(arg_str);
        if (start_pos != std::string::npos) {
            start_pos += arg_str.size();
            if (arg_val[start_pos] == '=') {
                target_str = arg_val.substr(start_pos + 1);
            }
            else {
                std::cout << "The only correct argument syntax is --target=" << std::endl;
                return 0;
            }
        }
        else {
            std::cout << "The only acceptable argument is --target=" << std::endl;
            return 0;
        }
    }
    else {
        target_str = "127.0.0.1:50051";
    }
    GreeterClient greeter(grpc::CreateChannel(target_str, grpc::InsecureChannelCredentials()));
    std::string message("Jade");
    std::string reply = greeter.GetInfo(message);
    std::cout << "Greeter received: " << reply << std::endl;

    return 0;
}