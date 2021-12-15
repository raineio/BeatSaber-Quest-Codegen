// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSystemPerfMetrics
#include "GlobalNamespace/OVRSystemPerfMetrics.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PerfMetrics
  class PerfMetrics;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::OVRSystemPerfMetrics::PerfMetrics);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSystemPerfMetrics::PerfMetrics*, "", "OVRSystemPerfMetrics/PerfMetrics");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x7C
  #pragma pack(push, 1)
  // Autogenerated type: OVRSystemPerfMetrics/PerfMetrics
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRSystemPerfMetrics::PerfMetrics : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Int32 frameCount
    // Size: 0x4
    // Offset: 0x10
    int frameCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single frameTime
    // Size: 0x4
    // Offset: 0x14
    float frameTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single deltaFrameTime
    // Size: 0x4
    // Offset: 0x18
    float deltaFrameTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean appCpuTime_IsValid
    // Size: 0x1
    // Offset: 0x1C
    bool appCpuTime_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: appCpuTime_IsValid and: appCpuTime
    char __padding3[0x3] = {};
    // public System.Single appCpuTime
    // Size: 0x4
    // Offset: 0x20
    float appCpuTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean appGpuTime_IsValid
    // Size: 0x1
    // Offset: 0x24
    bool appGpuTime_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: appGpuTime_IsValid and: appGpuTime
    char __padding5[0x3] = {};
    // public System.Single appGpuTime
    // Size: 0x4
    // Offset: 0x28
    float appGpuTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean compositorCpuTime_IsValid
    // Size: 0x1
    // Offset: 0x2C
    bool compositorCpuTime_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: compositorCpuTime_IsValid and: compositorCpuTime
    char __padding7[0x3] = {};
    // public System.Single compositorCpuTime
    // Size: 0x4
    // Offset: 0x30
    float compositorCpuTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean compositorGpuTime_IsValid
    // Size: 0x1
    // Offset: 0x34
    bool compositorGpuTime_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: compositorGpuTime_IsValid and: compositorGpuTime
    char __padding9[0x3] = {};
    // public System.Single compositorGpuTime
    // Size: 0x4
    // Offset: 0x38
    float compositorGpuTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean compositorDroppedFrameCount_IsValid
    // Size: 0x1
    // Offset: 0x3C
    bool compositorDroppedFrameCount_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: compositorDroppedFrameCount_IsValid and: compositorDroppedFrameCount
    char __padding11[0x3] = {};
    // public System.Int32 compositorDroppedFrameCount
    // Size: 0x4
    // Offset: 0x40
    int compositorDroppedFrameCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean systemGpuUtilPercentage_IsValid
    // Size: 0x1
    // Offset: 0x44
    bool systemGpuUtilPercentage_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: systemGpuUtilPercentage_IsValid and: systemGpuUtilPercentage
    char __padding13[0x3] = {};
    // public System.Single systemGpuUtilPercentage
    // Size: 0x4
    // Offset: 0x48
    float systemGpuUtilPercentage;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean systemCpuUtilAveragePercentage_IsValid
    // Size: 0x1
    // Offset: 0x4C
    bool systemCpuUtilAveragePercentage_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: systemCpuUtilAveragePercentage_IsValid and: systemCpuUtilAveragePercentage
    char __padding15[0x3] = {};
    // public System.Single systemCpuUtilAveragePercentage
    // Size: 0x4
    // Offset: 0x50
    float systemCpuUtilAveragePercentage;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean systemCpuUtilWorstPercentage_IsValid
    // Size: 0x1
    // Offset: 0x54
    bool systemCpuUtilWorstPercentage_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: systemCpuUtilWorstPercentage_IsValid and: systemCpuUtilWorstPercentage
    char __padding17[0x3] = {};
    // public System.Single systemCpuUtilWorstPercentage
    // Size: 0x4
    // Offset: 0x58
    float systemCpuUtilWorstPercentage;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean deviceCpuClockFrequencyInMHz_IsValid
    // Size: 0x1
    // Offset: 0x5C
    bool deviceCpuClockFrequencyInMHz_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: deviceCpuClockFrequencyInMHz_IsValid and: deviceCpuClockFrequencyInMHz
    char __padding19[0x3] = {};
    // public System.Single deviceCpuClockFrequencyInMHz
    // Size: 0x4
    // Offset: 0x60
    float deviceCpuClockFrequencyInMHz;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean deviceGpuClockFrequencyInMHz_IsValid
    // Size: 0x1
    // Offset: 0x64
    bool deviceGpuClockFrequencyInMHz_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: deviceGpuClockFrequencyInMHz_IsValid and: deviceGpuClockFrequencyInMHz
    char __padding21[0x3] = {};
    // public System.Single deviceGpuClockFrequencyInMHz
    // Size: 0x4
    // Offset: 0x68
    float deviceGpuClockFrequencyInMHz;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean deviceCpuClockLevel_IsValid
    // Size: 0x1
    // Offset: 0x6C
    bool deviceCpuClockLevel_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: deviceCpuClockLevel_IsValid and: deviceCpuClockLevel
    char __padding23[0x3] = {};
    // public System.Int32 deviceCpuClockLevel
    // Size: 0x4
    // Offset: 0x70
    int deviceCpuClockLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean deviceGpuClockLevel_IsValid
    // Size: 0x1
    // Offset: 0x74
    bool deviceGpuClockLevel_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: deviceGpuClockLevel_IsValid and: deviceGpuClockLevel
    char __padding25[0x3] = {};
    // public System.Int32 deviceGpuClockLevel
    // Size: 0x4
    // Offset: 0x78
    int deviceGpuClockLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Int32 frameCount
    int& dyn_frameCount();
    // Get instance field reference: public System.Single frameTime
    float& dyn_frameTime();
    // Get instance field reference: public System.Single deltaFrameTime
    float& dyn_deltaFrameTime();
    // Get instance field reference: public System.Boolean appCpuTime_IsValid
    bool& dyn_appCpuTime_IsValid();
    // Get instance field reference: public System.Single appCpuTime
    float& dyn_appCpuTime();
    // Get instance field reference: public System.Boolean appGpuTime_IsValid
    bool& dyn_appGpuTime_IsValid();
    // Get instance field reference: public System.Single appGpuTime
    float& dyn_appGpuTime();
    // Get instance field reference: public System.Boolean compositorCpuTime_IsValid
    bool& dyn_compositorCpuTime_IsValid();
    // Get instance field reference: public System.Single compositorCpuTime
    float& dyn_compositorCpuTime();
    // Get instance field reference: public System.Boolean compositorGpuTime_IsValid
    bool& dyn_compositorGpuTime_IsValid();
    // Get instance field reference: public System.Single compositorGpuTime
    float& dyn_compositorGpuTime();
    // Get instance field reference: public System.Boolean compositorDroppedFrameCount_IsValid
    bool& dyn_compositorDroppedFrameCount_IsValid();
    // Get instance field reference: public System.Int32 compositorDroppedFrameCount
    int& dyn_compositorDroppedFrameCount();
    // Get instance field reference: public System.Boolean systemGpuUtilPercentage_IsValid
    bool& dyn_systemGpuUtilPercentage_IsValid();
    // Get instance field reference: public System.Single systemGpuUtilPercentage
    float& dyn_systemGpuUtilPercentage();
    // Get instance field reference: public System.Boolean systemCpuUtilAveragePercentage_IsValid
    bool& dyn_systemCpuUtilAveragePercentage_IsValid();
    // Get instance field reference: public System.Single systemCpuUtilAveragePercentage
    float& dyn_systemCpuUtilAveragePercentage();
    // Get instance field reference: public System.Boolean systemCpuUtilWorstPercentage_IsValid
    bool& dyn_systemCpuUtilWorstPercentage_IsValid();
    // Get instance field reference: public System.Single systemCpuUtilWorstPercentage
    float& dyn_systemCpuUtilWorstPercentage();
    // Get instance field reference: public System.Boolean deviceCpuClockFrequencyInMHz_IsValid
    bool& dyn_deviceCpuClockFrequencyInMHz_IsValid();
    // Get instance field reference: public System.Single deviceCpuClockFrequencyInMHz
    float& dyn_deviceCpuClockFrequencyInMHz();
    // Get instance field reference: public System.Boolean deviceGpuClockFrequencyInMHz_IsValid
    bool& dyn_deviceGpuClockFrequencyInMHz_IsValid();
    // Get instance field reference: public System.Single deviceGpuClockFrequencyInMHz
    float& dyn_deviceGpuClockFrequencyInMHz();
    // Get instance field reference: public System.Boolean deviceCpuClockLevel_IsValid
    bool& dyn_deviceCpuClockLevel_IsValid();
    // Get instance field reference: public System.Int32 deviceCpuClockLevel
    int& dyn_deviceCpuClockLevel();
    // Get instance field reference: public System.Boolean deviceGpuClockLevel_IsValid
    bool& dyn_deviceGpuClockLevel_IsValid();
    // Get instance field reference: public System.Int32 deviceGpuClockLevel
    int& dyn_deviceGpuClockLevel();
    // public System.String ToJSON()
    // Offset: 0x216A468
    ::Il2CppString* ToJSON();
    // public System.Boolean LoadFromJSON(System.String json)
    // Offset: 0x216A954
    bool LoadFromJSON(::Il2CppString* json);
    // public System.Void .ctor()
    // Offset: 0x216A8D8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSystemPerfMetrics::PerfMetrics* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRSystemPerfMetrics::PerfMetrics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSystemPerfMetrics::PerfMetrics*, creationType>()));
    }
  }; // OVRSystemPerfMetrics/PerfMetrics
  #pragma pack(pop)
  static check_size<sizeof(OVRSystemPerfMetrics::PerfMetrics), 120 + sizeof(int)> __GlobalNamespace_OVRSystemPerfMetrics_PerfMetricsSizeCheck;
  static_assert(sizeof(OVRSystemPerfMetrics::PerfMetrics) == 0x7C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSystemPerfMetrics::PerfMetrics::ToJSON
// Il2CppName: ToJSON
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::OVRSystemPerfMetrics::PerfMetrics::*)()>(&GlobalNamespace::OVRSystemPerfMetrics::PerfMetrics::ToJSON)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSystemPerfMetrics::PerfMetrics*), "ToJSON", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSystemPerfMetrics::PerfMetrics::LoadFromJSON
// Il2CppName: LoadFromJSON
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSystemPerfMetrics::PerfMetrics::*)(::Il2CppString*)>(&GlobalNamespace::OVRSystemPerfMetrics::PerfMetrics::LoadFromJSON)> {
  static const MethodInfo* get() {
    static auto* json = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSystemPerfMetrics::PerfMetrics*), "LoadFromJSON", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{json});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSystemPerfMetrics::PerfMetrics::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
