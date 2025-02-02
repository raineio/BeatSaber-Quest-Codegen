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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EaseType
  struct EaseType;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TimeTweeningManager
  class TimeTweeningManager;
  // Forward declaring type: Tween`1<T>
  template<typename T>
  class Tween_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerScoreRingItem
  class MultiplayerScoreRingItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerScoreRingItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreRingItem*, "", "MultiplayerScoreRingItem");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerScoreRingItem
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerScoreRingItem : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::MultiplayerScoreRingItem::Pool
    class Pool;
    public:
    // private TMPro.TextMeshProUGUI _scoreText
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshProUGUI* scoreText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _nameText
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TextMeshProUGUI* nameText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // [InjectAttribute] Offset: 0x1124520
    // private readonly Tweening.TimeTweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x28
    ::Tweening::TimeTweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(::Tweening::TimeTweeningManager*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Color> _nameColorTween
    // Size: 0x8
    // Offset: 0x30
    ::Tweening::Tween_1<::UnityEngine::Color>* nameColorTween;
    // Field size check
    static_assert(sizeof(::Tweening::Tween_1<::UnityEngine::Color>*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Color> _scoreColorTween
    // Size: 0x8
    // Offset: 0x38
    ::Tweening::Tween_1<::UnityEngine::Color>* scoreColorTween;
    // Field size check
    static_assert(sizeof(::Tweening::Tween_1<::UnityEngine::Color>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshProUGUI _scoreText
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__scoreText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _nameText
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__nameText();
    // Get instance field reference: private readonly Tweening.TimeTweeningManager _tweeningManager
    [[deprecated("Use field access instead!")]] ::Tweening::TimeTweeningManager*& dyn__tweeningManager();
    // Get instance field reference: private Tweening.Tween`1<UnityEngine.Color> _nameColorTween
    [[deprecated("Use field access instead!")]] ::Tweening::Tween_1<::UnityEngine::Color>*& dyn__nameColorTween();
    // Get instance field reference: private Tweening.Tween`1<UnityEngine.Color> _scoreColorTween
    [[deprecated("Use field access instead!")]] ::Tweening::Tween_1<::UnityEngine::Color>*& dyn__scoreColorTween();
    // public System.Void .ctor()
    // Offset: 0x14FF078
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerScoreRingItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerScoreRingItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerScoreRingItem*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x14FEC34
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x14FEDFC
    void OnDestroy();
    // public System.Void SetPositionAndRotation(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x14FEE94
    void SetPositionAndRotation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);
    // public System.Void AnimateColors(UnityEngine.Color nameColor, UnityEngine.Color scoreColor, System.Single duration, EaseType easeType)
    // Offset: 0x14FEF10
    void AnimateColors(::UnityEngine::Color nameColor, ::UnityEngine::Color scoreColor, float duration, ::GlobalNamespace::EaseType easeType);
    // public System.Void SetName(System.String text)
    // Offset: 0x14FF040
    void SetName(::StringW text);
    // public System.Void SetScore(System.String text)
    // Offset: 0x14FF05C
    void SetScore(::StringW text);
    // private System.Void <Awake>b__6_0(UnityEngine.Color val)
    // Offset: 0x14FF080
    void $Awake$b__6_0(::UnityEngine::Color val);
    // private System.Void <Awake>b__6_1(UnityEngine.Color val)
    // Offset: 0x14FF0A4
    void $Awake$b__6_1(::UnityEngine::Color val);
  }; // MultiplayerScoreRingItem
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerScoreRingItem), 56 + sizeof(::Tweening::Tween_1<::UnityEngine::Color>*)> __GlobalNamespace_MultiplayerScoreRingItemSizeCheck;
  static_assert(sizeof(MultiplayerScoreRingItem) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingItem::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingItem::*)()>(&GlobalNamespace::MultiplayerScoreRingItem::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingItem*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingItem::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingItem::*)()>(&GlobalNamespace::MultiplayerScoreRingItem::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingItem*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingItem::SetPositionAndRotation
// Il2CppName: SetPositionAndRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingItem::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&GlobalNamespace::MultiplayerScoreRingItem::SetPositionAndRotation)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingItem*), "SetPositionAndRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingItem::AnimateColors
// Il2CppName: AnimateColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingItem::*)(::UnityEngine::Color, ::UnityEngine::Color, float, ::GlobalNamespace::EaseType)>(&GlobalNamespace::MultiplayerScoreRingItem::AnimateColors)> {
  static const MethodInfo* get() {
    static auto* nameColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* scoreColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* easeType = &::il2cpp_utils::GetClassFromName("", "EaseType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingItem*), "AnimateColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nameColor, scoreColor, duration, easeType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingItem::SetName
// Il2CppName: SetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingItem::*)(::StringW)>(&GlobalNamespace::MultiplayerScoreRingItem::SetName)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingItem*), "SetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingItem::SetScore
// Il2CppName: SetScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingItem::*)(::StringW)>(&GlobalNamespace::MultiplayerScoreRingItem::SetScore)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingItem*), "SetScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingItem::$Awake$b__6_0
// Il2CppName: <Awake>b__6_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingItem::*)(::UnityEngine::Color)>(&GlobalNamespace::MultiplayerScoreRingItem::$Awake$b__6_0)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingItem*), "<Awake>b__6_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingItem::$Awake$b__6_1
// Il2CppName: <Awake>b__6_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingItem::*)(::UnityEngine::Color)>(&GlobalNamespace::MultiplayerScoreRingItem::$Awake$b__6_1)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingItem*), "<Awake>b__6_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
