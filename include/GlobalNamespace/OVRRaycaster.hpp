// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.GraphicRaycaster
#include "UnityEngine/UI/GraphicRaycaster.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
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
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Canvas
  class Canvas;
  // Forward declaring type: Ray
  struct Ray;
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: OVRRaycaster
  // [RequireComponent] Offset: DCCCA4
  class OVRRaycaster : public UnityEngine::UI::GraphicRaycaster/*, public UnityEngine::EventSystems::IPointerEnterHandler*/ {
    public:
    // Nested type: GlobalNamespace::OVRRaycaster::RaycastHit
    struct RaycastHit;
    // Nested type: GlobalNamespace::OVRRaycaster::$$c
    class $$c;
    // Size: 0x15
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: OVRRaycaster/RaycastHit
    struct RaycastHit/*, public System::ValueType*/ {
      public:
      // public UnityEngine.UI.Graphic graphic
      // Size: 0x8
      // Offset: 0x0
      UnityEngine::UI::Graphic* graphic;
      // Field size check
      static_assert(sizeof(UnityEngine::UI::Graphic*) == 0x8);
      // public UnityEngine.Vector3 worldPos
      // Size: 0xC
      // Offset: 0x8
      UnityEngine::Vector3 worldPos;
      // Field size check
      static_assert(sizeof(UnityEngine::Vector3) == 0xC);
      // public System.Boolean fromMouse
      // Size: 0x1
      // Offset: 0x14
      bool fromMouse;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Creating value type constructor for type: RaycastHit
      constexpr RaycastHit(UnityEngine::UI::Graphic* graphic_ = {}, UnityEngine::Vector3 worldPos_ = {}, bool fromMouse_ = {}) noexcept : graphic{graphic_}, worldPos{worldPos_}, fromMouse{fromMouse_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
    }; // OVRRaycaster/RaycastHit
    #pragma pack(pop)
    static check_size<sizeof(OVRRaycaster::RaycastHit), 20 + sizeof(bool)> __GlobalNamespace_OVRRaycaster_RaycastHitSizeCheck;
    static_assert(sizeof(OVRRaycaster::RaycastHit) == 0x15);
    // [TooltipAttribute] Offset: 0xDD0088
    // public UnityEngine.GameObject pointer
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::GameObject* pointer;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public System.Int32 sortOrder
    // Size: 0x4
    // Offset: 0x48
    int sortOrder;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: sortOrder and: m_Canvas
    char __padding1[0x4] = {};
    // private UnityEngine.Canvas m_Canvas
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Canvas* m_Canvas;
    // Field size check
    static_assert(sizeof(UnityEngine::Canvas*) == 0x8);
    // private System.Collections.Generic.List`1<OVRRaycaster/RaycastHit> m_RaycastResults
    // Size: 0x8
    // Offset: 0x58
    System::Collections::Generic::List_1<GlobalNamespace::OVRRaycaster::RaycastHit>* m_RaycastResults;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::OVRRaycaster::RaycastHit>*) == 0x8);
    // Creating value type constructor for type: OVRRaycaster
    OVRRaycaster(UnityEngine::GameObject* pointer_ = {}, int sortOrder_ = {}, UnityEngine::Canvas* m_Canvas_ = {}, System::Collections::Generic::List_1<GlobalNamespace::OVRRaycaster::RaycastHit>* m_RaycastResults_ = {}) noexcept : pointer{pointer_}, sortOrder{sortOrder_}, m_Canvas{m_Canvas_}, m_RaycastResults{m_RaycastResults_} {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerEnterHandler
    operator UnityEngine::EventSystems::IPointerEnterHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerEnterHandler*>(this);
    }
    // Get static field: static private readonly System.Collections.Generic.List`1<OVRRaycaster/RaycastHit> s_SortedGraphics
    static System::Collections::Generic::List_1<GlobalNamespace::OVRRaycaster::RaycastHit>* _get_s_SortedGraphics();
    // Set static field: static private readonly System.Collections.Generic.List`1<OVRRaycaster/RaycastHit> s_SortedGraphics
    static void _set_s_SortedGraphics(System::Collections::Generic::List_1<GlobalNamespace::OVRRaycaster::RaycastHit>* value);
    // private System.Void Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList, UnityEngine.Ray ray, System.Boolean checkForBlocking)
    // Offset: 0x1626D68
    void Raycast(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList, UnityEngine::Ray ray, bool checkForBlocking);
    // public System.Void RaycastPointer(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    // Offset: 0x162794C
    void RaycastPointer(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList);
    // private System.Void GraphicRaycast(UnityEngine.Canvas canvas, UnityEngine.Ray ray, System.Collections.Generic.List`1<OVRRaycaster/RaycastHit> results)
    // Offset: 0x1627348
    void GraphicRaycast(UnityEngine::Canvas* canvas, UnityEngine::Ray ray, System::Collections::Generic::List_1<GlobalNamespace::OVRRaycaster::RaycastHit>* results);
    // public UnityEngine.Vector2 GetScreenPosition(UnityEngine.EventSystems.RaycastResult raycastResult)
    // Offset: 0x1627F58
    UnityEngine::Vector2 GetScreenPosition(UnityEngine::EventSystems::RaycastResult raycastResult);
    // static private System.Boolean RayIntersectsRectTransform(UnityEngine.RectTransform rectTransform, UnityEngine.Ray ray, out UnityEngine.Vector3 worldPos)
    // Offset: 0x1627B58
    static bool RayIntersectsRectTransform(UnityEngine::RectTransform* rectTransform, UnityEngine::Ray ray, UnityEngine::Vector3& worldPos);
    // public System.Boolean IsFocussed()
    // Offset: 0x162801C
    bool IsFocussed();
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData e)
    // Offset: 0x1628148
    void OnPointerEnter(UnityEngine::EventSystems::PointerEventData* e);
    // protected System.Void .ctor()
    // Offset: 0x1626ACC
    // Implemented from: UnityEngine.UI.GraphicRaycaster
    // Base method: System.Void GraphicRaycaster::.ctor()
    // Base method: System.Void BaseRaycaster::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRRaycaster* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRRaycaster::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRRaycaster*, creationType>()));
    }
    // private UnityEngine.Canvas get_canvas()
    // Offset: 0x1626B5C
    // Implemented from: UnityEngine.UI.GraphicRaycaster
    // Base method: UnityEngine.Canvas GraphicRaycaster::get_canvas()
    UnityEngine::Canvas* get_canvas();
    // public override UnityEngine.Camera get_eventCamera()
    // Offset: 0x1626BF4
    // Implemented from: UnityEngine.UI.GraphicRaycaster
    // Base method: UnityEngine.Camera GraphicRaycaster::get_eventCamera()
    UnityEngine::Camera* get_eventCamera();
    // public override System.Int32 get_sortOrderPriority()
    // Offset: 0x1626C14
    // Implemented from: UnityEngine.UI.GraphicRaycaster
    // Base method: System.Int32 GraphicRaycaster::get_sortOrderPriority()
    int get_sortOrderPriority();
    // protected override System.Void Start()
    // Offset: 0x1626C1C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Start()
    void Start();
    // public override System.Void Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    // Offset: 0x16278D4
    // Implemented from: UnityEngine.UI.GraphicRaycaster
    // Base method: System.Void GraphicRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    void Raycast(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList);
    // static private System.Void .cctor()
    // Offset: 0x1628254
    // Implemented from: UnityEngine.UI.GraphicRaycaster
    // Base method: System.Void GraphicRaycaster::.cctor()
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // OVRRaycaster
  #pragma pack(pop)
  static check_size<sizeof(OVRRaycaster), 88 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::OVRRaycaster::RaycastHit>*)> __GlobalNamespace_OVRRaycasterSizeCheck;
  static_assert(sizeof(OVRRaycaster) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRRaycaster*, "", "OVRRaycaster");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRRaycaster::RaycastHit, "", "OVRRaycaster/RaycastHit");
