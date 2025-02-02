// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightGroup
  class LightGroup;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightGroupSubsystem
  class LightGroupSubsystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightGroupSubsystem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupSubsystem*, "", "LightGroupSubsystem");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LightGroupSubsystem
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  // [RequireComponent] Offset: 1114954
  class LightGroupSubsystem : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private LightGroup _lightGroup
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::LightGroup* lightGroup;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightGroup*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private LightGroup _lightGroup
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightGroup*& dyn__lightGroup();
    // public System.Int32 get_groupId()
    // Offset: 0x151DA2C
    int get_groupId();
    // protected LightGroup get_lightGroup()
    // Offset: 0x151DA48
    ::GlobalNamespace::LightGroup* get_lightGroup();
    // protected System.Void .ctor()
    // Offset: 0x151C6D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightGroupSubsystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightGroupSubsystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightGroupSubsystem*, creationType>()));
    }
    // protected System.Void OnEnable()
    // Offset: 0x151DA50
    void OnEnable();
  }; // LightGroupSubsystem
  #pragma pack(pop)
  static check_size<sizeof(LightGroupSubsystem), 24 + sizeof(::GlobalNamespace::LightGroup*)> __GlobalNamespace_LightGroupSubsystemSizeCheck;
  static_assert(sizeof(LightGroupSubsystem) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightGroupSubsystem::get_groupId
// Il2CppName: get_groupId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LightGroupSubsystem::*)()>(&GlobalNamespace::LightGroupSubsystem::get_groupId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightGroupSubsystem*), "get_groupId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightGroupSubsystem::get_lightGroup
// Il2CppName: get_lightGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightGroup* (GlobalNamespace::LightGroupSubsystem::*)()>(&GlobalNamespace::LightGroupSubsystem::get_lightGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightGroupSubsystem*), "get_lightGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightGroupSubsystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LightGroupSubsystem::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightGroupSubsystem::*)()>(&GlobalNamespace::LightGroupSubsystem::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightGroupSubsystem*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
