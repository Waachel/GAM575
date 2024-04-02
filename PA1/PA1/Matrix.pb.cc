// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Matrix.proto

#include "Matrix.pb.h"

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
PROTOBUF_CONSTEXPR Matrix_proto::Matrix_proto(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_._has_bits_)*/ {},
      /*decltype(_impl_._cached_size_)*/ {},
      /*decltype(_impl_.m0_)*/ 0,
      /*decltype(_impl_.m1_)*/ 0,
      /*decltype(_impl_.m2_)*/ 0,
      /*decltype(_impl_.m3_)*/ 0,
      /*decltype(_impl_.m4_)*/ 0,
      /*decltype(_impl_.m5_)*/ 0,
      /*decltype(_impl_.m6_)*/ 0,
      /*decltype(_impl_.m7_)*/ 0,
      /*decltype(_impl_.m8_)*/ 0,
      /*decltype(_impl_.m9_)*/ 0,
      /*decltype(_impl_.m10_)*/ 0,
      /*decltype(_impl_.m11_)*/ 0,
      /*decltype(_impl_.m12_)*/ 0,
      /*decltype(_impl_.m13_)*/ 0,
      /*decltype(_impl_.m14_)*/ 0,
      /*decltype(_impl_.m15_)*/ 0,
    } {}
