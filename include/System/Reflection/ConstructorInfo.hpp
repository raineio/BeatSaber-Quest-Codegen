// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.MethodBase
#include "System/Reflection/MethodBase.hpp"
// Including type: System.Runtime.InteropServices._ConstructorInfo
#include "System/Runtime/InteropServices/_ConstructorInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: MemberTypes
  struct MemberTypes;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::ConstructorInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ConstructorInfo*, "System.Reflection", "ConstructorInfo");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.ConstructorInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComDefaultInterfaceAttribute] Offset: 1075300
  // [ClassInterfaceAttribute] Offset: 1075300
  // [ComVisibleAttribute] Offset: 1075300
  class ConstructorInfo : public ::System::Reflection::MethodBase/*, public ::System::Runtime::InteropServices::_ConstructorInfo*/ {
    public:
    // Creating interface conversion operator: operator ::System::Runtime::InteropServices::_ConstructorInfo
    operator ::System::Runtime::InteropServices::_ConstructorInfo() noexcept {
      return *reinterpret_cast<::System::Runtime::InteropServices::_ConstructorInfo*>(this);
    }
    // Creating interface conversion operator: i__ConstructorInfo
    inline ::System::Runtime::InteropServices::_ConstructorInfo* i__ConstructorInfo() noexcept {
      return reinterpret_cast<::System::Runtime::InteropServices::_ConstructorInfo*>(this);
    }
    // [ComVisibleAttribute] Offset: 0x107AA54
    // Get static field: static public readonly System.String ConstructorName
    static ::StringW _get_ConstructorName();
    // Set static field: static public readonly System.String ConstructorName
    static void _set_ConstructorName(::StringW value);
    // [ComVisibleAttribute] Offset: 0x107AA68
    // Get static field: static public readonly System.String TypeConstructorName
    static ::StringW _get_TypeConstructorName();
    // Set static field: static public readonly System.String TypeConstructorName
    static void _set_TypeConstructorName(::StringW value);
    // static private System.Void .cctor()
    // Offset: 0x22CAF6C
    static void _cctor();
    // public System.Object Invoke(System.Object[] parameters)
    // Offset: 0x22CAE04
    ::Il2CppObject* Invoke(::ArrayW<::Il2CppObject*> parameters);
    // public System.Object Invoke(System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* Invoke(::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::ArrayW<::Il2CppObject*> parameters, ::System::Globalization::CultureInfo* culture);
    // public override System.Reflection.MemberTypes get_MemberType()
    // Offset: 0x22CADFC
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.MemberTypes MemberInfo::get_MemberType()
    ::System::Reflection::MemberTypes get_MemberType();
    // protected System.Void .ctor()
    // Offset: 0x22CADF4
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Void MethodBase::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstructorInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::ConstructorInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstructorInfo*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x22CAEB0
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Boolean MethodBase::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x22CAEBC
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Int32 MethodBase::GetHashCode()
    int GetHashCode();
  }; // System.Reflection.ConstructorInfo
  #pragma pack(pop)
  // static public System.Boolean op_Equality(System.Reflection.ConstructorInfo left, System.Reflection.ConstructorInfo right)
  // Offset: 0x22CAEC4
  bool operator ==(::System::Reflection::ConstructorInfo* left, ::System::Reflection::ConstructorInfo& right);
  // static public System.Boolean op_Inequality(System.Reflection.ConstructorInfo left, System.Reflection.ConstructorInfo right)
  // Offset: 0x22CAF10
  bool operator !=(::System::Reflection::ConstructorInfo* left, ::System::Reflection::ConstructorInfo& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::ConstructorInfo::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Reflection::ConstructorInfo::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ConstructorInfo*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::ConstructorInfo::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::ConstructorInfo::*)(::ArrayW<::Il2CppObject*>)>(&System::Reflection::ConstructorInfo::Invoke)> {
  static const MethodInfo* get() {
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ConstructorInfo*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: System::Reflection::ConstructorInfo::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::ConstructorInfo::*)(::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::Il2CppObject*>, ::System::Globalization::CultureInfo*)>(&System::Reflection::ConstructorInfo::Invoke)> {
  static const MethodInfo* get() {
    static auto* invokeAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ConstructorInfo*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{invokeAttr, binder, parameters, culture});
  }
};
// Writing MetadataGetter for method: System::Reflection::ConstructorInfo::get_MemberType
// Il2CppName: get_MemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberTypes (System::Reflection::ConstructorInfo::*)()>(&System::Reflection::ConstructorInfo::get_MemberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ConstructorInfo*), "get_MemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::ConstructorInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::ConstructorInfo::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::ConstructorInfo::*)(::Il2CppObject*)>(&System::Reflection::ConstructorInfo::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ConstructorInfo*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Reflection::ConstructorInfo::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::ConstructorInfo::*)()>(&System::Reflection::ConstructorInfo::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ConstructorInfo*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::ConstructorInfo::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::ConstructorInfo::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
