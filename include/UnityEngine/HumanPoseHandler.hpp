// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Avatar
  class Avatar;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: HumanPose
  struct HumanPose;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: HumanPoseHandler
  class HumanPoseHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::HumanPoseHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HumanPoseHandler*, "UnityEngine", "HumanPoseHandler");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.HumanPoseHandler
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 105F8E8
  // [NativeHeaderAttribute] Offset: 105F8E8
  class HumanPoseHandler : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get instance field reference: System.IntPtr m_Ptr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Ptr();
    // public System.Void .ctor(UnityEngine.Avatar avatar, UnityEngine.Transform root)
    // Offset: 0x2A4F8F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HumanPoseHandler* New_ctor(::UnityEngine::Avatar* avatar, ::UnityEngine::Transform* root) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::HumanPoseHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HumanPoseHandler*, creationType>(avatar, root)));
    }
    // static private System.IntPtr Internal_Create(UnityEngine.Avatar avatar, UnityEngine.Transform root)
    // Offset: 0x2A4F748
    static ::System::IntPtr Internal_Create(::UnityEngine::Avatar* avatar, ::UnityEngine::Transform* root);
    // static private System.Void Internal_Destroy(System.IntPtr ptr)
    // Offset: 0x2A4F798
    static void Internal_Destroy(::System::IntPtr ptr);
    // private System.Void GetHumanPose(out UnityEngine.Vector3 bodyPosition, out UnityEngine.Quaternion bodyRotation, out System.Single[] muscles)
    // Offset: 0x2A4F7D8
    void GetHumanPose(ByRef<::UnityEngine::Vector3> bodyPosition, ByRef<::UnityEngine::Quaternion> bodyRotation, ByRef<::ArrayW<float>> muscles);
    // public System.Void Dispose()
    // Offset: 0x2A4F840
    void Dispose();
    // public System.Void GetHumanPose(ref UnityEngine.HumanPose humanPose)
    // Offset: 0x2A4FAE4
    void GetHumanPose(ByRef<::UnityEngine::HumanPose> humanPose);
  }; // UnityEngine.HumanPoseHandler
  #pragma pack(pop)
  static check_size<sizeof(HumanPoseHandler), 16 + sizeof(::System::IntPtr)> __UnityEngine_HumanPoseHandlerSizeCheck;
  static_assert(sizeof(HumanPoseHandler) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::HumanPoseHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::HumanPoseHandler::Internal_Create
// Il2CppName: Internal_Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::UnityEngine::Avatar*, ::UnityEngine::Transform*)>(&UnityEngine::HumanPoseHandler::Internal_Create)> {
  static const MethodInfo* get() {
    static auto* avatar = &::il2cpp_utils::GetClassFromName("UnityEngine", "Avatar")->byval_arg;
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::HumanPoseHandler*), "Internal_Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{avatar, root});
  }
};
// Writing MetadataGetter for method: UnityEngine::HumanPoseHandler::Internal_Destroy
// Il2CppName: Internal_Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityEngine::HumanPoseHandler::Internal_Destroy)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::HumanPoseHandler*), "Internal_Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: UnityEngine::HumanPoseHandler::GetHumanPose
// Il2CppName: GetHumanPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::HumanPoseHandler::*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>, ByRef<::ArrayW<float>>)>(&UnityEngine::HumanPoseHandler::GetHumanPose)> {
  static const MethodInfo* get() {
    static auto* bodyPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* bodyRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* muscles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::HumanPoseHandler*), "GetHumanPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bodyPosition, bodyRotation, muscles});
  }
};
// Writing MetadataGetter for method: UnityEngine::HumanPoseHandler::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::HumanPoseHandler::*)()>(&UnityEngine::HumanPoseHandler::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::HumanPoseHandler*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::HumanPoseHandler::GetHumanPose
// Il2CppName: GetHumanPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::HumanPoseHandler::*)(ByRef<::UnityEngine::HumanPose>)>(&UnityEngine::HumanPoseHandler::GetHumanPose)> {
  static const MethodInfo* get() {
    static auto* humanPose = &::il2cpp_utils::GetClassFromName("UnityEngine", "HumanPose")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::HumanPoseHandler*), "GetHumanPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{humanPose});
  }
};
