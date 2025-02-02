// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightTransformGroup`3
#include "GlobalNamespace/LightTransformGroup_3.hpp"
// Including type: IEditTimeValidated
#include "GlobalNamespace/IEditTimeValidated.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightGroupTranslationXTransform
  class LightGroupTranslationXTransform;
  // Forward declaring type: LightGroupTranslationYTransform
  class LightGroupTranslationYTransform;
  // Forward declaring type: LightGroupTranslationZTransform
  class LightGroupTranslationZTransform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightTranslationGroup
  class LightTranslationGroup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightTranslationGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightTranslationGroup*, "", "LightTranslationGroup");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: LightTranslationGroup
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class LightTranslationGroup : public ::GlobalNamespace::LightTransformGroup_3<::GlobalNamespace::LightGroupTranslationXTransform*, ::GlobalNamespace::LightGroupTranslationYTransform*, ::GlobalNamespace::LightGroupTranslationZTransform*>/*, public ::GlobalNamespace::IEditTimeValidated*/ {
    public:
    public:
    // [SpaceAttribute] Offset: 0x111FD60
    // private UnityEngine.Vector2 _xTranslationLimits
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Vector2 xTranslationLimits;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 _yTranslationLimits
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Vector2 yTranslationLimits;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 _zTranslationLimits
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Vector2 zTranslationLimits;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // [SpaceAttribute] Offset: 0x111FDB8
    // private UnityEngine.Vector2 _xDistributionLimits
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Vector2 xDistributionLimits;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 _yDistributionLimits
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::Vector2 yDistributionLimits;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 _zDistributionLimits
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Vector2 zDistributionLimits;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IEditTimeValidated
    operator ::GlobalNamespace::IEditTimeValidated() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IEditTimeValidated*>(this);
    }
    // Creating interface conversion operator: i_IEditTimeValidated
    inline ::GlobalNamespace::IEditTimeValidated* i_IEditTimeValidated() noexcept {
      return reinterpret_cast<::GlobalNamespace::IEditTimeValidated*>(this);
    }
    // Get instance field reference: private UnityEngine.Vector2 _xTranslationLimits
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__xTranslationLimits();
    // Get instance field reference: private UnityEngine.Vector2 _yTranslationLimits
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__yTranslationLimits();
    // Get instance field reference: private UnityEngine.Vector2 _zTranslationLimits
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__zTranslationLimits();
    // Get instance field reference: private UnityEngine.Vector2 _xDistributionLimits
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__xDistributionLimits();
    // Get instance field reference: private UnityEngine.Vector2 _yDistributionLimits
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__yDistributionLimits();
    // Get instance field reference: private UnityEngine.Vector2 _zDistributionLimits
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__zDistributionLimits();
    // public UnityEngine.Vector2 get_xTranslationLimits()
    // Offset: 0x1521E74
    ::UnityEngine::Vector2 get_xTranslationLimits();
    // public UnityEngine.Vector2 get_yTranslationLimits()
    // Offset: 0x1521E7C
    ::UnityEngine::Vector2 get_yTranslationLimits();
    // public UnityEngine.Vector2 get_zTranslationLimits()
    // Offset: 0x1521E84
    ::UnityEngine::Vector2 get_zTranslationLimits();
    // public UnityEngine.Vector2 get_xDistributionLimits()
    // Offset: 0x1521E8C
    ::UnityEngine::Vector2 get_xDistributionLimits();
    // public UnityEngine.Vector2 get_yDistributionLimits()
    // Offset: 0x1521E94
    ::UnityEngine::Vector2 get_yDistributionLimits();
    // public UnityEngine.Vector2 get_zDistributionLimits()
    // Offset: 0x1521E9C
    ::UnityEngine::Vector2 get_zDistributionLimits();
    // public System.Boolean __Validate()
    // Offset: 0x1521EA4
    bool __Validate();
    // public System.Void .ctor()
    // Offset: 0x152219C
    // Implemented from: LightTransformGroup`3
    // Base method: System.Void LightTransformGroup_3::.ctor()
    // Base method: System.Void LightGroupSubsystem::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightTranslationGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightTranslationGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightTranslationGroup*, creationType>()));
    }
  }; // LightTranslationGroup
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationGroup::get_xTranslationLimits
// Il2CppName: get_xTranslationLimits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (GlobalNamespace::LightTranslationGroup::*)()>(&GlobalNamespace::LightTranslationGroup::get_xTranslationLimits)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightTranslationGroup*), "get_xTranslationLimits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationGroup::get_yTranslationLimits
// Il2CppName: get_yTranslationLimits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (GlobalNamespace::LightTranslationGroup::*)()>(&GlobalNamespace::LightTranslationGroup::get_yTranslationLimits)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightTranslationGroup*), "get_yTranslationLimits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationGroup::get_zTranslationLimits
// Il2CppName: get_zTranslationLimits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (GlobalNamespace::LightTranslationGroup::*)()>(&GlobalNamespace::LightTranslationGroup::get_zTranslationLimits)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightTranslationGroup*), "get_zTranslationLimits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationGroup::get_xDistributionLimits
// Il2CppName: get_xDistributionLimits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (GlobalNamespace::LightTranslationGroup::*)()>(&GlobalNamespace::LightTranslationGroup::get_xDistributionLimits)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightTranslationGroup*), "get_xDistributionLimits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationGroup::get_yDistributionLimits
// Il2CppName: get_yDistributionLimits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (GlobalNamespace::LightTranslationGroup::*)()>(&GlobalNamespace::LightTranslationGroup::get_yDistributionLimits)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightTranslationGroup*), "get_yDistributionLimits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationGroup::get_zDistributionLimits
// Il2CppName: get_zDistributionLimits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (GlobalNamespace::LightTranslationGroup::*)()>(&GlobalNamespace::LightTranslationGroup::get_zDistributionLimits)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightTranslationGroup*), "get_zDistributionLimits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationGroup::__Validate
// Il2CppName: __Validate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LightTranslationGroup::*)()>(&GlobalNamespace::LightTranslationGroup::__Validate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightTranslationGroup*), "__Validate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
