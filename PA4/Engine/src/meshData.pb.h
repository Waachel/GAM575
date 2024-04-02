// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: meshData.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_meshData_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_meshData_2eproto_2epb_2eh

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
#include "vboData.pb.h"
#include "textureData.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_meshData_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_meshData_2eproto {
  static const ::uint32_t offsets[];
};
class meshData_proto;
struct meshData_protoDefaultTypeInternal;
extern meshData_protoDefaultTypeInternal _meshData_proto_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

enum meshData_proto_RENDER_MODE : int {
  meshData_proto_RENDER_MODE_MODE_POINTS = 0,
  meshData_proto_RENDER_MODE_MODE_LINE = 1,
  meshData_proto_RENDER_MODE_MODE_LINE_LOOP = 2,
  meshData_proto_RENDER_MODE_MODE_LINE_STRIP = 3,
  meshData_proto_RENDER_MODE_MODE_TRIANGLES = 4,
  meshData_proto_RENDER_MODE_MODE_TRIANGLE_STRIP = 5,
  meshData_proto_RENDER_MODE_MODE_TRIANGLE_FAN = 6,
  meshData_proto_RENDER_MODE_meshData_proto_RENDER_MODE_INT_MIN_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::min(),
  meshData_proto_RENDER_MODE_meshData_proto_RENDER_MODE_INT_MAX_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::max(),
};

bool meshData_proto_RENDER_MODE_IsValid(int value);
constexpr meshData_proto_RENDER_MODE meshData_proto_RENDER_MODE_RENDER_MODE_MIN = static_cast<meshData_proto_RENDER_MODE>(0);
constexpr meshData_proto_RENDER_MODE meshData_proto_RENDER_MODE_RENDER_MODE_MAX = static_cast<meshData_proto_RENDER_MODE>(6);
constexpr int meshData_proto_RENDER_MODE_RENDER_MODE_ARRAYSIZE = 6 + 1;
const std::string& meshData_proto_RENDER_MODE_Name(meshData_proto_RENDER_MODE value);
template <typename T>
const std::string& meshData_proto_RENDER_MODE_Name(T value) {
  static_assert(std::is_same<T, meshData_proto_RENDER_MODE>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to RENDER_MODE_Name().");
  return meshData_proto_RENDER_MODE_Name(static_cast<meshData_proto_RENDER_MODE>(value));
}
const std::string& meshData_proto_RENDER_MODE_Name(meshData_proto_RENDER_MODE value);
bool meshData_proto_RENDER_MODE_Parse(absl::string_view name, meshData_proto_RENDER_MODE* value);

// ===================================================================


// -------------------------------------------------------------------

class meshData_proto final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:meshData_proto) */ {
 public:
  inline meshData_proto() : meshData_proto(nullptr) {}
  ~meshData_proto() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR meshData_proto(::google::protobuf::internal::ConstantInitialized);

  meshData_proto(const meshData_proto& from);
  meshData_proto(meshData_proto&& from) noexcept
    : meshData_proto() {
    *this = ::std::move(from);
  }

