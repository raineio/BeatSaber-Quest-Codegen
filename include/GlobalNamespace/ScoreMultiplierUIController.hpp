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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IScoreController
  class IScoreController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ScoreMultiplierUIController
  class ScoreMultiplierUIController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ScoreMultiplierUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreMultiplierUIController*, "", "ScoreMultiplierUIController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: ScoreMultiplierUIController
  // [TokenAttribute] Offset: FFFFFFFF
  class ScoreMultiplierUIController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private TMPro.TextMeshProUGUI[] _multiplierTexts
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::TMPro::TextMeshProUGUI*> multiplierTexts;
    // Field size check
    static_assert(sizeof(::ArrayW<::TMPro::TextMeshProUGUI*>) == 0x8);
    // private UnityEngine.UI.Image _multiplierProgressImage
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Image* multiplierProgressImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.Animator _multiplierAnimator
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Animator* multiplierAnimator;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animator*) == 0x8);
    // [InjectAttribute] Offset: 0x1121640
    // private IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IScoreController*) == 0x8);
    // private System.Int32 _prevMultiplier
    // Size: 0x4
    // Offset: 0x38
    int prevMultiplier;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _multiplierIncreasedTriggerId
    // Size: 0x4
    // Offset: 0x3C
    int multiplierIncreasedTriggerId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _progressTarget
    // Size: 0x4
    // Offset: 0x40
    float progressTarget;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshProUGUI[] _multiplierTexts
    [[deprecated("Use field access instead!")]] ::ArrayW<::TMPro::TextMeshProUGUI*>& dyn__multiplierTexts();
    // Get instance field reference: private UnityEngine.UI.Image _multiplierProgressImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn__multiplierProgressImage();
    // Get instance field reference: private UnityEngine.Animator _multiplierAnimator
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animator*& dyn__multiplierAnimator();
    // Get instance field reference: private IScoreController _scoreController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IScoreController*& dyn__scoreController();
    // Get instance field reference: private System.Int32 _prevMultiplier
    [[deprecated("Use field access instead!")]] int& dyn__prevMultiplier();
    // Get instance field reference: private System.Int32 _multiplierIncreasedTriggerId
    [[deprecated("Use field access instead!")]] int& dyn__multiplierIncreasedTriggerId();
    // Get instance field reference: private System.Single _progressTarget
    [[deprecated("Use field access instead!")]] float& dyn__progressTarget();
    // public System.Void .ctor()
    // Offset: 0x1417210
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScoreMultiplierUIController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ScoreMultiplierUIController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScoreMultiplierUIController*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1416C94
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x1416F1C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1416F20
    void OnDisable();
    // private System.Void RegisterForEvents()
    // Offset: 0x1416D74
    void RegisterForEvents();
    // private System.Void UnregisterFromEvents()
    // Offset: 0x1416F24
    void UnregisterFromEvents();
    // protected System.Void Update()
    // Offset: 0x1417024
    void Update();
    // private System.Void HandleMultiplierDidChange(System.Int32 multiplier, System.Single progress)
    // Offset: 0x1417130
    void HandleMultiplierDidChange(int multiplier, float progress);
  }; // ScoreMultiplierUIController
  #pragma pack(pop)
  static check_size<sizeof(ScoreMultiplierUIController), 64 + sizeof(float)> __GlobalNamespace_ScoreMultiplierUIControllerSizeCheck;
  static_assert(sizeof(ScoreMultiplierUIController) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreMultiplierUIController::*)()>(&GlobalNamespace::ScoreMultiplierUIController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreMultiplierUIController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreMultiplierUIController::*)()>(&GlobalNamespace::ScoreMultiplierUIController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreMultiplierUIController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreMultiplierUIController::*)()>(&GlobalNamespace::ScoreMultiplierUIController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreMultiplierUIController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::RegisterForEvents
// Il2CppName: RegisterForEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreMultiplierUIController::*)()>(&GlobalNamespace::ScoreMultiplierUIController::RegisterForEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreMultiplierUIController*), "RegisterForEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::UnregisterFromEvents
// Il2CppName: UnregisterFromEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreMultiplierUIController::*)()>(&GlobalNamespace::ScoreMultiplierUIController::UnregisterFromEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreMultiplierUIController*), "UnregisterFromEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreMultiplierUIController::*)()>(&GlobalNamespace::ScoreMultiplierUIController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreMultiplierUIController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::HandleMultiplierDidChange
// Il2CppName: HandleMultiplierDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreMultiplierUIController::*)(int, float)>(&GlobalNamespace::ScoreMultiplierUIController::HandleMultiplierDidChange)> {
  static const MethodInfo* get() {
    static auto* multiplier = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* progress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreMultiplierUIController*), "HandleMultiplierDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiplier, progress});
  }
};
