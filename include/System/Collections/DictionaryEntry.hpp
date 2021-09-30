// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Collections.DictionaryEntry
  // [TokenAttribute] Offset: FFFFFFFF
  struct DictionaryEntry/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Object _key
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* key;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object _value
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating value type constructor for type: DictionaryEntry
    constexpr DictionaryEntry(::Il2CppObject* key_ = {}, ::Il2CppObject* value_ = {}) noexcept : key{key_}, value{value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private System.Object _key
    ::Il2CppObject*& dyn__key();
    // Get instance field reference: private System.Object _value
    ::Il2CppObject*& dyn__value();
    // public System.Object get_Key()
    // Offset: 0x199A14C
    ::Il2CppObject* get_Key();
    // public System.Object get_Value()
    // Offset: 0x199A154
    ::Il2CppObject* get_Value();
    // public System.Void .ctor(System.Object key, System.Object value)
    // Offset: 0x199A144
    // ABORTED: conflicts with another method.  DictionaryEntry(::Il2CppObject* key, ::Il2CppObject* value);
  }; // System.Collections.DictionaryEntry
  #pragma pack(pop)
  static check_size<sizeof(DictionaryEntry), 8 + sizeof(::Il2CppObject*)> __System_Collections_DictionaryEntrySizeCheck;
  static_assert(sizeof(DictionaryEntry) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::DictionaryEntry, "System.Collections", "DictionaryEntry");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::DictionaryEntry::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::DictionaryEntry::*)()>(&System::Collections::DictionaryEntry::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::DictionaryEntry), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::DictionaryEntry::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::DictionaryEntry::*)()>(&System::Collections::DictionaryEntry::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::DictionaryEntry), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::DictionaryEntry::DictionaryEntry
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
