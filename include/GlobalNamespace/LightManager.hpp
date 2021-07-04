// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: CameraRenderCallbacksManager/ICameraRenderCallbacks
#include "GlobalNamespace/CameraRenderCallbacksManager_ICameraRenderCallbacks.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: LightManager
  // [RequireComponent] Offset: DF5910
  // [ExecuteInEditMode] Offset: DF5910
  class LightManager : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*/ {
    public:
    // private readonly UnityEngine.Vector4[] _directionalLightDirections
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::Vector4>* directionalLightDirections;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector4>*) == 0x8);
    // private readonly UnityEngine.Vector4[] _directionalLightColors
    // Size: 0x8
    // Offset: 0x20
    ::Array<UnityEngine::Vector4>* directionalLightColors;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector4>*) == 0x8);
    // private readonly UnityEngine.Vector4[] _directionalLightPositions
    // Size: 0x8
    // Offset: 0x28
    ::Array<UnityEngine::Vector4>* directionalLightPositions;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector4>*) == 0x8);
    // private readonly System.Single[] _directionalLightRadii
    // Size: 0x8
    // Offset: 0x30
    ::Array<float>* directionalLightRadii;
    // Field size check
    static_assert(sizeof(::Array<float>*) == 0x8);
    // private readonly UnityEngine.Vector4[] _pointLightPositions
    // Size: 0x8
    // Offset: 0x38
    ::Array<UnityEngine::Vector4>* pointLightPositions;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector4>*) == 0x8);
    // private readonly UnityEngine.Vector4[] _pointLightColors
    // Size: 0x8
    // Offset: 0x40
    ::Array<UnityEngine::Vector4>* pointLightColors;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector4>*) == 0x8);
    // private System.Int32 lastRefreshFrameNum
    // Size: 0x4
    // Offset: 0x48
    int lastRefreshFrameNum;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LightManager
    LightManager(::Array<UnityEngine::Vector4>* directionalLightDirections_ = {}, ::Array<UnityEngine::Vector4>* directionalLightColors_ = {}, ::Array<UnityEngine::Vector4>* directionalLightPositions_ = {}, ::Array<float>* directionalLightRadii_ = {}, ::Array<UnityEngine::Vector4>* pointLightPositions_ = {}, ::Array<UnityEngine::Vector4>* pointLightColors_ = {}, int lastRefreshFrameNum_ = {}) noexcept : directionalLightDirections{directionalLightDirections_}, directionalLightColors{directionalLightColors_}, directionalLightPositions{directionalLightPositions_}, directionalLightRadii{directionalLightRadii_}, pointLightPositions{pointLightPositions_}, pointLightColors{pointLightColors_}, lastRefreshFrameNum{lastRefreshFrameNum_} {}
    // Creating interface conversion operator: operator GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks
    operator GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks() noexcept {
      return *reinterpret_cast<GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF657C
    // Get static field: static private readonly System.Int32 _directionalLightDirectionsID
    static int _get__directionalLightDirectionsID();
    // Set static field: static private readonly System.Int32 _directionalLightDirectionsID
    static void _set__directionalLightDirectionsID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF658C
    // Get static field: static private readonly System.Int32 _directionalLightPositionID
    static int _get__directionalLightPositionID();
    // Set static field: static private readonly System.Int32 _directionalLightPositionID
    static void _set__directionalLightPositionID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF659C
    // Get static field: static private readonly System.Int32 _directionalLightRadiiID
    static int _get__directionalLightRadiiID();
    // Set static field: static private readonly System.Int32 _directionalLightRadiiID
    static void _set__directionalLightRadiiID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF65AC
    // Get static field: static private readonly System.Int32 _directionalLightColorsID
    static int _get__directionalLightColorsID();
    // Set static field: static private readonly System.Int32 _directionalLightColorsID
    static void _set__directionalLightColorsID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF65BC
    // Get static field: static private readonly System.Int32 _pointLightPositionsID
    static int _get__pointLightPositionsID();
    // Set static field: static private readonly System.Int32 _pointLightPositionsID
    static void _set__pointLightPositionsID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF65CC
    // Get static field: static private readonly System.Int32 _pointLightColorsID
    static int _get__pointLightColorsID();
    // Set static field: static private readonly System.Int32 _pointLightColorsID
    static void _set__pointLightColorsID(int value);
    // protected System.Void OnDisable()
    // Offset: 0x1D8BAC8
    void OnDisable();
    // private System.Void OnWillRenderObject()
    // Offset: 0x1D8BB2C
    void OnWillRenderObject();
    // private System.Void OnBecameInvisible()
    // Offset: 0x1D8BBA4
    void OnBecameInvisible();
    // public System.Void OnCameraPreRender(UnityEngine.Camera camera)
    // Offset: 0x1D8BC08
    void OnCameraPreRender(UnityEngine::Camera* camera);
    // public System.Void OnCameraPostRender(UnityEngine.Camera camera)
    // Offset: 0x1D8C1E0
    void OnCameraPostRender(UnityEngine::Camera* camera);
    // protected System.Void OnDestroy()
    // Offset: 0x1D8C1E4
    void OnDestroy();
    // private System.Void ResetColors()
    // Offset: 0x1D8C1E8
    void ResetColors();
    // public System.Void .ctor()
    // Offset: 0x1D8C364
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LightManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightManager*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D8C424
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // LightManager
  #pragma pack(pop)
  static check_size<sizeof(LightManager), 72 + sizeof(int)> __GlobalNamespace_LightManagerSizeCheck;
  static_assert(sizeof(LightManager) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightManager*, "", "LightManager");
// Writing MetadataGetter for method: GlobalNamespace::LightManager::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightManager::*)()>(&GlobalNamespace::LightManager::OnDisable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightManager*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightManager::OnWillRenderObject
// Il2CppName: OnWillRenderObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightManager::*)()>(&GlobalNamespace::LightManager::OnWillRenderObject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightManager*), "OnWillRenderObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightManager::OnBecameInvisible
// Il2CppName: OnBecameInvisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightManager::*)()>(&GlobalNamespace::LightManager::OnBecameInvisible)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightManager*), "OnBecameInvisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightManager::OnCameraPreRender
// Il2CppName: OnCameraPreRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightManager::*)(UnityEngine::Camera*)>(&GlobalNamespace::LightManager::OnCameraPreRender)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightManager*), "OnCameraPreRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Camera*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightManager::OnCameraPostRender
// Il2CppName: OnCameraPostRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightManager::*)(UnityEngine::Camera*)>(&GlobalNamespace::LightManager::OnCameraPostRender)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightManager*), "OnCameraPostRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Camera*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightManager::*)()>(&GlobalNamespace::LightManager::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightManager::ResetColors
// Il2CppName: ResetColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightManager::*)()>(&GlobalNamespace::LightManager::ResetColors)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightManager*), "ResetColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LightManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::LightManager::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
