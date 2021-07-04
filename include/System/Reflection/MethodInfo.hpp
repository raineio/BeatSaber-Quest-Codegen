// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.Reflection.MethodBase
#include "System/Reflection/MethodBase.hpp"
// Including type: System.Runtime.InteropServices._MethodInfo
#include "System/Runtime/InteropServices/_MethodInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberTypes
  struct MemberTypes;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.MethodInfo
  // [ComVisibleAttribute] Offset: D7BE4C
  // [ClassInterfaceAttribute] Offset: D7BE4C
  // [ComDefaultInterfaceAttribute] Offset: D7BE4C
  class MethodInfo : public System::Reflection::MethodBase/*, public System::Runtime::InteropServices::_MethodInfo*/ {
    public:
    // Creating value type constructor for type: MethodInfo
    MethodInfo() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::InteropServices::_MethodInfo
    operator System::Runtime::InteropServices::_MethodInfo() noexcept {
      return *reinterpret_cast<System::Runtime::InteropServices::_MethodInfo*>(this);
    }
    // public System.Type get_ReturnType()
    // Offset: 0x1C7D78C
    System::Type* get_ReturnType();
    // public System.Reflection.MethodInfo GetBaseDefinition()
    // Offset: 0xFFFFFFFF
    System::Reflection::MethodInfo* GetBaseDefinition();
    // public System.Reflection.MethodInfo GetGenericMethodDefinition()
    // Offset: 0x1C7D86C
    System::Reflection::MethodInfo* GetGenericMethodDefinition();
    // public System.Reflection.MethodInfo MakeGenericMethod(params System.Type[] typeArguments)
    // Offset: 0x1C7D8EC
    System::Reflection::MethodInfo* MakeGenericMethod(::Array<System::Type*>* typeArguments);
    // Creating initializer_list -> params proxy for: System.Reflection.MethodInfo MakeGenericMethod(params System.Type[] typeArguments)
    System::Reflection::MethodInfo* MakeGenericMethod(std::initializer_list<System::Type*> typeArguments);
    // Creating TArgs -> initializer_list proxy for: System.Reflection.MethodInfo MakeGenericMethod(params System.Type[] typeArguments)
    template<class ...TParams>
    System::Reflection::MethodInfo* MakeGenericMethod(TParams&&... typeArguments) {
      return MakeGenericMethod({typeArguments...});
    }
    // System.Reflection.MethodInfo GetBaseMethod()
    // Offset: 0x1C7D96C
    System::Reflection::MethodInfo* GetBaseMethod();
    // protected System.Void .ctor()
    // Offset: 0x1C7D770
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Void MethodBase::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::MethodInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodInfo*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1C7D774
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Boolean MethodBase::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1C7D780
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Int32 MethodBase::GetHashCode()
    int GetHashCode();
    // public override System.Reflection.MemberTypes get_MemberType()
    // Offset: 0x1C7D784
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.MemberTypes MemberInfo::get_MemberType()
    System::Reflection::MemberTypes get_MemberType();
    // public override System.Type[] GetGenericArguments()
    // Offset: 0x1C7D7EC
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Type[] MethodBase::GetGenericArguments()
    ::Array<System::Type*>* GetGenericArguments();
  }; // System.Reflection.MethodInfo
  #pragma pack(pop)
  // static public System.Boolean op_Equality(System.Reflection.MethodInfo left, System.Reflection.MethodInfo right)
  // Offset: 0x1C7CCFC
  bool operator ==(System::Reflection::MethodInfo* left, System::Reflection::MethodInfo& right);
  // static public System.Boolean op_Inequality(System.Reflection.MethodInfo left, System.Reflection.MethodInfo right)
  // Offset: 0x1C7CFFC
  bool operator !=(System::Reflection::MethodInfo* left, System::Reflection::MethodInfo& right);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MethodInfo*, "System.Reflection", "MethodInfo");
// Writing MetadataGetter for method: System::Reflection::MethodInfo::get_ReturnType
// Il2CppName: get_ReturnType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Reflection::MethodInfo::*)()>(&System::Reflection::MethodInfo::get_ReturnType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MethodInfo*), "get_ReturnType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MethodInfo::GetBaseDefinition
// Il2CppName: GetBaseDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (System::Reflection::MethodInfo::*)()>(&System::Reflection::MethodInfo::GetBaseDefinition)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MethodInfo*), "GetBaseDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MethodInfo::GetGenericMethodDefinition
// Il2CppName: GetGenericMethodDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (System::Reflection::MethodInfo::*)()>(&System::Reflection::MethodInfo::GetGenericMethodDefinition)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MethodInfo*), "GetGenericMethodDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MethodInfo::MakeGenericMethod
// Il2CppName: MakeGenericMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (System::Reflection::MethodInfo::*)(::Array<System::Type*>*)>(&System::Reflection::MethodInfo::MakeGenericMethod)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MethodInfo*), "MakeGenericMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<System::Type*>*>()});
  }
};
// Writing MetadataGetter for method: System::Reflection::MethodInfo::GetBaseMethod
// Il2CppName: GetBaseMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (System::Reflection::MethodInfo::*)()>(&System::Reflection::MethodInfo::GetBaseMethod)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MethodInfo*), "GetBaseMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MethodInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::MethodInfo::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::MethodInfo::*)(::Il2CppObject*)>(&System::Reflection::MethodInfo::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MethodInfo*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Reflection::MethodInfo::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::MethodInfo::*)()>(&System::Reflection::MethodInfo::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MethodInfo*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MethodInfo::get_MemberType
// Il2CppName: get_MemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MemberTypes (System::Reflection::MethodInfo::*)()>(&System::Reflection::MethodInfo::get_MemberType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MethodInfo*), "get_MemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MethodInfo::GetGenericArguments
// Il2CppName: GetGenericArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Type*>* (System::Reflection::MethodInfo::*)()>(&System::Reflection::MethodInfo::GetGenericArguments)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MethodInfo*), "GetGenericArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MethodInfo::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::MethodInfo::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
