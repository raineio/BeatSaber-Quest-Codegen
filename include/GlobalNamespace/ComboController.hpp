// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IComboController
#include "GlobalNamespace/IComboController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerHeadAndObstacleInteraction
  class PlayerHeadAndObstacleInteraction;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ComboController
  class ComboController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ComboController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ComboController*, "", "ComboController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: ComboController
  // [TokenAttribute] Offset: FFFFFFFF
  class ComboController : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::IComboController*/ {
    public:
    public:
    // [InjectAttribute] Offset: 0x11250D8
    // private readonly PlayerHeadAndObstacleInteraction _playerHeadAndObstacleInteraction
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::PlayerHeadAndObstacleInteraction* playerHeadAndObstacleInteraction;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerHeadAndObstacleInteraction*) == 0x8);
    // [InjectAttribute] Offset: 0x11250E8
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // private System.Action`1<System.Int32> comboDidChangeEvent
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<int>* comboDidChangeEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<int>*) == 0x8);
    // private System.Action comboBreakingEventHappenedEvent
    // Size: 0x8
    // Offset: 0x30
    ::System::Action* comboBreakingEventHappenedEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Int32 _combo
    // Size: 0x4
    // Offset: 0x38
    int combo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _maxCombo
    // Size: 0x4
    // Offset: 0x3C
    int maxCombo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IComboController
    operator ::GlobalNamespace::IComboController() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IComboController*>(this);
    }
    // Creating interface conversion operator: i_IComboController
    inline ::GlobalNamespace::IComboController* i_IComboController() noexcept {
      return reinterpret_cast<::GlobalNamespace::IComboController*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly PlayerHeadAndObstacleInteraction _playerHeadAndObstacleInteraction
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerHeadAndObstacleInteraction*& dyn__playerHeadAndObstacleInteraction();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private System.Action`1<System.Int32> comboDidChangeEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<int>*& dyn_comboDidChangeEvent();
    // Get instance field reference: private System.Action comboBreakingEventHappenedEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_comboBreakingEventHappenedEvent();
    // Get instance field reference: private System.Int32 _combo
    [[deprecated("Use field access instead!")]] int& dyn__combo();
    // Get instance field reference: private System.Int32 _maxCombo
    [[deprecated("Use field access instead!")]] int& dyn__maxCombo();
    // public System.Int32 get_maxCombo()
    // Offset: 0x143B68C
    int get_maxCombo();
    // public System.Void add_comboDidChangeEvent(System.Action`1<System.Int32> value)
    // Offset: 0x143B694
    void add_comboDidChangeEvent(::System::Action_1<int>* value);
    // public System.Void remove_comboDidChangeEvent(System.Action`1<System.Int32> value)
    // Offset: 0x143B738
    void remove_comboDidChangeEvent(::System::Action_1<int>* value);
    // public System.Void add_comboBreakingEventHappenedEvent(System.Action value)
    // Offset: 0x143B7DC
    void add_comboBreakingEventHappenedEvent(::System::Action* value);
    // public System.Void remove_comboBreakingEventHappenedEvent(System.Action value)
    // Offset: 0x143B880
    void remove_comboBreakingEventHappenedEvent(::System::Action* value);
    // public System.Void .ctor()
    // Offset: 0x143BDC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ComboController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ComboController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ComboController*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x143B924
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x143BA40
    void OnDestroy();
    // private System.Void HandlePlayerHeadDidEnterObstacles()
    // Offset: 0x143BBA4
    void HandlePlayerHeadDidEnterObstacles();
    // private System.Void HandleNoteWasCut(NoteController noteController, in NoteCutInfo noteCutInfo)
    // Offset: 0x143BC28
    void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);
    // private System.Void HandleNoteWasMissed(NoteController noteController)
    // Offset: 0x143BD08
    void HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController);
  }; // ComboController
  #pragma pack(pop)
  static check_size<sizeof(ComboController), 60 + sizeof(int)> __GlobalNamespace_ComboControllerSizeCheck;
  static_assert(sizeof(ComboController) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ComboController::get_maxCombo
// Il2CppName: get_maxCombo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ComboController::*)()>(&GlobalNamespace::ComboController::get_maxCombo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboController*), "get_maxCombo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboController::add_comboDidChangeEvent
// Il2CppName: add_comboDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboController::*)(::System::Action_1<int>*)>(&GlobalNamespace::ComboController::add_comboDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboController*), "add_comboDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboController::remove_comboDidChangeEvent
// Il2CppName: remove_comboDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboController::*)(::System::Action_1<int>*)>(&GlobalNamespace::ComboController::remove_comboDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboController*), "remove_comboDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboController::add_comboBreakingEventHappenedEvent
// Il2CppName: add_comboBreakingEventHappenedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboController::*)(::System::Action*)>(&GlobalNamespace::ComboController::add_comboBreakingEventHappenedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboController*), "add_comboBreakingEventHappenedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboController::remove_comboBreakingEventHappenedEvent
// Il2CppName: remove_comboBreakingEventHappenedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboController::*)(::System::Action*)>(&GlobalNamespace::ComboController::remove_comboBreakingEventHappenedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboController*), "remove_comboBreakingEventHappenedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ComboController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboController::*)()>(&GlobalNamespace::ComboController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboController::*)()>(&GlobalNamespace::ComboController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboController::HandlePlayerHeadDidEnterObstacles
// Il2CppName: HandlePlayerHeadDidEnterObstacles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboController::*)()>(&GlobalNamespace::ComboController::HandlePlayerHeadDidEnterObstacles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboController*), "HandlePlayerHeadDidEnterObstacles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboController::HandleNoteWasCut
// Il2CppName: HandleNoteWasCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboController::*)(::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::ComboController::HandleNoteWasCut)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboController*), "HandleNoteWasCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController, noteCutInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboController::HandleNoteWasMissed
// Il2CppName: HandleNoteWasMissed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboController::*)(::GlobalNamespace::NoteController*)>(&GlobalNamespace::ComboController::HandleNoteWasMissed)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboController*), "HandleNoteWasMissed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
