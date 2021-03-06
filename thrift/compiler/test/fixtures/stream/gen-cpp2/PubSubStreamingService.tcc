/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "src/gen-cpp2/PubSubStreamingService.h"

#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>
#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>
#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I32, int32_t*>, apache::thrift::FieldData<2, apache::thrift::protocol::T_I32, int32_t*>> PubSubStreamingService_returnstream_pargs;
typedef apache::thrift::ThriftPResultStream<
    apache::thrift::ThriftPresult<true>, 
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_I32, int32_t*>>
    > PubSubStreamingService_returnstream_presult;
typedef apache::thrift::ThriftPResultStream<
    apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I32, int32_t*>>,
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_I32, int32_t*>>
    > PubSubStreamingService_takesstream_pargs;
typedef apache::thrift::ThriftPresult<true> PubSubStreamingService_takesstream_presult;
typedef apache::thrift::ThriftPResultStream<
    apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I64, int64_t*>>,
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_I32, int32_t*>>
    > PubSubStreamingService_different_pargs;
typedef apache::thrift::ThriftPResultStream<
    apache::thrift::ThriftPresult<true>, 
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_STRING, std::string*>>
    > PubSubStreamingService_different_presult;
typedef apache::thrift::ThriftPResultStream<
    apache::thrift::ThriftPresult<false>,
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_I32, int32_t*>>
    > PubSubStreamingService_normalthrows_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::cpp2::FooEx>> PubSubStreamingService_normalthrows_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I32, int32_t*>> PubSubStreamingService_streamthrows_pargs;
typedef apache::thrift::ThriftPResultStream<
    apache::thrift::ThriftPresult<true>, 
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_I32, int32_t*>, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::cpp2::FooEx>>
    > PubSubStreamingService_streamthrows_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I32, int32_t*>> PubSubStreamingService_boththrows_pargs;
typedef apache::thrift::ThriftPResultStream<
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::cpp2::FooEx>>, 
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_I32, int32_t*>, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::cpp2::FooEx>>
    > PubSubStreamingService_boththrows_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I32, int32_t*>> PubSubStreamingService_responseandstreamthrows_pargs;
typedef apache::thrift::ThriftPResultStream<
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_I32, int32_t*>, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::cpp2::FooEx>>, 
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_I32, int32_t*>, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::cpp2::FooEx>>
    > PubSubStreamingService_responseandstreamthrows_presult;
