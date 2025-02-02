// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_AssetEventData
#include "HoudiniEngineUnity/HEU_AssetEventData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_HoudiniAsset
  class HEU_HoudiniAsset;
}
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
  // Forward declaring type: HEU_BakedEventData
  class HEU_BakedEventData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_BakedEventData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_BakedEventData*, "HoudiniEngineUnity", "HEU_BakedEventData");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_BakedEventData
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_BakedEventData : public ::HoudiniEngineUnity::HEU_AssetEventData {
    public:
    public:
    // public System.Boolean IsNewBake
    // Size: 0x1
    // Offset: 0x2C
    bool IsNewBake;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return IsNewBake;
    }
    // Get instance field reference: public System.Boolean IsNewBake
    [[deprecated("Use field access instead!")]] bool& dyn_IsNewBake();
    // public System.Void .ctor(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.Boolean successful, System.Collections.Generic.List`1<UnityEngine.GameObject> outputObjects, System.Boolean isNewBake)
    // Offset: 0x173D08C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_BakedEventData* New_ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool successful, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputObjects, bool isNewBake) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_BakedEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_BakedEventData*, creationType>(asset, successful, outputObjects, isNewBake)));
    }
  }; // HoudiniEngineUnity.HEU_BakedEventData
  #pragma pack(pop)
  static check_size<sizeof(HEU_BakedEventData), 44 + sizeof(bool)> __HoudiniEngineUnity_HEU_BakedEventDataSizeCheck;
  static_assert(sizeof(HEU_BakedEventData) == 0x2D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_BakedEventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
