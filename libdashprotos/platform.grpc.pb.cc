// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: platform.proto

#include "platform.pb.h"
#include "platform.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace org {
namespace dash {
namespace platform {
namespace dapi {
namespace v0 {

static const char* Platform_method_names[] = {
  "/org.dash.platform.dapi.v0.Platform/broadcastStateTransition",
  "/org.dash.platform.dapi.v0.Platform/getIdentity",
  "/org.dash.platform.dapi.v0.Platform/getDataContract",
  "/org.dash.platform.dapi.v0.Platform/getDocuments",
  "/org.dash.platform.dapi.v0.Platform/getIdentitiesByPublicKeyHashes",
  "/org.dash.platform.dapi.v0.Platform/getIdentityIdsByPublicKeyHashes",
  "/org.dash.platform.dapi.v0.Platform/waitForStateTransitionResult",
  "/org.dash.platform.dapi.v0.Platform/getConsensusParams",
};

std::unique_ptr< Platform::Stub> Platform::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Platform::Stub> stub(new Platform::Stub(channel, options));
  return stub;
}

Platform::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_broadcastStateTransition_(Platform_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_getIdentity_(Platform_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_getDataContract_(Platform_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_getDocuments_(Platform_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_getIdentitiesByPublicKeyHashes_(Platform_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_getIdentityIdsByPublicKeyHashes_(Platform_method_names[5], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_waitForStateTransitionResult_(Platform_method_names[6], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_getConsensusParams_(Platform_method_names[7], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Platform::Stub::broadcastStateTransition(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::BroadcastStateTransitionRequest& request, ::org::dash::platform::dapi::v0::BroadcastStateTransitionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::org::dash::platform::dapi::v0::BroadcastStateTransitionRequest, ::org::dash::platform::dapi::v0::BroadcastStateTransitionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_broadcastStateTransition_, context, request, response);
}

void Platform::Stub::async::broadcastStateTransition(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::BroadcastStateTransitionRequest* request, ::org::dash::platform::dapi::v0::BroadcastStateTransitionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::org::dash::platform::dapi::v0::BroadcastStateTransitionRequest, ::org::dash::platform::dapi::v0::BroadcastStateTransitionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_broadcastStateTransition_, context, request, response, std::move(f));
}

void Platform::Stub::async::broadcastStateTransition(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::BroadcastStateTransitionRequest* request, ::org::dash::platform::dapi::v0::BroadcastStateTransitionResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_broadcastStateTransition_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::org::dash::platform::dapi::v0::BroadcastStateTransitionResponse>* Platform::Stub::PrepareAsyncbroadcastStateTransitionRaw(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::BroadcastStateTransitionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::org::dash::platform::dapi::v0::BroadcastStateTransitionResponse, ::org::dash::platform::dapi::v0::BroadcastStateTransitionRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_broadcastStateTransition_, context, request);
}

::grpc::ClientAsyncResponseReader< ::org::dash::platform::dapi::v0::BroadcastStateTransitionResponse>* Platform::Stub::AsyncbroadcastStateTransitionRaw(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::BroadcastStateTransitionRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncbroadcastStateTransitionRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Platform::Stub::getIdentity(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetIdentityRequest& request, ::org::dash::platform::dapi::v0::GetIdentityResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::org::dash::platform::dapi::v0::GetIdentityRequest, ::org::dash::platform::dapi::v0::GetIdentityResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_getIdentity_, context, request, response);
}

void Platform::Stub::async::getIdentity(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetIdentityRequest* request, ::org::dash::platform::dapi::v0::GetIdentityResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::org::dash::platform::dapi::v0::GetIdentityRequest, ::org::dash::platform::dapi::v0::GetIdentityResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getIdentity_, context, request, response, std::move(f));
}

void Platform::Stub::async::getIdentity(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetIdentityRequest* request, ::org::dash::platform::dapi::v0::GetIdentityResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getIdentity_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::org::dash::platform::dapi::v0::GetIdentityResponse>* Platform::Stub::PrepareAsyncgetIdentityRaw(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetIdentityRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::org::dash::platform::dapi::v0::GetIdentityResponse, ::org::dash::platform::dapi::v0::GetIdentityRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_getIdentity_, context, request);
}

::grpc::ClientAsyncResponseReader< ::org::dash::platform::dapi::v0::GetIdentityResponse>* Platform::Stub::AsyncgetIdentityRaw(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetIdentityRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncgetIdentityRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Platform::Stub::getDataContract(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetDataContractRequest& request, ::org::dash::platform::dapi::v0::GetDataContractResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::org::dash::platform::dapi::v0::GetDataContractRequest, ::org::dash::platform::dapi::v0::GetDataContractResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_getDataContract_, context, request, response);
}

void Platform::Stub::async::getDataContract(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetDataContractRequest* request, ::org::dash::platform::dapi::v0::GetDataContractResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::org::dash::platform::dapi::v0::GetDataContractRequest, ::org::dash::platform::dapi::v0::GetDataContractResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getDataContract_, context, request, response, std::move(f));
}

void Platform::Stub::async::getDataContract(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetDataContractRequest* request, ::org::dash::platform::dapi::v0::GetDataContractResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getDataContract_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::org::dash::platform::dapi::v0::GetDataContractResponse>* Platform::Stub::PrepareAsyncgetDataContractRaw(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetDataContractRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::org::dash::platform::dapi::v0::GetDataContractResponse, ::org::dash::platform::dapi::v0::GetDataContractRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_getDataContract_, context, request);
}

::grpc::ClientAsyncResponseReader< ::org::dash::platform::dapi::v0::GetDataContractResponse>* Platform::Stub::AsyncgetDataContractRaw(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetDataContractRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncgetDataContractRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Platform::Stub::getDocuments(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetDocumentsRequest& request, ::org::dash::platform::dapi::v0::GetDocumentsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::org::dash::platform::dapi::v0::GetDocumentsRequest, ::org::dash::platform::dapi::v0::GetDocumentsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_getDocuments_, context, request, response);
}

void Platform::Stub::async::getDocuments(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetDocumentsRequest* request, ::org::dash::platform::dapi::v0::GetDocumentsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::org::dash::platform::dapi::v0::GetDocumentsRequest, ::org::dash::platform::dapi::v0::GetDocumentsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getDocuments_, context, request, response, std::move(f));
}

void Platform::Stub::async::getDocuments(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetDocumentsRequest* request, ::org::dash::platform::dapi::v0::GetDocumentsResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getDocuments_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::org::dash::platform::dapi::v0::GetDocumentsResponse>* Platform::Stub::PrepareAsyncgetDocumentsRaw(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetDocumentsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::org::dash::platform::dapi::v0::GetDocumentsResponse, ::org::dash::platform::dapi::v0::GetDocumentsRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_getDocuments_, context, request);
}

::grpc::ClientAsyncResponseReader< ::org::dash::platform::dapi::v0::GetDocumentsResponse>* Platform::Stub::AsyncgetDocumentsRaw(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetDocumentsRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncgetDocumentsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Platform::Stub::getIdentitiesByPublicKeyHashes(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetIdentitiesByPublicKeyHashesRequest& request, ::org::dash::platform::dapi::v0::GetIdentitiesByPublicKeyHashesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::org::dash::platform::dapi::v0::GetIdentitiesByPublicKeyHashesRequest, ::org::dash::platform::dapi::v0::GetIdentitiesByPublicKeyHashesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_getIdentitiesByPublicKeyHashes_, context, request, response);
}

void Platform::Stub::async::getIdentitiesByPublicKeyHashes(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetIdentitiesByPublicKeyHashesRequest* request, ::org::dash::platform::dapi::v0::GetIdentitiesByPublicKeyHashesResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::org::dash::platform::dapi::v0::GetIdentitiesByPublicKeyHashesRequest, ::org::dash::platform::dapi::v0::GetIdentitiesByPublicKeyHashesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getIdentitiesByPublicKeyHashes_, context, request, response, std::move(f));
}

void Platform::Stub::async::getIdentitiesByPublicKeyHashes(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetIdentitiesByPublicKeyHashesRequest* request, ::org::dash::platform::dapi::v0::GetIdentitiesByPublicKeyHashesResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getIdentitiesByPublicKeyHashes_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::org::dash::platform::dapi::v0::GetIdentitiesByPublicKeyHashesResponse>* Platform::Stub::PrepareAsyncgetIdentitiesByPublicKeyHashesRaw(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetIdentitiesByPublicKeyHashesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::org::dash::platform::dapi::v0::GetIdentitiesByPublicKeyHashesResponse, ::org::dash::platform::dapi::v0::GetIdentitiesByPublicKeyHashesRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_getIdentitiesByPublicKeyHashes_, context, request);
}

::grpc::ClientAsyncResponseReader< ::org::dash::platform::dapi::v0::GetIdentitiesByPublicKeyHashesResponse>* Platform::Stub::AsyncgetIdentitiesByPublicKeyHashesRaw(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetIdentitiesByPublicKeyHashesRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncgetIdentitiesByPublicKeyHashesRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Platform::Stub::getIdentityIdsByPublicKeyHashes(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetIdentityIdsByPublicKeyHashesRequest& request, ::org::dash::platform::dapi::v0::GetIdentityIdsByPublicKeyHashesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::org::dash::platform::dapi::v0::GetIdentityIdsByPublicKeyHashesRequest, ::org::dash::platform::dapi::v0::GetIdentityIdsByPublicKeyHashesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_getIdentityIdsByPublicKeyHashes_, context, request, response);
}

void Platform::Stub::async::getIdentityIdsByPublicKeyHashes(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetIdentityIdsByPublicKeyHashesRequest* request, ::org::dash::platform::dapi::v0::GetIdentityIdsByPublicKeyHashesResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::org::dash::platform::dapi::v0::GetIdentityIdsByPublicKeyHashesRequest, ::org::dash::platform::dapi::v0::GetIdentityIdsByPublicKeyHashesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getIdentityIdsByPublicKeyHashes_, context, request, response, std::move(f));
}

void Platform::Stub::async::getIdentityIdsByPublicKeyHashes(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetIdentityIdsByPublicKeyHashesRequest* request, ::org::dash::platform::dapi::v0::GetIdentityIdsByPublicKeyHashesResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getIdentityIdsByPublicKeyHashes_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::org::dash::platform::dapi::v0::GetIdentityIdsByPublicKeyHashesResponse>* Platform::Stub::PrepareAsyncgetIdentityIdsByPublicKeyHashesRaw(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetIdentityIdsByPublicKeyHashesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::org::dash::platform::dapi::v0::GetIdentityIdsByPublicKeyHashesResponse, ::org::dash::platform::dapi::v0::GetIdentityIdsByPublicKeyHashesRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_getIdentityIdsByPublicKeyHashes_, context, request);
}

::grpc::ClientAsyncResponseReader< ::org::dash::platform::dapi::v0::GetIdentityIdsByPublicKeyHashesResponse>* Platform::Stub::AsyncgetIdentityIdsByPublicKeyHashesRaw(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetIdentityIdsByPublicKeyHashesRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncgetIdentityIdsByPublicKeyHashesRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Platform::Stub::waitForStateTransitionResult(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::WaitForStateTransitionResultRequest& request, ::org::dash::platform::dapi::v0::WaitForStateTransitionResultResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::org::dash::platform::dapi::v0::WaitForStateTransitionResultRequest, ::org::dash::platform::dapi::v0::WaitForStateTransitionResultResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_waitForStateTransitionResult_, context, request, response);
}

void Platform::Stub::async::waitForStateTransitionResult(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::WaitForStateTransitionResultRequest* request, ::org::dash::platform::dapi::v0::WaitForStateTransitionResultResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::org::dash::platform::dapi::v0::WaitForStateTransitionResultRequest, ::org::dash::platform::dapi::v0::WaitForStateTransitionResultResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_waitForStateTransitionResult_, context, request, response, std::move(f));
}

void Platform::Stub::async::waitForStateTransitionResult(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::WaitForStateTransitionResultRequest* request, ::org::dash::platform::dapi::v0::WaitForStateTransitionResultResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_waitForStateTransitionResult_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::org::dash::platform::dapi::v0::WaitForStateTransitionResultResponse>* Platform::Stub::PrepareAsyncwaitForStateTransitionResultRaw(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::WaitForStateTransitionResultRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::org::dash::platform::dapi::v0::WaitForStateTransitionResultResponse, ::org::dash::platform::dapi::v0::WaitForStateTransitionResultRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_waitForStateTransitionResult_, context, request);
}

::grpc::ClientAsyncResponseReader< ::org::dash::platform::dapi::v0::WaitForStateTransitionResultResponse>* Platform::Stub::AsyncwaitForStateTransitionResultRaw(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::WaitForStateTransitionResultRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncwaitForStateTransitionResultRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Platform::Stub::getConsensusParams(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetConsensusParamsRequest& request, ::org::dash::platform::dapi::v0::GetConsensusParamsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::org::dash::platform::dapi::v0::GetConsensusParamsRequest, ::org::dash::platform::dapi::v0::GetConsensusParamsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_getConsensusParams_, context, request, response);
}

void Platform::Stub::async::getConsensusParams(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetConsensusParamsRequest* request, ::org::dash::platform::dapi::v0::GetConsensusParamsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::org::dash::platform::dapi::v0::GetConsensusParamsRequest, ::org::dash::platform::dapi::v0::GetConsensusParamsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getConsensusParams_, context, request, response, std::move(f));
}

void Platform::Stub::async::getConsensusParams(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetConsensusParamsRequest* request, ::org::dash::platform::dapi::v0::GetConsensusParamsResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getConsensusParams_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::org::dash::platform::dapi::v0::GetConsensusParamsResponse>* Platform::Stub::PrepareAsyncgetConsensusParamsRaw(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetConsensusParamsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::org::dash::platform::dapi::v0::GetConsensusParamsResponse, ::org::dash::platform::dapi::v0::GetConsensusParamsRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_getConsensusParams_, context, request);
}

::grpc::ClientAsyncResponseReader< ::org::dash::platform::dapi::v0::GetConsensusParamsResponse>* Platform::Stub::AsyncgetConsensusParamsRaw(::grpc::ClientContext* context, const ::org::dash::platform::dapi::v0::GetConsensusParamsRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncgetConsensusParamsRaw(context, request, cq);
  result->StartCall();
  return result;
}

Platform::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Platform_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Platform::Service, ::org::dash::platform::dapi::v0::BroadcastStateTransitionRequest, ::org::dash::platform::dapi::v0::BroadcastStateTransitionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Platform::Service* service,
             ::grpc::ServerContext* ctx,
             const ::org::dash::platform::dapi::v0::BroadcastStateTransitionRequest* req,
             ::org::dash::platform::dapi::v0::BroadcastStateTransitionResponse* resp) {
               return service->broadcastStateTransition(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Platform_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Platform::Service, ::org::dash::platform::dapi::v0::GetIdentityRequest, ::org::dash::platform::dapi::v0::GetIdentityResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Platform::Service* service,
             ::grpc::ServerContext* ctx,
             const ::org::dash::platform::dapi::v0::GetIdentityRequest* req,
             ::org::dash::platform::dapi::v0::GetIdentityResponse* resp) {
               return service->getIdentity(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Platform_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Platform::Service, ::org::dash::platform::dapi::v0::GetDataContractRequest, ::org::dash::platform::dapi::v0::GetDataContractResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Platform::Service* service,
             ::grpc::ServerContext* ctx,
             const ::org::dash::platform::dapi::v0::GetDataContractRequest* req,
             ::org::dash::platform::dapi::v0::GetDataContractResponse* resp) {
               return service->getDataContract(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Platform_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Platform::Service, ::org::dash::platform::dapi::v0::GetDocumentsRequest, ::org::dash::platform::dapi::v0::GetDocumentsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Platform::Service* service,
             ::grpc::ServerContext* ctx,
             const ::org::dash::platform::dapi::v0::GetDocumentsRequest* req,
             ::org::dash::platform::dapi::v0::GetDocumentsResponse* resp) {
               return service->getDocuments(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Platform_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Platform::Service, ::org::dash::platform::dapi::v0::GetIdentitiesByPublicKeyHashesRequest, ::org::dash::platform::dapi::v0::GetIdentitiesByPublicKeyHashesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Platform::Service* service,
             ::grpc::ServerContext* ctx,
             const ::org::dash::platform::dapi::v0::GetIdentitiesByPublicKeyHashesRequest* req,
             ::org::dash::platform::dapi::v0::GetIdentitiesByPublicKeyHashesResponse* resp) {
               return service->getIdentitiesByPublicKeyHashes(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Platform_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Platform::Service, ::org::dash::platform::dapi::v0::GetIdentityIdsByPublicKeyHashesRequest, ::org::dash::platform::dapi::v0::GetIdentityIdsByPublicKeyHashesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Platform::Service* service,
             ::grpc::ServerContext* ctx,
             const ::org::dash::platform::dapi::v0::GetIdentityIdsByPublicKeyHashesRequest* req,
             ::org::dash::platform::dapi::v0::GetIdentityIdsByPublicKeyHashesResponse* resp) {
               return service->getIdentityIdsByPublicKeyHashes(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Platform_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Platform::Service, ::org::dash::platform::dapi::v0::WaitForStateTransitionResultRequest, ::org::dash::platform::dapi::v0::WaitForStateTransitionResultResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Platform::Service* service,
             ::grpc::ServerContext* ctx,
             const ::org::dash::platform::dapi::v0::WaitForStateTransitionResultRequest* req,
             ::org::dash::platform::dapi::v0::WaitForStateTransitionResultResponse* resp) {
               return service->waitForStateTransitionResult(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Platform_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Platform::Service, ::org::dash::platform::dapi::v0::GetConsensusParamsRequest, ::org::dash::platform::dapi::v0::GetConsensusParamsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Platform::Service* service,
             ::grpc::ServerContext* ctx,
             const ::org::dash::platform::dapi::v0::GetConsensusParamsRequest* req,
             ::org::dash::platform::dapi::v0::GetConsensusParamsResponse* resp) {
               return service->getConsensusParams(ctx, req, resp);
             }, this)));
}

Platform::Service::~Service() {
}

::grpc::Status Platform::Service::broadcastStateTransition(::grpc::ServerContext* context, const ::org::dash::platform::dapi::v0::BroadcastStateTransitionRequest* request, ::org::dash::platform::dapi::v0::BroadcastStateTransitionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Platform::Service::getIdentity(::grpc::ServerContext* context, const ::org::dash::platform::dapi::v0::GetIdentityRequest* request, ::org::dash::platform::dapi::v0::GetIdentityResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Platform::Service::getDataContract(::grpc::ServerContext* context, const ::org::dash::platform::dapi::v0::GetDataContractRequest* request, ::org::dash::platform::dapi::v0::GetDataContractResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Platform::Service::getDocuments(::grpc::ServerContext* context, const ::org::dash::platform::dapi::v0::GetDocumentsRequest* request, ::org::dash::platform::dapi::v0::GetDocumentsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Platform::Service::getIdentitiesByPublicKeyHashes(::grpc::ServerContext* context, const ::org::dash::platform::dapi::v0::GetIdentitiesByPublicKeyHashesRequest* request, ::org::dash::platform::dapi::v0::GetIdentitiesByPublicKeyHashesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Platform::Service::getIdentityIdsByPublicKeyHashes(::grpc::ServerContext* context, const ::org::dash::platform::dapi::v0::GetIdentityIdsByPublicKeyHashesRequest* request, ::org::dash::platform::dapi::v0::GetIdentityIdsByPublicKeyHashesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Platform::Service::waitForStateTransitionResult(::grpc::ServerContext* context, const ::org::dash::platform::dapi::v0::WaitForStateTransitionResultRequest* request, ::org::dash::platform::dapi::v0::WaitForStateTransitionResultResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Platform::Service::getConsensusParams(::grpc::ServerContext* context, const ::org::dash::platform::dapi::v0::GetConsensusParamsRequest* request, ::org::dash::platform::dapi::v0::GetConsensusParamsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace org
}  // namespace dash
}  // namespace platform
}  // namespace dapi
}  // namespace v0
