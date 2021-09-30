// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.TrackedDevicePose_t
#include "Valve/VR/TrackedDevicePose_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRCompositorError
  struct EVRCompositorError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRCompositor/Valve.VR._WaitGetPoses
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: EB59E8
  class IVRCompositor::_WaitGetPoses : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x21B1B28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_WaitGetPoses* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRCompositor::_WaitGetPoses::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_WaitGetPoses*, creationType>(object, method)));
    }
    // public Valve.VR.EVRCompositorError Invoke(in Valve.VR.TrackedDevicePose_t[] pRenderPoseArray, System.UInt32 unRenderPoseArrayCount, in Valve.VR.TrackedDevicePose_t[] pGamePoseArray, System.UInt32 unGamePoseArrayCount)
    // Offset: 0x21B1B38
    Valve::VR::EVRCompositorError Invoke(ByRef<::ArrayW<Valve::VR::TrackedDevicePose_t>> pRenderPoseArray, uint unRenderPoseArrayCount, ByRef<::ArrayW<Valve::VR::TrackedDevicePose_t>> pGamePoseArray, uint unGamePoseArrayCount);
    // public System.IAsyncResult BeginInvoke(in Valve.VR.TrackedDevicePose_t[] pRenderPoseArray, System.UInt32 unRenderPoseArrayCount, in Valve.VR.TrackedDevicePose_t[] pGamePoseArray, System.UInt32 unGamePoseArrayCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x21B1DE4
    System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<Valve::VR::TrackedDevicePose_t>> pRenderPoseArray, uint unRenderPoseArrayCount, ByRef<::ArrayW<Valve::VR::TrackedDevicePose_t>> pGamePoseArray, uint unGamePoseArrayCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRCompositorError EndInvoke(System.IAsyncResult result)
    // Offset: 0x21B1E98
    Valve::VR::EVRCompositorError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/Valve.VR._WaitGetPoses
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_WaitGetPoses*, "Valve.VR", "IVRCompositor/_WaitGetPoses");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_WaitGetPoses::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_WaitGetPoses::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRCompositorError (Valve::VR::IVRCompositor::_WaitGetPoses::*)(ByRef<::ArrayW<Valve::VR::TrackedDevicePose_t>>, uint, ByRef<::ArrayW<Valve::VR::TrackedDevicePose_t>>, uint)>(&Valve::VR::IVRCompositor::_WaitGetPoses::Invoke)> {
  static const MethodInfo* get() {
    static auto* pRenderPoseArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t"), 1)->this_arg;
    static auto* unRenderPoseArrayCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pGamePoseArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t"), 1)->this_arg;
    static auto* unGamePoseArrayCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_WaitGetPoses*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_WaitGetPoses::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRCompositor::_WaitGetPoses::*)(ByRef<::ArrayW<Valve::VR::TrackedDevicePose_t>>, uint, ByRef<::ArrayW<Valve::VR::TrackedDevicePose_t>>, uint, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRCompositor::_WaitGetPoses::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pRenderPoseArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t"), 1)->this_arg;
    static auto* unRenderPoseArrayCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pGamePoseArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t"), 1)->this_arg;
    static auto* unGamePoseArrayCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_WaitGetPoses*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_WaitGetPoses::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRCompositorError (Valve::VR::IVRCompositor::_WaitGetPoses::*)(System::IAsyncResult*)>(&Valve::VR::IVRCompositor::_WaitGetPoses::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_WaitGetPoses*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
