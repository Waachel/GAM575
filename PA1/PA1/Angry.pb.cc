// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Angry.proto

#include "Angry.pb.h"

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
PROTOBUF_CONSTEXPR Angry_proto::Angry_proto(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_._has_bits_)*/ {},
      /*decltype(_impl_._cached_size_)*/ {},
      /*decltype(_impl_.data_)*/ {},
      /* _impl_._data_cached_byte_size_ = */ {0},
      /*decltype(_impl_.value_)*/ 0,
    } {}
struct Angry_protoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR Angry_protoDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~Angry_protoDefaultTypeInternal() {}
  union {
    Angry_proto _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 Angry_protoDefaultTypeInternal _Angry_proto_default_instance_;
// ===================================================================

class Angry_proto::_Internal {
 public:
  using HasBits = decltype(std::declval<Angry_proto>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(Angry_proto, _impl_._has_bits_);
  static void set_has_value(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

Angry_proto::Angry_proto(::google::protobuf::Arena* arena)
    : ::google::protobuf::MessageLite(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:Angry_proto)
}
Angry_proto::Angry_proto(const Angry_proto& from) : ::google::protobuf::MessageLite() {
  Angry_proto* const _this = this;
  (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.data_){from._impl_.data_},
      /* _impl_._data_cached_byte_size_ = */ {0},
      decltype(_impl_.value_){},
  };
  _internal_metadata_.MergeFrom<std::string>(
      from._internal_metadata_);
  _this->_impl_.value_ = from._impl_.value_;

  // @@protoc_insertion_point(copy_constructor:Angry_proto)
}
inline void Angry_proto::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.data_){arena},
      /* _impl_._data_cached_byte_size_ = */ {0},
      decltype(_impl_.value_){0},
  };
}
Angry_proto::~Angry_proto() {
  // @@protoc_insertion_point(destructor:Angry_proto)
  _internal_metadata_.Delete<std::string>();
  SharedDtor();
}
inline void Angry_proto::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.data_.~RepeatedField();
}
void Angry_proto::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void Angry_proto::Clear() {
// @@protoc_insertion_point(message_clear_start:Angry_proto)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_data()->Clear();
  _impl_.value_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* Angry_proto::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 0, 2> Angry_proto::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(Angry_proto, _impl_._has_bits_),
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Angry_proto_default_instance_._instance,
    ::_pbi::TcParser::GenericFallbackLite,  // fallback
  }, {{
    // optional float value = 2;
    {::_pbi::TcParser::FastF32S1,
     {21, 0, 0, PROTOBUF_FIELD_OFFSET(Angry_proto, _impl_.value_)}},
    // repeated sint32 data = 1;
    {::_pbi::TcParser::FastZ32P1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(Angry_proto, _impl_.data_)}},
  }}, {{
    65535, 65535
  }}, {{
    // repeated sint32 data = 1;
    {PROTOBUF_FIELD_OFFSET(Angry_proto, _impl_.data_), -1, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kPackedSInt32)},
    // optional float value = 2;
    {PROTOBUF_FIELD_OFFSET(Angry_proto, _impl_.value_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kFloat)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* Angry_proto::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Angry_proto)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // repeated sint32 data = 1;
  {
    int byte_size = _impl_._data_cached_byte_size_.Get();
    if (byte_size > 0) {
      target = stream->WriteSInt32Packed(1, _internal_data(),
                                                 byte_size, target);
    }
  }

  cached_has_bits = _impl_._has_bits_[0];
  // optional float value = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        2, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(
        _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Angry_proto)
  return target;
}

::size_t Angry_proto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Angry_proto)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated sint32 data = 1;
  {
    std::size_t data_size = ::_pbi::WireFormatLite::SInt32Size(
        this->_internal_data())
    ;
    _impl_._data_cached_byte_size_.Set(::_pbi::ToCachedSize(data_size));
    std::size_t tag_size = data_size == 0
        ? 0
        : 1 + ::_pbi::WireFormatLite::Int32Size(
                            static_cast<int32_t>(data_size))
    ;
    total_size += tag_size + data_size;
  }
  // optional float value = 2;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 5;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Angry_proto::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const Angry_proto*>(
      &from));
}

void Angry_proto::MergeFrom(const Angry_proto& from) {
  Angry_proto* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:Angry_proto)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_data()->MergeFrom(from._internal_data());
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_set_value(from._internal_value());
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void Angry_proto::CopyFrom(const Angry_proto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Angry_proto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Angry_proto::IsInitialized() const {
  return true;
}

void Angry_proto::InternalSwap(Angry_proto* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.data_.InternalSwap(&other->_impl_.data_);
        swap(_impl_.value_, other->_impl_.value_);
}

std::string Angry_proto::GetTypeName() const {
  return "Angry_proto";
}

// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"