// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StaticEnvironmentLights
  class StaticEnvironmentLights;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StaticEnvironmentLights);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticEnvironmentLights*, "", "StaticEnvironmentLights");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: StaticEnvironmentLights
  // [TokenAttribute] Offset: FFFFFFFF
  class StaticEnvironmentLights : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Color[] _lightColors
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Color> lightColors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color>) == 0x8);
    // private UnityEngine.Material[] _materials
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Material*> materials;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Material*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Color[] _lightColors
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Color>& dyn__lightColors();
    // Get instance field reference: private UnityEngine.Material[] _materials
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Material*>& dyn__materials();
    // public System.Void .ctor()
    // Offset: 0x1417D48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StaticEnvironmentLights* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StaticEnvironmentLights::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StaticEnvironmentLights*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x1417CA0
    void Awake();
  }; // StaticEnvironmentLights
  #pragma pack(pop)
  static check_size<sizeof(StaticEnvironmentLights), 32 + sizeof(::ArrayW<::UnityEngine::Material*>)> __GlobalNamespace_StaticEnvironmentLightsSizeCheck;
  static_assert(sizeof(StaticEnvironmentLights) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StaticEnvironmentLights::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::StaticEnvironmentLights::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StaticEnvironmentLights::*)()>(&GlobalNamespace::StaticEnvironmentLights::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticEnvironmentLights*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