  inline meshData_proto& operator=(const meshData_proto& from) {
    CopyFrom(from);
    return *this;
  }
  inline meshData_proto& operator=(meshData_proto&& from) noexcept {
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

  static const meshData_proto& default_instance() {
    return *internal_default_instance();
  }
  static inline const meshData_proto* internal_default_instance() {
    return reinterpret_cast<const meshData_proto*>(
               &_meshData_proto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(meshData_proto& a, meshData_proto& b) {
    a.Swap(&b);
  }
  inline void Swap(meshData_proto* other) {
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
  void UnsafeArenaSwap(meshData_proto* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  meshData_proto* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<meshData_proto>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)  final;
  void CopyFrom(const meshData_proto& from);
  void MergeFrom(const meshData_proto& from);
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
  void InternalSwap(meshData_proto* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "meshData_proto";
  }
  protected:
  explicit meshData_proto(::google::protobuf::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  using RENDER_MODE = meshData_proto_RENDER_MODE;
  static constexpr RENDER_MODE MODE_POINTS = meshData_proto_RENDER_MODE_MODE_POINTS;
  static constexpr RENDER_MODE MODE_LINE = meshData_proto_RENDER_MODE_MODE_LINE;
  static constexpr RENDER_MODE MODE_LINE_LOOP = meshData_proto_RENDER_MODE_MODE_LINE_LOOP;
  static constexpr RENDER_MODE MODE_LINE_STRIP = meshData_proto_RENDER_MODE_MODE_LINE_STRIP;
  static constexpr RENDER_MODE MODE_TRIANGLES = meshData_proto_RENDER_MODE_MODE_TRIANGLES;
  static constexpr RENDER_MODE MODE_TRIANGLE_STRIP = meshData_proto_RENDER_MODE_MODE_TRIANGLE_STRIP;
  static constexpr RENDER_MODE MODE_TRIANGLE_FAN = meshData_proto_RENDER_MODE_MODE_TRIANGLE_FAN;
  static inline bool RENDER_MODE_IsValid(int value) {
    return meshData_proto_RENDER_MODE_IsValid(value);
  }
  static constexpr RENDER_MODE RENDER_MODE_MIN = meshData_proto_RENDER_MODE_RENDER_MODE_MIN;
  static constexpr RENDER_MODE RENDER_MODE_MAX = meshData_proto_RENDER_MODE_RENDER_MODE_MAX;
  static constexpr int RENDER_MODE_ARRAYSIZE = meshData_proto_RENDER_MODE_RENDER_MODE_ARRAYSIZE;
  template <typename T>
  static inline const std::string& RENDER_MODE_Name(T value) {
    return meshData_proto_RENDER_MODE_Name(value);
  }
  static inline bool RENDER_MODE_Parse(absl::string_view name, RENDER_MODE* value) {
    return meshData_proto_RENDER_MODE_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kPMeshNameFieldNumber = 1,
    kVboVertFieldNumber = 5,
    kVboNormFieldNumber = 6,
    kVboUvFieldNumber = 7,
    kVboIndexFieldNumber = 8,
    kTextColorFieldNumber = 9,
    kModeFieldNumber = 2,
    kTriCountFieldNumber = 3,
    kVertCountFieldNumber = 4,
  };
  // optional bytes pMeshName = 1;
  bool has_pmeshname() const;
  void clear_pmeshname() ;
  const std::string& pmeshname() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_pmeshname(Arg_&& arg, Args_... args);
  std::string* mutable_pmeshname();
  PROTOBUF_NODISCARD std::string* release_pmeshname();
  void set_allocated_pmeshname(std::string* ptr);

  private:
  const std::string& _internal_pmeshname() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_pmeshname(
      const std::string& value);
  std::string* _internal_mutable_pmeshname();

  public:
  // optional .vboData_proto vbo_vert = 5;
  bool has_vbo_vert() const;
  void clear_vbo_vert() ;
  const ::vboData_proto& vbo_vert() const;
  PROTOBUF_NODISCARD ::vboData_proto* release_vbo_vert();
  ::vboData_proto* mutable_vbo_vert();
  void set_allocated_vbo_vert(::vboData_proto* value);
  void unsafe_arena_set_allocated_vbo_vert(::vboData_proto* value);
  ::vboData_proto* unsafe_arena_release_vbo_vert();

  private:
  const ::vboData_proto& _internal_vbo_vert() const;
  ::vboData_proto* _internal_mutable_vbo_vert();

  public:
  // optional .vboData_proto vbo_norm = 6;
  bool has_vbo_norm() const;
  void clear_vbo_norm() ;
  const ::vboData_proto& vbo_norm() const;
  PROTOBUF_NODISCARD ::vboData_proto* release_vbo_norm();
  ::vboData_proto* mutable_vbo_norm();
  void set_allocated_vbo_norm(::vboData_proto* value);
  void unsafe_arena_set_allocated_vbo_norm(::vboData_proto* value);
  ::vboData_proto* unsafe_arena_release_vbo_norm();

  private:
  const ::vboData_proto& _internal_vbo_norm() const;
  ::vboData_proto* _internal_mutable_vbo_norm();

  public:
  // optional .vboData_proto vbo_uv = 7;
  bool has_vbo_uv() const;
  void clear_vbo_uv() ;
  const ::vboData_proto& vbo_uv() const;
  PROTOBUF_NODISCARD ::vboData_proto* release_vbo_uv();
  ::vboData_proto* mutable_vbo_uv();
  void set_allocated_vbo_uv(::vboData_proto* value);
  void unsafe_arena_set_allocated_vbo_uv(::vboData_proto* value);
  ::vboData_proto* unsafe_arena_release_vbo_uv();

  private:
  const ::vboData_proto& _internal_vbo_uv() const;
  ::vboData_proto* _internal_mutable_vbo_uv();

  public:
  // optional .vboData_proto vbo_index = 8;
  bool has_vbo_index() const;
  void clear_vbo_index() ;
  const ::vboData_proto& vbo_index() const;
  PROTOBUF_NODISCARD ::vboData_proto* release_vbo_index();
  ::vboData_proto* mutable_vbo_index();
  void set_allocated_vbo_index(::vboData_proto* value);
  void unsafe_arena_set_allocated_vbo_index(::vboData_proto* value);
  ::vboData_proto* unsafe_arena_release_vbo_index();

  private:
  const ::vboData_proto& _internal_vbo_index() const;
  ::vboData_proto* _internal_mutable_vbo_index();

  public:
  // optional .textureData_proto text_color = 9;
  bool has_text_color() const;
  void clear_text_color() ;
  const ::textureData_proto& text_color() const;
  PROTOBUF_NODISCARD ::textureData_proto* release_text_color();
  ::textureData_proto* mutable_text_color();
  void set_allocated_text_color(::textureData_proto* value);
  void unsafe_arena_set_allocated_text_color(::textureData_proto* value);
  ::textureData_proto* unsafe_arena_release_text_color();

  private:
  const ::textureData_proto& _internal_text_color() const;
  ::textureData_proto* _internal_mutable_text_color();

  public:
  // optional .meshData_proto.RENDER_MODE mode = 2;
  bool has_mode() const;
  void clear_mode() ;
  ::meshData_proto_RENDER_MODE mode() const;
  void set_mode(::meshData_proto_RENDER_MODE value);

  private:
  ::meshData_proto_RENDER_MODE _internal_mode() const;
  void _internal_set_mode(::meshData_proto_RENDER_MODE value);

  public:
  // optional uint32 triCount = 3;
  bool has_tricount() const;
  void clear_tricount() ;
  ::uint32_t tricount() const;
  void set_tricount(::uint32_t value);

  private:
  ::uint32_t _internal_tricount() const;
  void _internal_set_tricount(::uint32_t value);

  public:
  // optional uint32 vertCount = 4;
  bool has_vertcount() const;
  void clear_vertcount() ;
  ::uint32_t vertcount() const;
  void set_vertcount(::uint32_t value);

  private:
  ::uint32_t _internal_vertcount() const;
  void _internal_set_vertcount(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:meshData_proto)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<4, 9, 5, 0, 2> _table_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::internal::ArenaStringPtr pmeshname_;
    ::vboData_proto* vbo_vert_;
    ::vboData_proto* vbo_norm_;
    ::vboData_proto* vbo_uv_;
    ::vboData_proto* vbo_index_;
    ::textureData_proto* text_color_;
    int mode_;
    ::uint32_t tricount_;
    ::uint32_t vertcount_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_meshData_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// meshData_proto

// optional bytes pMeshName = 1;
inline bool meshData_proto::has_pmeshname() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void meshData_proto::clear_pmeshname() {
  _impl_.pmeshname_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& meshData_proto::pmeshname() const {
  // @@protoc_insertion_point(field_get:meshData_proto.pMeshName)
  return _internal_pmeshname();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void meshData_proto::set_pmeshname(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.pmeshname_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:meshData_proto.pMeshName)
}
inline std::string* meshData_proto::mutable_pmeshname() {
  std::string* _s = _internal_mutable_pmeshname();
  // @@protoc_insertion_point(field_mutable:meshData_proto.pMeshName)
  return _s;
}
inline const std::string& meshData_proto::_internal_pmeshname() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.pmeshname_.Get();
}
inline void meshData_proto::_internal_set_pmeshname(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.pmeshname_.Set(value, GetArenaForAllocation());
}
inline std::string* meshData_proto::_internal_mutable_pmeshname() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.pmeshname_.Mutable( GetArenaForAllocation());
}
inline std::string* meshData_proto::release_pmeshname() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:meshData_proto.pMeshName)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.pmeshname_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.pmeshname_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void meshData_proto::set_allocated_pmeshname(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.pmeshname_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.pmeshname_.IsDefault()) {
          _impl_.pmeshname_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:meshData_proto.pMeshName)
}

// optional .meshData_proto.RENDER_MODE mode = 2;
inline bool meshData_proto::has_mode() const {
  bool value = (_impl_._has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline void meshData_proto::clear_mode() {
  _impl_.mode_ = 0;
  _impl_._has_bits_[0] &= ~0x00000040u;
}
inline ::meshData_proto_RENDER_MODE meshData_proto::mode() const {
  // @@protoc_insertion_point(field_get:meshData_proto.mode)
  return _internal_mode();
}
inline void meshData_proto::set_mode(::meshData_proto_RENDER_MODE value) {
  _internal_set_mode(value);
  // @@protoc_insertion_point(field_set:meshData_proto.mode)
}
inline ::meshData_proto_RENDER_MODE meshData_proto::_internal_mode() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return static_cast<::meshData_proto_RENDER_MODE>(_impl_.mode_);
}
inline void meshData_proto::_internal_set_mode(::meshData_proto_RENDER_MODE value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000040u;
  _impl_.mode_ = value;
}

// optional uint32 triCount = 3;
inline bool meshData_proto::has_tricount() const {
  bool value = (_impl_._has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline void meshData_proto::clear_tricount() {
  _impl_.tricount_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000080u;
}
inline ::uint32_t meshData_proto::tricount() const {
  // @@protoc_insertion_point(field_get:meshData_proto.triCount)
  return _internal_tricount();
}
inline void meshData_proto::set_tricount(::uint32_t value) {
  _internal_set_tricount(value);
  // @@protoc_insertion_point(field_set:meshData_proto.triCount)
}
inline ::uint32_t meshData_proto::_internal_tricount() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.tricount_;
}
inline void meshData_proto::_internal_set_tricount(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000080u;
  _impl_.tricount_ = value;
}

// optional uint32 vertCount = 4;
inline bool meshData_proto::has_vertcount() const {
  bool value = (_impl_._has_bits_[0] & 0x00000100u) != 0;
  return value;
}
inline void meshData_proto::clear_vertcount() {
  _impl_.vertcount_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000100u;
}
inline ::uint32_t meshData_proto::vertcount() const {
  // @@protoc_insertion_point(field_get:meshData_proto.vertCount)
  return _internal_vertcount();
}
inline void meshData_proto::set_vertcount(::uint32_t value) {
  _internal_set_vertcount(value);
  // @@protoc_insertion_point(field_set:meshData_proto.vertCount)
}
inline ::uint32_t meshData_proto::_internal_vertcount() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.vertcount_;
}
inline void meshData_proto::_internal_set_vertcount(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000100u;
  _impl_.vertcount_ = value;
}

// optional .vboData_proto vbo_vert = 5;
inline bool meshData_proto::has_vbo_vert() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.vbo_vert_ != nullptr);
  return value;
}
inline const ::vboData_proto& meshData_proto::_internal_vbo_vert() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  const ::vboData_proto* p = _impl_.vbo_vert_;
  return p != nullptr ? *p : reinterpret_cast<const ::vboData_proto&>(::_vboData_proto_default_instance_);
}
inline const ::vboData_proto& meshData_proto::vbo_vert() const {
  // @@protoc_insertion_point(field_get:meshData_proto.vbo_vert)
  return _internal_vbo_vert();
}
inline void meshData_proto::unsafe_arena_set_allocated_vbo_vert(::vboData_proto* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.vbo_vert_);
  }
  _impl_.vbo_vert_ = reinterpret_cast<::vboData_proto*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:meshData_proto.vbo_vert)
}
inline ::vboData_proto* meshData_proto::release_vbo_vert() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);

  _impl_._has_bits_[0] &= ~0x00000002u;
  ::vboData_proto* released = _impl_.vbo_vert_;
  _impl_.vbo_vert_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old = reinterpret_cast<::google::protobuf::MessageLite*>(released);
  released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  if (GetArenaForAllocation() == nullptr) {
    delete old;
  }
