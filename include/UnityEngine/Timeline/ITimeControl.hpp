// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: ITimeControl
  class ITimeControl;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::Timeline::ITimeControl);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ITimeControl*, "UnityEngine.Timeline", "ITimeControl");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.ITimeControl
  // [TokenAttribute] Offset: FFFFFFFF
  class ITimeControl {
    public:
    // public System.Void SetTime(System.Double time)
    // Offset: 0xFFFFFFFF
    void SetTime(double time);
    // public System.Void OnControlTimeStart()
    // Offset: 0xFFFFFFFF
    void OnControlTimeStart();
    // public System.Void OnControlTimeStop()
    // Offset: 0xFFFFFFFF
    void OnControlTimeStop();
  }; // UnityEngine.Timeline.ITimeControl
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::ITimeControl::SetTime
// Il2CppName: SetTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ITimeControl::*)(double)>(&UnityEngine::Timeline::ITimeControl::SetTime)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ITimeControl*), "SetTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ITimeControl::OnControlTimeStart
// Il2CppName: OnControlTimeStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ITimeControl::*)()>(&UnityEngine::Timeline::ITimeControl::OnControlTimeStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ITimeControl*), "OnControlTimeStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ITimeControl::OnControlTimeStop
// Il2CppName: OnControlTimeStop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ITimeControl::*)()>(&UnityEngine::Timeline::ITimeControl::OnControlTimeStop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ITimeControl*), "OnControlTimeStop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
