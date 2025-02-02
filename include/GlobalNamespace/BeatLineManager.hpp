// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatLine
#include "GlobalNamespace/BeatLine.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: NoteController
  class NoteController;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatLineManager
  class BeatLineManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatLineManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatLineManager*, "", "BeatLineManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: BeatLineManager
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatLineManager : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single _linesYPosition
    // Size: 0x4
    // Offset: 0x18
    float linesYPosition;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: linesYPosition and: beatmapObjectManager
    char __padding0[0x4] = {};
    // [InjectAttribute] Offset: 0x111CEE8
    // private BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0x111CEF8
    // private BeatLine/Pool _beatLinePool
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BeatLine::Pool* beatLinePool;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatLine::Pool*) == 0x8);
    // [InjectAttribute] Offset: 0x111CF08
    // private AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<UnityEngine.Vector4,BeatLine> _activeBeatLines
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector4, ::GlobalNamespace::BeatLine*>* activeBeatLines;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector4, ::GlobalNamespace::BeatLine*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Vector4> _removeBeatLineKeyList
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* removeBeatLineKeyList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*) == 0x8);
    // private System.Boolean _isMidRotationValid
    // Size: 0x1
    // Offset: 0x48
    bool isMidRotationValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isMidRotationValid and: midRotation
    char __padding6[0x3] = {};
    // private System.Single _midRotation
    // Size: 0x4
    // Offset: 0x4C
    float midRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rotationRange
    // Size: 0x4
    // Offset: 0x50
    float rotationRange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _linesYPosition
    [[deprecated("Use field access instead!")]] float& dyn__linesYPosition();
    // Get instance field reference: private BeatmapObjectManager _beatmapObjectManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private BeatLine/Pool _beatLinePool
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatLine::Pool*& dyn__beatLinePool();
    // Get instance field reference: private AudioTimeSyncController _audioTimeSyncController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<UnityEngine.Vector4,BeatLine> _activeBeatLines
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector4, ::GlobalNamespace::BeatLine*>*& dyn__activeBeatLines();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Vector4> _removeBeatLineKeyList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& dyn__removeBeatLineKeyList();
    // Get instance field reference: private System.Boolean _isMidRotationValid
    [[deprecated("Use field access instead!")]] bool& dyn__isMidRotationValid();
    // Get instance field reference: private System.Single _midRotation
    [[deprecated("Use field access instead!")]] float& dyn__midRotation();
    // Get instance field reference: private System.Single _rotationRange
    [[deprecated("Use field access instead!")]] float& dyn__rotationRange();
    // public System.Boolean get_isMidRotationValid()
    // Offset: 0x13AE670
    bool get_isMidRotationValid();
    // public System.Single get_midRotation()
    // Offset: 0x13AE678
    float get_midRotation();
    // public System.Single get_rotationRange()
    // Offset: 0x13AE680
    float get_rotationRange();
    // public System.Void .ctor()
    // Offset: 0x13AED60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatLineManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatLineManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatLineManager*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x13AE688
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x13AE71C
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x13AE7B0
    void Update();
    // private System.Void HandleNoteWasSpawned(NoteController noteController)
    // Offset: 0x13AEB64
    void HandleNoteWasSpawned(::GlobalNamespace::NoteController* noteController);
  }; // BeatLineManager
  #pragma pack(pop)
  static check_size<sizeof(BeatLineManager), 80 + sizeof(float)> __GlobalNamespace_BeatLineManagerSizeCheck;
  static_assert(sizeof(BeatLineManager) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatLineManager::get_isMidRotationValid
// Il2CppName: get_isMidRotationValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatLineManager::*)()>(&GlobalNamespace::BeatLineManager::get_isMidRotationValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatLineManager*), "get_isMidRotationValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatLineManager::get_midRotation
// Il2CppName: get_midRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatLineManager::*)()>(&GlobalNamespace::BeatLineManager::get_midRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatLineManager*), "get_midRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatLineManager::get_rotationRange
// Il2CppName: get_rotationRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatLineManager::*)()>(&GlobalNamespace::BeatLineManager::get_rotationRange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatLineManager*), "get_rotationRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatLineManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatLineManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatLineManager::*)()>(&GlobalNamespace::BeatLineManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatLineManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatLineManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatLineManager::*)()>(&GlobalNamespace::BeatLineManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatLineManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatLineManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatLineManager::*)()>(&GlobalNamespace::BeatLineManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatLineManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatLineManager::HandleNoteWasSpawned
// Il2CppName: HandleNoteWasSpawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatLineManager::*)(::GlobalNamespace::NoteController*)>(&GlobalNamespace::BeatLineManager::HandleNoteWasSpawned)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatLineManager*), "HandleNoteWasSpawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
