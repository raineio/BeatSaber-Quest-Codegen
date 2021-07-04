// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.CustomYieldInstruction
#include "UnityEngine/CustomYieldInstruction.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.WaitForSecondsRealtime
  class WaitForSecondsRealtime : public UnityEngine::CustomYieldInstruction {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xD93C1C
    // [CompilerGeneratedAttribute] Offset: 0xD93C1C
    // private System.Single <waitTime>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    float waitTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_WaitUntilTime
    // Size: 0x4
    // Offset: 0x14
    float m_WaitUntilTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: WaitForSecondsRealtime
    WaitForSecondsRealtime(float waitTime_ = {}, float m_WaitUntilTime_ = {}) noexcept : waitTime{waitTime_}, m_WaitUntilTime{m_WaitUntilTime_} {}
    // public System.Single get_waitTime()
    // Offset: 0x2325B4C
    float get_waitTime();
    // public System.Void set_waitTime(System.Single value)
    // Offset: 0x2325B54
    void set_waitTime(float value);
    // public System.Void .ctor(System.Single time)
    // Offset: 0x2325BEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WaitForSecondsRealtime* New_ctor(float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::WaitForSecondsRealtime::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WaitForSecondsRealtime*, creationType>(time)));
    }
    // public override System.Boolean get_keepWaiting()
    // Offset: 0x2325B5C
    // Implemented from: UnityEngine.CustomYieldInstruction
    // Base method: System.Boolean CustomYieldInstruction::get_keepWaiting()
    bool get_keepWaiting();
  }; // UnityEngine.WaitForSecondsRealtime
  #pragma pack(pop)
  static check_size<sizeof(WaitForSecondsRealtime), 20 + sizeof(float)> __UnityEngine_WaitForSecondsRealtimeSizeCheck;
  static_assert(sizeof(WaitForSecondsRealtime) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::WaitForSecondsRealtime*, "UnityEngine", "WaitForSecondsRealtime");
// Writing MetadataGetter for method: UnityEngine::WaitForSecondsRealtime::get_waitTime
// Il2CppName: get_waitTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::WaitForSecondsRealtime::*)()>(&UnityEngine::WaitForSecondsRealtime::get_waitTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WaitForSecondsRealtime*), "get_waitTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::WaitForSecondsRealtime::set_waitTime
// Il2CppName: set_waitTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::WaitForSecondsRealtime::*)(float)>(&UnityEngine::WaitForSecondsRealtime::set_waitTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WaitForSecondsRealtime*), "set_waitTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::WaitForSecondsRealtime::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::WaitForSecondsRealtime::get_keepWaiting
// Il2CppName: get_keepWaiting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::WaitForSecondsRealtime::*)()>(&UnityEngine::WaitForSecondsRealtime::get_keepWaiting)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WaitForSecondsRealtime*), "get_keepWaiting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
