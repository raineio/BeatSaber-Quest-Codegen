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
// Including type: Valve.VR.EVRScreenshotType
#include "Valve/VR/EVRScreenshotType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
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
NEED_NO_BOX(Valve::VR::IVRScreenshots::_HookScreenshot);
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRScreenshots::_HookScreenshot*, "Valve.VR", "IVRScreenshots/_HookScreenshot");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRScreenshots/Valve.VR._HookScreenshot
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: EF7F30
  class IVRScreenshots::_HookScreenshot : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EC14B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRScreenshots::_HookScreenshot* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRScreenshots::_HookScreenshot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRScreenshots::_HookScreenshot*, creationType>(object, method)));
    }
    // public Valve.VR.EVRScreenshotError Invoke(in Valve.VR.EVRScreenshotType[] pSupportedTypes, System.Int32 numTypes)
    // Offset: 0x1EC14C4
    Valve::VR::EVRScreenshotError Invoke(ByRef<::ArrayW<Valve::VR::EVRScreenshotType>> pSupportedTypes, int numTypes);
    // public System.IAsyncResult BeginInvoke(in Valve.VR.EVRScreenshotType[] pSupportedTypes, System.Int32 numTypes, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EC173C
    System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<Valve::VR::EVRScreenshotType>> pSupportedTypes, int numTypes, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRScreenshotError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1EC17D8
    Valve::VR::EVRScreenshotError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRScreenshots/Valve.VR._HookScreenshot
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_HookScreenshot::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_HookScreenshot::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRScreenshotError (Valve::VR::IVRScreenshots::_HookScreenshot::*)(ByRef<::ArrayW<Valve::VR::EVRScreenshotType>>, int)>(&Valve::VR::IVRScreenshots::_HookScreenshot::Invoke)> {
  static const MethodInfo* get() {
    static auto* pSupportedTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Valve.VR", "EVRScreenshotType"), 1)->this_arg;
    static auto* numTypes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRScreenshots::_HookScreenshot*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSupportedTypes, numTypes});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_HookScreenshot::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRScreenshots::_HookScreenshot::*)(ByRef<::ArrayW<Valve::VR::EVRScreenshotType>>, int, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRScreenshots::_HookScreenshot::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pSupportedTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Valve.VR", "EVRScreenshotType"), 1)->this_arg;
    static auto* numTypes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRScreenshots::_HookScreenshot*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSupportedTypes, numTypes, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_HookScreenshot::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRScreenshotError (Valve::VR::IVRScreenshots::_HookScreenshot::*)(System::IAsyncResult*)>(&Valve::VR::IVRScreenshots::_HookScreenshot::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRScreenshots::_HookScreenshot*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