#else   // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return released;
}
inline ::vboData_proto* meshData_proto::unsafe_arena_release_vbo_vert() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:meshData_proto.vbo_vert)

  _impl_._has_bits_[0] &= ~0x00000002u;
  ::vboData_proto* temp = _impl_.vbo_vert_;
  _impl_.vbo_vert_ = nullptr;
  return temp;
}
inline ::vboData_proto* meshData_proto::_internal_mutable_vbo_vert() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  if (_impl_.vbo_vert_ == nullptr) {
    auto* p = CreateMaybeMessage<::vboData_proto>(GetArenaForAllocation());
    _impl_.vbo_vert_ = reinterpret_cast<::vboData_proto*>(p);
  }
  return _impl_.vbo_vert_;
}
inline ::vboData_proto* meshData_proto::mutable_vbo_vert() {
  ::vboData_proto* _msg = _internal_mutable_vbo_vert();
  // @@protoc_insertion_point(field_mutable:meshData_proto.vbo_vert)
  return _msg;
}
inline void meshData_proto::set_allocated_vbo_vert(::vboData_proto* value) {
  ::google::protobuf::Arena* message_arena = GetArenaForAllocation();
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.vbo_vert_);
  }

  if (value != nullptr) {
    ::google::protobuf::Arena* submessage_arena =
        ::google::protobuf::Arena::InternalGetOwningArena(reinterpret_cast<::google::protobuf::MessageLite*>(value));
    if (message_arena != submessage_arena) {
      value = ::google::protobuf::internal::GetOwnedMessage(message_arena, value, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }

  _impl_.vbo_vert_ = reinterpret_cast<::vboData_proto*>(value);
  // @@protoc_insertion_point(field_set_allocated:meshData_proto.vbo_vert)
}

// optional .vboData_proto vbo_norm = 6;
inline bool meshData_proto::has_vbo_norm() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.vbo_norm_ != nullptr);
  return value;
}
inline const ::vboData_proto& meshData_proto::_internal_vbo_norm() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  const ::vboData_proto* p = _impl_.vbo_norm_;
  return p != nullptr ? *p : reinterpret_cast<const ::vboData_proto&>(::_vboData_proto_default_instance_);
}
inline const ::vboData_proto& meshData_proto::vbo_norm() const {
  // @@protoc_insertion_point(field_get:meshData_proto.vbo_norm)
  return _internal_vbo_norm();
}
inline void meshData_proto::unsafe_arena_set_allocated_vbo_norm(::vboData_proto* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.vbo_norm_);
  }
  _impl_.vbo_norm_ = reinterpret_cast<::vboData_proto*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:meshData_proto.vbo_norm)
}
inline ::vboData_proto* meshData_proto::release_vbo_norm() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);

  _impl_._has_bits_[0] &= ~0x00000004u;
  ::vboData_proto* released = _impl_.vbo_norm_;
  _impl_.vbo_norm_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old = reinterpret_cast<::google::protobuf::MessageLite*>(released);
  released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  if (GetArenaForAllocation() == nullptr) {
    delete old;
  }
