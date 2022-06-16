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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: Tween
  class Tween;
}
// Completed forward declares
// Type namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Tweening::TweeningManager);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::TweeningManager*, "Tweening", "TweeningManager");
// Type namespace: Tweening
namespace Tweening {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: Tweening.TweeningManager
  // [TokenAttribute] Offset: FFFFFFFF
  class TweeningManager : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private readonly System.Collections.Generic.List`1<Tweening.Tween> _activeTweens
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::Tweening::Tween*>* activeTweens;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Tweening::Tween*>*) == 0x8);
    // private readonly System.Collections.Generic.HashSet`1<Tweening.Tween> _activeTweensSet
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>* activeTweensSet;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.HashSet`1<Tweening.Tween>> _tweensByOwner
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<::Il2CppObject*, ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>* tweensByOwner;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::Il2CppObject*, ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>*) == 0x8);
    // private readonly System.Collections.Generic.Queue`1<System.Collections.Generic.HashSet`1<Tweening.Tween>> _reusableTweenHashSets
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::Queue_1<::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>* reusableTweenHashSets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>*) == 0x8);
    // private System.Single _prevTime
    // Size: 0x4
    // Offset: 0x38
    float prevTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Tweening.Tween> _activeTweens
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Tweening::Tween*>*& dyn__activeTweens();
    // Get instance field reference: private readonly System.Collections.Generic.HashSet`1<Tweening.Tween> _activeTweensSet
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*& dyn__activeTweensSet();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.HashSet`1<Tweening.Tween>> _tweensByOwner
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::Il2CppObject*, ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>*& dyn__tweensByOwner();
    // Get instance field reference: private readonly System.Collections.Generic.Queue`1<System.Collections.Generic.HashSet`1<Tweening.Tween>> _reusableTweenHashSets
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>*& dyn__reusableTweenHashSets();
    // Get instance field reference: private System.Single _prevTime
    [[deprecated("Use field access instead!")]] float& dyn__prevTime();
    // protected System.Void .ctor()
    // Offset: 0x1499538
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TweeningManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Tweening::TweeningManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TweeningManager*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1499718
    void Start();
    // protected System.Void LateUpdate()
    // Offset: 0x1499784
    void LateUpdate();
    // protected System.Single GetTime()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float GetTime();
    // public Tweening.Tween AddTween(Tweening.Tween tween, System.Object owner)
    // Offset: 0x149993C
    ::Tweening::Tween* AddTween(::Tweening::Tween* tween, ::Il2CppObject* owner);
    // public Tweening.Tween RestartTween(Tweening.Tween tween, System.Object owner)
    // Offset: 0x1499A64
    ::Tweening::Tween* RestartTween(::Tweening::Tween* tween, ::Il2CppObject* owner);
    // public Tweening.Tween ResumeTween(Tweening.Tween tween, System.Object owner)
    // Offset: 0x1499AC4
    ::Tweening::Tween* ResumeTween(::Tweening::Tween* tween, ::Il2CppObject* owner);
    // public System.Void KillAllTweens(System.Object owner)
    // Offset: 0x1499AF4
    void KillAllTweens(::Il2CppObject* owner);
    // private System.Boolean AddTweenToDataStructures(Tweening.Tween tween, System.Object owner)
    // Offset: 0x1499988
    bool AddTweenToDataStructures(::Tweening::Tween* tween, ::Il2CppObject* owner);
    // private System.Void AddTweenToOwnerDictionary(Tweening.Tween tween, System.Object owner)
    // Offset: 0x1499C68
    void AddTweenToOwnerDictionary(::Tweening::Tween* tween, ::Il2CppObject* owner);
  }; // Tweening.TweeningManager
  #pragma pack(pop)
  static check_size<sizeof(TweeningManager), 56 + sizeof(float)> __Tweening_TweeningManagerSizeCheck;
  static_assert(sizeof(TweeningManager) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Tweening::TweeningManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Tweening::TweeningManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::TweeningManager::*)()>(&Tweening::TweeningManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::TweeningManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::TweeningManager::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::TweeningManager::*)()>(&Tweening::TweeningManager::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::TweeningManager*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::TweeningManager::GetTime
// Il2CppName: GetTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Tweening::TweeningManager::*)()>(&Tweening::TweeningManager::GetTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::TweeningManager*), "GetTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::TweeningManager::AddTween
// Il2CppName: AddTween
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tweening::Tween* (Tweening::TweeningManager::*)(::Tweening::Tween*, ::Il2CppObject*)>(&Tweening::TweeningManager::AddTween)> {
  static const MethodInfo* get() {
    static auto* tween = &::il2cpp_utils::GetClassFromName("Tweening", "Tween")->byval_arg;
    static auto* owner = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::TweeningManager*), "AddTween", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tween, owner});
  }
};
// Writing MetadataGetter for method: Tweening::TweeningManager::RestartTween
// Il2CppName: RestartTween
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tweening::Tween* (Tweening::TweeningManager::*)(::Tweening::Tween*, ::Il2CppObject*)>(&Tweening::TweeningManager::RestartTween)> {
  static const MethodInfo* get() {
    static auto* tween = &::il2cpp_utils::GetClassFromName("Tweening", "Tween")->byval_arg;
    static auto* owner = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::TweeningManager*), "RestartTween", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tween, owner});
  }
};
// Writing MetadataGetter for method: Tweening::TweeningManager::ResumeTween
// Il2CppName: ResumeTween
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tweening::Tween* (Tweening::TweeningManager::*)(::Tweening::Tween*, ::Il2CppObject*)>(&Tweening::TweeningManager::ResumeTween)> {
  static const MethodInfo* get() {
    static auto* tween = &::il2cpp_utils::GetClassFromName("Tweening", "Tween")->byval_arg;
    static auto* owner = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::TweeningManager*), "ResumeTween", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tween, owner});
  }
};
// Writing MetadataGetter for method: Tweening::TweeningManager::KillAllTweens
// Il2CppName: KillAllTweens
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::TweeningManager::*)(::Il2CppObject*)>(&Tweening::TweeningManager::KillAllTweens)> {
  static const MethodInfo* get() {
    static auto* owner = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::TweeningManager*), "KillAllTweens", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{owner});
  }
};
// Writing MetadataGetter for method: Tweening::TweeningManager::AddTweenToDataStructures
// Il2CppName: AddTweenToDataStructures
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tweening::TweeningManager::*)(::Tweening::Tween*, ::Il2CppObject*)>(&Tweening::TweeningManager::AddTweenToDataStructures)> {
  static const MethodInfo* get() {
    static auto* tween = &::il2cpp_utils::GetClassFromName("Tweening", "Tween")->byval_arg;
    static auto* owner = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::TweeningManager*), "AddTweenToDataStructures", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tween, owner});
  }
};
// Writing MetadataGetter for method: Tweening::TweeningManager::AddTweenToOwnerDictionary
// Il2CppName: AddTweenToOwnerDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::TweeningManager::*)(::Tweening::Tween*, ::Il2CppObject*)>(&Tweening::TweeningManager::AddTweenToOwnerDictionary)> {
  static const MethodInfo* get() {
    static auto* tween = &::il2cpp_utils::GetClassFromName("Tweening", "Tween")->byval_arg;
    static auto* owner = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::TweeningManager*), "AddTweenToOwnerDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tween, owner});
  }
};
