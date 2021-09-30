// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_GenerateGeoCache
#include "HoudiniEngineUnity/HEU_GenerateGeoCache.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class HEU_GenerateGeoCache::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.<>c <>9
    static HoudiniEngineUnity::HEU_GenerateGeoCache::$$c* _get_$$9();
    // Set static field: static public readonly HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.<>c <>9
    static void _set_$$9(HoudiniEngineUnity::HEU_GenerateGeoCache::$$c* value);
    // Get static field: static public System.Predicate`1<UnityEngine.Material> <>9__63_0
    static System::Predicate_1<UnityEngine::Material*>* _get_$$9__63_0();
    // Set static field: static public System.Predicate`1<UnityEngine.Material> <>9__63_0
    static void _set_$$9__63_0(System::Predicate_1<UnityEngine::Material*>* value);
    // Get static field: static public System.Comparison`1<System.Single> <>9__65_0
    static System::Comparison_1<float>* _get_$$9__65_0();
    // Set static field: static public System.Comparison`1<System.Single> <>9__65_0
    static void _set_$$9__65_0(System::Comparison_1<float>* value);
    // static private System.Void .cctor()
    // Offset: 0x14A87BC
    static void _cctor();
    // System.Boolean <GetFinalMaterialsFromComparingNewWithPrevious>b__63_0(UnityEngine.Material material)
    // Offset: 0x14A8828
    bool $GetFinalMaterialsFromComparingNewWithPrevious$b__63_0(UnityEngine::Material* material);
    // System.Int32 <GenerateLODMeshesFromGeoGroups>b__65_0(System.Single a, System.Single b)
    // Offset: 0x14A8894
    int $GenerateLODMeshesFromGeoGroups$b__65_0(float a, float b);
    // public System.Void .ctor()
    // Offset: 0x14A8820
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_GenerateGeoCache::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_GenerateGeoCache::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_GenerateGeoCache::$$c*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_GenerateGeoCache::$$c*, "HoudiniEngineUnity", "HEU_GenerateGeoCache/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GenerateGeoCache::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_GenerateGeoCache::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GenerateGeoCache::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GenerateGeoCache::$$c::$GetFinalMaterialsFromComparingNewWithPrevious$b__63_0
// Il2CppName: <GetFinalMaterialsFromComparingNewWithPrevious>b__63_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_GenerateGeoCache::$$c::*)(UnityEngine::Material*)>(&HoudiniEngineUnity::HEU_GenerateGeoCache::$$c::$GetFinalMaterialsFromComparingNewWithPrevious$b__63_0)> {
  static const MethodInfo* get() {
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GenerateGeoCache::$$c*), "<GetFinalMaterialsFromComparingNewWithPrevious>b__63_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{material});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GenerateGeoCache::$$c::$GenerateLODMeshesFromGeoGroups$b__65_0
// Il2CppName: <GenerateLODMeshesFromGeoGroups>b__65_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HoudiniEngineUnity::HEU_GenerateGeoCache::$$c::*)(float, float)>(&HoudiniEngineUnity::HEU_GenerateGeoCache::$$c::$GenerateLODMeshesFromGeoGroups$b__65_0)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GenerateGeoCache::$$c*), "<GenerateLODMeshesFromGeoGroups>b__65_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GenerateGeoCache::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!