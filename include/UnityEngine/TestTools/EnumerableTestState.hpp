// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: EnumerableTestState
  class EnumerableTestState;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::TestTools::EnumerableTestState);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::EnumerableTestState*, "UnityEngine.TestTools", "EnumerableTestState");
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.EnumerableTestState
  // [TokenAttribute] Offset: FFFFFFFF
  class EnumerableTestState : public UnityEngine::ScriptableObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Int32 Repeat
    // Size: 0x4
    // Offset: 0x18
    int Repeat;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Retry
    // Size: 0x4
    // Offset: 0x1C
    int Retry;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Int32 Repeat
    int& dyn_Repeat();
    // Get instance field reference: public System.Int32 Retry
    int& dyn_Retry();
    // public System.Void .ctor()
    // Offset: 0x16CFA54
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumerableTestState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::EnumerableTestState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumerableTestState*, creationType>()));
    }
  }; // UnityEngine.TestTools.EnumerableTestState
  #pragma pack(pop)
  static check_size<sizeof(EnumerableTestState), 28 + sizeof(int)> __UnityEngine_TestTools_EnumerableTestStateSizeCheck;
  static_assert(sizeof(EnumerableTestState) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableTestState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
