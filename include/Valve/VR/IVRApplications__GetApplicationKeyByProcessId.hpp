// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
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
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
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
NEED_NO_BOX(Valve::VR::IVRApplications::_GetApplicationKeyByProcessId);
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_GetApplicationKeyByProcessId*, "Valve.VR", "IVRApplications/_GetApplicationKeyByProcessId");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRApplications/Valve.VR._GetApplicationKeyByProcessId
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: EF6EA0
  class IVRApplications::_GetApplicationKeyByProcessId : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18CF010
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_GetApplicationKeyByProcessId* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRApplications::_GetApplicationKeyByProcessId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_GetApplicationKeyByProcessId*, creationType>(object, method)));
    }
    // public Valve.VR.EVRApplicationError Invoke(System.UInt32 unProcessId, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0x18C2560
    Valve::VR::EVRApplicationError Invoke(uint unProcessId, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unProcessId, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18CF020
    System::IAsyncResult* BeginInvoke(uint unProcessId, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0x18CF0D0
    Valve::VR::EVRApplicationError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/Valve.VR._GetApplicationKeyByProcessId
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_GetApplicationKeyByProcessId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_GetApplicationKeyByProcessId::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRApplicationError (Valve::VR::IVRApplications::_GetApplicationKeyByProcessId::*)(uint, System::Text::StringBuilder*, uint)>(&Valve::VR::IVRApplications::_GetApplicationKeyByProcessId::Invoke)> {
  static const MethodInfo* get() {
    static auto* unProcessId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pchAppKeyBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unAppKeyBufferLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_GetApplicationKeyByProcessId*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unProcessId, pchAppKeyBuffer, unAppKeyBufferLen});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_GetApplicationKeyByProcessId::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRApplications::_GetApplicationKeyByProcessId::*)(uint, System::Text::StringBuilder*, uint, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRApplications::_GetApplicationKeyByProcessId::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* unProcessId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pchAppKeyBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unAppKeyBufferLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_GetApplicationKeyByProcessId*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unProcessId, pchAppKeyBuffer, unAppKeyBufferLen, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_GetApplicationKeyByProcessId::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRApplicationError (Valve::VR::IVRApplications::_GetApplicationKeyByProcessId::*)(System::IAsyncResult*)>(&Valve::VR::IVRApplications::_GetApplicationKeyByProcessId::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_GetApplicationKeyByProcessId*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