template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::_processInThread_returnstream(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  processInThread<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(buf),std::move(iprot), ctx, eb, tm, pri, apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, &PubSubStreamingServiceAsyncProcessor::process_returnstream<ProtocolIn_, ProtocolOut_>, this);
}
template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::process_returnstream(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  PubSubStreamingService_returnstream_pargs args;
  int32_t uarg_i32_from{0};
  args.get<0>().value = &uarg_i32_from;
  int32_t uarg_i32_to{0};
  args.get<1>().value = &uarg_i32_to;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "PubSubStreamingService.returnstream", ctx));
  try {
    deserializeRequest(args, buf.get(), iprot.get(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    ProtocolOut_ prot;
    if (req) {
      LOG(ERROR) << ex.what() << " in function returnstream";
      apache::thrift::TApplicationException x(apache::thrift::TApplicationException::TApplicationExceptionType::PROTOCOL_ERROR, ex.what());
      folly::IOBufQueue queue = serializeException("returnstream", &prot, ctx->getProtoSeqId(), nullptr, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), ctx->getHeader()->getWriteTransforms(), ctx->getHeader()->getMinCompressBytes()));
      eb->runInEventBaseThread([queue = std::move(queue), req = std::move(req)]() mutable {
        if (req->isStream()) {
          req->sendStreamReply({queue.move(), {}});
        } else {
          req->sendReply(queue.move());
        }
      }
      );
      return;
    }
    else {
      LOG(ERROR) << ex.what() << " in oneway function returnstream";
    }
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<apache::thrift::Stream<int32_t>>>(std::move(req), std::move(ctxStack), return_returnstream<ProtocolIn_,ProtocolOut_>, throw_wrapped_returnstream<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  if (!callback->isRequestActive()) {
    callback.release()->deleteInThread();
    return;
  }
  ctx->setStartedProcessing();
  iface_->async_tm_returnstream(std::move(callback), args.get<0>().ref(), args.get<1>().ref());
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::ResponseAndStream<folly::IOBufQueue, folly::IOBufQueue> PubSubStreamingServiceAsyncProcessor::return_returnstream(int32_t protoSeqId, apache::thrift::ContextStack* ctx, apache::thrift::Stream<int32_t> _return) {
  ProtocolOut_ prot;
  PubSubStreamingService_returnstream_presult::FieldsType result;
  using StreamPResultType = PubSubStreamingService_returnstream_presult::StreamPResultType;
  auto& _returnStream = _return;

  auto exMap = [](StreamPResultType&, folly::exception_wrapper) {
    return false;
  };

  auto _encodedStream = apache::thrift::detail::ap::encode_stream<ProtocolOut_, StreamPResultType>(std::move(_returnStream), std::move(exMap));
  return {serializeResponse("returnstream", &prot, protoSeqId, ctx, result), std::move(_encodedStream)};
}

template <class ProtocolIn_, class ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::throw_wrapped_returnstream(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ProtocolOut_ prot;
   {
    if (req) {
      LOG(ERROR) << ew << " in function returnstream";
      apache::thrift::TApplicationException x(ew.what().toStdString());
      ctx->userExceptionWrapped(false, ew);
      ctx->handlerErrorWrapped(ew);
      folly::IOBufQueue queue = serializeException("returnstream", &prot, protoSeqId, ctx, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
      req->sendStreamReply({queue.move(), {}});
      return;
    }
    else {
      LOG(ERROR) << ew << " in oneway function returnstream";
    }
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::_processInThread_takesstream(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  processInThread<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(buf),std::move(iprot), ctx, eb, tm, pri, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &PubSubStreamingServiceAsyncProcessor::process_takesstream<ProtocolIn_, ProtocolOut_>, this);
}
template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::process_takesstream(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  PubSubStreamingService_takesstream_pargs::FieldsType args;
  int32_t uarg_other_param{0};
  args.get<0>().value = &uarg_other_param;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "PubSubStreamingService.takesstream", ctx));
  try {
    deserializeRequest(args, buf.get(), iprot.get(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    ProtocolOut_ prot;
    if (req) {
      LOG(ERROR) << ex.what() << " in function takesstream";
      apache::thrift::TApplicationException x(apache::thrift::TApplicationException::TApplicationExceptionType::PROTOCOL_ERROR, ex.what());
      folly::IOBufQueue queue = serializeException("takesstream", &prot, ctx->getProtoSeqId(), nullptr, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), ctx->getHeader()->getWriteTransforms(), ctx->getHeader()->getMinCompressBytes()));
      eb->runInEventBaseThread([queue = std::move(queue), req = std::move(req)]() mutable {
        if (req->isStream()) {
          req->sendStreamReply({queue.move(), {}});
        } else {
          req->sendReply(queue.move());
        }
      }
      );
      return;
    }
    else {
      LOG(ERROR) << ex.what() << " in oneway function takesstream";
    }
  }
  auto inputStream = apache::thrift::detail::ap::decode_stream<
      ProtocolIn_, PubSubStreamingService_takesstream_pargs::StreamPResultType,
      int32_t>(req->extractStream());
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(std::move(req), std::move(ctxStack), return_takesstream<ProtocolIn_,ProtocolOut_>, throw_wrapped_takesstream<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  if (!callback->isRequestActive()) {
    callback.release()->deleteInThread();
    return;
  }
  ctx->setStartedProcessing();
  iface_->async_tm_takesstream(std::move(callback), std::move(inputStream), args.get<0>().ref());
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue PubSubStreamingServiceAsyncProcessor::return_takesstream(int32_t protoSeqId, apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  PubSubStreamingService_takesstream_presult result;
  return serializeResponse("takesstream", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::throw_wrapped_takesstream(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ProtocolOut_ prot;
   {
    if (req) {
      LOG(ERROR) << ew << " in function takesstream";
      apache::thrift::TApplicationException x(ew.what().toStdString());
      ctx->userExceptionWrapped(false, ew);
      ctx->handlerErrorWrapped(ew);
      folly::IOBufQueue queue = serializeException("takesstream", &prot, protoSeqId, ctx, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
      req->sendReply(queue.move());
      return;
    }
    else {
      LOG(ERROR) << ew << " in oneway function takesstream";
    }
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::_processInThread_different(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  processInThread<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(buf),std::move(iprot), ctx, eb, tm, pri, apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, &PubSubStreamingServiceAsyncProcessor::process_different<ProtocolIn_, ProtocolOut_>, this);
}
template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::process_different(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  PubSubStreamingService_different_pargs::FieldsType args;
  int64_t uarg_firstparam{0};
  args.get<0>().value = &uarg_firstparam;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "PubSubStreamingService.different", ctx));
  try {
    deserializeRequest(args, buf.get(), iprot.get(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    ProtocolOut_ prot;
    if (req) {
      LOG(ERROR) << ex.what() << " in function different";
      apache::thrift::TApplicationException x(apache::thrift::TApplicationException::TApplicationExceptionType::PROTOCOL_ERROR, ex.what());
      folly::IOBufQueue queue = serializeException("different", &prot, ctx->getProtoSeqId(), nullptr, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), ctx->getHeader()->getWriteTransforms(), ctx->getHeader()->getMinCompressBytes()));
      eb->runInEventBaseThread([queue = std::move(queue), req = std::move(req)]() mutable {
        if (req->isStream()) {
          req->sendStreamReply({queue.move(), {}});
        } else {
          req->sendReply(queue.move());
        }
      }
      );
      return;
    }
    else {
      LOG(ERROR) << ex.what() << " in oneway function different";
    }
  }
  auto inputStream = apache::thrift::detail::ap::decode_stream<
      ProtocolIn_, PubSubStreamingService_different_pargs::StreamPResultType,
      int32_t>(req->extractStream());
  auto callback = std::make_unique<apache::thrift::HandlerCallback<apache::thrift::Stream<std::string>>>(std::move(req), std::move(ctxStack), return_different<ProtocolIn_,ProtocolOut_>, throw_wrapped_different<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  if (!callback->isRequestActive()) {
    callback.release()->deleteInThread();
    return;
  }
  ctx->setStartedProcessing();
  iface_->async_tm_different(std::move(callback), std::move(inputStream), args.get<0>().ref());
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::ResponseAndStream<folly::IOBufQueue, folly::IOBufQueue> PubSubStreamingServiceAsyncProcessor::return_different(int32_t protoSeqId, apache::thrift::ContextStack* ctx, apache::thrift::Stream<std::string> _return) {
  ProtocolOut_ prot;
  PubSubStreamingService_different_presult::FieldsType result;
  using StreamPResultType = PubSubStreamingService_different_presult::StreamPResultType;
  auto& _returnStream = _return;

  auto exMap = [](StreamPResultType&, folly::exception_wrapper) {
    return false;
  };

  auto _encodedStream = apache::thrift::detail::ap::encode_stream<ProtocolOut_, StreamPResultType>(std::move(_returnStream), std::move(exMap));
  return {serializeResponse("different", &prot, protoSeqId, ctx, result), std::move(_encodedStream)};
}

template <class ProtocolIn_, class ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::throw_wrapped_different(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ProtocolOut_ prot;
   {
    if (req) {
      LOG(ERROR) << ew << " in function different";
      apache::thrift::TApplicationException x(ew.what().toStdString());
      ctx->userExceptionWrapped(false, ew);
      ctx->handlerErrorWrapped(ew);
      folly::IOBufQueue queue = serializeException("different", &prot, protoSeqId, ctx, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
      req->sendStreamReply({queue.move(), {}});
      return;
    }
    else {
      LOG(ERROR) << ew << " in oneway function different";
    }
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::_processInThread_normalthrows(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  processInThread<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(buf),std::move(iprot), ctx, eb, tm, pri, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &PubSubStreamingServiceAsyncProcessor::process_normalthrows<ProtocolIn_, ProtocolOut_>, this);
}
template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::process_normalthrows(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  PubSubStreamingService_normalthrows_pargs::FieldsType args;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "PubSubStreamingService.normalthrows", ctx));
  try {
    deserializeRequest(args, buf.get(), iprot.get(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    ProtocolOut_ prot;
    if (req) {
      LOG(ERROR) << ex.what() << " in function normalthrows";
      apache::thrift::TApplicationException x(apache::thrift::TApplicationException::TApplicationExceptionType::PROTOCOL_ERROR, ex.what());
      folly::IOBufQueue queue = serializeException("normalthrows", &prot, ctx->getProtoSeqId(), nullptr, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), ctx->getHeader()->getWriteTransforms(), ctx->getHeader()->getMinCompressBytes()));
      eb->runInEventBaseThread([queue = std::move(queue), req = std::move(req)]() mutable {
        if (req->isStream()) {
          req->sendStreamReply({queue.move(), {}});
        } else {
          req->sendReply(queue.move());
        }
      }
      );
      return;
    }
    else {
      LOG(ERROR) << ex.what() << " in oneway function normalthrows";
    }
  }
  auto inputStream = apache::thrift::detail::ap::decode_stream<
      ProtocolIn_, PubSubStreamingService_normalthrows_pargs::StreamPResultType,
      int32_t>(req->extractStream());
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(std::move(req), std::move(ctxStack), return_normalthrows<ProtocolIn_,ProtocolOut_>, throw_wrapped_normalthrows<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  if (!callback->isRequestActive()) {
    callback.release()->deleteInThread();
    return;
  }
  ctx->setStartedProcessing();
  iface_->async_tm_normalthrows(std::move(callback), std::move(inputStream));
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue PubSubStreamingServiceAsyncProcessor::return_normalthrows(int32_t protoSeqId, apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  PubSubStreamingService_normalthrows_presult result;
  return serializeResponse("normalthrows", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::throw_wrapped_normalthrows(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ProtocolOut_ prot;
  PubSubStreamingService_normalthrows_presult result;
  if (ew.with_exception([&]( ::cpp2::FooEx& e) {
    ctx->userExceptionWrapped(true, ew);
    result.get<0>().ref() = e;
    result.setIsSet(0, true);
  }
  )) {} else
   {
    if (req) {
      LOG(ERROR) << ew << " in function normalthrows";
      apache::thrift::TApplicationException x(ew.what().toStdString());
      ctx->userExceptionWrapped(false, ew);
      ctx->handlerErrorWrapped(ew);
      folly::IOBufQueue queue = serializeException("normalthrows", &prot, protoSeqId, ctx, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
      req->sendReply(queue.move());
      return;
    }
    else {
      LOG(ERROR) << ew << " in oneway function normalthrows";
    }
  }
  auto queue = serializeResponse("normalthrows", &prot, protoSeqId, ctx, result);
  queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
  return req->sendReply(queue.move());
}

template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::_processInThread_streamthrows(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  processInThread<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(buf),std::move(iprot), ctx, eb, tm, pri, apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, &PubSubStreamingServiceAsyncProcessor::process_streamthrows<ProtocolIn_, ProtocolOut_>, this);
}
template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::process_streamthrows(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  PubSubStreamingService_streamthrows_pargs args;
  int32_t uarg_foo{0};
  args.get<0>().value = &uarg_foo;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "PubSubStreamingService.streamthrows", ctx));
  try {
    deserializeRequest(args, buf.get(), iprot.get(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    ProtocolOut_ prot;
    if (req) {
      LOG(ERROR) << ex.what() << " in function streamthrows";
      apache::thrift::TApplicationException x(apache::thrift::TApplicationException::TApplicationExceptionType::PROTOCOL_ERROR, ex.what());
      folly::IOBufQueue queue = serializeException("streamthrows", &prot, ctx->getProtoSeqId(), nullptr, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), ctx->getHeader()->getWriteTransforms(), ctx->getHeader()->getMinCompressBytes()));
      eb->runInEventBaseThread([queue = std::move(queue), req = std::move(req)]() mutable {
        if (req->isStream()) {
          req->sendStreamReply({queue.move(), {}});
        } else {
          req->sendReply(queue.move());
        }
      }
      );
      return;
    }
    else {
      LOG(ERROR) << ex.what() << " in oneway function streamthrows";
    }
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<apache::thrift::Stream<int32_t>>>(std::move(req), std::move(ctxStack), return_streamthrows<ProtocolIn_,ProtocolOut_>, throw_wrapped_streamthrows<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  if (!callback->isRequestActive()) {
    callback.release()->deleteInThread();
    return;
  }
  ctx->setStartedProcessing();
  iface_->async_tm_streamthrows(std::move(callback), args.get<0>().ref());
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::ResponseAndStream<folly::IOBufQueue, folly::IOBufQueue> PubSubStreamingServiceAsyncProcessor::return_streamthrows(int32_t protoSeqId, apache::thrift::ContextStack* ctx, apache::thrift::Stream<int32_t> _return) {
  ProtocolOut_ prot;
  PubSubStreamingService_streamthrows_presult::FieldsType result;
  using StreamPResultType = PubSubStreamingService_streamthrows_presult::StreamPResultType;
  auto& _returnStream = _return;

  auto exMap = [](StreamPResultType& res, folly::exception_wrapper ew) {
    if (ew.with_exception([&]( ::cpp2::FooEx& e) {
          res.get<1>().ref() = e;
          res.setIsSet(1, true);
        })) {
      return true;
    }
    return false;
  };

  auto _encodedStream = apache::thrift::detail::ap::encode_stream<ProtocolOut_, StreamPResultType>(std::move(_returnStream), std::move(exMap));
  return {serializeResponse("streamthrows", &prot, protoSeqId, ctx, result), std::move(_encodedStream)};
}

template <class ProtocolIn_, class ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::throw_wrapped_streamthrows(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ProtocolOut_ prot;
   {
    if (req) {
      LOG(ERROR) << ew << " in function streamthrows";
      apache::thrift::TApplicationException x(ew.what().toStdString());
      ctx->userExceptionWrapped(false, ew);
      ctx->handlerErrorWrapped(ew);
      folly::IOBufQueue queue = serializeException("streamthrows", &prot, protoSeqId, ctx, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
      req->sendStreamReply({queue.move(), {}});
      return;
    }
    else {
      LOG(ERROR) << ew << " in oneway function streamthrows";
    }
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::_processInThread_boththrows(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  processInThread<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(buf),std::move(iprot), ctx, eb, tm, pri, apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, &PubSubStreamingServiceAsyncProcessor::process_boththrows<ProtocolIn_, ProtocolOut_>, this);
}
template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::process_boththrows(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  PubSubStreamingService_boththrows_pargs args;
  int32_t uarg_foo{0};
  args.get<0>().value = &uarg_foo;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "PubSubStreamingService.boththrows", ctx));
  try {
    deserializeRequest(args, buf.get(), iprot.get(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    ProtocolOut_ prot;
    if (req) {
      LOG(ERROR) << ex.what() << " in function boththrows";
      apache::thrift::TApplicationException x(apache::thrift::TApplicationException::TApplicationExceptionType::PROTOCOL_ERROR, ex.what());
      folly::IOBufQueue queue = serializeException("boththrows", &prot, ctx->getProtoSeqId(), nullptr, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), ctx->getHeader()->getWriteTransforms(), ctx->getHeader()->getMinCompressBytes()));
      eb->runInEventBaseThread([queue = std::move(queue), req = std::move(req)]() mutable {
        if (req->isStream()) {
          req->sendStreamReply({queue.move(), {}});
        } else {
          req->sendReply(queue.move());
        }
      }
      );
      return;
    }
    else {
      LOG(ERROR) << ex.what() << " in oneway function boththrows";
    }
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<apache::thrift::Stream<int32_t>>>(std::move(req), std::move(ctxStack), return_boththrows<ProtocolIn_,ProtocolOut_>, throw_wrapped_boththrows<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  if (!callback->isRequestActive()) {
    callback.release()->deleteInThread();
    return;
  }
  ctx->setStartedProcessing();
  iface_->async_tm_boththrows(std::move(callback), args.get<0>().ref());
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::ResponseAndStream<folly::IOBufQueue, folly::IOBufQueue> PubSubStreamingServiceAsyncProcessor::return_boththrows(int32_t protoSeqId, apache::thrift::ContextStack* ctx, apache::thrift::Stream<int32_t> _return) {
  ProtocolOut_ prot;
  PubSubStreamingService_boththrows_presult::FieldsType result;
  using StreamPResultType = PubSubStreamingService_boththrows_presult::StreamPResultType;
  auto& _returnStream = _return;

  auto exMap = [](StreamPResultType& res, folly::exception_wrapper ew) {
    if (ew.with_exception([&]( ::cpp2::FooEx& e) {
          res.get<1>().ref() = e;
          res.setIsSet(1, true);
        })) {
      return true;
    }
    return false;
  };

  auto _encodedStream = apache::thrift::detail::ap::encode_stream<ProtocolOut_, StreamPResultType>(std::move(_returnStream), std::move(exMap));
  return {serializeResponse("boththrows", &prot, protoSeqId, ctx, result), std::move(_encodedStream)};
}

template <class ProtocolIn_, class ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::throw_wrapped_boththrows(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ProtocolOut_ prot;
  PubSubStreamingService_boththrows_presult result;
  if (ew.with_exception([&]( ::cpp2::FooEx& e) {
    ctx->userExceptionWrapped(true, ew);
    result.fields.get<0>().ref() = e;
    result.fields.setIsSet(0, true);
  }
  )) {} else
   {
    if (req) {
      LOG(ERROR) << ew << " in function boththrows";
      apache::thrift::TApplicationException x(ew.what().toStdString());
      ctx->userExceptionWrapped(false, ew);
      ctx->handlerErrorWrapped(ew);
      folly::IOBufQueue queue = serializeException("boththrows", &prot, protoSeqId, ctx, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
      req->sendStreamReply({queue.move(), {}});
      return;
    }
    else {
      LOG(ERROR) << ew << " in oneway function boththrows";
    }
  }
  auto queue = serializeResponse("boththrows", &prot, protoSeqId, ctx, result.fields);
  queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
  return req->sendStreamReply({queue.move(), {}});
}

template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::_processInThread_responseandstreamthrows(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  processInThread<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(buf),std::move(iprot), ctx, eb, tm, pri, apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, &PubSubStreamingServiceAsyncProcessor::process_responseandstreamthrows<ProtocolIn_, ProtocolOut_>, this);
}
template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::process_responseandstreamthrows(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  PubSubStreamingService_responseandstreamthrows_pargs args;
  int32_t uarg_foo{0};
  args.get<0>().value = &uarg_foo;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "PubSubStreamingService.responseandstreamthrows", ctx));
  try {
    deserializeRequest(args, buf.get(), iprot.get(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    ProtocolOut_ prot;
    if (req) {
      LOG(ERROR) << ex.what() << " in function responseandstreamthrows";
      apache::thrift::TApplicationException x(apache::thrift::TApplicationException::TApplicationExceptionType::PROTOCOL_ERROR, ex.what());
      folly::IOBufQueue queue = serializeException("responseandstreamthrows", &prot, ctx->getProtoSeqId(), nullptr, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), ctx->getHeader()->getWriteTransforms(), ctx->getHeader()->getMinCompressBytes()));
      eb->runInEventBaseThread([queue = std::move(queue), req = std::move(req)]() mutable {
        if (req->isStream()) {
          req->sendStreamReply({queue.move(), {}});
        } else {
          req->sendReply(queue.move());
        }
      }
      );
      return;
    }
    else {
      LOG(ERROR) << ex.what() << " in oneway function responseandstreamthrows";
    }
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<apache::thrift::ResponseAndStream<int32_t,int32_t>>>(std::move(req), std::move(ctxStack), return_responseandstreamthrows<ProtocolIn_,ProtocolOut_>, throw_wrapped_responseandstreamthrows<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  if (!callback->isRequestActive()) {
    callback.release()->deleteInThread();
    return;
  }
  ctx->setStartedProcessing();
  iface_->async_tm_responseandstreamthrows(std::move(callback), args.get<0>().ref());
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::ResponseAndStream<folly::IOBufQueue, folly::IOBufQueue> PubSubStreamingServiceAsyncProcessor::return_responseandstreamthrows(int32_t protoSeqId, apache::thrift::ContextStack* ctx, apache::thrift::ResponseAndStream<int32_t,int32_t> _return) {
  ProtocolOut_ prot;
  PubSubStreamingService_responseandstreamthrows_presult::FieldsType result;
  using StreamPResultType = PubSubStreamingService_responseandstreamthrows_presult::StreamPResultType;
  result.get<0>().value = const_cast<apache::thrift::ResponseAndStream<int32_t,int32_t>::ResponseType*>(&_return.response);
  result.setIsSet(0, true);
  auto& _returnStream = _return.stream;

  auto exMap = [](StreamPResultType& res, folly::exception_wrapper ew) {
    if (ew.with_exception([&]( ::cpp2::FooEx& e) {
          res.get<1>().ref() = e;
          res.setIsSet(1, true);
        })) {
      return true;
    }
    return false;
  };

  auto _encodedStream = apache::thrift::detail::ap::encode_stream<ProtocolOut_, StreamPResultType>(std::move(_returnStream), std::move(exMap));
  return {serializeResponse("responseandstreamthrows", &prot, protoSeqId, ctx, result), std::move(_encodedStream)};
}

template <class ProtocolIn_, class ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::throw_wrapped_responseandstreamthrows(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ProtocolOut_ prot;
  PubSubStreamingService_responseandstreamthrows_presult result;
  if (ew.with_exception([&]( ::cpp2::FooEx& e) {
    ctx->userExceptionWrapped(true, ew);
    result.fields.get<1>().ref() = e;
    result.fields.setIsSet(1, true);
  }
  )) {} else
   {
    if (req) {
      LOG(ERROR) << ew << " in function responseandstreamthrows";
      apache::thrift::TApplicationException x(ew.what().toStdString());
      ctx->userExceptionWrapped(false, ew);
      ctx->handlerErrorWrapped(ew);
      folly::IOBufQueue queue = serializeException("responseandstreamthrows", &prot, protoSeqId, ctx, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
      req->sendStreamReply({queue.move(), {}});
      return;
    }
    else {
      LOG(ERROR) << ew << " in oneway function responseandstreamthrows";
    }
  }
  auto queue = serializeResponse("responseandstreamthrows", &prot, protoSeqId, ctx, result.fields);
  queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
  return req->sendStreamReply({queue.move(), {}});
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
