// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Matrix_Composition.proto

#include "Matrix_Composition.pb.h"

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
PROTOBUF_CONSTEXPR Matrix_Composition_proto::Matrix_Composition_proto(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_._has_bits_)*/ {},
      /*decltype(_impl_._cached_size_)*/ {},
      /*decltype(_impl_.v0_)*/ nullptr,
      /*decltype(_impl_.v1_)*/ nullptr,
      /*decltype(_impl_.v2_)*/ nullptr,
      /*decltype(_impl_.v3_)*/ nullptr,
    } {}
struct Matrix_Composition_protoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR Matrix_Composition_protoDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~Matrix_Composition_protoDefaultTypeInternal() {}
  union {
    Matrix_Composition_proto _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 Matrix_Composition_protoDefaultTypeInternal _Matrix_Composition_proto_default_instance_;
// ===================================================================

class Matrix_Composition_proto::_Internal {
 public:
  using HasBits = decltype(std::declval<Matrix_Composition_proto>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(Matrix_Composition_proto, _impl_._has_bits_);
  static const ::Vect_proto& v0(const Matrix_Composition_proto* msg);
  static void set_has_v0(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::Vect_proto& v1(const Matrix_Composition_proto* msg);
  static void set_has_v1(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::Vect_proto& v2(const Matrix_Composition_proto* msg);
  static void set_has_v2(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::Vect_proto& v3(const Matrix_Composition_proto* msg);
  static void set_has_v3(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

const ::Vect_proto& Matrix_Composition_proto::_Internal::v0(const Matrix_Composition_proto* msg) {
  return *msg->_impl_.v0_;
}
const ::Vect_proto& Matrix_Composition_proto::_Internal::v1(const Matrix_Composition_proto* msg) {
  return *msg->_impl_.v1_;
}
const ::Vect_proto& Matrix_Composition_proto::_Internal::v2(const Matrix_Composition_proto* msg) {
  return *msg->_impl_.v2_;
}
const ::Vect_proto& Matrix_Composition_proto::_Internal::v3(const Matrix_Composition_proto* msg) {
  return *msg->_impl_.v3_;
}
void Matrix_Composition_proto::clear_v0() {
  if (_impl_.v0_ != nullptr) _impl_.v0_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
void Matrix_Composition_proto::clear_v1() {
  if (_impl_.v1_ != nullptr) _impl_.v1_->Clear();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
void Matrix_Composition_proto::clear_v2() {
  if (_impl_.v2_ != nullptr) _impl_.v2_->Clear();
  _impl_._has_bits_[0] &= ~0x00000004u;
}
void Matrix_Composition_proto::clear_v3() {
  if (_impl_.v3_ != nullptr) _impl_.v3_->Clear();
  _impl_._has_bits_[0] &= ~0x00000008u;
}
Matrix_Composition_proto::Matrix_Composition_proto(::google::protobuf::Arena* arena)
    : ::google::protobuf::MessageLite(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:Matrix_Composition_proto)
}
Matrix_Composition_proto::Matrix_Composition_proto(const Matrix_Composition_proto& from) : ::google::protobuf::MessageLite() {
  Matrix_Composition_proto* const _this = this;
  (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.v0_){nullptr},
      decltype(_impl_.v1_){nullptr},
      decltype(_impl_.v2_){nullptr},
      decltype(_impl_.v3_){nullptr},
  };
  _internal_metadata_.MergeFrom<std::string>(
      from._internal_metadata_);
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.v0_ = new ::Vect_proto(*from._impl_.v0_);
  }
  if ((from._impl_._has_bits_[0] & 0x00000002u) != 0) {
    _this->_impl_.v1_ = new ::Vect_proto(*from._impl_.v1_);
  }
  if ((from._impl_._has_bits_[0] & 0x00000004u) != 0) {
    _this->_impl_.v2_ = new ::Vect_proto(*from._impl_.v2_);
  }
  if ((from._impl_._has_bits_[0] & 0x00000008u) != 0) {
    _this->_impl_.v3_ = new ::Vect_proto(*from._impl_.v3_);
  }

  // @@protoc_insertion_point(copy_constructor:Matrix_Composition_proto)
}
inline void Matrix_Composition_proto::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.v0_){nullptr},
      decltype(_impl_.v1_){nullptr},
      decltype(_impl_.v2_){nullptr},
      decltype(_impl_.v3_){nullptr},
  };
}
Matrix_Composition_proto::~Matrix_Composition_proto() {
  // @@protoc_insertion_point(destructor:Matrix_Composition_proto)
  _internal_metadata_.Delete<std::string>();
  SharedDtor();
}
inline void Matrix_Composition_proto::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.v0_;
  if (this != internal_default_instance()) delete _impl_.v1_;
  if (this != internal_default_instance()) delete _impl_.v2_;
  if (this != internal_default_instance()) delete _impl_.v3_;
}
void Matrix_Composition_proto::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void Matrix_Composition_proto::Clear() {
// @@protoc_insertion_point(message_clear_start:Matrix_Composition_proto)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      ABSL_DCHECK(_impl_.v0_ != nullptr);
      _impl_.v0_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      ABSL_DCHECK(_impl_.v1_ != nullptr);
      _impl_.v1_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      ABSL_DCHECK(_impl_.v2_ != nullptr);
      _impl_.v2_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      ABSL_DCHECK(_impl_.v3_ != nullptr);
      _impl_.v3_->Clear();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* Matrix_Composition_proto::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 4, 4, 0, 2> Matrix_Composition_proto::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(Matrix_Composition_proto, _impl_._has_bits_),
    0, // no _extensions_
    4, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967280,  // skipmap
    offsetof(decltype(_table_), field_entries),
    4,  // num_field_entries
    4,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_Matrix_Composition_proto_default_instance_._instance,
    ::_pbi::TcParser::GenericFallbackLite,  // fallback
  }, {{
    // optional .Vect_proto v3 = 4;
    {::_pbi::TcParser::FastMtS1,
     {34, 3, 3, PROTOBUF_FIELD_OFFSET(Matrix_Composition_proto, _impl_.v3_)}},
    // optional .Vect_proto v0 = 1;
    {::_pbi::TcParser::FastMtS1,
     {10, 0, 0, PROTOBUF_FIELD_OFFSET(Matrix_Composition_proto, _impl_.v0_)}},
    // optional .Vect_proto v1 = 2;
    {::_pbi::TcParser::FastMtS1,
     {18, 1, 1, PROTOBUF_FIELD_OFFSET(Matrix_Composition_proto, _impl_.v1_)}},
    // optional .Vect_proto v2 = 3;
    {::_pbi::TcParser::FastMtS1,
     {26, 2, 2, PROTOBUF_FIELD_OFFSET(Matrix_Composition_proto, _impl_.v2_)}},
  }}, {{
    65535, 65535
  }}, {{
    // optional .Vect_proto v0 = 1;
    {PROTOBUF_FIELD_OFFSET(Matrix_Composition_proto, _impl_.v0_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // optional .Vect_proto v1 = 2;
    {PROTOBUF_FIELD_OFFSET(Matrix_Composition_proto, _impl_.v1_), _Internal::kHasBitsOffset + 1, 1,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // optional .Vect_proto v2 = 3;
    {PROTOBUF_FIELD_OFFSET(Matrix_Composition_proto, _impl_.v2_), _Internal::kHasBitsOffset + 2, 2,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // optional .Vect_proto v3 = 4;
    {PROTOBUF_FIELD_OFFSET(Matrix_Composition_proto, _impl_.v3_), _Internal::kHasBitsOffset + 3, 3,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::Vect_proto>()},
    {::_pbi::TcParser::GetTable<::Vect_proto>()},
    {::_pbi::TcParser::GetTable<::Vect_proto>()},
    {::_pbi::TcParser::GetTable<::Vect_proto>()},
  }}, {{
  }},
};

::uint8_t* Matrix_Composition_proto::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Matrix_Composition_proto)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional .Vect_proto v0 = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::v0(this),
        _Internal::v0(this).GetCachedSize(), target, stream);
  }

  // optional .Vect_proto v1 = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::v1(this),
        _Internal::v1(this).GetCachedSize(), target, stream);
  }

  // optional .Vect_proto v2 = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::v2(this),
        _Internal::v2(this).GetCachedSize(), target, stream);
  }

  // optional .Vect_proto v3 = 4;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessage(4, _Internal::v3(this),
        _Internal::v3(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(
        _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Matrix_Composition_proto)
  return target;
}

