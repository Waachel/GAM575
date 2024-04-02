// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Texture.proto

#include "Texture.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/io/zero_copy_stream_impl_lite.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
        template <typename>
PROTOBUF_CONSTEXPR Texture_proto::Texture_proto(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_._has_bits_)*/ {},
      /*decltype(_impl_._cached_size_)*/ {},
      /*decltype(_impl_.podata_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
      /*decltype(_impl_.datasize_)*/ 0u,
    } {}
struct Texture_protoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR Texture_protoDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~Texture_protoDefaultTypeInternal() {}
  union {
    Texture_proto _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 Texture_protoDefaultTypeInternal _Texture_proto_default_instance_;
// ===================================================================

class Texture_proto::_Internal {
 public:
  using HasBits = decltype(std::declval<Texture_proto>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(Texture_proto, _impl_._has_bits_);
  static void set_has_podata(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_datasize(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

Texture_proto::Texture_proto(::google::protobuf::Arena* arena)
    : ::google::protobuf::MessageLite(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:Texture_proto)
}
Texture_proto::Texture_proto(const Texture_proto& from) : ::google::protobuf::MessageLite() {
  Texture_proto* const _this = this;
  (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.podata_){},
      decltype(_impl_.datasize_){},
  };
  _internal_metadata_.MergeFrom<std::string>(
      from._internal_metadata_);
  _impl_.podata_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.podata_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.podata_.Set(from._internal_podata(), _this->GetArenaForAllocation());
  }
  _this->_impl_.datasize_ = from._impl_.datasize_;

  // @@protoc_insertion_point(copy_constructor:Texture_proto)
}
inline void Texture_proto::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.podata_){},
      decltype(_impl_.datasize_){0u},
  };
  _impl_.podata_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.podata_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}
Texture_proto::~Texture_proto() {
  // @@protoc_insertion_point(destructor:Texture_proto)
  _internal_metadata_.Delete<std::string>();
  SharedDtor();
}
inline void Texture_proto::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.podata_.Destroy();
}
void Texture_proto::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void Texture_proto::Clear() {
// @@protoc_insertion_point(message_clear_start:Texture_proto)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.podata_.ClearNonDefaultToEmpty();
  }
  _impl_.datasize_ = 0u;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* Texture_proto::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 0, 2> Texture_proto::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(Texture_proto, _impl_._has_bits_),
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Texture_proto_default_instance_._instance,
    ::_pbi::TcParser::GenericFallbackLite,  // fallback
  }, {{
    // optional uint32 DataSize = 2;
    {::_pbi::TcParser::FastV32S1,
     {16, 1, 0, PROTOBUF_FIELD_OFFSET(Texture_proto, _impl_.datasize_)}},
    // optional bytes poData = 1;
    {::_pbi::TcParser::FastBS1,
     {10, 0, 0, PROTOBUF_FIELD_OFFSET(Texture_proto, _impl_.podata_)}},
  }}, {{
    65535, 65535
  }}, {{
    // optional bytes poData = 1;
    {PROTOBUF_FIELD_OFFSET(Texture_proto, _impl_.podata_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBytes | ::_fl::kRepAString)},
    // optional uint32 DataSize = 2;
    {PROTOBUF_FIELD_OFFSET(Texture_proto, _impl_.datasize_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUInt32)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* Texture_proto::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Texture_proto)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional bytes poData = 1;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_podata();
    target = stream->WriteBytesMaybeAliased(1, _s, target);
  }

  // optional uint32 DataSize = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        2, this->_internal_datasize(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(
        _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Texture_proto)
  return target;
}

::size_t Texture_proto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Texture_proto)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional bytes poData = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                      this->_internal_podata());
    }

    // optional uint32 DataSize = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_datasize());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Texture_proto::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const Texture_proto*>(
      &from));
}

void Texture_proto::MergeFrom(const Texture_proto& from) {
  Texture_proto* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:Texture_proto)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_podata(from._internal_podata());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.datasize_ = from._impl_.datasize_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void Texture_proto::CopyFrom(const Texture_proto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Texture_proto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Texture_proto::IsInitialized() const {
  return true;
}

void Texture_proto::InternalSwap(Texture_proto* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.podata_, lhs_arena,
                                       &other->_impl_.podata_, rhs_arena);
        swap(_impl_.datasize_, other->_impl_.datasize_);
}

std::string Texture_proto::GetTypeName() const {
  return "Texture_proto";
}

// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"