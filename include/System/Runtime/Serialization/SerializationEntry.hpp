// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationEntry
  struct SerializationEntry;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationEntry, "System.Runtime.Serialization", "SerializationEntry");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.Serialization.SerializationEntry
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: EA0F48
  struct SerializationEntry/*, public System::ValueType*/ {
    public:
    public:
    // private System.Type m_type
    // Size: 0x8
    // Offset: 0x0
    System::Type* m_type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private System.Object m_value
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppObject* m_value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.String m_name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Creating value type constructor for type: SerializationEntry
    constexpr SerializationEntry(System::Type* m_type_ = {}, ::Il2CppObject* m_value_ = {}, ::Il2CppString* m_name_ = {}) noexcept : m_type{m_type_}, m_value{m_value_}, m_name{m_name_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private System.Type m_type
    System::Type*& dyn_m_type();
    // Get instance field reference: private System.Object m_value
    ::Il2CppObject*& dyn_m_value();
    // Get instance field reference: private System.String m_name
    ::Il2CppString*& dyn_m_name();
    // public System.Object get_Value()
    // Offset: 0x192191C
    ::Il2CppObject* get_Value();
    // public System.String get_Name()
    // Offset: 0x1921924
    ::Il2CppString* get_Name();
    // System.Void .ctor(System.String entryName, System.Object entryValue, System.Type entryType)
    // Offset: 0x192192C
    SerializationEntry(::Il2CppString* entryName, ::Il2CppObject* entryValue, System::Type* entryType);
  }; // System.Runtime.Serialization.SerializationEntry
  #pragma pack(pop)
  static check_size<sizeof(SerializationEntry), 16 + sizeof(::Il2CppString*)> __System_Runtime_Serialization_SerializationEntrySizeCheck;
  static_assert(sizeof(SerializationEntry) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEntry::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::SerializationEntry::*)()>(&System::Runtime::Serialization::SerializationEntry::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationEntry), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEntry::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Serialization::SerializationEntry::*)()>(&System::Runtime::Serialization::SerializationEntry::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationEntry), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEntry::SerializationEntry
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
