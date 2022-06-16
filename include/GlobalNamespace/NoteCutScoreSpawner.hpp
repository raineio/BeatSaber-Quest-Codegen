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
  // Forward declaring type: FlyingScoreSpawner
  class FlyingScoreSpawner;
  // Forward declaring type: IScoreController
  class IScoreController;
  // Forward declaring type: ScoringElement
  class ScoringElement;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NoteCutScoreSpawner
  class NoteCutScoreSpawner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NoteCutScoreSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutScoreSpawner*, "", "NoteCutScoreSpawner");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: NoteCutScoreSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteCutScoreSpawner : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private FlyingScoreSpawner _flyingScoreSpawner
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::FlyingScoreSpawner* flyingScoreSpawner;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FlyingScoreSpawner*) == 0x8);
    // [InjectAttribute] Offset: 0x10D785C
    // private readonly IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IScoreController*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private FlyingScoreSpawner _flyingScoreSpawner
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FlyingScoreSpawner*& dyn__flyingScoreSpawner();
    // Get instance field reference: private readonly IScoreController _scoreController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IScoreController*& dyn__scoreController();
    // public System.Void .ctor()
    // Offset: 0x14AFFA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutScoreSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoteCutScoreSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutScoreSpawner*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x14AFCD4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x14AFDC8
    void OnDestroy();
    // private System.Void HandleScoringForNoteStarted(ScoringElement scoringElement)
    // Offset: 0x14AFEC8
    void HandleScoringForNoteStarted(::GlobalNamespace::ScoringElement* scoringElement);
  }; // NoteCutScoreSpawner
  #pragma pack(pop)
  static check_size<sizeof(NoteCutScoreSpawner), 32 + sizeof(::GlobalNamespace::IScoreController*)> __GlobalNamespace_NoteCutScoreSpawnerSizeCheck;
  static_assert(sizeof(NoteCutScoreSpawner) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteCutScoreSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NoteCutScoreSpawner::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutScoreSpawner::*)()>(&GlobalNamespace::NoteCutScoreSpawner::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutScoreSpawner*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutScoreSpawner::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutScoreSpawner::*)()>(&GlobalNamespace::NoteCutScoreSpawner::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutScoreSpawner*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutScoreSpawner::HandleScoringForNoteStarted
// Il2CppName: HandleScoringForNoteStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutScoreSpawner::*)(::GlobalNamespace::ScoringElement*)>(&GlobalNamespace::NoteCutScoreSpawner::HandleScoringForNoteStarted)> {
  static const MethodInfo* get() {
    static auto* scoringElement = &::il2cpp_utils::GetClassFromName("", "ScoringElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutScoreSpawner*), "HandleScoringForNoteStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scoringElement});
  }
};
