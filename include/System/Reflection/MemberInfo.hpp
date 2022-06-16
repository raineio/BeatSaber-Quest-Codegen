// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.ICustomAttributeProvider
#include "System/Reflection/ICustomAttributeProvider.hpp"
// Including type: System.Runtime.InteropServices._MemberInfo
#include "System/Runtime/InteropServices/_MemberInfo.hpp"
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
  // Forward declaring type: MemberTypes
  struct MemberTypes;
  // Forward declaring type: Module
  class Module;
  // Forward declaring type: CustomAttributeData
  class CustomAttributeData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::MemberInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MemberInfo*, "System.Reflection", "MemberInfo");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.MemberInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [ClassInterfaceAttribute] Offset: 103005C
  // [ComVisibleAttribute] Offset: 103005C
  // [ComDefaultInterfaceAttribute] Offset: 103005C
  class MemberInfo : public ::Il2CppObject/*, public ::System::Reflection::ICustomAttributeProvider, public ::System::Runtime::InteropServices::_MemberInfo*/ {
    public:
    // Creating interface conversion operator: operator ::System::Reflection::ICustomAttributeProvider
    operator ::System::Reflection::ICustomAttributeProvider() noexcept {
      return *reinterpret_cast<::System::Reflection::ICustomAttributeProvider*>(this);
    }
    // Creating interface conversion operator: i_ICustomAttributeProvider
    inline ::System::Reflection::ICustomAttributeProvider* i_ICustomAttributeProvider() noexcept {
      return reinterpret_cast<::System::Reflection::ICustomAttributeProvider*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::InteropServices::_MemberInfo
    operator ::System::Runtime::InteropServices::_MemberInfo() noexcept {
      return *reinterpret_cast<::System::Runtime::InteropServices::_MemberInfo*>(this);
    }
    // Creating interface conversion operator: i__MemberInfo
    inline ::System::Runtime::InteropServices::_MemberInfo* i__MemberInfo() noexcept {
      return reinterpret_cast<::System::Runtime::InteropServices::_MemberInfo*>(this);
    }
    // public System.Reflection.MemberTypes get_MemberType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Reflection::MemberTypes get_MemberType();
    // public System.String get_Name()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Name();
    // public System.Type get_DeclaringType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Type* get_DeclaringType();
    // public System.Type get_ReflectedType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Type* get_ReflectedType();
    // public System.Int32 get_MetadataToken()
    // Offset: 0x2209750
    int get_MetadataToken();
    // public System.Reflection.Module get_Module()
    // Offset: 0x2209754
    ::System::Reflection::Module* get_Module();
    // public System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::Il2CppObject*> GetCustomAttributes(bool inherit);
    // public System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::Il2CppObject*> GetCustomAttributes(::System::Type* attributeType, bool inherit);
    // public System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsDefined(::System::Type* attributeType, bool inherit);
    // public System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributesData()
    // Offset: 0x22096F0
    ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData();
    // protected System.Void .ctor()
    // Offset: 0x22080C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemberInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::MemberInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemberInfo*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2209A50
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x22080D8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Reflection.MemberInfo
  #pragma pack(pop)
  // static public System.Boolean op_Equality(System.Reflection.MemberInfo left, System.Reflection.MemberInfo right)
  // Offset: 0x2204C68
  bool operator ==(::System::Reflection::MemberInfo* left, ::System::Reflection::MemberInfo& right);
  // static public System.Boolean op_Inequality(System.Reflection.MemberInfo left, System.Reflection.MemberInfo right)
  // Offset: 0x2209A34
  bool operator !=(::System::Reflection::MemberInfo* left, ::System::Reflection::MemberInfo& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::MemberInfo::get_MemberType
// Il2CppName: get_MemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberTypes (System::Reflection::MemberInfo::*)()>(&System::Reflection::MemberInfo::get_MemberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MemberInfo*), "get_MemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MemberInfo::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::MemberInfo::*)()>(&System::Reflection::MemberInfo::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MemberInfo*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MemberInfo::get_DeclaringType
// Il2CppName: get_DeclaringType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::MemberInfo::*)()>(&System::Reflection::MemberInfo::get_DeclaringType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MemberInfo*), "get_DeclaringType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MemberInfo::get_ReflectedType
// Il2CppName: get_ReflectedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::MemberInfo::*)()>(&System::Reflection::MemberInfo::get_ReflectedType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MemberInfo*), "get_ReflectedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MemberInfo::get_MetadataToken
// Il2CppName: get_MetadataToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::MemberInfo::*)()>(&System::Reflection::MemberInfo::get_MetadataToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MemberInfo*), "get_MetadataToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MemberInfo::get_Module
// Il2CppName: get_Module
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Module* (System::Reflection::MemberInfo::*)()>(&System::Reflection::MemberInfo::get_Module)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MemberInfo*), "get_Module", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MemberInfo::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Reflection::MemberInfo::*)(bool)>(&System::Reflection::MemberInfo::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MemberInfo*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::MemberInfo::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Reflection::MemberInfo::*)(::System::Type*, bool)>(&System::Reflection::MemberInfo::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MemberInfo*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::MemberInfo::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::MemberInfo::*)(::System::Type*, bool)>(&System::Reflection::MemberInfo::IsDefined)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MemberInfo*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::MemberInfo::GetCustomAttributesData
// Il2CppName: GetCustomAttributesData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (System::Reflection::MemberInfo::*)()>(&System::Reflection::MemberInfo::GetCustomAttributesData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MemberInfo*), "GetCustomAttributesData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MemberInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::MemberInfo::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::MemberInfo::*)(::Il2CppObject*)>(&System::Reflection::MemberInfo::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MemberInfo*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Reflection::MemberInfo::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::MemberInfo::*)()>(&System::Reflection::MemberInfo::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MemberInfo*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MemberInfo::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::MemberInfo::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
