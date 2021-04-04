// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ring_keys.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ring_5fkeys_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ring_5fkeys_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ring_5fkeys_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ring_5fkeys_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ring_5fkeys_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_ring_5fkeys_2eproto_metadata_getter(int index);
namespace scan_context_io {
class RingKey;
struct RingKeyDefaultTypeInternal;
extern RingKeyDefaultTypeInternal _RingKey_default_instance_;
class RingKeys;
struct RingKeysDefaultTypeInternal;
extern RingKeysDefaultTypeInternal _RingKeys_default_instance_;
}  // namespace scan_context_io
PROTOBUF_NAMESPACE_OPEN
template<> ::scan_context_io::RingKey* Arena::CreateMaybeMessage<::scan_context_io::RingKey>(Arena*);
template<> ::scan_context_io::RingKeys* Arena::CreateMaybeMessage<::scan_context_io::RingKeys>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace scan_context_io {

// ===================================================================

class RingKey PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:scan_context_io.RingKey) */ {
 public:
  inline RingKey() : RingKey(nullptr) {}
  virtual ~RingKey();
  explicit constexpr RingKey(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RingKey(const RingKey& from);
  RingKey(RingKey&& from) noexcept
    : RingKey() {
    *this = ::std::move(from);
  }

  inline RingKey& operator=(const RingKey& from) {
    CopyFrom(from);
    return *this;
  }
  inline RingKey& operator=(RingKey&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const RingKey& default_instance() {
    return *internal_default_instance();
  }
  static inline const RingKey* internal_default_instance() {
    return reinterpret_cast<const RingKey*>(
               &_RingKey_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RingKey& a, RingKey& b) {
    a.Swap(&b);
  }
  inline void Swap(RingKey* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RingKey* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RingKey* New() const final {
    return CreateMaybeMessage<RingKey>(nullptr);
  }

  RingKey* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RingKey>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RingKey& from);
  void MergeFrom(const RingKey& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RingKey* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "scan_context_io.RingKey";
  }
  protected:
  explicit RingKey(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_ring_5fkeys_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 1,
  };
  // repeated float data = 1;
  int data_size() const;
  private:
  int _internal_data_size() const;
  public:
  void clear_data();
  private:
  float _internal_data(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      _internal_data() const;
  void _internal_add_data(float value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      _internal_mutable_data();
  public:
  float data(int index) const;
  void set_data(int index, float value);
  void add_data(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      data() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_data();

  // @@protoc_insertion_point(class_scope:scan_context_io.RingKey)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > data_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ring_5fkeys_2eproto;
};
// -------------------------------------------------------------------

class RingKeys PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:scan_context_io.RingKeys) */ {
 public:
  inline RingKeys() : RingKeys(nullptr) {}
  virtual ~RingKeys();
  explicit constexpr RingKeys(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RingKeys(const RingKeys& from);
  RingKeys(RingKeys&& from) noexcept
    : RingKeys() {
    *this = ::std::move(from);
  }

  inline RingKeys& operator=(const RingKeys& from) {
    CopyFrom(from);
    return *this;
  }
  inline RingKeys& operator=(RingKeys&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const RingKeys& default_instance() {
    return *internal_default_instance();
  }
  static inline const RingKeys* internal_default_instance() {
    return reinterpret_cast<const RingKeys*>(
               &_RingKeys_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(RingKeys& a, RingKeys& b) {
    a.Swap(&b);
  }
  inline void Swap(RingKeys* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RingKeys* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RingKeys* New() const final {
    return CreateMaybeMessage<RingKeys>(nullptr);
  }

  RingKeys* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RingKeys>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RingKeys& from);
  void MergeFrom(const RingKeys& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RingKeys* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "scan_context_io.RingKeys";
  }
  protected:
  explicit RingKeys(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_ring_5fkeys_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 1,
  };
  // repeated .scan_context_io.RingKey data = 1;
  int data_size() const;
  private:
  int _internal_data_size() const;
  public:
  void clear_data();
  ::scan_context_io::RingKey* mutable_data(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::scan_context_io::RingKey >*
      mutable_data();
  private:
  const ::scan_context_io::RingKey& _internal_data(int index) const;
  ::scan_context_io::RingKey* _internal_add_data();
  public:
  const ::scan_context_io::RingKey& data(int index) const;
  ::scan_context_io::RingKey* add_data();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::scan_context_io::RingKey >&
      data() const;

  // @@protoc_insertion_point(class_scope:scan_context_io.RingKeys)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::scan_context_io::RingKey > data_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ring_5fkeys_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RingKey

// repeated float data = 1;
inline int RingKey::_internal_data_size() const {
  return data_.size();
}
inline int RingKey::data_size() const {
  return _internal_data_size();
}
inline void RingKey::clear_data() {
  data_.Clear();
}
inline float RingKey::_internal_data(int index) const {
  return data_.Get(index);
}
inline float RingKey::data(int index) const {
  // @@protoc_insertion_point(field_get:scan_context_io.RingKey.data)
  return _internal_data(index);
}
inline void RingKey::set_data(int index, float value) {
  data_.Set(index, value);
  // @@protoc_insertion_point(field_set:scan_context_io.RingKey.data)
}
inline void RingKey::_internal_add_data(float value) {
  data_.Add(value);
}
inline void RingKey::add_data(float value) {
  _internal_add_data(value);
  // @@protoc_insertion_point(field_add:scan_context_io.RingKey.data)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
RingKey::_internal_data() const {
  return data_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
RingKey::data() const {
  // @@protoc_insertion_point(field_list:scan_context_io.RingKey.data)
  return _internal_data();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
RingKey::_internal_mutable_data() {
  return &data_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
RingKey::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:scan_context_io.RingKey.data)
  return _internal_mutable_data();
}

// -------------------------------------------------------------------

// RingKeys

// repeated .scan_context_io.RingKey data = 1;
inline int RingKeys::_internal_data_size() const {
  return data_.size();
}
inline int RingKeys::data_size() const {
  return _internal_data_size();
}
inline void RingKeys::clear_data() {
  data_.Clear();
}
inline ::scan_context_io::RingKey* RingKeys::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:scan_context_io.RingKeys.data)
  return data_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::scan_context_io::RingKey >*
RingKeys::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:scan_context_io.RingKeys.data)
  return &data_;
}
inline const ::scan_context_io::RingKey& RingKeys::_internal_data(int index) const {
  return data_.Get(index);
}
inline const ::scan_context_io::RingKey& RingKeys::data(int index) const {
  // @@protoc_insertion_point(field_get:scan_context_io.RingKeys.data)
  return _internal_data(index);
}
inline ::scan_context_io::RingKey* RingKeys::_internal_add_data() {
  return data_.Add();
}
inline ::scan_context_io::RingKey* RingKeys::add_data() {
  // @@protoc_insertion_point(field_add:scan_context_io.RingKeys.data)
  return _internal_add_data();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::scan_context_io::RingKey >&
RingKeys::data() const {
  // @@protoc_insertion_point(field_list:scan_context_io.RingKeys.data)
  return data_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace scan_context_io

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ring_5fkeys_2eproto
