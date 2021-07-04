// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperoneSetup
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/_ImportFromBufferToWorking
  // [UnmanagedFunctionPointerAttribute] Offset: DCDA6C
  class IVRChaperoneSetup::_ImportFromBufferToWorking : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ImportFromBufferToWorking
    _ImportFromBufferToWorking() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15B6358
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_ImportFromBufferToWorking* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperoneSetup::_ImportFromBufferToWorking::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_ImportFromBufferToWorking*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String pBuffer, System.UInt32 nImportFlags)
    // Offset: 0x15AEFD4
    bool Invoke(::Il2CppString* pBuffer, uint nImportFlags);
    // public System.IAsyncResult BeginInvoke(System.String pBuffer, System.UInt32 nImportFlags, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15B6368
    System::IAsyncResult* BeginInvoke(::Il2CppString* pBuffer, uint nImportFlags, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x15B6404
    bool EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/_ImportFromBufferToWorking
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_ImportFromBufferToWorking*, "OVR.OpenVR", "IVRChaperoneSetup/_ImportFromBufferToWorking");
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_ImportFromBufferToWorking::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_ImportFromBufferToWorking::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRChaperoneSetup::_ImportFromBufferToWorking::*)(::Il2CppString*, uint)>(&OVR::OpenVR::IVRChaperoneSetup::_ImportFromBufferToWorking::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_ImportFromBufferToWorking*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_ImportFromBufferToWorking::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRChaperoneSetup::_ImportFromBufferToWorking::*)(::Il2CppString*, uint, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRChaperoneSetup::_ImportFromBufferToWorking::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_ImportFromBufferToWorking*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_ImportFromBufferToWorking::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRChaperoneSetup::_ImportFromBufferToWorking::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRChaperoneSetup::_ImportFromBufferToWorking::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_ImportFromBufferToWorking*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
