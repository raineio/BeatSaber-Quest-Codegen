// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.EventSystems.IPointerClickHandler
#include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
// Including type: UnityEngine.EventSystems.ISelectHandler
#include "UnityEngine/EventSystems/ISelectHandler.hpp"
// Including type: UnityEngine.EventSystems.IDeselectHandler
#include "UnityEngine/EventSystems/IDeselectHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_ScrollbarEventHandler
  class TMP_ScrollbarEventHandler : public UnityEngine::MonoBehaviour/*, public UnityEngine::EventSystems::IPointerClickHandler, public UnityEngine::EventSystems::ISelectHandler, public UnityEngine::EventSystems::IDeselectHandler*/ {
    public:
    // public System.Boolean isSelected
    // Size: 0x1
    // Offset: 0x18
    bool isSelected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TMP_ScrollbarEventHandler
    TMP_ScrollbarEventHandler(bool isSelected_ = {}) noexcept : isSelected{isSelected_} {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerClickHandler
    operator UnityEngine::EventSystems::IPointerClickHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerClickHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::ISelectHandler
    operator UnityEngine::EventSystems::ISelectHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::ISelectHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IDeselectHandler
    operator UnityEngine::EventSystems::IDeselectHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IDeselectHandler*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x116DD44
    void OnPointerClick(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSelect(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x116DDB0
    void OnSelect(UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void OnDeselect(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x116DE2C
    void OnDeselect(UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x116DEA4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_ScrollbarEventHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_ScrollbarEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_ScrollbarEventHandler*, creationType>()));
    }
  }; // TMPro.TMP_ScrollbarEventHandler
  #pragma pack(pop)
  static check_size<sizeof(TMP_ScrollbarEventHandler), 24 + sizeof(bool)> __TMPro_TMP_ScrollbarEventHandlerSizeCheck;
  static_assert(sizeof(TMP_ScrollbarEventHandler) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_ScrollbarEventHandler*, "TMPro", "TMP_ScrollbarEventHandler");
// Writing MetadataGetter for method: TMPro::TMP_ScrollbarEventHandler::OnPointerClick
// Il2CppName: OnPointerClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_ScrollbarEventHandler::*)(UnityEngine::EventSystems::PointerEventData*)>(&TMPro::TMP_ScrollbarEventHandler::OnPointerClick)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_ScrollbarEventHandler*), "OnPointerClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::EventSystems::PointerEventData*>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_ScrollbarEventHandler::OnSelect
// Il2CppName: OnSelect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_ScrollbarEventHandler::*)(UnityEngine::EventSystems::BaseEventData*)>(&TMPro::TMP_ScrollbarEventHandler::OnSelect)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_ScrollbarEventHandler*), "OnSelect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::EventSystems::BaseEventData*>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_ScrollbarEventHandler::OnDeselect
// Il2CppName: OnDeselect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_ScrollbarEventHandler::*)(UnityEngine::EventSystems::BaseEventData*)>(&TMPro::TMP_ScrollbarEventHandler::OnDeselect)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_ScrollbarEventHandler*), "OnDeselect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::EventSystems::BaseEventData*>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_ScrollbarEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
