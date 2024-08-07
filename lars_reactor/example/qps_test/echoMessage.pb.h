// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: echoMessage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_echoMessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_echoMessage_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_echoMessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_echoMessage_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_echoMessage_2eproto;
namespace qps_test {
class EchoMessage;
struct EchoMessageDefaultTypeInternal;
extern EchoMessageDefaultTypeInternal _EchoMessage_default_instance_;
}  // namespace qps_test
PROTOBUF_NAMESPACE_OPEN
template<> ::qps_test::EchoMessage* Arena::CreateMaybeMessage<::qps_test::EchoMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace qps_test {

// ===================================================================

class EchoMessage final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:qps_test.EchoMessage) */ {
 public:
  inline EchoMessage() : EchoMessage(nullptr) {}
  ~EchoMessage() override;
  explicit PROTOBUF_CONSTEXPR EchoMessage(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  EchoMessage(const EchoMessage& from);
  EchoMessage(EchoMessage&& from) noexcept
    : EchoMessage() {
    *this = ::std::move(from);
  }

  inline EchoMessage& operator=(const EchoMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline EchoMessage& operator=(EchoMessage&& from) noexcept {
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

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const EchoMessage& default_instance() {
    return *internal_default_instance();
  }
  static inline const EchoMessage* internal_default_instance() {
    return reinterpret_cast<const EchoMessage*>(
               &_EchoMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(EchoMessage& a, EchoMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(EchoMessage* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(EchoMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  EchoMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<EchoMessage>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const EchoMessage& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const EchoMessage& from) {
    EchoMessage::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(EchoMessage* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "qps_test.EchoMessage";
  }
  protected:
  explicit EchoMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kContentFieldNumber = 1,
    kIdFieldNumber = 2,
  };
  // string content = 1;
  void clear_content();
  const std::string& content() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_content(ArgT0&& arg0, ArgT... args);
  std::string* mutable_content();
  PROTOBUF_NODISCARD std::string* release_content();
  void set_allocated_content(std::string* content);
  private:
  const std::string& _internal_content() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_content(const std::string& value);
  std::string* _internal_mutable_content();
  public:

  // int32 id = 2;
  void clear_id();
  int32_t id() const;
  void set_id(int32_t value);
  private:
  int32_t _internal_id() const;
  void _internal_set_id(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:qps_test.EchoMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr content_;
    int32_t id_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_echoMessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// EchoMessage

// string content = 1;
inline void EchoMessage::clear_content() {
  _impl_.content_.ClearToEmpty();
}
inline const std::string& EchoMessage::content() const {
  // @@protoc_insertion_point(field_get:qps_test.EchoMessage.content)
  return _internal_content();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void EchoMessage::set_content(ArgT0&& arg0, ArgT... args) {
 
 _impl_.content_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:qps_test.EchoMessage.content)
}
inline std::string* EchoMessage::mutable_content() {
  std::string* _s = _internal_mutable_content();
  // @@protoc_insertion_point(field_mutable:qps_test.EchoMessage.content)
  return _s;
}
inline const std::string& EchoMessage::_internal_content() const {
  return _impl_.content_.Get();
}
inline void EchoMessage::_internal_set_content(const std::string& value) {
  
  _impl_.content_.Set(value, GetArenaForAllocation());
}
inline std::string* EchoMessage::_internal_mutable_content() {
  
  return _impl_.content_.Mutable(GetArenaForAllocation());
}
inline std::string* EchoMessage::release_content() {
  // @@protoc_insertion_point(field_release:qps_test.EchoMessage.content)
  return _impl_.content_.Release();
}
inline void EchoMessage::set_allocated_content(std::string* content) {
  if (content != nullptr) {
    
  } else {
    
  }
  _impl_.content_.SetAllocated(content, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.content_.IsDefault()) {
    _impl_.content_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:qps_test.EchoMessage.content)
}

// int32 id = 2;
inline void EchoMessage::clear_id() {
  _impl_.id_ = 0;
}
inline int32_t EchoMessage::_internal_id() const {
  return _impl_.id_;
}
inline int32_t EchoMessage::id() const {
  // @@protoc_insertion_point(field_get:qps_test.EchoMessage.id)
  return _internal_id();
}
inline void EchoMessage::_internal_set_id(int32_t value) {
  
  _impl_.id_ = value;
}
inline void EchoMessage::set_id(int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:qps_test.EchoMessage.id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace qps_test

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_echoMessage_2eproto
