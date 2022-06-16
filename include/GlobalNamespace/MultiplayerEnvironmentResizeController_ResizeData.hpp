// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerEnvironmentResizeController
#include "GlobalNamespace/MultiplayerEnvironmentResizeController.hpp"
// Including type: MultiplayerEnvironmentResizeController/ResizeType
#include "GlobalNamespace/MultiplayerEnvironmentResizeController_ResizeType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData*, "", "MultiplayerEnvironmentResizeController/ResizeData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerEnvironmentResizeController/ResizeData
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerEnvironmentResizeController::ResizeData : public ::Il2CppObject {
    public:
    public:
    // private MultiplayerEnvironmentResizeController/ResizeType _resizeType
    // Size: 0x4
    // Offset: 0x10
    ::GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeType resizeType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeType) == 0x4);
    // private System.Single _offset
    // Size: 0x4
    // Offset: 0x14
    float offset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NullAllowed] Offset: 0x10E9368
    // private TubeBloomPrePassLight[] _lights
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*> lights;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*>) == 0x8);
    // [NullAllowed] Offset: 0x10E93A0
    // private UnityEngine.Transform[] _otherTransforms
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Transform*> otherTransforms;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    public:
    // Get instance field reference: private MultiplayerEnvironmentResizeController/ResizeType _resizeType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeType& dyn__resizeType();
    // Get instance field reference: private System.Single _offset
    [[deprecated("Use field access instead!")]] float& dyn__offset();
    // Get instance field reference: private TubeBloomPrePassLight[] _lights
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*>& dyn__lights();
    // Get instance field reference: private UnityEngine.Transform[] _otherTransforms
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn__otherTransforms();
    // public MultiplayerEnvironmentResizeController/ResizeType get_resizeType()
    // Offset: 0x1417304
    ::GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeType get_resizeType();
    // public System.Single get_offset()
    // Offset: 0x141730C
    float get_offset();
    // public TubeBloomPrePassLight[] get_lights()
    // Offset: 0x1417314
    ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*> get_lights();
    // public UnityEngine.Transform[] get_otherTransforms()
    // Offset: 0x141731C
    ::ArrayW<::UnityEngine::Transform*> get_otherTransforms();
    // public System.Void .ctor()
    // Offset: 0x1417324
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerEnvironmentResizeController::ResizeData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerEnvironmentResizeController::ResizeData*, creationType>()));
    }
  }; // MultiplayerEnvironmentResizeController/ResizeData
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerEnvironmentResizeController::ResizeData), 32 + sizeof(::ArrayW<::UnityEngine::Transform*>)> __GlobalNamespace_MultiplayerEnvironmentResizeController_ResizeDataSizeCheck;
  static_assert(sizeof(MultiplayerEnvironmentResizeController::ResizeData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData::get_resizeType
// Il2CppName: get_resizeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeType (GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData::*)()>(&GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData::get_resizeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData*), "get_resizeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData::get_offset
// Il2CppName: get_offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData::*)()>(&GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData::get_offset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData*), "get_offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData::get_lights
// Il2CppName: get_lights
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*> (GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData::*)()>(&GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData::get_lights)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData*), "get_lights", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData::get_otherTransforms
// Il2CppName: get_otherTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Transform*> (GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData::*)()>(&GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData::get_otherTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData*), "get_otherTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
