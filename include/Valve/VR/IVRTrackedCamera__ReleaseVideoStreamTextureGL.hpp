// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRTrackedCamera
#include "Valve/VR/IVRTrackedCamera.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
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
  // Autogenerated type: Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamTextureGL
  // [UnmanagedFunctionPointerAttribute] Offset: DD36CC
  class IVRTrackedCamera::_ReleaseVideoStreamTextureGL : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ReleaseVideoStreamTextureGL
    _ReleaseVideoStreamTextureGL() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1CA0394
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRTrackedCamera::_ReleaseVideoStreamTextureGL* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRTrackedCamera::_ReleaseVideoStreamTextureGL*, creationType>(object, method)));
    }
    // public Valve.VR.EVRTrackedCameraError Invoke(System.UInt64 hTrackedCamera, System.UInt32 glTextureId)
    // Offset: 0x1CA03A4
    Valve::VR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, uint glTextureId);
    // public System.IAsyncResult BeginInvoke(System.UInt64 hTrackedCamera, System.UInt32 glTextureId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1CA0628
    System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, uint glTextureId, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRTrackedCameraError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1CA06D4
    Valve::VR::EVRTrackedCameraError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamTextureGL
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL*, "Valve.VR", "IVRTrackedCamera/_ReleaseVideoStreamTextureGL");
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRTrackedCameraError (Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::*)(uint64_t, uint)>(&Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::*)(uint64_t, uint, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRTrackedCameraError (Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::*)(System::IAsyncResult*)>(&Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
