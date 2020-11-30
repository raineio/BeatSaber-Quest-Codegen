// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IConvertible
  class IConvertible;
  // Forward declaring type: ValueType
  class ValueType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: IStateTable`2
  template<typename TType, typename TState>
  class IStateTable_2 {
    public:
    // public TState GetState(TType type)
    // Offset: 0xFFFFFFFF
    TState GetState(TType type) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("IStateTable_2").WithContext("GetState");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<TState>(), "GetState", {}, ::il2cpp_utils::ExtractTypes(type)));
      return ::il2cpp_utils::RunMethodThrow<TState, false>(this, ___internal__method, type);
    }
    // public System.Void SetState(TType type, TState state)
    // Offset: 0xFFFFFFFF
    void SetState(TType type, TState state) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("IStateTable_2").WithContext("SetState");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetState", {}, ::il2cpp_utils::ExtractTypes(type, state)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, type, state);
    }
  }; // IStateTable`2
  // Could not write size check! Type: IStateTable`2 is generic!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::IStateTable_2, "", "IStateTable`2");
#pragma pack(pop)