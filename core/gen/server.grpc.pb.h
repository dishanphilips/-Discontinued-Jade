// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: server.proto
// Original file comments:
// Jade Server Sevice Definition
//
#ifndef GRPC_server_2eproto__INCLUDED
#define GRPC_server_2eproto__INCLUDED

#include "server.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace JadeCore {

class RpcBase final {
 public:
  static constexpr char const* service_full_name() {
    return "JadeCore.RpcBase";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Info(::grpc::ClientContext* context, const ::JadeCore::InfoRequest& request, ::JadeCore::InfoResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::JadeCore::InfoResponse>> AsyncInfo(::grpc::ClientContext* context, const ::JadeCore::InfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::JadeCore::InfoResponse>>(AsyncInfoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::JadeCore::InfoResponse>> PrepareAsyncInfo(::grpc::ClientContext* context, const ::JadeCore::InfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::JadeCore::InfoResponse>>(PrepareAsyncInfoRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void Info(::grpc::ClientContext* context, const ::JadeCore::InfoRequest* request, ::JadeCore::InfoResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Info(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::JadeCore::InfoResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void Info(::grpc::ClientContext* context, const ::JadeCore::InfoRequest* request, ::JadeCore::InfoResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void Info(::grpc::ClientContext* context, const ::JadeCore::InfoRequest* request, ::JadeCore::InfoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void Info(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::JadeCore::InfoResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void Info(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::JadeCore::InfoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::JadeCore::InfoResponse>* AsyncInfoRaw(::grpc::ClientContext* context, const ::JadeCore::InfoRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::JadeCore::InfoResponse>* PrepareAsyncInfoRaw(::grpc::ClientContext* context, const ::JadeCore::InfoRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Info(::grpc::ClientContext* context, const ::JadeCore::InfoRequest& request, ::JadeCore::InfoResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::JadeCore::InfoResponse>> AsyncInfo(::grpc::ClientContext* context, const ::JadeCore::InfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::JadeCore::InfoResponse>>(AsyncInfoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::JadeCore::InfoResponse>> PrepareAsyncInfo(::grpc::ClientContext* context, const ::JadeCore::InfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::JadeCore::InfoResponse>>(PrepareAsyncInfoRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void Info(::grpc::ClientContext* context, const ::JadeCore::InfoRequest* request, ::JadeCore::InfoResponse* response, std::function<void(::grpc::Status)>) override;
      void Info(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::JadeCore::InfoResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void Info(::grpc::ClientContext* context, const ::JadeCore::InfoRequest* request, ::JadeCore::InfoResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void Info(::grpc::ClientContext* context, const ::JadeCore::InfoRequest* request, ::JadeCore::InfoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void Info(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::JadeCore::InfoResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void Info(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::JadeCore::InfoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::JadeCore::InfoResponse>* AsyncInfoRaw(::grpc::ClientContext* context, const ::JadeCore::InfoRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::JadeCore::InfoResponse>* PrepareAsyncInfoRaw(::grpc::ClientContext* context, const ::JadeCore::InfoRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Info_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Info(::grpc::ServerContext* context, const ::JadeCore::InfoRequest* request, ::JadeCore::InfoResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Info : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Info() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Info() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Info(::grpc::ServerContext* /*context*/, const ::JadeCore::InfoRequest* /*request*/, ::JadeCore::InfoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestInfo(::grpc::ServerContext* context, ::JadeCore::InfoRequest* request, ::grpc::ServerAsyncResponseWriter< ::JadeCore::InfoResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Info<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_Info : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_Info() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::JadeCore::InfoRequest, ::JadeCore::InfoResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::JadeCore::InfoRequest* request, ::JadeCore::InfoResponse* response) { return this->Info(context, request, response); }));}
    void SetMessageAllocatorFor_Info(
        ::grpc::experimental::MessageAllocator< ::JadeCore::InfoRequest, ::JadeCore::InfoResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::JadeCore::InfoRequest, ::JadeCore::InfoResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_Info() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Info(::grpc::ServerContext* /*context*/, const ::JadeCore::InfoRequest* /*request*/, ::JadeCore::InfoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* Info(
      ::grpc::CallbackServerContext* /*context*/, const ::JadeCore::InfoRequest* /*request*/, ::JadeCore::InfoResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* Info(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::JadeCore::InfoRequest* /*request*/, ::JadeCore::InfoResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_Info<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_Info<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Info : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Info() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Info() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Info(::grpc::ServerContext* /*context*/, const ::JadeCore::InfoRequest* /*request*/, ::JadeCore::InfoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Info : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Info() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Info() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Info(::grpc::ServerContext* /*context*/, const ::JadeCore::InfoRequest* /*request*/, ::JadeCore::InfoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestInfo(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_Info : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_Info() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Info(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_Info() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Info(::grpc::ServerContext* /*context*/, const ::JadeCore::InfoRequest* /*request*/, ::JadeCore::InfoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* Info(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* Info(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Info : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Info() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::JadeCore::InfoRequest, ::JadeCore::InfoResponse>(std::bind(&WithStreamedUnaryMethod_Info<BaseClass>::StreamedInfo, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Info() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Info(::grpc::ServerContext* /*context*/, const ::JadeCore::InfoRequest* /*request*/, ::JadeCore::InfoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedInfo(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::JadeCore::InfoRequest,::JadeCore::InfoResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Info<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Info<Service > StreamedService;
};

}  // namespace JadeCore


#endif  // GRPC_server_2eproto__INCLUDED