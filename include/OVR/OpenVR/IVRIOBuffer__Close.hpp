// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRIOBuffer
#include "OVR/OpenVR/IVRIOBuffer.hpp"
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
  // Forward declaring type: EIOBufferError
  struct EIOBufferError;
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
  // Forward declaring type: _Close
  class _Close;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(OVR::OpenVR::IVRIOBuffer::_Close);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRIOBuffer::_Close*, "OVR.OpenVR", "IVRIOBuffer/_Close");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRIOBuffer/OVR.OpenVR._Close
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: EF30A0
  class IVRIOBuffer::_Close : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x217BAE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRIOBuffer::_Close* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRIOBuffer::_Close::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRIOBuffer::_Close*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EIOBufferError Invoke(System.UInt64 ulBuffer)
    // Offset: 0x217BAF4
    OVR::OpenVR::EIOBufferError Invoke(uint64_t ulBuffer);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulBuffer, System.AsyncCallback callback, System.Object object)
    // Offset: 0x217BD58
    System::IAsyncResult* BeginInvoke(uint64_t ulBuffer, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EIOBufferError EndInvoke(System.IAsyncResult result)
    // Offset: 0x217BDE4
    OVR::OpenVR::EIOBufferError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRIOBuffer/OVR.OpenVR._Close
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRIOBuffer::_Close::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRIOBuffer::_Close::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EIOBufferError (OVR::OpenVR::IVRIOBuffer::_Close::*)(uint64_t)>(&OVR::OpenVR::IVRIOBuffer::_Close::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRIOBuffer::_Close*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulBuffer});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRIOBuffer::_Close::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRIOBuffer::_Close::*)(uint64_t, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRIOBuffer::_Close::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRIOBuffer::_Close*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulBuffer, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRIOBuffer::_Close::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EIOBufferError (OVR::OpenVR::IVRIOBuffer::_Close::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRIOBuffer::_Close::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRIOBuffer::_Close*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
