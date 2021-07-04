// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.ITypeInfo
#include "NUnit/Framework/Interfaces/ITypeInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TypeWrapper
  class TypeWrapper : public ::Il2CppObject/*, public NUnit::Framework::Interfaces::ITypeInfo*/ {
    public:
    // Nested type: NUnit::Framework::Internal::TypeWrapper::$$c__DisplayClass36_0
    class $$c__DisplayClass36_0;
    // [DebuggerBrowsableAttribute] Offset: 0xE051B4
    // [CompilerGeneratedAttribute] Offset: 0xE051B4
    // private System.Type <Type>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    System::Type* Type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: TypeWrapper
    TypeWrapper(System::Type* Type_ = {}) noexcept : Type{Type_} {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::ITypeInfo
    operator NUnit::Framework::Interfaces::ITypeInfo() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::ITypeInfo*>(this);
    }
    // Creating conversion operator: operator System::Type*
    constexpr operator System::Type*() const noexcept {
      return Type;
    }
    // public System.Void .ctor(System.Type type)
    // Offset: 0x22AB498
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeWrapper* New_ctor(System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TypeWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeWrapper*, creationType>(type)));
    }
    // public System.Type get_Type()
    // Offset: 0x22B7300
    System::Type* get_Type();
    // private System.Void set_Type(System.Type value)
    // Offset: 0x22B7308
    void set_Type(System::Type* value);
    // public NUnit.Framework.Interfaces.ITypeInfo get_BaseType()
    // Offset: 0x22B7310
    NUnit::Framework::Interfaces::ITypeInfo* get_BaseType();
    // public System.String get_FullName()
    // Offset: 0x22B73A4
    ::Il2CppString* get_FullName();
    // public System.Reflection.Assembly get_Assembly()
    // Offset: 0x22B73C8
    System::Reflection::Assembly* get_Assembly();
    // public System.String get_Namespace()
    // Offset: 0x22B73F8
    ::Il2CppString* get_Namespace();
    // public System.Boolean get_IsAbstract()
    // Offset: 0x22B741C
    bool get_IsAbstract();
    // public System.Boolean get_IsGenericType()
    // Offset: 0x22B7444
    bool get_IsGenericType();
    // public System.Boolean IsType(System.Type type)
    // Offset: 0x22B7474
    bool IsType(System::Type* type);
    // public System.Boolean get_ContainsGenericParameters()
    // Offset: 0x22B7484
    bool get_ContainsGenericParameters();
    // public System.Boolean get_IsGenericTypeDefinition()
    // Offset: 0x22B74B4
    bool get_IsGenericTypeDefinition();
    // public System.Boolean get_IsSealed()
    // Offset: 0x22B74E4
    bool get_IsSealed();
    // public System.Boolean get_IsStaticClass()
    // Offset: 0x22B750C
    bool get_IsStaticClass();
    // public System.String GetDisplayName()
    // Offset: 0x22B756C
    ::Il2CppString* GetDisplayName();
    // public System.String GetDisplayName(System.Object[] args)
    // Offset: 0x22B75D4
    ::Il2CppString* GetDisplayName(::Array<::Il2CppObject*>* args);
    // public NUnit.Framework.Interfaces.ITypeInfo MakeGenericType(System.Type[] typeArgs)
    // Offset: 0x22B764C
    NUnit::Framework::Interfaces::ITypeInfo* MakeGenericType(::Array<System::Type*>* typeArgs);
    // public System.Type GetGenericTypeDefinition()
    // Offset: 0x22B76E0
    System::Type* GetGenericTypeDefinition();
    // public T[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetCustomAttributes(bool inherit) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TypeWrapper::GetCustomAttributes");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetCustomAttributes", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inherit)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(this, ___generic__method, inherit);
    }
    // public System.Boolean IsDefined(System.Boolean inherit)
    // Offset: 0xFFFFFFFF
    template<class T>
    bool IsDefined(bool inherit) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TypeWrapper::IsDefined");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "IsDefined", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inherit)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___generic__method, inherit);
    }
    // public System.Boolean HasMethodWithAttribute(System.Type attributeType)
    // Offset: 0x22B7704
    bool HasMethodWithAttribute(System::Type* attributeType);
    // public NUnit.Framework.Interfaces.IMethodInfo[] GetMethods(System.Reflection.BindingFlags flags)
    // Offset: 0x22B777C
    ::Array<NUnit::Framework::Interfaces::IMethodInfo*>* GetMethods(System::Reflection::BindingFlags flags);
    // public System.Reflection.ConstructorInfo GetConstructor(System.Type[] argTypes)
    // Offset: 0x22B78C4
    System::Reflection::ConstructorInfo* GetConstructor(::Array<System::Type*>* argTypes);
    // public System.Boolean HasConstructor(System.Type[] argTypes)
    // Offset: 0x22B79B0
    bool HasConstructor(::Array<System::Type*>* argTypes);
    // public System.Object Construct(System.Object[] args)
    // Offset: 0x22B79CC
    ::Il2CppObject* Construct(::Array<::Il2CppObject*>* args);
    // public override System.String ToString()
    // Offset: 0x22B7A44
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // NUnit.Framework.Internal.TypeWrapper
  #pragma pack(pop)
  static check_size<sizeof(TypeWrapper), 16 + sizeof(System::Type*)> __NUnit_Framework_Internal_TypeWrapperSizeCheck;
  static_assert(sizeof(TypeWrapper) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TypeWrapper*, "NUnit.Framework.Internal", "TypeWrapper");
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::get_Type)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::set_Type
// Il2CppName: set_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TypeWrapper::*)(System::Type*)>(&NUnit::Framework::Internal::TypeWrapper::set_Type)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "set_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::get_BaseType
// Il2CppName: get_BaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ITypeInfo* (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::get_BaseType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "get_BaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::get_FullName
// Il2CppName: get_FullName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::get_FullName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "get_FullName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::get_Assembly
// Il2CppName: get_Assembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly* (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::get_Assembly)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "get_Assembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::get_Namespace
// Il2CppName: get_Namespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::get_Namespace)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "get_Namespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::get_IsAbstract
// Il2CppName: get_IsAbstract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::get_IsAbstract)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "get_IsAbstract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::get_IsGenericType
// Il2CppName: get_IsGenericType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::get_IsGenericType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "get_IsGenericType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::IsType
// Il2CppName: IsType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TypeWrapper::*)(System::Type*)>(&NUnit::Framework::Internal::TypeWrapper::IsType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "IsType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::get_ContainsGenericParameters
// Il2CppName: get_ContainsGenericParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::get_ContainsGenericParameters)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "get_ContainsGenericParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::get_IsGenericTypeDefinition
// Il2CppName: get_IsGenericTypeDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::get_IsGenericTypeDefinition)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "get_IsGenericTypeDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::get_IsSealed
// Il2CppName: get_IsSealed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::get_IsSealed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "get_IsSealed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::get_IsStaticClass
// Il2CppName: get_IsStaticClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::get_IsStaticClass)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "get_IsStaticClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::GetDisplayName
// Il2CppName: GetDisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::GetDisplayName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "GetDisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::GetDisplayName
// Il2CppName: GetDisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::TypeWrapper::*)(::Array<::Il2CppObject*>*)>(&NUnit::Framework::Internal::TypeWrapper::GetDisplayName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "GetDisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppObject*>*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::MakeGenericType
// Il2CppName: MakeGenericType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ITypeInfo* (NUnit::Framework::Internal::TypeWrapper::*)(::Array<System::Type*>*)>(&NUnit::Framework::Internal::TypeWrapper::MakeGenericType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "MakeGenericType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<System::Type*>*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::GetGenericTypeDefinition
// Il2CppName: GetGenericTypeDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::GetGenericTypeDefinition)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "GetGenericTypeDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::GetCustomAttributes
// Il2CppName: GetCustomAttributes
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::IsDefined
// Il2CppName: IsDefined
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::HasMethodWithAttribute
// Il2CppName: HasMethodWithAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TypeWrapper::*)(System::Type*)>(&NUnit::Framework::Internal::TypeWrapper::HasMethodWithAttribute)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "HasMethodWithAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::GetMethods
// Il2CppName: GetMethods
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<NUnit::Framework::Interfaces::IMethodInfo*>* (NUnit::Framework::Internal::TypeWrapper::*)(System::Reflection::BindingFlags)>(&NUnit::Framework::Internal::TypeWrapper::GetMethods)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "GetMethods", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Reflection::BindingFlags>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::GetConstructor
// Il2CppName: GetConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::ConstructorInfo* (NUnit::Framework::Internal::TypeWrapper::*)(::Array<System::Type*>*)>(&NUnit::Framework::Internal::TypeWrapper::GetConstructor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "GetConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<System::Type*>*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::HasConstructor
// Il2CppName: HasConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TypeWrapper::*)(::Array<System::Type*>*)>(&NUnit::Framework::Internal::TypeWrapper::HasConstructor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "HasConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<System::Type*>*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::Construct
// Il2CppName: Construct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (NUnit::Framework::Internal::TypeWrapper::*)(::Array<::Il2CppObject*>*)>(&NUnit::Framework::Internal::TypeWrapper::Construct)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "Construct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppObject*>*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
