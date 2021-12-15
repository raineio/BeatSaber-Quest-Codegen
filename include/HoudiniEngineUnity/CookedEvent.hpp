// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Events.UnityEvent`3
#include "UnityEngine/Events/UnityEvent_3.hpp"
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
  // Forward declaring type: CookedEvent
  class CookedEvent;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HoudiniEngineUnity::CookedEvent);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::CookedEvent*, "HoudiniEngineUnity", "CookedEvent");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // WARNING Size may be invalid!
  // Autogenerated type: HoudiniEngineUnity.CookedEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class CookedEvent : public UnityEngine::Events::UnityEvent_3<HoudiniEngineUnity::HEU_HoudiniAsset*, bool, System::Collections::Generic::List_1<UnityEngine::GameObject*>*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1462658
    // Implemented from: UnityEngine.Events.UnityEvent`3
    // Base method: System.Void UnityEvent_3::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CookedEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::CookedEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CookedEvent*, creationType>()));
    }
  }; // HoudiniEngineUnity.CookedEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::CookedEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
