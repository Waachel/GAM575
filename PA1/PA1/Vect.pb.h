// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Vect.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Vect_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_Vect_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4024000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4024003 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/message_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_Vect_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_Vect_2eproto {
  static const ::uint32_t offsets[];
};
class Vect_proto;
struct Vect_protoDefaultTypeInternal;
extern Vect_protoDefaultTypeInternal _Vect_proto_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google


// ===================================================================


// -------------------------------------------------------------------

class Vect_proto final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:Vect_proto) */ {
 public:
  inline Vect_proto() : Vect_proto(nullptr) {}
  ~Vect_proto() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Vect_proto(::google::protobuf::internal::ConstantInitialized);

  Vect_proto(const Vect_proto& from);
  Vect_proto(Vect_proto&& from) noexcept
    : Vect_proto() {
    *this = ::std::move(from);
  }

  inline Vect_proto& operator=(const Vect_proto& from) {
    CopyFrom(from);
    return *this;
  }
  inline Vect_proto& operator=(Vect_proto&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const Vect_proto& default_instance() {
    return *internal_default_instance();
  }
  static inline const Vect_proto* internal_default_instance() {
    return reinterpret_cast<const Vect_proto*>(
               &_Vect_proto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Vect_proto& a, Vect_proto& b) {
    a.Swap(&b);
  }
  inline void Swap(Vect_proto* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Vect_proto* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Vect_proto* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Vect_proto>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)  final;
  void CopyFrom(const Vect_proto& from);
  void MergeFrom(const Vect_proto& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Vect_proto* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "Vect_proto";
  }
  protected:
  explicit Vect_proto(::google::protobuf::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kZFieldNumber = 3,
    kWFieldNumber = 4,
  };
  // optional float x = 1;
  bool has_x() const;
  void clear_x() ;
  float x() const;
  void set_x(float value);

  private:
  float _internal_x() const;
  void _internal_set_x(float value);

  public:
  // optional float y = 2;
  bool has_y() const;
  void clear_y() ;
  float y() const;
  void set_y(float value);

  private:
  float _internal_y() const;
  void _internal_set_y(float value);

  public:
  // optional float z = 3;
  bool has_z() const;
  void clear_z() ;
  float z() const;
  void set_z(float value);

  private:
  float _internal_z() const;
  void _internal_set_z(float value);

  public:
  // optional float w = 4;
  bool has_w() const;
  void clear_w() ;
  float w() const;
  void set_w(float value);

  private:
  float _internal_w() const;
  void _internal_set_w(float value);

  public:
  // @@protoc_insertion_point(class_scope:Vect_proto)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<2, 4, 0, 0, 2> _table_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    float x_;
    float y_;
    float z_;
    float w_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Vect_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Vect_proto

// optional float x = 1;
inline bool Vect_proto::has_x() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void Vect_proto::clear_x() {
  _impl_.x_ = 0;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline float Vect_proto::x() const {
  // @@protoc_insertion_point(field_get:Vect_proto.x)
  return _internal_x();
}
inline void Vect_proto::set_x(float value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:Vect_proto.x)
}
inline float Vect_proto::_internal_x() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.x_;
}
inline void Vect_proto::_internal_set_x(float value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.x_ = value;
}

// optional float y = 2;
inline bool Vect_proto::has_y() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void Vect_proto::clear_y() {
  _impl_.y_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline float Vect_proto::y() const {
  // @@protoc_insertion_point(field_get:Vect_proto.y)
  return _internal_y();
}
inline void Vect_proto::set_y(float value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:Vect_proto.y)
}
inline float Vect_proto::_internal_y() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.y_;
}
inline void Vect_proto::_internal_set_y(float value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.y_ = value;
}

// optional float z = 3;
inline bool Vect_proto::has_z() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void Vect_proto::clear_z() {
  _impl_.z_ = 0;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline float Vect_proto::z() const {
  // @@protoc_insertion_point(field_get:Vect_proto.z)
  return _internal_z();
}
inline void Vect_proto::set_z(float value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:Vect_proto.z)
}
inline float Vect_proto::_internal_z() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.z_;
}
inline void Vect_proto::_internal_set_z(float value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.z_ = value;
}

// optional float w = 4;
inline bool Vect_proto::has_w() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void Vect_proto::clear_w() {
  _impl_.w_ = 0;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline float Vect_proto::w() const {
  // @@protoc_insertion_point(field_get:Vect_proto.w)
  return _internal_w();
}
inline void Vect_proto::set_w(float value) {
  _internal_set_w(value);
  // @@protoc_insertion_point(field_set:Vect_proto.w)
}
inline float Vect_proto::_internal_w() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.w_;
}
inline void Vect_proto::_internal_set_w(float value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.w_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_Vect_2eproto_2epb_2eh