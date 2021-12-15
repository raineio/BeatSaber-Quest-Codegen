// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.IEventSystemHandler
#include "UnityEngine/EventSystems/IEventSystemHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: IUpdateSelectedHandler
  class IUpdateSelectedHandler;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::EventSystems::IUpdateSelectedHandler);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::IUpdateSelectedHandler*, "UnityEngine.EventSystems", "IUpdateSelectedHandler");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.IUpdateSelectedHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class IUpdateSelectedHandler/*, public UnityEngine::EventSystems::IEventSystemHandler*/ {
    public:
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IEventSystemHandler
    operator UnityEngine::EventSystems::IEventSystemHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IEventSystemHandler*>(this);
    }
    // public System.Void OnUpdateSelected(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0xFFFFFFFF
    void OnUpdateSelected(UnityEngine::EventSystems::BaseEventData* eventData);
  }; // UnityEngine.EventSystems.IUpdateSelectedHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::IUpdateSelectedHandler::OnUpdateSelected
// Il2CppName: OnUpdateSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::IUpdateSelectedHandler::*)(UnityEngine::EventSystems::BaseEventData*)>(&UnityEngine::EventSystems::IUpdateSelectedHandler::OnUpdateSelected)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::IUpdateSelectedHandler*), "OnUpdateSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
