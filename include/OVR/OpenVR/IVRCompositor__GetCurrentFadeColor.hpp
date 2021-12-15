// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: HmdColor_t
  struct HmdColor_t;
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
NEED_NO_BOX(OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor*, "OVR.OpenVR", "IVRCompositor/_GetCurrentFadeColor");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRCompositor/OVR.OpenVR._GetCurrentFadeColor
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: EF22E0
  class IVRCompositor::_GetCurrentFadeColor : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x21745C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetCurrentFadeColor* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetCurrentFadeColor*, creationType>(object, method)));
    }
    // public OVR.OpenVR.HmdColor_t Invoke(System.Boolean bBackground)
    // Offset: 0x21745D4
    OVR::OpenVR::HmdColor_t Invoke(bool bBackground);
    // public System.IAsyncResult BeginInvoke(System.Boolean bBackground, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2174858
    System::IAsyncResult* BeginInvoke(bool bBackground, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.HmdColor_t EndInvoke(System.IAsyncResult result)
    // Offset: 0x21748E8
    OVR::OpenVR::HmdColor_t EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/OVR.OpenVR._GetCurrentFadeColor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::HmdColor_t (OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor::*)(bool)>(&OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor::Invoke)> {
  static const MethodInfo* get() {
    static auto* bBackground = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bBackground});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor::*)(bool, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* bBackground = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bBackground, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::HmdColor_t (OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
