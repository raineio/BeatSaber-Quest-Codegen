// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Slider
#include "UnityEngine/UI/Slider.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::UI::Slider::SliderEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Slider::SliderEvent*, "UnityEngine.UI", "Slider/SliderEvent");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UI.Slider/UnityEngine.UI.SliderEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class Slider::SliderEvent : public UnityEngine::Events::UnityEvent_1<float> {
    public:
    // public System.Void .ctor()
    // Offset: 0x267EA5C
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent_1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Slider::SliderEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Slider::SliderEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Slider::SliderEvent*, creationType>()));
    }
  }; // UnityEngine.UI.Slider/UnityEngine.UI.SliderEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::Slider::SliderEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