struct Matrix_protoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR Matrix_protoDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~Matrix_protoDefaultTypeInternal() {}
  union {
    Matrix_proto _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 Matrix_protoDefaultTypeInternal _Matrix_proto_default_instance_;
// ===================================================================

class Matrix_proto::_Internal {
 public:
  using HasBits = decltype(std::declval<Matrix_proto>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_._has_bits_);
  static void set_has_m0(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_m1(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_m2(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_m3(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_m4(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_m5(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_m6(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_m7(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_m8(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
  static void set_has_m9(HasBits* has_bits) {
    (*has_bits)[0] |= 512u;
  }
  static void set_has_m10(HasBits* has_bits) {
    (*has_bits)[0] |= 1024u;
  }
  static void set_has_m11(HasBits* has_bits) {
    (*has_bits)[0] |= 2048u;
  }
  static void set_has_m12(HasBits* has_bits) {
    (*has_bits)[0] |= 4096u;
  }
  static void set_has_m13(HasBits* has_bits) {
    (*has_bits)[0] |= 8192u;
  }
  static void set_has_m14(HasBits* has_bits) {
    (*has_bits)[0] |= 16384u;
  }
  static void set_has_m15(HasBits* has_bits) {
    (*has_bits)[0] |= 32768u;
  }
};

Matrix_proto::Matrix_proto(::google::protobuf::Arena* arena)
    : ::google::protobuf::MessageLite(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:Matrix_proto)
}
Matrix_proto::Matrix_proto(const Matrix_proto& from)
    : ::google::protobuf::MessageLite(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<std::string>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:Matrix_proto)
}
inline void Matrix_proto::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.m0_){0},
      decltype(_impl_.m1_){0},
      decltype(_impl_.m2_){0},
      decltype(_impl_.m3_){0},
      decltype(_impl_.m4_){0},
      decltype(_impl_.m5_){0},
      decltype(_impl_.m6_){0},
      decltype(_impl_.m7_){0},
      decltype(_impl_.m8_){0},
      decltype(_impl_.m9_){0},
      decltype(_impl_.m10_){0},
      decltype(_impl_.m11_){0},
      decltype(_impl_.m12_){0},
      decltype(_impl_.m13_){0},
      decltype(_impl_.m14_){0},
      decltype(_impl_.m15_){0},
  };
}
Matrix_proto::~Matrix_proto() {
  // @@protoc_insertion_point(destructor:Matrix_proto)
  _internal_metadata_.Delete<std::string>();
  SharedDtor();
}
inline void Matrix_proto::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}
void Matrix_proto::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void Matrix_proto::Clear() {
// @@protoc_insertion_point(message_clear_start:Matrix_proto)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    ::memset(&_impl_.m0_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.m7_) -
        reinterpret_cast<char*>(&_impl_.m0_)) + sizeof(_impl_.m7_));
  }
  if (cached_has_bits & 0x0000ff00u) {
    ::memset(&_impl_.m8_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.m15_) -
        reinterpret_cast<char*>(&_impl_.m8_)) + sizeof(_impl_.m15_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* Matrix_proto::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<4, 16, 0, 0, 2> Matrix_proto::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_._has_bits_),
    0, // no _extensions_
    16, 120,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294901760,  // skipmap
    offsetof(decltype(_table_), field_entries),
    16,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Matrix_proto_default_instance_._instance,
    ::_pbi::TcParser::GenericFallbackLite,  // fallback
  }, {{
    // optional float m15 = 16;
    {::_pbi::TcParser::FastF32S2,
     {389, 15, 0, PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m15_)}},
    // optional float m0 = 1;
    {::_pbi::TcParser::FastF32S1,
     {13, 0, 0, PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m0_)}},
    // optional float m1 = 2;
    {::_pbi::TcParser::FastF32S1,
     {21, 1, 0, PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m1_)}},
    // optional float m2 = 3;
    {::_pbi::TcParser::FastF32S1,
     {29, 2, 0, PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m2_)}},
    // optional float m3 = 4;
    {::_pbi::TcParser::FastF32S1,
     {37, 3, 0, PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m3_)}},
    // optional float m4 = 5;
    {::_pbi::TcParser::FastF32S1,
     {45, 4, 0, PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m4_)}},
    // optional float m5 = 6;
    {::_pbi::TcParser::FastF32S1,
     {53, 5, 0, PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m5_)}},
    // optional float m6 = 7;
    {::_pbi::TcParser::FastF32S1,
     {61, 6, 0, PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m6_)}},
    // optional float m7 = 8;
    {::_pbi::TcParser::FastF32S1,
     {69, 7, 0, PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m7_)}},
    // optional float m8 = 9;
    {::_pbi::TcParser::FastF32S1,
     {77, 8, 0, PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m8_)}},
    // optional float m9 = 10;
    {::_pbi::TcParser::FastF32S1,
     {85, 9, 0, PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m9_)}},
    // optional float m10 = 11;
    {::_pbi::TcParser::FastF32S1,
     {93, 10, 0, PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m10_)}},
    // optional float m11 = 12;
    {::_pbi::TcParser::FastF32S1,
     {101, 11, 0, PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m11_)}},
    // optional float m12 = 13;
    {::_pbi::TcParser::FastF32S1,
     {109, 12, 0, PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m12_)}},
    // optional float m13 = 14;
    {::_pbi::TcParser::FastF32S1,
     {117, 13, 0, PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m13_)}},
    // optional float m14 = 15;
    {::_pbi::TcParser::FastF32S1,
     {125, 14, 0, PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m14_)}},
  }}, {{
    65535, 65535
  }}, {{
    // optional float m0 = 1;
    {PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m0_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kFloat)},
    // optional float m1 = 2;
    {PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m1_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kFloat)},
    // optional float m2 = 3;
    {PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m2_), _Internal::kHasBitsOffset + 2, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kFloat)},
    // optional float m3 = 4;
    {PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m3_), _Internal::kHasBitsOffset + 3, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kFloat)},
    // optional float m4 = 5;
    {PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m4_), _Internal::kHasBitsOffset + 4, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kFloat)},
    // optional float m5 = 6;
    {PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m5_), _Internal::kHasBitsOffset + 5, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kFloat)},
    // optional float m6 = 7;
    {PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m6_), _Internal::kHasBitsOffset + 6, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kFloat)},
    // optional float m7 = 8;
    {PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m7_), _Internal::kHasBitsOffset + 7, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kFloat)},
    // optional float m8 = 9;
    {PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m8_), _Internal::kHasBitsOffset + 8, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kFloat)},
    // optional float m9 = 10;
    {PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m9_), _Internal::kHasBitsOffset + 9, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kFloat)},
    // optional float m10 = 11;
    {PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m10_), _Internal::kHasBitsOffset + 10, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kFloat)},
    // optional float m11 = 12;
    {PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m11_), _Internal::kHasBitsOffset + 11, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kFloat)},
    // optional float m12 = 13;
    {PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m12_), _Internal::kHasBitsOffset + 12, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kFloat)},
    // optional float m13 = 14;
    {PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m13_), _Internal::kHasBitsOffset + 13, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kFloat)},
    // optional float m14 = 15;
    {PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m14_), _Internal::kHasBitsOffset + 14, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kFloat)},
    // optional float m15 = 16;
    {PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m15_), _Internal::kHasBitsOffset + 15, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kFloat)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* Matrix_proto::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Matrix_proto)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional float m0 = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        1, this->_internal_m0(), target);
  }

  // optional float m1 = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        2, this->_internal_m1(), target);
  }

  // optional float m2 = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        3, this->_internal_m2(), target);
  }

  // optional float m3 = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        4, this->_internal_m3(), target);
  }

  // optional float m4 = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        5, this->_internal_m4(), target);
  }

  // optional float m5 = 6;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        6, this->_internal_m5(), target);
  }

  // optional float m6 = 7;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        7, this->_internal_m6(), target);
  }

  // optional float m7 = 8;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        8, this->_internal_m7(), target);
  }

  // optional float m8 = 9;
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        9, this->_internal_m8(), target);
  }

  // optional float m9 = 10;
  if (cached_has_bits & 0x00000200u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        10, this->_internal_m9(), target);
  }

  // optional float m10 = 11;
  if (cached_has_bits & 0x00000400u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        11, this->_internal_m10(), target);
  }

  // optional float m11 = 12;
  if (cached_has_bits & 0x00000800u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        12, this->_internal_m11(), target);
  }

  // optional float m12 = 13;
  if (cached_has_bits & 0x00001000u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        13, this->_internal_m12(), target);
  }

  // optional float m13 = 14;
  if (cached_has_bits & 0x00002000u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        14, this->_internal_m13(), target);
  }

  // optional float m14 = 15;
  if (cached_has_bits & 0x00004000u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        15, this->_internal_m14(), target);
  }

  // optional float m15 = 16;
  if (cached_has_bits & 0x00008000u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        16, this->_internal_m15(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(
        _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Matrix_proto)
  return target;
}

::size_t Matrix_proto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Matrix_proto)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional float m0 = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 5;
    }

    // optional float m1 = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 5;
    }

    // optional float m2 = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 5;
    }

    // optional float m3 = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 5;
    }

    // optional float m4 = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += 5;
    }

    // optional float m5 = 6;
    if (cached_has_bits & 0x00000020u) {
      total_size += 5;
    }

    // optional float m6 = 7;
    if (cached_has_bits & 0x00000040u) {
      total_size += 5;
    }

    // optional float m7 = 8;
    if (cached_has_bits & 0x00000080u) {
      total_size += 5;
    }

  }
  if (cached_has_bits & 0x0000ff00u) {
    // optional float m8 = 9;
    if (cached_has_bits & 0x00000100u) {
      total_size += 5;
    }

    // optional float m9 = 10;
    if (cached_has_bits & 0x00000200u) {
      total_size += 5;
    }

    // optional float m10 = 11;
    if (cached_has_bits & 0x00000400u) {
      total_size += 5;
    }

    // optional float m11 = 12;
    if (cached_has_bits & 0x00000800u) {
      total_size += 5;
    }

    // optional float m12 = 13;
    if (cached_has_bits & 0x00001000u) {
      total_size += 5;
    }

    // optional float m13 = 14;
    if (cached_has_bits & 0x00002000u) {
      total_size += 5;
    }

    // optional float m14 = 15;
    if (cached_has_bits & 0x00004000u) {
      total_size += 5;
    }

    // optional float m15 = 16;
    if (cached_has_bits & 0x00008000u) {
      total_size += 6;
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Matrix_proto::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const Matrix_proto*>(
      &from));
}

