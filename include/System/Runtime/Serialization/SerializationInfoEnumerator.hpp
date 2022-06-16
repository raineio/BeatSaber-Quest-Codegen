// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationEntry
  struct SerializationEntry;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfoEnumerator
  class SerializationInfoEnumerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::SerializationInfoEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationInfoEnumerator*, "System.Runtime.Serialization", "SerializationInfoEnumerator");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.SerializationInfoEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1032528
  class SerializationInfoEnumerator : public ::Il2CppObject/*, public ::System::Collections::IEnumerator*/ {
    public:
    public:
    // private System.String[] m_members
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::StringW> m_members;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.Object[] m_data
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Il2CppObject*> m_data;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // private System.Type[] m_types
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::System::Type*> m_types;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    // private System.Int32 m_numItems
    // Size: 0x4
    // Offset: 0x28
    int m_numItems;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_currItem
    // Size: 0x4
    // Offset: 0x2C
    int m_currItem;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_current
    // Size: 0x1
    // Offset: 0x30
    bool m_current;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerator
    operator ::System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Creating interface conversion operator: i_IEnumerator
    inline ::System::Collections::IEnumerator* i_IEnumerator() noexcept {
      return reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Get instance field reference: private System.String[] m_members
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_m_members();
    // Get instance field reference: private System.Object[] m_data
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn_m_data();
    // Get instance field reference: private System.Type[] m_types
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Type*>& dyn_m_types();
    // Get instance field reference: private System.Int32 m_numItems
    [[deprecated("Use field access instead!")]] int& dyn_m_numItems();
    // Get instance field reference: private System.Int32 m_currItem
    [[deprecated("Use field access instead!")]] int& dyn_m_currItem();
    // Get instance field reference: private System.Boolean m_current
    [[deprecated("Use field access instead!")]] bool& dyn_m_current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x163E57C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Runtime.Serialization.SerializationEntry get_Current()
    // Offset: 0x163E6A0
    ::System::Runtime::Serialization::SerializationEntry get_Current();
    // public System.String get_Name()
    // Offset: 0x162F5CC
    ::StringW get_Name();
    // public System.Object get_Value()
    // Offset: 0x162F75C
    ::Il2CppObject* get_Value();
    // public System.Type get_ObjectType()
    // Offset: 0x162F694
    ::System::Type* get_ObjectType();
    // System.Void .ctor(System.String[] members, System.Object[] info, System.Type[] types, System.Int32 numItems)
    // Offset: 0x163D1D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationInfoEnumerator* New_ctor(::ArrayW<::StringW> members, ::ArrayW<::Il2CppObject*> info, ::ArrayW<::System::Type*> types, int numItems) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::SerializationInfoEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationInfoEnumerator*, creationType>(members, info, types, numItems)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x162F824
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x163E7B4
    void Reset();
  }; // System.Runtime.Serialization.SerializationInfoEnumerator
  #pragma pack(pop)
  static check_size<sizeof(SerializationInfoEnumerator), 48 + sizeof(bool)> __System_Runtime_Serialization_SerializationInfoEnumeratorSizeCheck;
  static_assert(sizeof(SerializationInfoEnumerator) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationInfoEnumerator::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::SerializationInfoEnumerator::*)()>(&System::Runtime::Serialization::SerializationInfoEnumerator::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationInfoEnumerator*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationInfoEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::SerializationEntry (System::Runtime::Serialization::SerializationInfoEnumerator::*)()>(&System::Runtime::Serialization::SerializationInfoEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationInfoEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationInfoEnumerator::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Serialization::SerializationInfoEnumerator::*)()>(&System::Runtime::Serialization::SerializationInfoEnumerator::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationInfoEnumerator*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationInfoEnumerator::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::SerializationInfoEnumerator::*)()>(&System::Runtime::Serialization::SerializationInfoEnumerator::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationInfoEnumerator*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationInfoEnumerator::get_ObjectType
// Il2CppName: get_ObjectType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Runtime::Serialization::SerializationInfoEnumerator::*)()>(&System::Runtime::Serialization::SerializationInfoEnumerator::get_ObjectType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationInfoEnumerator*), "get_ObjectType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationInfoEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationInfoEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::SerializationInfoEnumerator::*)()>(&System::Runtime::Serialization::SerializationInfoEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationInfoEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationInfoEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SerializationInfoEnumerator::*)()>(&System::Runtime::Serialization::SerializationInfoEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationInfoEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
