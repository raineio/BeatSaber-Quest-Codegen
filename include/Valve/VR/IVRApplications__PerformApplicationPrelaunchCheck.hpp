// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
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
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRApplications/_PerformApplicationPrelaunchCheck
  // [UnmanagedFunctionPointerAttribute] Offset: DD38E8
  class IVRApplications::_PerformApplicationPrelaunchCheck : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _PerformApplicationPrelaunchCheck
    _PerformApplicationPrelaunchCheck() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16D8EB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_PerformApplicationPrelaunchCheck* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRApplications::_PerformApplicationPrelaunchCheck::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_PerformApplicationPrelaunchCheck*, creationType>(object, method)));
    }
    // public Valve.VR.EVRApplicationError Invoke(System.String pchAppKey)
    // Offset: 0x16D034C
    Valve::VR::EVRApplicationError Invoke(::Il2CppString* pchAppKey);
    // public System.IAsyncResult BeginInvoke(System.String pchAppKey, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16D8EC4
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchAppKey, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0x16D8EE8
    Valve::VR::EVRApplicationError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_PerformApplicationPrelaunchCheck
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_PerformApplicationPrelaunchCheck*, "Valve.VR", "IVRApplications/_PerformApplicationPrelaunchCheck");
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_PerformApplicationPrelaunchCheck::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_PerformApplicationPrelaunchCheck::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRApplicationError (Valve::VR::IVRApplications::_PerformApplicationPrelaunchCheck::*)(::Il2CppString*)>(&Valve::VR::IVRApplications::_PerformApplicationPrelaunchCheck::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_PerformApplicationPrelaunchCheck*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_PerformApplicationPrelaunchCheck::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRApplications::_PerformApplicationPrelaunchCheck::*)(::Il2CppString*, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRApplications::_PerformApplicationPrelaunchCheck::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_PerformApplicationPrelaunchCheck*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_PerformApplicationPrelaunchCheck::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRApplicationError (Valve::VR::IVRApplications::_PerformApplicationPrelaunchCheck::*)(System::IAsyncResult*)>(&Valve::VR::IVRApplications::_PerformApplicationPrelaunchCheck::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_PerformApplicationPrelaunchCheck*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
