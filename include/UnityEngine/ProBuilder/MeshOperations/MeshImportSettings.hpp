// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.MeshImportSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class MeshImportSettings : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Boolean m_Quads
    // Size: 0x1
    // Offset: 0x10
    bool m_Quads;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_Smoothing
    // Size: 0x1
    // Offset: 0x11
    bool m_Smoothing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_Smoothing and: m_SmoothingThreshold
    char __padding1[0x2] = {};
    // private System.Single m_SmoothingThreshold
    // Size: 0x4
    // Offset: 0x14
    float m_SmoothingThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Boolean m_Quads
    bool& dyn_m_Quads();
    // Get instance field reference: private System.Boolean m_Smoothing
    bool& dyn_m_Smoothing();
    // Get instance field reference: private System.Single m_SmoothingThreshold
    float& dyn_m_SmoothingThreshold();
    // public System.Boolean get_quads()
    // Offset: 0x18F77EC
    bool get_quads();
    // public System.Void set_quads(System.Boolean value)
    // Offset: 0x18F77F4
    void set_quads(bool value);
    // public System.Boolean get_smoothing()
    // Offset: 0x18F7800
    bool get_smoothing();
    // public System.Void set_smoothing(System.Boolean value)
    // Offset: 0x18F7808
    void set_smoothing(bool value);
    // public System.Single get_smoothingAngle()
    // Offset: 0x18F7814
    float get_smoothingAngle();
    // public System.Void set_smoothingAngle(System.Single value)
    // Offset: 0x18F781C
    void set_smoothingAngle(float value);
    // public System.Void .ctor()
    // Offset: 0x18F78EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeshImportSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeshImportSettings*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x18F7824
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.MeshOperations.MeshImportSettings
  #pragma pack(pop)
  static check_size<sizeof(MeshImportSettings), 20 + sizeof(float)> __UnityEngine_ProBuilder_MeshOperations_MeshImportSettingsSizeCheck;
  static_assert(sizeof(MeshImportSettings) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*, "UnityEngine.ProBuilder.MeshOperations", "MeshImportSettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::get_quads
// Il2CppName: get_quads
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::*)()>(&UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::get_quads)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*), "get_quads", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::set_quads
// Il2CppName: set_quads
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::*)(bool)>(&UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::set_quads)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*), "set_quads", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::get_smoothing
// Il2CppName: get_smoothing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::*)()>(&UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::get_smoothing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*), "get_smoothing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::set_smoothing
// Il2CppName: set_smoothing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::*)(bool)>(&UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::set_smoothing)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*), "set_smoothing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::get_smoothingAngle
// Il2CppName: get_smoothingAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::*)()>(&UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::get_smoothingAngle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*), "get_smoothingAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::set_smoothingAngle
// Il2CppName: set_smoothingAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::*)(float)>(&UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::set_smoothingAngle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*), "set_smoothingAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::*)()>(&UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
