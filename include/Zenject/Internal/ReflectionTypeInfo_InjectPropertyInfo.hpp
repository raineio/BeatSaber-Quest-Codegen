// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.ReflectionTypeInfo
#include "Zenject/Internal/ReflectionTypeInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Autogenerated type: Zenject.Internal.ReflectionTypeInfo/InjectPropertyInfo
  class ReflectionTypeInfo::InjectPropertyInfo : public ::Il2CppObject {
    public:
    // public readonly System.Reflection.PropertyInfo PropertyInfo
    // Offset: 0x10
    System::Reflection::PropertyInfo* PropertyInfo;
    // public readonly Zenject.InjectableInfo InjectableInfo
    // Offset: 0x18
    Zenject::InjectableInfo* InjectableInfo;
    // public System.Void .ctor(System.Reflection.PropertyInfo propertyInfo, Zenject.InjectableInfo injectableInfo)
    // Offset: 0x1230240
    static ReflectionTypeInfo::InjectPropertyInfo* New_ctor(System::Reflection::PropertyInfo* propertyInfo, Zenject::InjectableInfo* injectableInfo);
  }; // Zenject.Internal.ReflectionTypeInfo/InjectPropertyInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo*, "Zenject.Internal", "ReflectionTypeInfo/InjectPropertyInfo");
#pragma pack(pop)
