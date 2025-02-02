// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_TOPWorkResult
  class HEU_TOPWorkResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_TOPWorkResult);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_TOPWorkResult*, "HoudiniEngineUnity", "HEU_TOPWorkResult");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_TOPWorkResult
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_TOPWorkResult : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 _workItemIndex
    // Size: 0x4
    // Offset: 0x10
    int workItemIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 _workItemID
    // Size: 0x4
    // Offset: 0x14
    int workItemID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Collections.Generic.List`1<UnityEngine.GameObject> _generatedGOs
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* generatedGOs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 _workItemIndex
    [[deprecated("Use field access instead!")]] int& dyn__workItemIndex();
    // Get instance field reference: public System.Int32 _workItemID
    [[deprecated("Use field access instead!")]] int& dyn__workItemID();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.GameObject> _generatedGOs
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& dyn__generatedGOs();
    // public System.Void .ctor()
    // Offset: 0x1B5E930
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_TOPWorkResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_TOPWorkResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_TOPWorkResult*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_TOPWorkResult
  #pragma pack(pop)
  static check_size<sizeof(HEU_TOPWorkResult), 24 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)> __HoudiniEngineUnity_HEU_TOPWorkResultSizeCheck;
  static_assert(sizeof(HEU_TOPWorkResult) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TOPWorkResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
