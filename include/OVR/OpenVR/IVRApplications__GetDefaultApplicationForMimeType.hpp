// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications
#include "OVR/OpenVR/IVRApplications.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRApplications/_GetDefaultApplicationForMimeType
  // [UnmanagedFunctionPointerAttribute] Offset: DCD774
  class IVRApplications::_GetDefaultApplicationForMimeType : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetDefaultApplicationForMimeType
    _GetDefaultApplicationForMimeType() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15B4C10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_GetDefaultApplicationForMimeType* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRApplications::_GetDefaultApplicationForMimeType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_GetDefaultApplicationForMimeType*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String pchMimeType, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0x15A81E0
    bool Invoke(::Il2CppString* pchMimeType, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public System.IAsyncResult BeginInvoke(System.String pchMimeType, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15B4C20
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchMimeType, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x15B4CC0
    bool EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/_GetDefaultApplicationForMimeType
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_GetDefaultApplicationForMimeType*, "OVR.OpenVR", "IVRApplications/_GetDefaultApplicationForMimeType");
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetDefaultApplicationForMimeType::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetDefaultApplicationForMimeType::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRApplications::_GetDefaultApplicationForMimeType::*)(::Il2CppString*, System::Text::StringBuilder*, uint)>(&OVR::OpenVR::IVRApplications::_GetDefaultApplicationForMimeType::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_GetDefaultApplicationForMimeType*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Text::StringBuilder*>(), ::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetDefaultApplicationForMimeType::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRApplications::_GetDefaultApplicationForMimeType::*)(::Il2CppString*, System::Text::StringBuilder*, uint, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRApplications::_GetDefaultApplicationForMimeType::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_GetDefaultApplicationForMimeType*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Text::StringBuilder*>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetDefaultApplicationForMimeType::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRApplications::_GetDefaultApplicationForMimeType::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRApplications::_GetDefaultApplicationForMimeType::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_GetDefaultApplicationForMimeType*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