#else   // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return released;
}
inline ::vboData_proto* meshData_proto::unsafe_arena_release_vbo_norm() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:meshData_proto.vbo_norm)

  _impl_._has_bits_[0] &= ~0x00000004u;
  ::vboData_proto* temp = _impl_.vbo_norm_;
  _impl_.vbo_norm_ = nullptr;
  return temp;
}
inline ::vboData_proto* meshData_proto::_internal_mutable_vbo_norm() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000004u;
  if (_impl_.vbo_norm_ == nullptr) {
    auto* p = CreateMaybeMessage<::vboData_proto>(GetArenaForAllocation());
    _impl_.vbo_norm_ = reinterpret_cast<::vboData_proto*>(p);
  }
  return _impl_.vbo_norm_;
}
inline ::vboData_proto* meshData_proto::mutable_vbo_norm() {
  ::vboData_proto* _msg = _internal_mutable_vbo_norm();
  // @@protoc_insertion_point(field_mutable:meshData_proto.vbo_norm)
  return _msg;
}
inline void meshData_proto::set_allocated_vbo_norm(::vboData_proto* value) {
  ::google::protobuf::Arena* message_arena = GetArenaForAllocation();
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.vbo_norm_);
  }

  if (value != nullptr) {
    ::google::protobuf::Arena* submessage_arena =
        ::google::protobuf::Arena::InternalGetOwningArena(reinterpret_cast<::google::protobuf::MessageLite*>(value));
    if (message_arena != submessage_arena) {
      value = ::google::protobuf::internal::GetOwnedMessage(message_arena, value, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }

  _impl_.vbo_norm_ = reinterpret_cast<::vboData_proto*>(value);
  // @@protoc_insertion_point(field_set_allocated:meshData_proto.vbo_norm)
}

// optional .vboData_proto vbo_uv = 7;
inline bool meshData_proto::has_vbo_uv() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.vbo_uv_ != nullptr);
  return value;
}
inline const ::vboData_proto& meshData_proto::_internal_vbo_uv() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  const ::vboData_proto* p = _impl_.vbo_uv_;
  return p != nullptr ? *p : reinterpret_cast<const ::vboData_proto&>(::_vboData_proto_default_instance_);
}
inline const ::vboData_proto& meshData_proto::vbo_uv() const {
  // @@protoc_insertion_point(field_get:meshData_proto.vbo_uv)
  return _internal_vbo_uv();
}
inline void meshData_proto::unsafe_arena_set_allocated_vbo_uv(::vboData_proto* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.vbo_uv_);
  }
  _impl_.vbo_uv_ = reinterpret_cast<::vboData_proto*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000008u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000008u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:meshData_proto.vbo_uv)
}
inline ::vboData_proto* meshData_proto::release_vbo_uv() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);

  _impl_._has_bits_[0] &= ~0x00000008u;
  ::vboData_proto* released = _impl_.vbo_uv_;
  _impl_.vbo_uv_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old = reinterpret_cast<::google::protobuf::MessageLite*>(released);
  released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  if (GetArenaForAllocation() == nullptr) {
    delete old;
  }