::size_t Matrix_Composition_proto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Matrix_Composition_proto)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional .Vect_proto v0 = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *_impl_.v0_);
    }

    // optional .Vect_proto v1 = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *_impl_.v1_);
    }

    // optional .Vect_proto v2 = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *_impl_.v2_);
    }

    // optional .Vect_proto v3 = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *_impl_.v3_);
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Matrix_Composition_proto::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const Matrix_Composition_proto*>(
      &from));
}

void Matrix_Composition_proto::MergeFrom(const Matrix_Composition_proto& from) {
  Matrix_Composition_proto* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:Matrix_Composition_proto)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_mutable_v0()->::Vect_proto::MergeFrom(
          from._internal_v0());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_mutable_v1()->::Vect_proto::MergeFrom(
          from._internal_v1());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_mutable_v2()->::Vect_proto::MergeFrom(
          from._internal_v2());
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_internal_mutable_v3()->::Vect_proto::MergeFrom(
          from._internal_v3());
    }
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void Matrix_Composition_proto::CopyFrom(const Matrix_Composition_proto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Matrix_Composition_proto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Matrix_Composition_proto::IsInitialized() const {
  return true;
}

void Matrix_Composition_proto::InternalSwap(Matrix_Composition_proto* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Matrix_Composition_proto, _impl_.v3_)
      + sizeof(Matrix_Composition_proto::_impl_.v3_)
      - PROTOBUF_FIELD_OFFSET(Matrix_Composition_proto, _impl_.v0_)>(
          reinterpret_cast<char*>(&_impl_.v0_),
          reinterpret_cast<char*>(&other->_impl_.v0_));
}

std::string Matrix_Composition_proto::GetTypeName() const {
  return "Matrix_Composition_proto";
}

// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"