void Matrix_proto::MergeFrom(const Matrix_proto& from) {
  Matrix_proto* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:Matrix_proto)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.m0_ = from._impl_.m0_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.m1_ = from._impl_.m1_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.m2_ = from._impl_.m2_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.m3_ = from._impl_.m3_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.m4_ = from._impl_.m4_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.m5_ = from._impl_.m5_;
    }
    if (cached_has_bits & 0x00000040u) {
      _this->_impl_.m6_ = from._impl_.m6_;
    }
    if (cached_has_bits & 0x00000080u) {
      _this->_impl_.m7_ = from._impl_.m7_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x0000ff00u) {
    if (cached_has_bits & 0x00000100u) {
      _this->_impl_.m8_ = from._impl_.m8_;
    }
    if (cached_has_bits & 0x00000200u) {
      _this->_impl_.m9_ = from._impl_.m9_;
    }
    if (cached_has_bits & 0x00000400u) {
      _this->_impl_.m10_ = from._impl_.m10_;
    }
    if (cached_has_bits & 0x00000800u) {
      _this->_impl_.m11_ = from._impl_.m11_;
    }
    if (cached_has_bits & 0x00001000u) {
      _this->_impl_.m12_ = from._impl_.m12_;
    }
    if (cached_has_bits & 0x00002000u) {
      _this->_impl_.m13_ = from._impl_.m13_;
    }
    if (cached_has_bits & 0x00004000u) {
      _this->_impl_.m14_ = from._impl_.m14_;
    }
    if (cached_has_bits & 0x00008000u) {
      _this->_impl_.m15_ = from._impl_.m15_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void Matrix_proto::CopyFrom(const Matrix_proto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Matrix_proto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Matrix_proto::IsInitialized() const {
  return true;
}

void Matrix_proto::InternalSwap(Matrix_proto* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m15_)
      + sizeof(Matrix_proto::_impl_.m15_)
      - PROTOBUF_FIELD_OFFSET(Matrix_proto, _impl_.m0_)>(
          reinterpret_cast<char*>(&_impl_.m0_),
          reinterpret_cast<char*>(&other->_impl_.m0_));
}

std::string Matrix_proto::GetTypeName() const {
  return "Matrix_proto";
}

// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
