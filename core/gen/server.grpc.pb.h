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
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::JadeCore::Command, ::JadeCore::Command>> Handle(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::JadeCore::Command, ::JadeCore::Command>>(HandleRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::JadeCore::Command, ::JadeCore::Command>> AsyncHandle(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::JadeCore::Command, ::JadeCore::Command>>(AsyncHandleRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::JadeCore::Command, ::JadeCore::Command>> PrepareAsyncHandle(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::JadeCore::Command, ::JadeCore::Command>>(PrepareAsyncHandleRaw(context, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void Handle(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::JadeCore::Command,::JadeCore::Command>* reactor) = 0;
      #else
      virtual void Handle(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::JadeCore::Command,::JadeCore::Command>* reactor) = 0;
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
    virtual ::grpc::ClientReaderWriterInterface< ::JadeCore::Command, ::JadeCore::Command>* HandleRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::JadeCore::Command, ::JadeCore::Command>* AsyncHandleRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::JadeCore::Command, ::JadeCore::Command>* PrepareAsyncHandleRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    std::unique_ptr< ::grpc::ClientReaderWriter< ::JadeCore::Command, ::JadeCore::Command>> Handle(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::JadeCore::Command, ::JadeCore::Command>>(HandleRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::JadeCore::Command, ::JadeCore::Command>> AsyncHandle(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::JadeCore::Command, ::JadeCore::Command>>(AsyncHandleRaw(context, cq, tag));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::JadeCore::Command, ::JadeCore::Command>> PrepareAsyncHandle(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::JadeCore::Command, ::JadeCore::Command>>(PrepareAsyncHandleRaw(context, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void Handle(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::JadeCore::Command,::JadeCore::Command>* reactor) override;
      #else
      void Handle(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::JadeCore::Command,::JadeCore::Command>* reactor) override;
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
    ::grpc::ClientReaderWriter< ::JadeCore::Command, ::JadeCore::Command>* HandleRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::JadeCore::Command, ::JadeCore::Command>* AsyncHandleRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReaderWriter< ::JadeCore::Command, ::JadeCore::Command>* PrepareAsyncHandleRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Handle_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Handle(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::JadeCore::Command, ::JadeCore::Command>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_Handle : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Handle() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Handle() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Handle(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::JadeCore::Command, ::JadeCore::Command>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestHandle(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::JadeCore::Command, ::JadeCore::Command>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Handle<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_Handle : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_Handle() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc_impl::internal::CallbackBidiHandler< ::JadeCore::Command, ::JadeCore::Command>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context) { return this->Handle(context); }));
    }
    ~ExperimentalWithCallbackMethod_Handle() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Handle(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::JadeCore::Command, ::JadeCore::Command>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerBidiReactor< ::JadeCore::Command, ::JadeCore::Command>* Handle(
      ::grpc::CallbackServerContext* /*context*/)
    #else
    virtual ::grpc::experimental::ServerBidiReactor< ::JadeCore::Command, ::JadeCore::Command>* Handle(
      ::grpc::experimental::CallbackServerContext* /*context*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_Handle<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_Handle<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Handle : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Handle() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Handle() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Handle(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::JadeCore::Command, ::JadeCore::Command>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Handle : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Handle() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Handle() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Handle(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::JadeCore::Command, ::JadeCore::Command>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestHandle(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_Handle : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_Handle() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc_impl::internal::CallbackBidiHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context) { return this->Handle(context); }));
    }
    ~ExperimentalWithRawCallbackMethod_Handle() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Handle(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::JadeCore::Command, ::JadeCore::Command>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerBidiReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* Handle(
      ::grpc::CallbackServerContext* /*context*/)
    #else
    virtual ::grpc::experimental::ServerBidiReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* Handle(
      ::grpc::experimental::CallbackServerContext* /*context*/)
    #endif
      { return nullptr; }
  };
  typedef Service StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef Service StreamedService;
};

}  // namespace JadeCore


#endif  // GRPC_server_2eproto__INCLUDED
