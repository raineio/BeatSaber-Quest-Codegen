// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData
#include "UnityEngine/EventSystems/PointerEventData.hpp"
// Including type: UnityEngine.Ray
#include "UnityEngine/Ray.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: EventSystem
  class EventSystem;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: OVRPointerEventData
  class OVRPointerEventData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EventSystems::OVRPointerEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::OVRPointerEventData*, "UnityEngine.EventSystems", "OVRPointerEventData");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x150
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.OVRPointerEventData
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPointerEventData : public ::UnityEngine::EventSystems::PointerEventData {
    public:
    public:
    // public UnityEngine.Ray worldSpaceRay
    // Size: 0x18
    // Offset: 0x130
    ::UnityEngine::Ray worldSpaceRay;
    // Field size check
    static_assert(sizeof(::UnityEngine::Ray) == 0x18);
    // public UnityEngine.Vector2 swipeStart
    // Size: 0x8
    // Offset: 0x148
    ::UnityEngine::Vector2 swipeStart;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Ray worldSpaceRay
    [[deprecated("Use field access instead!")]] ::UnityEngine::Ray& dyn_worldSpaceRay();
    // Get instance field reference: public UnityEngine.Vector2 swipeStart
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_swipeStart();
    // public System.Void .ctor(UnityEngine.EventSystems.EventSystem eventSystem)
    // Offset: 0x249FA0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRPointerEventData* New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::EventSystems::OVRPointerEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRPointerEventData*, creationType>(eventSystem)));
    }
    // public override System.String ToString()
    // Offset: 0x24A1B64
    // Implemented from: UnityEngine.EventSystems.PointerEventData
    // Base method: System.String PointerEventData::ToString()
    ::StringW ToString();
  }; // UnityEngine.EventSystems.OVRPointerEventData
  #pragma pack(pop)
  static check_size<sizeof(OVRPointerEventData), 328 + sizeof(::UnityEngine::Vector2)> __UnityEngine_EventSystems_OVRPointerEventDataSizeCheck;
  static_assert(sizeof(OVRPointerEventData) == 0x150);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::OVRPointerEventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::EventSystems::OVRPointerEventData::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::EventSystems::OVRPointerEventData::*)()>(&UnityEngine::EventSystems::OVRPointerEventData::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::OVRPointerEventData*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
