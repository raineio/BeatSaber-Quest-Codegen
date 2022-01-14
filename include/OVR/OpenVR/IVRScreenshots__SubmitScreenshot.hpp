// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRScreenshots
#include "OVR/OpenVR/IVRScreenshots.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
  // Forward declaring type: EVRScreenshotType
  struct EVRScreenshotType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(OVR::OpenVR::IVRScreenshots::_SubmitScreenshot);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRScreenshots::_SubmitScreenshot*, "OVR.OpenVR", "IVRScreenshots/_SubmitScreenshot");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRScreenshots/OVR.OpenVR._SubmitScreenshot
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: EF2EAC
  class IVRScreenshots::_SubmitScreenshot : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x232183C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRScreenshots::_SubmitScreenshot* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRScreenshots::_SubmitScreenshot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRScreenshots::_SubmitScreenshot*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRScreenshotError Invoke(System.UInt32 screenshotHandle, OVR.OpenVR.EVRScreenshotType type, System.String pchSourcePreviewFilename, System.String pchSourceVRFilename)
    // Offset: 0x232184C
    OVR::OpenVR::EVRScreenshotError Invoke(uint screenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::StringW pchSourcePreviewFilename, ::StringW pchSourceVRFilename);
    // public System.IAsyncResult BeginInvoke(System.UInt32 screenshotHandle, OVR.OpenVR.EVRScreenshotType type, System.String pchSourcePreviewFilename, System.String pchSourceVRFilename, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2321B08
    System::IAsyncResult* BeginInvoke(uint screenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::StringW pchSourcePreviewFilename, ::StringW pchSourceVRFilename, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRScreenshotError EndInvoke(System.IAsyncResult result)
    // Offset: 0x2321BC4
    OVR::OpenVR::EVRScreenshotError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRScreenshots/OVR.OpenVR._SubmitScreenshot
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRScreenshots::_SubmitScreenshot::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRScreenshots::_SubmitScreenshot::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::IVRScreenshots::_SubmitScreenshot::*)(uint, OVR::OpenVR::EVRScreenshotType, ::StringW, ::StringW)>(&OVR::OpenVR::IVRScreenshots::_SubmitScreenshot::Invoke)> {
  static const MethodInfo* get() {
    static auto* screenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRScreenshotType")->byval_arg;
    static auto* pchSourcePreviewFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSourceVRFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRScreenshots::_SubmitScreenshot*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRScreenshots::_SubmitScreenshot::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRScreenshots::_SubmitScreenshot::*)(uint, OVR::OpenVR::EVRScreenshotType, ::StringW, ::StringW, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRScreenshots::_SubmitScreenshot::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* screenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRScreenshotType")->byval_arg;
    static auto* pchSourcePreviewFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSourceVRFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRScreenshots::_SubmitScreenshot*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRScreenshots::_SubmitScreenshot::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::IVRScreenshots::_SubmitScreenshot::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRScreenshots::_SubmitScreenshot::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRScreenshots::_SubmitScreenshot*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
