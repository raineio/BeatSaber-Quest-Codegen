// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CullingGroup
  class CullingGroup;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::CullingGroup);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CullingGroup*, "UnityEngine", "CullingGroup");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.CullingGroup
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: EB2C54
  class CullingGroup : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::CullingGroup::StateChanged
    class StateChanged;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private UnityEngine.CullingGroup/UnityEngine.StateChanged m_OnStateChanged
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::CullingGroup::StateChanged* m_OnStateChanged;
    // Field size check
    static_assert(sizeof(UnityEngine::CullingGroup::StateChanged*) == 0x8);
    public:
    // Get instance field reference: System.IntPtr m_Ptr
    System::IntPtr& dyn_m_Ptr();
    // Get instance field reference: private UnityEngine.CullingGroup/UnityEngine.StateChanged m_OnStateChanged
    UnityEngine::CullingGroup::StateChanged*& dyn_m_OnStateChanged();
    // static private System.Void SendEvents(UnityEngine.CullingGroup cullingGroup, System.IntPtr eventsPtr, System.Int32 count)
    // Offset: 0x1D08914
    static void SendEvents(UnityEngine::CullingGroup* cullingGroup, System::IntPtr eventsPtr, int count);
  }; // UnityEngine.CullingGroup
  #pragma pack(pop)
  static check_size<sizeof(CullingGroup), 24 + sizeof(UnityEngine::CullingGroup::StateChanged*)> __UnityEngine_CullingGroupSizeCheck;
  static_assert(sizeof(CullingGroup) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::CullingGroup::SendEvents
// Il2CppName: SendEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::CullingGroup*, System::IntPtr, int)>(&UnityEngine::CullingGroup::SendEvents)> {
  static const MethodInfo* get() {
    static auto* cullingGroup = &::il2cpp_utils::GetClassFromName("UnityEngine", "CullingGroup")->byval_arg;
    static auto* eventsPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CullingGroup*), "SendEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cullingGroup, eventsPtr, count});
  }
};
