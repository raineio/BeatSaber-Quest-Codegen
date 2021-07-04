// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.PhysicsRaycaster
#include "UnityEngine/EventSystems/PhysicsRaycaster.hpp"
// Including type: UnityEngine.RaycastHit2D
#include "UnityEngine/RaycastHit2D.hpp"
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.Physics2DRaycaster
  // [AddComponentMenu] Offset: DC5CEC
  // [RequireComponent] Offset: DC5CEC
  class Physics2DRaycaster : public UnityEngine::EventSystems::PhysicsRaycaster {
    public:
    // private UnityEngine.RaycastHit2D[] m_Hits
    // Size: 0x8
    // Offset: 0x40
    ::Array<UnityEngine::RaycastHit2D>* m_Hits;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::RaycastHit2D>*) == 0x8);
    // Creating value type constructor for type: Physics2DRaycaster
    Physics2DRaycaster(::Array<UnityEngine::RaycastHit2D>* m_Hits_ = {}) noexcept : m_Hits{m_Hits_} {}
    // protected System.Void .ctor()
    // Offset: 0x1431A30
    // Implemented from: UnityEngine.EventSystems.PhysicsRaycaster
    // Base method: System.Void PhysicsRaycaster::.ctor()
    // Base method: System.Void BaseRaycaster::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Physics2DRaycaster* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::Physics2DRaycaster::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Physics2DRaycaster*, creationType>()));
    }
    // public override System.Void Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    // Offset: 0x1431A98
    // Implemented from: UnityEngine.EventSystems.PhysicsRaycaster
    // Base method: System.Void PhysicsRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    void Raycast(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList);
  }; // UnityEngine.EventSystems.Physics2DRaycaster
  #pragma pack(pop)
  static check_size<sizeof(Physics2DRaycaster), 64 + sizeof(::Array<UnityEngine::RaycastHit2D>*)> __UnityEngine_EventSystems_Physics2DRaycasterSizeCheck;
  static_assert(sizeof(Physics2DRaycaster) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::Physics2DRaycaster*, "UnityEngine.EventSystems", "Physics2DRaycaster");
// Writing MetadataGetter for method: UnityEngine::EventSystems::Physics2DRaycaster::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::EventSystems::Physics2DRaycaster::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::Physics2DRaycaster::*)(UnityEngine::EventSystems::PointerEventData*, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>*)>(&UnityEngine::EventSystems::Physics2DRaycaster::Raycast)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::Physics2DRaycaster*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::EventSystems::PointerEventData*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>*>()});
  }
};