#else   // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return released;
}
inline ::vboData_proto* meshData_proto::unsafe_arena_release_vbo_uv() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:meshData_proto.vbo_uv)

  _impl_._has_bits_[0] &= ~0x00000008u;
  ::vboData_proto* temp = _impl_.vbo_uv_;
  _impl_.vbo_uv_ = nullptr;
  return temp;
}
inline ::vboData_proto* meshData_proto::_internal_mutable_vbo_uv() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000008u;
  if (_impl_.vbo_uv_ == nullptr) {
    auto* p = CreateMaybeMessage<::vboData_proto>(GetArenaForAllocation());
    _impl_.vbo_uv_ = reinterpret_cast<::vboData_proto*>(p);
  }
  return _impl_.vbo_uv_;
}
inline ::vboData_proto* meshData_proto::mutable_vbo_uv() {
  ::vboData_proto* _msg = _internal_mutable_vbo_uv();
  // @@protoc_insertion_point(field_mutable:meshData_proto.vbo_uv)
  return _msg;
}
inline void meshData_proto::set_allocated_vbo_uv(::vboData_proto* value) {
  ::google::protobuf::Arena* message_arena = GetArenaForAllocation();
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.vbo_uv_);
  }

  if (value != nullptr) {
    ::google::protobuf::Arena* submessage_arena =
        ::google::protobuf::Arena::InternalGetOwningArena(reinterpret_cast<::google::protobuf::MessageLite*>(value));
    if (message_arena != submessage_arena) {
      value = ::google::protobuf::internal::GetOwnedMessage(message_arena, value, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000008u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000008u;
  }

  _impl_.vbo_uv_ = reinterpret_cast<::vboData_proto*>(value);
  // @@protoc_insertion_point(field_set_allocated:meshData_proto.vbo_uv)
}

// optional .vboData_proto vbo_index = 8;
inline bool meshData_proto::has_vbo_index() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.vbo_index_ != nullptr);
  return value;
}
inline const ::vboData_proto& meshData_proto::_internal_vbo_index() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  const ::vboData_proto* p = _impl_.vbo_index_;
  return p != nullptr ? *p : reinterpret_cast<const ::vboData_proto&>(::_vboData_proto_default_instance_);
}
inline const ::vboData_proto& meshData_proto::vbo_index() const {
  // @@protoc_insertion_point(field_get:meshData_proto.vbo_index)
  return _internal_vbo_index();
}
inline void meshData_proto::unsafe_arena_set_allocated_vbo_index(::vboData_proto* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.vbo_index_);
  }
  _impl_.vbo_index_ = reinterpret_cast<::vboData_proto*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000010u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000010u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:meshData_proto.vbo_index)
}
inline ::vboData_proto* meshData_proto::release_vbo_index() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);

  _impl_._has_bits_[0] &= ~0x00000010u;
  ::vboData_proto* released = _impl_.vbo_index_;
  _impl_.vbo_index_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old = reinterpret_cast<::google::protobuf::MessageLite*>(released);
  released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  if (GetArenaForAllocation() == nullptr) {
    delete old;
  }
