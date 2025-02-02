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
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: MultiplayerLeadPlayerProvider
  class MultiplayerLeadPlayerProvider;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: FloatTween
  class FloatTween;
  // Forward declaring type: TimeTweeningManager
  class TimeTweeningManager;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerScoreDiffText
  class MultiplayerScoreDiffText;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerScoreDiffText);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreDiffText*, "", "MultiplayerScoreDiffText");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerScoreDiffText
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerScoreDiffText : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::MultiplayerScoreDiffText::HorizontalPosition
    struct HorizontalPosition;
    // Nested type: ::GlobalNamespace::MultiplayerScoreDiffText::State
    struct State;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MultiplayerScoreDiffText/State
    // [TokenAttribute] Offset: FFFFFFFF
    struct State/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: State
      constexpr State(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MultiplayerScoreDiffText/State Hidden
      static constexpr const int Hidden = 0;
      // Get static field: static public MultiplayerScoreDiffText/State Hidden
      static ::GlobalNamespace::MultiplayerScoreDiffText::State _get_Hidden();
      // Set static field: static public MultiplayerScoreDiffText/State Hidden
      static void _set_Hidden(::GlobalNamespace::MultiplayerScoreDiffText::State value);
      // static field const value: static public MultiplayerScoreDiffText/State Displayed
      static constexpr const int Displayed = 1;
      // Get static field: static public MultiplayerScoreDiffText/State Displayed
      static ::GlobalNamespace::MultiplayerScoreDiffText::State _get_Displayed();
      // Set static field: static public MultiplayerScoreDiffText/State Displayed
      static void _set_Displayed(::GlobalNamespace::MultiplayerScoreDiffText::State value);
      // static field const value: static public MultiplayerScoreDiffText/State AnimatingDisplay
      static constexpr const int AnimatingDisplay = 2;
      // Get static field: static public MultiplayerScoreDiffText/State AnimatingDisplay
      static ::GlobalNamespace::MultiplayerScoreDiffText::State _get_AnimatingDisplay();
      // Set static field: static public MultiplayerScoreDiffText/State AnimatingDisplay
      static void _set_AnimatingDisplay(::GlobalNamespace::MultiplayerScoreDiffText::State value);
      // static field const value: static public MultiplayerScoreDiffText/State AnimatingHide
      static constexpr const int AnimatingHide = 3;
      // Get static field: static public MultiplayerScoreDiffText/State AnimatingHide
      static ::GlobalNamespace::MultiplayerScoreDiffText::State _get_AnimatingHide();
      // Set static field: static public MultiplayerScoreDiffText/State AnimatingHide
      static void _set_AnimatingHide(::GlobalNamespace::MultiplayerScoreDiffText::State value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // MultiplayerScoreDiffText/State
    #pragma pack(pop)
    static check_size<sizeof(MultiplayerScoreDiffText::State), 0 + sizeof(int)> __GlobalNamespace_MultiplayerScoreDiffText_StateSizeCheck;
    static_assert(sizeof(MultiplayerScoreDiffText::State) == 0x4);
    public:
    // private UnityEngine.Color _activeTextColor
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Color activeTextColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _normalBackgroundColor
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Color normalBackgroundColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _leadingBackgroundColor
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Color leadingBackgroundColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Boolean _useAutomaticLeadPlayerSelection
    // Size: 0x1
    // Offset: 0x48
    bool useAutomaticLeadPlayerSelection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useAutomaticLeadPlayerSelection and: onPlatformText
    char __padding3[0x7] = {};
    // [SpaceAttribute] Offset: 0x1122BC0
    // private TMPro.TextMeshPro _onPlatformText
    // Size: 0x8
    // Offset: 0x50
    ::TMPro::TextMeshPro* onPlatformText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private UnityEngine.SpriteRenderer _backgroundSpriteRenderer
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::SpriteRenderer* backgroundSpriteRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::SpriteRenderer*) == 0x8);
    // [InjectAttribute] Offset: 0x1122C08
    // private readonly Tweening.TimeTweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x60
    ::Tweening::TimeTweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(::Tweening::TimeTweeningManager*) == 0x8);
    // [InjectAttribute] Offset: 0x1122C18
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x68
    ::GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IConnectedPlayer*) == 0x8);
    // [InjectAttribute] Offset: 0x1122C28
    // private readonly MultiplayerLeadPlayerProvider _leadPlayerProvider
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::MultiplayerLeadPlayerProvider* leadPlayerProvider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerLeadPlayerProvider*) == 0x8);
    // private UnityEngine.Color _currentBackgroundColor
    // Size: 0x10
    // Offset: 0x78
    ::UnityEngine::Color currentBackgroundColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private MultiplayerScoreDiffText/State _state
    // Size: 0x4
    // Offset: 0x88
    ::GlobalNamespace::MultiplayerScoreDiffText::State state;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerScoreDiffText::State) == 0x4);
    // Padding between fields: state and: onPlatformTextAlphaTween
    char __padding10[0x4] = {};
    // private Tweening.FloatTween _onPlatformTextAlphaTween
    // Size: 0x8
    // Offset: 0x90
    ::Tweening::FloatTween* onPlatformTextAlphaTween;
    // Field size check
    static_assert(sizeof(::Tweening::FloatTween*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Color _activeTextColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__activeTextColor();
    // Get instance field reference: private UnityEngine.Color _normalBackgroundColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__normalBackgroundColor();
    // Get instance field reference: private UnityEngine.Color _leadingBackgroundColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__leadingBackgroundColor();
    // Get instance field reference: private System.Boolean _useAutomaticLeadPlayerSelection
    [[deprecated("Use field access instead!")]] bool& dyn__useAutomaticLeadPlayerSelection();
    // Get instance field reference: private TMPro.TextMeshPro _onPlatformText
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshPro*& dyn__onPlatformText();
    // Get instance field reference: private UnityEngine.SpriteRenderer _backgroundSpriteRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::SpriteRenderer*& dyn__backgroundSpriteRenderer();
    // Get instance field reference: private readonly Tweening.TimeTweeningManager _tweeningManager
    [[deprecated("Use field access instead!")]] ::Tweening::TimeTweeningManager*& dyn__tweeningManager();
    // Get instance field reference: private readonly IConnectedPlayer _connectedPlayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IConnectedPlayer*& dyn__connectedPlayer();
    // Get instance field reference: private readonly MultiplayerLeadPlayerProvider _leadPlayerProvider
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerLeadPlayerProvider*& dyn__leadPlayerProvider();
    // Get instance field reference: private UnityEngine.Color _currentBackgroundColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__currentBackgroundColor();
    // Get instance field reference: private MultiplayerScoreDiffText/State _state
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerScoreDiffText::State& dyn__state();
    // Get instance field reference: private Tweening.FloatTween _onPlatformTextAlphaTween
    [[deprecated("Use field access instead!")]] ::Tweening::FloatTween*& dyn__onPlatformTextAlphaTween();
    // public System.Void .ctor()
    // Offset: 0x14FDB0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerScoreDiffText* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerScoreDiffText::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerScoreDiffText*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x14FD3C0
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x14FD500
    void OnDestroy();
    // public System.Void SetHorizontalPositionRelativeToLocalPlayer(MultiplayerScoreDiffText/HorizontalPosition relativePosition)
    // Offset: 0x14FD620
    void SetHorizontalPositionRelativeToLocalPlayer(::GlobalNamespace::MultiplayerScoreDiffText::HorizontalPosition relativePosition);
    // public System.Void AnimateScoreDiff(System.Int32 scoreDiff)
    // Offset: 0x14FD738
    void AnimateScoreDiff(int scoreDiff);
    // public System.Void AnimateHide()
    // Offset: 0x14FD8D4
    void AnimateHide();
    // public System.Void AnimateIsLeadPlayer(System.Boolean isLeader)
    // Offset: 0x14FD9C4
    void AnimateIsLeadPlayer(bool isLeader);
    // private System.Void HandleNewLeaderWasSelected(System.String userId)
    // Offset: 0x14FDA34
    void HandleNewLeaderWasSelected(::StringW userId);
    // private System.Void <Start>b__14_0(System.Single val)
    // Offset: 0x14FDB68
    void $Start$b__14_0(float val);
    // private System.Void <AnimateScoreDiff>b__17_0()
    // Offset: 0x14FDBD0
    void $AnimateScoreDiff$b__17_0();
    // private System.Void <AnimateHide>b__18_0()
    // Offset: 0x14FDBDC
    void $AnimateHide$b__18_0();
  }; // MultiplayerScoreDiffText
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerScoreDiffText), 144 + sizeof(::Tweening::FloatTween*)> __GlobalNamespace_MultiplayerScoreDiffTextSizeCheck;
  static_assert(sizeof(MultiplayerScoreDiffText) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreDiffText::State, "", "MultiplayerScoreDiffText/State");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreDiffText::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreDiffText::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreDiffText::*)()>(&GlobalNamespace::MultiplayerScoreDiffText::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreDiffText*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreDiffText::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreDiffText::*)()>(&GlobalNamespace::MultiplayerScoreDiffText::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreDiffText*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreDiffText::SetHorizontalPositionRelativeToLocalPlayer
// Il2CppName: SetHorizontalPositionRelativeToLocalPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreDiffText::*)(::GlobalNamespace::MultiplayerScoreDiffText::HorizontalPosition)>(&GlobalNamespace::MultiplayerScoreDiffText::SetHorizontalPositionRelativeToLocalPlayer)> {
  static const MethodInfo* get() {
    static auto* relativePosition = &::il2cpp_utils::GetClassFromName("", "MultiplayerScoreDiffText/HorizontalPosition")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreDiffText*), "SetHorizontalPositionRelativeToLocalPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{relativePosition});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreDiffText::AnimateScoreDiff
// Il2CppName: AnimateScoreDiff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreDiffText::*)(int)>(&GlobalNamespace::MultiplayerScoreDiffText::AnimateScoreDiff)> {
  static const MethodInfo* get() {
    static auto* scoreDiff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreDiffText*), "AnimateScoreDiff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scoreDiff});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreDiffText::AnimateHide
// Il2CppName: AnimateHide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreDiffText::*)()>(&GlobalNamespace::MultiplayerScoreDiffText::AnimateHide)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreDiffText*), "AnimateHide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreDiffText::AnimateIsLeadPlayer
// Il2CppName: AnimateIsLeadPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreDiffText::*)(bool)>(&GlobalNamespace::MultiplayerScoreDiffText::AnimateIsLeadPlayer)> {
  static const MethodInfo* get() {
    static auto* isLeader = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreDiffText*), "AnimateIsLeadPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isLeader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreDiffText::HandleNewLeaderWasSelected
// Il2CppName: HandleNewLeaderWasSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreDiffText::*)(::StringW)>(&GlobalNamespace::MultiplayerScoreDiffText::HandleNewLeaderWasSelected)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreDiffText*), "HandleNewLeaderWasSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreDiffText::$Start$b__14_0
// Il2CppName: <Start>b__14_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreDiffText::*)(float)>(&GlobalNamespace::MultiplayerScoreDiffText::$Start$b__14_0)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreDiffText*), "<Start>b__14_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreDiffText::$AnimateScoreDiff$b__17_0
// Il2CppName: <AnimateScoreDiff>b__17_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreDiffText::*)()>(&GlobalNamespace::MultiplayerScoreDiffText::$AnimateScoreDiff$b__17_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreDiffText*), "<AnimateScoreDiff>b__17_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreDiffText::$AnimateHide$b__18_0
// Il2CppName: <AnimateHide>b__18_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreDiffText::*)()>(&GlobalNamespace::MultiplayerScoreDiffText::$AnimateHide$b__18_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreDiffText*), "<AnimateHide>b__18_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