// Writing MetadataGetter for method: GlobalNamespace::OVRRaycaster::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRRaycaster::*)(UnityEngine::EventSystems::PointerEventData*, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>*, UnityEngine::Ray, bool)>(&GlobalNamespace::OVRRaycaster::Raycast)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRRaycaster*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::EventSystems::PointerEventData*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Ray>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRRaycaster::RaycastPointer
// Il2CppName: RaycastPointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRRaycaster::*)(UnityEngine::EventSystems::PointerEventData*, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>*)>(&GlobalNamespace::OVRRaycaster::RaycastPointer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRRaycaster*), "RaycastPointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::EventSystems::PointerEventData*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRRaycaster::GraphicRaycast
// Il2CppName: GraphicRaycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRRaycaster::*)(UnityEngine::Canvas*, UnityEngine::Ray, System::Collections::Generic::List_1<GlobalNamespace::OVRRaycaster::RaycastHit>*)>(&GlobalNamespace::OVRRaycaster::GraphicRaycast)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRRaycaster*), "GraphicRaycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Canvas*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Ray>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<GlobalNamespace::OVRRaycaster::RaycastHit>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRRaycaster::GetScreenPosition
// Il2CppName: GetScreenPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (GlobalNamespace::OVRRaycaster::*)(UnityEngine::EventSystems::RaycastResult)>(&GlobalNamespace::OVRRaycaster::GetScreenPosition)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRRaycaster*), "GetScreenPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::EventSystems::RaycastResult>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRRaycaster::RayIntersectsRectTransform
// Il2CppName: RayIntersectsRectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::RectTransform*, UnityEngine::Ray, UnityEngine::Vector3&)>(&GlobalNamespace::OVRRaycaster::RayIntersectsRectTransform)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRRaycaster*), "RayIntersectsRectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::RectTransform*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Ray>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRRaycaster::IsFocussed
// Il2CppName: IsFocussed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRRaycaster::*)()>(&GlobalNamespace::OVRRaycaster::IsFocussed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRRaycaster*), "IsFocussed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRRaycaster::OnPointerEnter
// Il2CppName: OnPointerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRRaycaster::*)(UnityEngine::EventSystems::PointerEventData*)>(&GlobalNamespace::OVRRaycaster::OnPointerEnter)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRRaycaster*), "OnPointerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::EventSystems::PointerEventData*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRRaycaster::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRRaycaster::get_canvas
// Il2CppName: get_canvas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Canvas* (GlobalNamespace::OVRRaycaster::*)()>(&GlobalNamespace::OVRRaycaster::get_canvas)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRRaycaster*), "get_canvas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRRaycaster::get_eventCamera
// Il2CppName: get_eventCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Camera* (GlobalNamespace::OVRRaycaster::*)()>(&GlobalNamespace::OVRRaycaster::get_eventCamera)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRRaycaster*), "get_eventCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRRaycaster::get_sortOrderPriority
// Il2CppName: get_sortOrderPriority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRRaycaster::*)()>(&GlobalNamespace::OVRRaycaster::get_sortOrderPriority)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRRaycaster*), "get_sortOrderPriority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRRaycaster::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRRaycaster::*)()>(&GlobalNamespace::OVRRaycaster::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRRaycaster*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRRaycaster::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRRaycaster::*)(UnityEngine::EventSystems::PointerEventData*, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>*)>(&GlobalNamespace::OVRRaycaster::Raycast)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRRaycaster*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::EventSystems::PointerEventData*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRRaycaster::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRRaycaster::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRRaycaster*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
