// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.ReflectionTypeAnalyzer
#include "Zenject/Internal/ReflectionTypeAnalyzer.hpp"
// Including type: Zenject.Internal.ReflectionTypeInfo
#include "Zenject/Internal/ReflectionTypeInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Autogenerated type: Zenject.Internal.ReflectionTypeAnalyzer/<>c__DisplayClass8_0
  class ReflectionTypeAnalyzer::$$c__DisplayClass8_0 : public ::Il2CppObject {
    public:
    // public System.Type type
    // Offset: 0x10
    System::Type* type;
    // Creating conversion operator: operator System::Type*
    constexpr operator System::Type*() const noexcept {
      return type;
    }
    // Zenject.Internal.ReflectionTypeInfo/InjectParameterInfo <GetConstructorInfo>b__0(System.Reflection.ParameterInfo x)
    // Offset: 0x1230640
    Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo* $GetConstructorInfo$b__0(System::Reflection::ParameterInfo* x);
    // public System.Void .ctor()
    // Offset: 0x122F388
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ReflectionTypeAnalyzer::$$c__DisplayClass8_0* New_ctor();
  }; // Zenject.Internal.ReflectionTypeAnalyzer/<>c__DisplayClass8_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass8_0*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass8_0");
#pragma pack(pop)
