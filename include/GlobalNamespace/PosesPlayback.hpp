// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PosesRecordingData
  class PosesRecordingData;
  // Forward declaring type: PoseObject
  class PoseObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: PosesPlayback
  // [TokenAttribute] Offset: FFFFFFFF
  class PosesPlayback : public ::Il2CppObject {
    public:
    // private UnityEngine.Transform[] _transforms
    // Size: 0x8
    // Offset: 0x10
    ::Array<UnityEngine::Transform*>* transforms;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // private PosesRecordingData _data
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PosesRecordingData* data;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PosesRecordingData*) == 0x8);
    // private System.Int32 _keyframeIndex
    // Size: 0x4
    // Offset: 0x20
    int keyframeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PosesPlayback
    PosesPlayback(::Array<UnityEngine::Transform*>* transforms_ = {}, GlobalNamespace::PosesRecordingData* data_ = {}, int keyframeIndex_ = {}) noexcept : transforms{transforms_}, data{data_}, keyframeIndex{keyframeIndex_} {}
    // Get instance field reference: private UnityEngine.Transform[] _transforms
    ::Array<UnityEngine::Transform*>*& dyn__transforms();
    // Get instance field reference: private PosesRecordingData _data
    GlobalNamespace::PosesRecordingData*& dyn__data();
    // Get instance field reference: private System.Int32 _keyframeIndex
    int& dyn__keyframeIndex();
    // public System.Void StartPlayback(PoseObject[] poseObjects, PosesRecordingData data)
    // Offset: 0x11AD88C
    void StartPlayback(::Array<GlobalNamespace::PoseObject*>* poseObjects, GlobalNamespace::PosesRecordingData* data);
    // public System.Void PlaybackTick(System.Single time)
    // Offset: 0x11ADAA0
    void PlaybackTick(float time);
    // public System.Void .ctor()
    // Offset: 0x11ADF24
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PosesPlayback* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PosesPlayback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PosesPlayback*, creationType>()));
    }
  }; // PosesPlayback
  #pragma pack(pop)
  static check_size<sizeof(PosesPlayback), 32 + sizeof(int)> __GlobalNamespace_PosesPlaybackSizeCheck;
  static_assert(sizeof(PosesPlayback) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PosesPlayback*, "", "PosesPlayback");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PosesPlayback::StartPlayback
// Il2CppName: StartPlayback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PosesPlayback::*)(::Array<GlobalNamespace::PoseObject*>*, GlobalNamespace::PosesRecordingData*)>(&GlobalNamespace::PosesPlayback::StartPlayback)> {
  static const MethodInfo* get() {
    static auto* poseObjects = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "PoseObject"), 1)->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("", "PosesRecordingData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosesPlayback*), "StartPlayback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{poseObjects, data});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PosesPlayback::PlaybackTick
// Il2CppName: PlaybackTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PosesPlayback::*)(float)>(&GlobalNamespace::PosesPlayback::PlaybackTick)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosesPlayback*), "PlaybackTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PosesPlayback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!