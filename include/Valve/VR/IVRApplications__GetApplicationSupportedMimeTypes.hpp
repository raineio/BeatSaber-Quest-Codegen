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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: _GetApplicationSupportedMimeTypes
  class _GetApplicationSupportedMimeTypes;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Valve::VR::IVRApplications::_GetApplicationSupportedMimeTypes);
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_GetApplicationSupportedMimeTypes*, "Valve.VR", "IVRApplications/_GetApplicationSupportedMimeTypes");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRApplications/Valve.VR._GetApplicationSupportedMimeTypes
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: EF6FE0
  class IVRApplications::_GetApplicationSupportedMimeTypes : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18CF580
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_GetApplicationSupportedMimeTypes* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRApplications::_GetApplicationSupportedMimeTypes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_GetApplicationSupportedMimeTypes*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String pchAppKey, System.Text.StringBuilder pchMimeTypesBuffer, System.UInt32 unMimeTypesBuffer)
    // Offset: 0x18C6290
    bool Invoke(::Il2CppString* pchAppKey, System::Text::StringBuilder* pchMimeTypesBuffer, uint unMimeTypesBuffer);
    // public System.IAsyncResult BeginInvoke(System.String pchAppKey, System.Text.StringBuilder pchMimeTypesBuffer, System.UInt32 unMimeTypesBuffer, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18CF590
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchAppKey, System::Text::StringBuilder* pchMimeTypesBuffer, uint unMimeTypesBuffer, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x18CF630
    bool EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/Valve.VR._GetApplicationSupportedMimeTypes
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_GetApplicationSupportedMimeTypes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_GetApplicationSupportedMimeTypes::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRApplications::_GetApplicationSupportedMimeTypes::*)(::Il2CppString*, System::Text::StringBuilder*, uint)>(&Valve::VR::IVRApplications::_GetApplicationSupportedMimeTypes::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchMimeTypesBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unMimeTypesBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_GetApplicationSupportedMimeTypes*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey, pchMimeTypesBuffer, unMimeTypesBuffer});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_GetApplicationSupportedMimeTypes::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRApplications::_GetApplicationSupportedMimeTypes::*)(::Il2CppString*, System::Text::StringBuilder*, uint, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRApplications::_GetApplicationSupportedMimeTypes::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchMimeTypesBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unMimeTypesBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_GetApplicationSupportedMimeTypes*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey, pchMimeTypesBuffer, unMimeTypesBuffer, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_GetApplicationSupportedMimeTypes::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRApplications::_GetApplicationSupportedMimeTypes::*)(System::IAsyncResult*)>(&Valve::VR::IVRApplications::_GetApplicationSupportedMimeTypes::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_GetApplicationSupportedMimeTypes*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
