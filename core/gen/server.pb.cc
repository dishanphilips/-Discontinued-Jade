// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: server.proto

#include "server.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace JadeCore {
class InfoRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<InfoRequest> _instance;
} _InfoRequest_default_instance_;
class InfoResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<InfoResponse> _instance;
} _InfoResponse_default_instance_;
}  // namespace JadeCore
static void InitDefaultsscc_info_InfoRequest_server_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::JadeCore::_InfoRequest_default_instance_;
    new (ptr) ::JadeCore::InfoRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::JadeCore::InfoRequest::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_InfoRequest_server_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_InfoRequest_server_2eproto}, {}};

static void InitDefaultsscc_info_InfoResponse_server_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::JadeCore::_InfoResponse_default_instance_;
    new (ptr) ::JadeCore::InfoResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::JadeCore::InfoResponse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_InfoResponse_server_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_InfoResponse_server_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_server_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_server_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_server_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_server_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::JadeCore::InfoRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::JadeCore::InfoRequest, message_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::JadeCore::InfoResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::JadeCore::InfoResponse, message_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::JadeCore::InfoRequest)},
  { 6, -1, sizeof(::JadeCore::InfoResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::JadeCore::_InfoRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::JadeCore::_InfoResponse_default_instance_),
};

const char descriptor_table_protodef_server_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014server.proto\022\010JadeCore\"\036\n\013InfoRequest\022"
  "\017\n\007message\030\001 \001(\t\"\037\n\014InfoResponse\022\017\n\007mess"
  "age\030\001 \001(\t2B\n\007RpcBase\0227\n\004Info\022\025.JadeCore."
  "InfoRequest\032\026.JadeCore.InfoResponse\"\000b\006p"
  "roto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_server_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_server_2eproto_sccs[2] = {
  &scc_info_InfoRequest_server_2eproto.base,
  &scc_info_InfoResponse_server_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_server_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_server_2eproto = {
  false, false, descriptor_table_protodef_server_2eproto, "server.proto", 165,
  &descriptor_table_server_2eproto_once, descriptor_table_server_2eproto_sccs, descriptor_table_server_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_server_2eproto::offsets,
  file_level_metadata_server_2eproto, 2, file_level_enum_descriptors_server_2eproto, file_level_service_descriptors_server_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_server_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_server_2eproto)), true);
namespace JadeCore {

// ===================================================================

void InfoRequest::InitAsDefaultInstance() {
}
class InfoRequest::_Internal {
 public:
};

InfoRequest::InfoRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:JadeCore.InfoRequest)
}
InfoRequest::InfoRequest(const InfoRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_message().empty()) {
    message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_message(),
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:JadeCore.InfoRequest)
}

void InfoRequest::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_InfoRequest_server_2eproto.base);
  message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

InfoRequest::~InfoRequest() {
  // @@protoc_insertion_point(destructor:JadeCore.InfoRequest)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void InfoRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  message_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void InfoRequest::ArenaDtor(void* object) {
  InfoRequest* _this = reinterpret_cast< InfoRequest* >(object);
  (void)_this;
}
void InfoRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void InfoRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const InfoRequest& InfoRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_InfoRequest_server_2eproto.base);
  return *internal_default_instance();
}


void InfoRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:JadeCore.InfoRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  message_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* InfoRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string message = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_message();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "JadeCore.InfoRequest.message"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* InfoRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:JadeCore.InfoRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string message = 1;
  if (this->message().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_message().data(), static_cast<int>(this->_internal_message().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "JadeCore.InfoRequest.message");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_message(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:JadeCore.InfoRequest)
  return target;
}

size_t InfoRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:JadeCore.InfoRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string message = 1;
  if (this->message().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_message());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void InfoRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:JadeCore.InfoRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const InfoRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<InfoRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:JadeCore.InfoRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:JadeCore.InfoRequest)
    MergeFrom(*source);
  }
}

void InfoRequest::MergeFrom(const InfoRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:JadeCore.InfoRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.message().size() > 0) {
    _internal_set_message(from._internal_message());
  }
}

void InfoRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:JadeCore.InfoRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void InfoRequest::CopyFrom(const InfoRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:JadeCore.InfoRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InfoRequest::IsInitialized() const {
  return true;
}

void InfoRequest::InternalSwap(InfoRequest* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  message_.Swap(&other->message_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata InfoRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void InfoResponse::InitAsDefaultInstance() {
}
class InfoResponse::_Internal {
 public:
};

InfoResponse::InfoResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:JadeCore.InfoResponse)
}
InfoResponse::InfoResponse(const InfoResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_message().empty()) {
    message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_message(),
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:JadeCore.InfoResponse)
}

void InfoResponse::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_InfoResponse_server_2eproto.base);
  message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

InfoResponse::~InfoResponse() {
  // @@protoc_insertion_point(destructor:JadeCore.InfoResponse)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void InfoResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  message_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void InfoResponse::ArenaDtor(void* object) {
  InfoResponse* _this = reinterpret_cast< InfoResponse* >(object);
  (void)_this;
}
void InfoResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void InfoResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const InfoResponse& InfoResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_InfoResponse_server_2eproto.base);
  return *internal_default_instance();
}


void InfoResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:JadeCore.InfoResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  message_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* InfoResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string message = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_message();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "JadeCore.InfoResponse.message"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* InfoResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:JadeCore.InfoResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string message = 1;
  if (this->message().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_message().data(), static_cast<int>(this->_internal_message().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "JadeCore.InfoResponse.message");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_message(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:JadeCore.InfoResponse)
  return target;
}

size_t InfoResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:JadeCore.InfoResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string message = 1;
  if (this->message().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_message());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void InfoResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:JadeCore.InfoResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const InfoResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<InfoResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:JadeCore.InfoResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:JadeCore.InfoResponse)
    MergeFrom(*source);
  }
}

void InfoResponse::MergeFrom(const InfoResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:JadeCore.InfoResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.message().size() > 0) {
    _internal_set_message(from._internal_message());
  }
}

void InfoResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:JadeCore.InfoResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void InfoResponse::CopyFrom(const InfoResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:JadeCore.InfoResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InfoResponse::IsInitialized() const {
  return true;
}

void InfoResponse::InternalSwap(InfoResponse* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  message_.Swap(&other->message_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata InfoResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace JadeCore
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::JadeCore::InfoRequest* Arena::CreateMaybeMessage< ::JadeCore::InfoRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::JadeCore::InfoRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::JadeCore::InfoResponse* Arena::CreateMaybeMessage< ::JadeCore::InfoResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::JadeCore::InfoResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>