#else   // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return released;
}
inline ::vboData_proto* meshData_proto::unsafe_arena_release_vbo_index() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:meshData_proto.vbo_index)

  _impl_._has_bits_[0] &= ~0x00000010u;
  ::vboData_proto* temp = _impl_.vbo_index_;
  _impl_.vbo_index_ = nullptr;
  return temp;
}
inline ::vboData_proto* meshData_proto::_internal_mutable_vbo_index() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000010u;
  if (_impl_.vbo_index_ == nullptr) {
    auto* p = CreateMaybeMessage<::vboData_proto>(GetArenaForAllocation());
    _impl_.vbo_index_ = reinterpret_cast<::vboData_proto*>(p);
  }
  return _impl_.vbo_index_;
}
inline ::vboData_proto* meshData_proto::mutable_vbo_index() {
  ::vboData_proto* _msg = _internal_mutable_vbo_index();
  // @@protoc_insertion_point(field_mutable:meshData_proto.vbo_index)
  return _msg;
}
inline void meshData_proto::set_allocated_vbo_index(::vboData_proto* value) {
  ::google::protobuf::Arena* message_arena = GetArenaForAllocation();
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.vbo_index_);
  }

  if (value != nullptr) {
    ::google::protobuf::Arena* submessage_arena =
        ::google::protobuf::Arena::InternalGetOwningArena(reinterpret_cast<::google::protobuf::MessageLite*>(value));
    if (message_arena != submessage_arena) {
      value = ::google::protobuf::internal::GetOwnedMessage(message_arena, value, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000010u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000010u;
  }

  _impl_.vbo_index_ = reinterpret_cast<::vboData_proto*>(value);
  // @@protoc_insertion_point(field_set_allocated:meshData_proto.vbo_index)
}

// optional .textureData_proto text_color = 9;
inline bool meshData_proto::has_text_color() const {
  bool value = (_impl_._has_bits_[0] & 0x00000020u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.text_color_ != nullptr);
  return value;
}
inline const ::textureData_proto& meshData_proto::_internal_text_color() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  const ::textureData_proto* p = _impl_.text_color_;
  return p != nullptr ? *p : reinterpret_cast<const ::textureData_proto&>(::_textureData_proto_default_instance_);
}
inline const ::textureData_proto& meshData_proto::text_color() const {
  // @@protoc_insertion_point(field_get:meshData_proto.text_color)
  return _internal_text_color();
}
inline void meshData_proto::unsafe_arena_set_allocated_text_color(::textureData_proto* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.text_color_);
  }
  _impl_.text_color_ = reinterpret_cast<::textureData_proto*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000020u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000020u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:meshData_proto.text_color)
}
inline ::textureData_proto* meshData_proto::release_text_color() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);

  _impl_._has_bits_[0] &= ~0x00000020u;
  ::textureData_proto* released = _impl_.text_color_;
  _impl_.text_color_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old = reinterpret_cast<::google::protobuf::MessageLite*>(released);
  released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  if (GetArenaForAllocation() == nullptr) {
    delete old;
  }
