// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: TimeHelper
  class TimeHelper : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _accumulator
    // Size: 0x4
    // Offset: 0x18
    float accumulator;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: TimeHelper
    TimeHelper(float accumulator_ = {}) noexcept : accumulator{accumulator_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [CompilerGeneratedAttribute] Offset: 0xDE33A0
    // Get static field: static private System.Single <time>k__BackingField
    static float _get_$time$k__BackingField();
    // Set static field: static private System.Single <time>k__BackingField
    static void _set_$time$k__BackingField(float value);
    // [CompilerGeneratedAttribute] Offset: 0xDE33B0
    // Get static field: static private System.Single <deltaTime>k__BackingField
    static float _get_$deltaTime$k__BackingField();
    // Set static field: static private System.Single <deltaTime>k__BackingField
    static void _set_$deltaTime$k__BackingField(float value);
    // [CompilerGeneratedAttribute] Offset: 0xDE33C0
    // Get static field: static private System.Single <fixedDeltaTime>k__BackingField
    static float _get_$fixedDeltaTime$k__BackingField();
    // Set static field: static private System.Single <fixedDeltaTime>k__BackingField
    static void _set_$fixedDeltaTime$k__BackingField(float value);
    // [CompilerGeneratedAttribute] Offset: 0xDE33D0
    // Get static field: static private System.Single <interpolationFactor>k__BackingField
    static float _get_$interpolationFactor$k__BackingField();
    // Set static field: static private System.Single <interpolationFactor>k__BackingField
    static void _set_$interpolationFactor$k__BackingField(float value);
    // static public System.Single get_time()
    // Offset: 0x238B564
    static float get_time();
    // static private System.Void set_time(System.Single value)
    // Offset: 0x238B5B4
    static void set_time(float value);
    // static public System.Single get_deltaTime()
    // Offset: 0x238B610
    static float get_deltaTime();
    // static private System.Void set_deltaTime(System.Single value)
    // Offset: 0x238B660
    static void set_deltaTime(float value);
    // static public System.Single get_fixedDeltaTime()
    // Offset: 0x238B6BC
    static float get_fixedDeltaTime();
    // static private System.Void set_fixedDeltaTime(System.Single value)
    // Offset: 0x238B70C
    static void set_fixedDeltaTime(float value);
    // static public System.Single get_interpolationFactor()
    // Offset: 0x238B768
    static float get_interpolationFactor();
    // static private System.Void set_interpolationFactor(System.Single value)
    // Offset: 0x238B7B8
    static void set_interpolationFactor(float value);
    // protected System.Void Awake()
    // Offset: 0x238B814
    void Awake();
    // protected System.Void FixedUpdate()
    // Offset: 0x238B8C4
    void FixedUpdate();
    // protected System.Void Update()
    // Offset: 0x238B974
    void Update();
    // public System.Void .ctor()
    // Offset: 0x238BB28
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TimeHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeHelper*, creationType>()));
    }
  }; // TimeHelper
  #pragma pack(pop)
  static check_size<sizeof(TimeHelper), 24 + sizeof(float)> __GlobalNamespace_TimeHelperSizeCheck;
  static_assert(sizeof(TimeHelper) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TimeHelper*, "", "TimeHelper");
// Writing MetadataGetter for method: GlobalNamespace::TimeHelper::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&GlobalNamespace::TimeHelper::get_time)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeHelper*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeHelper::set_time
// Il2CppName: set_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&GlobalNamespace::TimeHelper::set_time)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeHelper*), "set_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeHelper::get_deltaTime
// Il2CppName: get_deltaTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&GlobalNamespace::TimeHelper::get_deltaTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeHelper*), "get_deltaTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeHelper::set_deltaTime
// Il2CppName: set_deltaTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&GlobalNamespace::TimeHelper::set_deltaTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeHelper*), "set_deltaTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeHelper::get_fixedDeltaTime
// Il2CppName: get_fixedDeltaTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&GlobalNamespace::TimeHelper::get_fixedDeltaTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeHelper*), "get_fixedDeltaTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeHelper::set_fixedDeltaTime
// Il2CppName: set_fixedDeltaTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&GlobalNamespace::TimeHelper::set_fixedDeltaTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeHelper*), "set_fixedDeltaTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeHelper::get_interpolationFactor
// Il2CppName: get_interpolationFactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&GlobalNamespace::TimeHelper::get_interpolationFactor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeHelper*), "get_interpolationFactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeHelper::set_interpolationFactor
// Il2CppName: set_interpolationFactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&GlobalNamespace::TimeHelper::set_interpolationFactor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeHelper*), "set_interpolationFactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeHelper::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TimeHelper::*)()>(&GlobalNamespace::TimeHelper::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeHelper*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeHelper::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TimeHelper::*)()>(&GlobalNamespace::TimeHelper::FixedUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeHelper*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeHelper::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TimeHelper::*)()>(&GlobalNamespace::TimeHelper::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeHelper*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
