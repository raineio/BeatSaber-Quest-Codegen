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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VisualEffectsController
  class VisualEffectsController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VisualEffectsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VisualEffectsController*, "", "VisualEffectsController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VisualEffectsController
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 10C698C
  class VisualEffectsController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private BoolSO _depthTextureEnabled
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BoolSO* depthTextureEnabled;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BoolSO*) == 0x8);
    // private UnityEngine.Camera _camera
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kDepthTextureEnabledKeyword
    static constexpr const char* kDepthTextureEnabledKeyword = "DEPTH_TEXTURE_ENABLED";
    // Get static field: static private System.String kDepthTextureEnabledKeyword
    static ::StringW _get_kDepthTextureEnabledKeyword();
    // Set static field: static private System.String kDepthTextureEnabledKeyword
    static void _set_kDepthTextureEnabledKeyword(::StringW value);
    // Get instance field reference: private BoolSO _depthTextureEnabled
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BoolSO*& dyn__depthTextureEnabled();
    // Get instance field reference: private UnityEngine.Camera _camera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn__camera();
    // public System.Void .ctor()
    // Offset: 0x2A436C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VisualEffectsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VisualEffectsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VisualEffectsController*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x2A4343C
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x2A43558
    void OnDestroy();
    // protected System.Void OnPreRender()
    // Offset: 0x2A43634
    void OnPreRender();
    // private System.Void HandleDepthTextureEnabledDidChange()
    // Offset: 0x2A434F0
    void HandleDepthTextureEnabledDidChange();
    // private System.Void SetShaderKeyword(System.String keyword, System.Boolean value)
    // Offset: 0x2A436B4
    void SetShaderKeyword(::StringW keyword, bool value);
  }; // VisualEffectsController
  #pragma pack(pop)
  static check_size<sizeof(VisualEffectsController), 32 + sizeof(::UnityEngine::Camera*)> __GlobalNamespace_VisualEffectsControllerSizeCheck;
  static_assert(sizeof(VisualEffectsController) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VisualEffectsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::VisualEffectsController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VisualEffectsController::*)()>(&GlobalNamespace::VisualEffectsController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualEffectsController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VisualEffectsController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VisualEffectsController::*)()>(&GlobalNamespace::VisualEffectsController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualEffectsController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VisualEffectsController::OnPreRender
// Il2CppName: OnPreRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VisualEffectsController::*)()>(&GlobalNamespace::VisualEffectsController::OnPreRender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualEffectsController*), "OnPreRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VisualEffectsController::HandleDepthTextureEnabledDidChange
// Il2CppName: HandleDepthTextureEnabledDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VisualEffectsController::*)()>(&GlobalNamespace::VisualEffectsController::HandleDepthTextureEnabledDidChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualEffectsController*), "HandleDepthTextureEnabledDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VisualEffectsController::SetShaderKeyword
// Il2CppName: SetShaderKeyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VisualEffectsController::*)(::StringW, bool)>(&GlobalNamespace::VisualEffectsController::SetShaderKeyword)> {
  static const MethodInfo* get() {
    static auto* keyword = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualEffectsController*), "SetShaderKeyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyword, value});
  }
};
