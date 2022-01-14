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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Text
  class TMP_Text;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MissionStageLockView
  class MissionStageLockView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MissionStageLockView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionStageLockView*, "", "MissionStageLockView");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: MissionStageLockView
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionStageLockView : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private TMPro.TMP_Text _text
    // Size: 0x8
    // Offset: 0x18
    TMPro::TMP_Text* text;
    // Field size check
    static_assert(sizeof(TMPro::TMP_Text*) == 0x8);
    // private UnityEngine.RectTransform _rectTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::RectTransform* rectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private System.Single _dstPosY
    // Size: 0x4
    // Offset: 0x28
    float dstPosY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _animationDuration
    // Size: 0x4
    // Offset: 0x2C
    float animationDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _startAnimationTime
    // Size: 0x4
    // Offset: 0x30
    float startAnimationTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TMP_Text _text
    TMPro::TMP_Text*& dyn__text();
    // Get instance field reference: private UnityEngine.RectTransform _rectTransform
    UnityEngine::RectTransform*& dyn__rectTransform();
    // Get instance field reference: private System.Single _dstPosY
    float& dyn__dstPosY();
    // Get instance field reference: private System.Single _animationDuration
    float& dyn__animationDuration();
    // Get instance field reference: private System.Single _startAnimationTime
    float& dyn__startAnimationTime();
    // public System.Void UpdateLocalPositionY(System.Single dstPosY, System.Boolean animated, System.Single animationDuration)
    // Offset: 0x11BD18C
    void UpdateLocalPositionY(float dstPosY, bool animated, float animationDuration);
    // protected System.Void Update()
    // Offset: 0x11BD230
    void Update();
    // public System.Void UpdateStageLockText(System.String text)
    // Offset: 0x11BD384
    void UpdateStageLockText(::StringW text);
    // public System.Void .ctor()
    // Offset: 0x11BD3A0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionStageLockView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionStageLockView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionStageLockView*, creationType>()));
    }
  }; // MissionStageLockView
  #pragma pack(pop)
  static check_size<sizeof(MissionStageLockView), 48 + sizeof(float)> __GlobalNamespace_MissionStageLockViewSizeCheck;
  static_assert(sizeof(MissionStageLockView) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionStageLockView::UpdateLocalPositionY
// Il2CppName: UpdateLocalPositionY
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionStageLockView::*)(float, bool, float)>(&GlobalNamespace::MissionStageLockView::UpdateLocalPositionY)> {
  static const MethodInfo* get() {
    static auto* dstPosY = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* animated = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* animationDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionStageLockView*), "UpdateLocalPositionY", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dstPosY, animated, animationDuration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionStageLockView::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionStageLockView::*)()>(&GlobalNamespace::MissionStageLockView::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionStageLockView*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionStageLockView::UpdateStageLockText
// Il2CppName: UpdateStageLockText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionStageLockView::*)(::StringW)>(&GlobalNamespace::MissionStageLockView::UpdateStageLockText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionStageLockView*), "UpdateStageLockText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionStageLockView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
