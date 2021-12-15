// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "System/Object.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::ValueType);
DEFINE_IL2CPP_ARG_TYPE(System::ValueType*, "System", "ValueType");
// Type namespace: System
namespace System {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.ValueType
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E9E448
  class ValueType : public System::Object {
    public:
    // static private System.Boolean InternalEquals(System.Object o1, System.Object o2, out System.Object[] fields)
    // Offset: 0x25D4E74
    static bool InternalEquals(::Il2CppObject* o1, ::Il2CppObject* o2, ByRef<::ArrayW<::Il2CppObject*>> fields);
    // static System.Boolean DefaultEquals(System.Object o1, System.Object o2)
    // Offset: 0x25D4E78
    static bool DefaultEquals(::Il2CppObject* o1, ::Il2CppObject* o2);
    // static System.Int32 InternalGetHashCode(System.Object o, out System.Object[] fields)
    // Offset: 0x25D5044
    static int InternalGetHashCode(::Il2CppObject* o, ByRef<::ArrayW<::Il2CppObject*>> fields);
    // protected System.Void .ctor()
    // Offset: 0x25D4E6C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValueType* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ValueType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValueType*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x25D5040
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x25D5048
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x25D50D4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.ValueType
  #pragma pack(pop)
}
template<class T>
struct is_value_type<T, typename std::enable_if_t<std::is_base_of_v<System::ValueType, T>>> : std::true_type{};
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ValueType::InternalEquals
// Il2CppName: InternalEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*, ::Il2CppObject*, ByRef<::ArrayW<::Il2CppObject*>>)>(&System::ValueType::InternalEquals)> {
  static const MethodInfo* get() {
    static auto* o1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* o2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* fields = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ValueType*), "InternalEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o1, o2, fields});
  }
};
// Writing MetadataGetter for method: System::ValueType::DefaultEquals
// Il2CppName: DefaultEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*, ::Il2CppObject*)>(&System::ValueType::DefaultEquals)> {
  static const MethodInfo* get() {
    static auto* o1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* o2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ValueType*), "DefaultEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o1, o2});
  }
};
// Writing MetadataGetter for method: System::ValueType::InternalGetHashCode
// Il2CppName: InternalGetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppObject*, ByRef<::ArrayW<::Il2CppObject*>>)>(&System::ValueType::InternalGetHashCode)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* fields = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ValueType*), "InternalGetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o, fields});
  }
};
// Writing MetadataGetter for method: System::ValueType::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ValueType::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ValueType::*)(::Il2CppObject*)>(&System::ValueType::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ValueType*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ValueType::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ValueType::*)()>(&System::ValueType::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ValueType*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ValueType::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::ValueType::*)()>(&System::ValueType::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ValueType*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
