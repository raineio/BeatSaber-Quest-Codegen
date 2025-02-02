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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RecordingUIController
  class RecordingUIController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RecordingUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingUIController*, "", "RecordingUIController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: RecordingUIController
  // [TokenAttribute] Offset: FFFFFFFF
  class RecordingUIController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::RecordingUIController::InitData
    class InitData;
    public:
    // private UnityEngine.GameObject _circle
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* circle;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // [SpaceAttribute] Offset: 0x1121568
    // private System.Single _updateTimeSpan
    // Size: 0x4
    // Offset: 0x20
    float updateTimeSpan;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: updateTimeSpan and: initData
    char __padding1[0x4] = {};
    // [InjectOptionalAttribute] Offset: 0x11215A0
    // private readonly RecordingUIController/InitData _initData
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::RecordingUIController::InitData* initData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RecordingUIController::InitData*) == 0x8);
    // private System.Single _lastUpdateTime
    // Size: 0x4
    // Offset: 0x30
    float lastUpdateTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.GameObject _circle
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__circle();
    // Get instance field reference: private System.Single _updateTimeSpan
    [[deprecated("Use field access instead!")]] float& dyn__updateTimeSpan();
    // Get instance field reference: private readonly RecordingUIController/InitData _initData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RecordingUIController::InitData*& dyn__initData();
    // Get instance field reference: private System.Single _lastUpdateTime
    [[deprecated("Use field access instead!")]] float& dyn__lastUpdateTime();
    // public System.Void .ctor()
    // Offset: 0x14306A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RecordingUIController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RecordingUIController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RecordingUIController*, creationType>()));
    }
    // public System.Void Init()
    // Offset: 0x14305A0
    void Init();
    // protected System.Void Update()
    // Offset: 0x1430630
    void Update();
  }; // RecordingUIController
  #pragma pack(pop)
  static check_size<sizeof(RecordingUIController), 48 + sizeof(float)> __GlobalNamespace_RecordingUIControllerSizeCheck;
  static_assert(sizeof(RecordingUIController) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RecordingUIController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::RecordingUIController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingUIController::*)()>(&GlobalNamespace::RecordingUIController::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingUIController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RecordingUIController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingUIController::*)()>(&GlobalNamespace::RecordingUIController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingUIController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
