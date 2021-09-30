// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: AvatarTweenController
#include "GlobalNamespace/AvatarTweenController.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: AvatarTweenController/<>c__DisplayClass52_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AvatarTweenController::$$c__DisplayClass52_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public UnityEngine.Transform partTransform
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Transform* partTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Vector3 originalScale
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 originalScale;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public UnityEngine.Transform partTransform
    UnityEngine::Transform*& dyn_partTransform();
    // Get instance field reference: public UnityEngine.Vector3 originalScale
    UnityEngine::Vector3& dyn_originalScale();
    // System.Void <CreatePopTween>b__0(System.Single val)
    // Offset: 0x124E970
    void $CreatePopTween$b__0(float val);
    // public System.Void .ctor()
    // Offset: 0x124DB74
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarTweenController::$$c__DisplayClass52_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarTweenController::$$c__DisplayClass52_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarTweenController::$$c__DisplayClass52_0*, creationType>()));
    }
  }; // AvatarTweenController/<>c__DisplayClass52_0
  #pragma pack(pop)
  static check_size<sizeof(AvatarTweenController::$$c__DisplayClass52_0), 24 + sizeof(UnityEngine::Vector3)> __GlobalNamespace_AvatarTweenController_$$c__DisplayClass52_0SizeCheck;
  static_assert(sizeof(AvatarTweenController::$$c__DisplayClass52_0) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarTweenController::$$c__DisplayClass52_0*, "", "AvatarTweenController/<>c__DisplayClass52_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::$$c__DisplayClass52_0::$CreatePopTween$b__0
// Il2CppName: <CreatePopTween>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::$$c__DisplayClass52_0::*)(float)>(&GlobalNamespace::AvatarTweenController::$$c__DisplayClass52_0::$CreatePopTween$b__0)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController::$$c__DisplayClass52_0*), "<CreatePopTween>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::$$c__DisplayClass52_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
