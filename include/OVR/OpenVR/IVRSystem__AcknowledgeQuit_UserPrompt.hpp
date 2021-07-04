// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRSystem/_AcknowledgeQuit_UserPrompt
  // [UnmanagedFunctionPointerAttribute] Offset: DCD4A4
  class IVRSystem::_AcknowledgeQuit_UserPrompt : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _AcknowledgeQuit_UserPrompt
    _AcknowledgeQuit_UserPrompt() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20AD408
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_AcknowledgeQuit_UserPrompt* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_AcknowledgeQuit_UserPrompt*, creationType>(object, method)));
    }
    // public System.Void Invoke()
    // Offset: 0x20AD418
    void Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x20AD624
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x20AD650
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_AcknowledgeQuit_UserPrompt
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt*, "OVR.OpenVR", "IVRSystem/_AcknowledgeQuit_UserPrompt");
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt::*)()>(&OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt::*)(System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
