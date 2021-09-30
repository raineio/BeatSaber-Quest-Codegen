// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TransitionTimingSO
  class TransitionTimingSO;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: EaseType
  struct EaseType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BaseTransitionSO
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseTransitionSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private TransitionTimingSO _transitionTiming
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::TransitionTimingSO* transitionTiming;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TransitionTimingSO*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TransitionTimingSO _transitionTiming
    GlobalNamespace::TransitionTimingSO*& dyn__transitionTiming();
    // public Tweening.EaseType get_easeType()
    // Offset: 0x126C3B4
    Tweening::EaseType get_easeType();
    // public System.Single get_easeDuration()
    // Offset: 0x126C3D0
    float get_easeDuration();
    // public System.Void .ctor()
    // Offset: 0x126C3EC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseTransitionSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BaseTransitionSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseTransitionSO*, creationType>()));
    }
  }; // BaseTransitionSO
  #pragma pack(pop)
  static check_size<sizeof(BaseTransitionSO), 24 + sizeof(GlobalNamespace::TransitionTimingSO*)> __GlobalNamespace_BaseTransitionSOSizeCheck;
  static_assert(sizeof(BaseTransitionSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseTransitionSO*, "", "BaseTransitionSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BaseTransitionSO::get_easeType
// Il2CppName: get_easeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Tweening::EaseType (GlobalNamespace::BaseTransitionSO::*)()>(&GlobalNamespace::BaseTransitionSO::get_easeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseTransitionSO*), "get_easeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseTransitionSO::get_easeDuration
// Il2CppName: get_easeDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BaseTransitionSO::*)()>(&GlobalNamespace::BaseTransitionSO::get_easeDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseTransitionSO*), "get_easeDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseTransitionSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
