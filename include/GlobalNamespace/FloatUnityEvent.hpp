// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FloatUnityEvent
  class FloatUnityEvent;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::FloatUnityEvent);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FloatUnityEvent*, "", "FloatUnityEvent");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: FloatUnityEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class FloatUnityEvent : public UnityEngine::Events::UnityEvent_1<float> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1396B24
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent_1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloatUnityEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FloatUnityEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloatUnityEvent*, creationType>()));
    }
  }; // FloatUnityEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FloatUnityEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
