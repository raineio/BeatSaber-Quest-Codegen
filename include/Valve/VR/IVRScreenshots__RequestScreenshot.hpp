// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRScreenshots
#include "Valve/VR/IVRScreenshots.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
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
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Valve::VR::IVRScreenshots::_RequestScreenshot);
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRScreenshots::_RequestScreenshot*, "Valve.VR", "IVRScreenshots/_RequestScreenshot");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRScreenshots/Valve.VR._RequestScreenshot
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: EF7F1C
  class IVRScreenshots::_RequestScreenshot : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EC1804
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRScreenshots::_RequestScreenshot* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRScreenshots::_RequestScreenshot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRScreenshots::_RequestScreenshot*, creationType>(object, method)));
    }
    // public Valve.VR.EVRScreenshotError Invoke(ref System.UInt32 pOutScreenshotHandle, Valve.VR.EVRScreenshotType type, System.String pchPreviewFilename, System.String pchVRFilename)
    // Offset: 0x1EC1814
    Valve::VR::EVRScreenshotError Invoke(ByRef<uint> pOutScreenshotHandle, Valve::VR::EVRScreenshotType type, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename);
    // public System.IAsyncResult BeginInvoke(ref System.UInt32 pOutScreenshotHandle, Valve.VR.EVRScreenshotType type, System.String pchPreviewFilename, System.String pchVRFilename, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EC1ABC
    System::IAsyncResult* BeginInvoke(ByRef<uint> pOutScreenshotHandle, Valve::VR::EVRScreenshotType type, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRScreenshotError EndInvoke(ref System.UInt32 pOutScreenshotHandle, System.IAsyncResult result)
    // Offset: 0x1EC1B84
    Valve::VR::EVRScreenshotError EndInvoke(ByRef<uint> pOutScreenshotHandle, System::IAsyncResult* result);
  }; // Valve.VR.IVRScreenshots/Valve.VR._RequestScreenshot
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_RequestScreenshot::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_RequestScreenshot::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRScreenshotError (Valve::VR::IVRScreenshots::_RequestScreenshot::*)(ByRef<uint>, Valve::VR::EVRScreenshotType, ::Il2CppString*, ::Il2CppString*)>(&Valve::VR::IVRScreenshots::_RequestScreenshot::Invoke)> {
  static const MethodInfo* get() {
    static auto* pOutScreenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRScreenshotType")->byval_arg;
    static auto* pchPreviewFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchVRFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRScreenshots::_RequestScreenshot*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_RequestScreenshot::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRScreenshots::_RequestScreenshot::*)(ByRef<uint>, Valve::VR::EVRScreenshotType, ::Il2CppString*, ::Il2CppString*, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRScreenshots::_RequestScreenshot::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pOutScreenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRScreenshotType")->byval_arg;
    static auto* pchPreviewFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchVRFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRScreenshots::_RequestScreenshot*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_RequestScreenshot::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRScreenshotError (Valve::VR::IVRScreenshots::_RequestScreenshot::*)(ByRef<uint>, System::IAsyncResult*)>(&Valve::VR::IVRScreenshots::_RequestScreenshot::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pOutScreenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRScreenshots::_RequestScreenshot*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutScreenshotHandle, result});
  }
};
