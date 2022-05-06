// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberTypes
  struct MemberTypes;
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: TypeExtensions
  class TypeExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::TypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::TypeExtensions*, "Newtonsoft.Json.Utilities", "TypeExtensions");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.TypeExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10AF14C
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TypeExtensions : public ::Il2CppObject {
    public:
    // static public System.Reflection.MemberTypes MemberType(System.Reflection.MemberInfo memberInfo)
    // Offset: 0x20835DC
    static ::System::Reflection::MemberTypes MemberType(::System::Reflection::MemberInfo* memberInfo);
    // static public System.Boolean ContainsGenericParameters(System.Type type)
    // Offset: 0x209787C
    static bool ContainsGenericParameters(::System::Type* type);
    // static public System.Boolean IsInterface(System.Type type)
    // Offset: 0x208ABF8
    static bool IsInterface(::System::Type* type);
    // static public System.Boolean IsGenericType(System.Type type)
    // Offset: 0x2094A90
    static bool IsGenericType(::System::Type* type);
    // static public System.Boolean IsGenericTypeDefinition(System.Type type)
    // Offset: 0x208AC10
    static bool IsGenericTypeDefinition(::System::Type* type);
    // static public System.Type BaseType(System.Type type)
    // Offset: 0x2083370
    static ::System::Type* BaseType(::System::Type* type);
    // static public System.Boolean IsEnum(System.Type type)
    // Offset: 0x2089898
    static bool IsEnum(::System::Type* type);
    // static public System.Boolean IsClass(System.Type type)
    // Offset: 0x2094F88
    static bool IsClass(::System::Type* type);
    // static public System.Boolean IsSealed(System.Type type)
    // Offset: 0x209789C
    static bool IsSealed(::System::Type* type);
    // static public System.Boolean IsAbstract(System.Type type)
    // Offset: 0x208AC30
    static bool IsAbstract(::System::Type* type);
    // static public System.Boolean IsValueType(System.Type type)
    // Offset: 0x20948E8
    static bool IsValueType(::System::Type* type);
    // static public System.Boolean AssignableToTypeName(System.Type type, System.String fullTypeName, out System.Type match)
    // Offset: 0x20978B4
    static bool AssignableToTypeName(::System::Type* type, ::StringW fullTypeName, ByRef<::System::Type*> match);
    // static public System.Boolean AssignableToTypeName(System.Type type, System.String fullTypeName)
    // Offset: 0x20979D4
    static bool AssignableToTypeName(::System::Type* type, ::StringW fullTypeName);
    // static public System.Boolean ImplementInterface(System.Type type, System.Type interfaceType)
    // Offset: 0x20979FC
    static bool ImplementInterface(::System::Type* type, ::System::Type* interfaceType);
  }; // Newtonsoft.Json.Utilities.TypeExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::TypeExtensions::MemberType
// Il2CppName: MemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberTypes (*)(::System::Reflection::MemberInfo*)>(&Newtonsoft::Json::Utilities::TypeExtensions::MemberType)> {
  static const MethodInfo* get() {
    static auto* memberInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::TypeExtensions*), "MemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{memberInfo});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::TypeExtensions::ContainsGenericParameters
// Il2CppName: ContainsGenericParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Newtonsoft::Json::Utilities::TypeExtensions::ContainsGenericParameters)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::TypeExtensions*), "ContainsGenericParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::TypeExtensions::IsInterface
// Il2CppName: IsInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Newtonsoft::Json::Utilities::TypeExtensions::IsInterface)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::TypeExtensions*), "IsInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::TypeExtensions::IsGenericType
// Il2CppName: IsGenericType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Newtonsoft::Json::Utilities::TypeExtensions::IsGenericType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::TypeExtensions*), "IsGenericType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::TypeExtensions::IsGenericTypeDefinition
// Il2CppName: IsGenericTypeDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Newtonsoft::Json::Utilities::TypeExtensions::IsGenericTypeDefinition)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::TypeExtensions*), "IsGenericTypeDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::TypeExtensions::BaseType
// Il2CppName: BaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&Newtonsoft::Json::Utilities::TypeExtensions::BaseType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::TypeExtensions*), "BaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::TypeExtensions::IsEnum
// Il2CppName: IsEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Newtonsoft::Json::Utilities::TypeExtensions::IsEnum)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::TypeExtensions*), "IsEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::TypeExtensions::IsClass
// Il2CppName: IsClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Newtonsoft::Json::Utilities::TypeExtensions::IsClass)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::TypeExtensions*), "IsClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::TypeExtensions::IsSealed
// Il2CppName: IsSealed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Newtonsoft::Json::Utilities::TypeExtensions::IsSealed)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::TypeExtensions*), "IsSealed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::TypeExtensions::IsAbstract
// Il2CppName: IsAbstract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Newtonsoft::Json::Utilities::TypeExtensions::IsAbstract)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::TypeExtensions*), "IsAbstract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::TypeExtensions::IsValueType
// Il2CppName: IsValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Newtonsoft::Json::Utilities::TypeExtensions::IsValueType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::TypeExtensions*), "IsValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::TypeExtensions::AssignableToTypeName
// Il2CppName: AssignableToTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::StringW, ByRef<::System::Type*>)>(&Newtonsoft::Json::Utilities::TypeExtensions::AssignableToTypeName)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* fullTypeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* match = &::il2cpp_utils::GetClassFromName("System", "Type")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::TypeExtensions*), "AssignableToTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, fullTypeName, match});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::TypeExtensions::AssignableToTypeName
// Il2CppName: AssignableToTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::StringW)>(&Newtonsoft::Json::Utilities::TypeExtensions::AssignableToTypeName)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* fullTypeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::TypeExtensions*), "AssignableToTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, fullTypeName});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::TypeExtensions::ImplementInterface
// Il2CppName: ImplementInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&Newtonsoft::Json::Utilities::TypeExtensions::ImplementInterface)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* interfaceType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::TypeExtensions*), "ImplementInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, interfaceType});
  }
};