#else   // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return released;
}
inline ::textureData_proto* meshData_proto::unsafe_arena_release_text_color() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:meshData_proto.text_color)

  _impl_._has_bits_[0] &= ~0x00000020u;
  ::textureData_proto* temp = _impl_.text_color_;
  _impl_.text_color_ = nullptr;
  return temp;
}
inline ::textureData_proto* meshData_proto::_internal_mutable_text_color() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000020u;
  if (_impl_.text_color_ == nullptr) {
    auto* p = CreateMaybeMessage<::textureData_proto>(GetArenaForAllocation());
    _impl_.text_color_ = reinterpret_cast<::textureData_proto*>(p);
  }
  return _impl_.text_color_;
}
inline ::textureData_proto* meshData_proto::mutable_text_color() {
  ::textureData_proto* _msg = _internal_mutable_text_color();
  // @@protoc_insertion_point(field_mutable:meshData_proto.text_color)
  return _msg;
}
inline void meshData_proto::set_allocated_text_color(::textureData_proto* value) {
  ::google::protobuf::Arena* message_arena = GetArenaForAllocation();
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.text_color_);
  }

  if (value != nullptr) {
    ::google::protobuf::Arena* submessage_arena =
        ::google::protobuf::Arena::InternalGetOwningArena(reinterpret_cast<::google::protobuf::MessageLite*>(value));
    if (message_arena != submessage_arena) {
      value = ::google::protobuf::internal::GetOwnedMessage(message_arena, value, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000020u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000020u;
  }

  _impl_.text_color_ = reinterpret_cast<::textureData_proto*>(value);
  // @@protoc_insertion_point(field_set_allocated:meshData_proto.text_color)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


namespace google {
namespace protobuf {

template <>
struct is_proto_enum<::meshData_proto_RENDER_MODE> : std::true_type {};

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_meshData_2eproto_2epb_2eh