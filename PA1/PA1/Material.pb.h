// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Material.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Material_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_Material_2eproto_2epb_2eh

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
#include "google/protobuf/generated_enum_util.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_Material_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_Material_2eproto {
  static const ::uint32_t offsets[];
};
class Material_proto;
struct Material_protoDefaultTypeInternal;
extern Material_protoDefaultTypeInternal _Material_proto_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

enum Material_proto_Color : int {
  Material_proto_Color_Blue = 0,
  Material_proto_Color_White = 1,
  Material_proto_Color_Red = 2,
  Material_proto_Color_Yellow = 3,
  Material_proto_Color_Material_proto_Color_INT_MIN_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::min(),
  Material_proto_Color_Material_proto_Color_INT_MAX_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::max(),
};

bool Material_proto_Color_IsValid(int value);
constexpr Material_proto_Color Material_proto_Color_Color_MIN = static_cast<Material_proto_Color>(0);
constexpr Material_proto_Color Material_proto_Color_Color_MAX = static_cast<Material_proto_Color>(3);
constexpr int Material_proto_Color_Color_ARRAYSIZE = 3 + 1;
const std::string& Material_proto_Color_Name(Material_proto_Color value);
template <typename T>
const std::string& Material_proto_Color_Name(T value) {
  static_assert(std::is_same<T, Material_proto_Color>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to Color_Name().");
  return Material_proto_Color_Name(static_cast<Material_proto_Color>(value));
}
const std::string& Material_proto_Color_Name(Material_proto_Color value);
bool Material_proto_Color_Parse(absl::string_view name, Material_proto_Color* value);

// ===================================================================


// -------------------------------------------------------------------

class Material_proto final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:Material_proto) */ {
 public:
  inline Material_proto() : Material_proto(nullptr) {}
  ~Material_proto() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Material_proto(::google::protobuf::internal::ConstantInitialized);

  Material_proto(const Material_proto& from);
  Material_proto(Material_proto&& from) noexcept
    : Material_proto() {
    *this = ::std::move(from);
  }

  inline Material_proto& operator=(const Material_proto& from) {
    CopyFrom(from);
    return *this;
  }
  inline Material_proto& operator=(Material_proto&& from) noexcept {
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

  static const Material_proto& default_instance() {
    return *internal_default_instance();
  }
  static inline const Material_proto* internal_default_instance() {
    return reinterpret_cast<const Material_proto*>(
               &_Material_proto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Material_proto& a, Material_proto& b) {
    a.Swap(&b);
  }
  inline void Swap(Material_proto* other) {
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
  void UnsafeArenaSwap(Material_proto* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Material_proto* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Material_proto>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)  final;
  void CopyFrom(const Material_proto& from);
  void MergeFrom(const Material_proto& from);
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
  void InternalSwap(Material_proto* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "Material_proto";
  }
  protected:
  explicit Material_proto(::google::protobuf::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  using Color = Material_proto_Color;
  static constexpr Color Blue = Material_proto_Color_Blue;
  static constexpr Color White = Material_proto_Color_White;
  static constexpr Color Red = Material_proto_Color_Red;
  static constexpr Color Yellow = Material_proto_Color_Yellow;
  static inline bool Color_IsValid(int value) {
    return Material_proto_Color_IsValid(value);
  }
  static constexpr Color Color_MIN = Material_proto_Color_Color_MIN;
  static constexpr Color Color_MAX = Material_proto_Color_Color_MAX;
  static constexpr int Color_ARRAYSIZE = Material_proto_Color_Color_ARRAYSIZE;
  template <typename T>
  static inline const std::string& Color_Name(T value) {
    return Material_proto_Color_Name(value);
  }
  static inline bool Color_Parse(absl::string_view name, Color* value) {
    return Material_proto_Color_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kAFieldNumber = 1,
    kBFieldNumber = 2,
    kCFieldNumber = 3,
    kXFieldNumber = 4,
  };
  // optional .Material_proto.Color a = 1;
  bool has_a() const;
  void clear_a() ;
  ::Material_proto_Color a() const;
  void set_a(::Material_proto_Color value);

  private:
  ::Material_proto_Color _internal_a() const;
  void _internal_set_a(::Material_proto_Color value);

  public:
  // optional .Material_proto.Color b = 2;
  bool has_b() const;
  void clear_b() ;
  ::Material_proto_Color b() const;
  void set_b(::Material_proto_Color value);

  private:
  ::Material_proto_Color _internal_b() const;
  void _internal_set_b(::Material_proto_Color value);

  public:
  // optional .Material_proto.Color c = 3;
  bool has_c() const;
  void clear_c() ;
  ::Material_proto_Color c() const;
  void set_c(::Material_proto_Color value);

  private:
  ::Material_proto_Color _internal_c() const;
  void _internal_set_c(::Material_proto_Color value);

  public:
  // optional sint32 x = 4;
  bool has_x() const;
  void clear_x() ;
  ::int32_t x() const;
  void set_x(::int32_t value);

  private:
  ::int32_t _internal_x() const;
  void _internal_set_x(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:Material_proto)
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
    int a_;
    int b_;
    int c_;
    ::int32_t x_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Material_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Material_proto

// optional .Material_proto.Color a = 1;
inline bool Material_proto::has_a() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void Material_proto::clear_a() {
  _impl_.a_ = 0;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::Material_proto_Color Material_proto::a() const {
  // @@protoc_insertion_point(field_get:Material_proto.a)
  return _internal_a();
}
inline void Material_proto::set_a(::Material_proto_Color value) {
  _internal_set_a(value);
  // @@protoc_insertion_point(field_set:Material_proto.a)
}
inline ::Material_proto_Color Material_proto::_internal_a() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return static_cast<::Material_proto_Color>(_impl_.a_);
}
inline void Material_proto::_internal_set_a(::Material_proto_Color value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.a_ = value;
}

// optional .Material_proto.Color b = 2;
inline bool Material_proto::has_b() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void Material_proto::clear_b() {
  _impl_.b_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::Material_proto_Color Material_proto::b() const {
  // @@protoc_insertion_point(field_get:Material_proto.b)
  return _internal_b();
}
inline void Material_proto::set_b(::Material_proto_Color value) {
  _internal_set_b(value);
  // @@protoc_insertion_point(field_set:Material_proto.b)
}
inline ::Material_proto_Color Material_proto::_internal_b() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return static_cast<::Material_proto_Color>(_impl_.b_);
}
inline void Material_proto::_internal_set_b(::Material_proto_Color value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.b_ = value;
}

// optional .Material_proto.Color c = 3;
inline bool Material_proto::has_c() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void Material_proto::clear_c() {
  _impl_.c_ = 0;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::Material_proto_Color Material_proto::c() const {
  // @@protoc_insertion_point(field_get:Material_proto.c)
  return _internal_c();
}
inline void Material_proto::set_c(::Material_proto_Color value) {
  _internal_set_c(value);
  // @@protoc_insertion_point(field_set:Material_proto.c)
}
inline ::Material_proto_Color Material_proto::_internal_c() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return static_cast<::Material_proto_Color>(_impl_.c_);
}
inline void Material_proto::_internal_set_c(::Material_proto_Color value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.c_ = value;
}

// optional sint32 x = 4;
inline bool Material_proto::has_x() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void Material_proto::clear_x() {
  _impl_.x_ = 0;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::int32_t Material_proto::x() const {
  // @@protoc_insertion_point(field_get:Material_proto.x)
  return _internal_x();
}
inline void Material_proto::set_x(::int32_t value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:Material_proto.x)
}
inline ::int32_t Material_proto::_internal_x() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.x_;
}
inline void Material_proto::_internal_set_x(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.x_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


namespace google {
namespace protobuf {

template <>
struct is_proto_enum<::Material_proto_Color> : std::true_type {};

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_Material_2eproto_2epb_2eh
