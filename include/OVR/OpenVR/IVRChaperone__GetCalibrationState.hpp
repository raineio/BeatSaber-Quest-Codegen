// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperone
#include "OVR/OpenVR/IVRChaperone.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: ChaperoneCalibrationState
  struct ChaperoneCalibrationState;
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
  // Autogenerated type: OVR.OpenVR.IVRChaperone/_GetCalibrationState
  // [UnmanagedFunctionPointerAttribute] Offset: DCD850
  class IVRChaperone::_GetCalibrationState : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetCalibrationState
    _GetCalibrationState() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15B568C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperone::_GetCalibrationState* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperone::_GetCalibrationState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperone::_GetCalibrationState*, creationType>(object, method)));
    }
    // public OVR.OpenVR.ChaperoneCalibrationState Invoke()
    // Offset: 0x15AA7D8
    OVR::OpenVR::ChaperoneCalibrationState Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x15B569C
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.ChaperoneCalibrationState EndInvoke(System.IAsyncResult result)
    // Offset: 0x15B56C8
    OVR::OpenVR::ChaperoneCalibrationState EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperone/_GetCalibrationState
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperone::_GetCalibrationState*, "OVR.OpenVR", "IVRChaperone/_GetCalibrationState");
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_GetCalibrationState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_GetCalibrationState::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::ChaperoneCalibrationState (OVR::OpenVR::IVRChaperone::_GetCalibrationState::*)()>(&OVR::OpenVR::IVRChaperone::_GetCalibrationState::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperone::_GetCalibrationState*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_GetCalibrationState::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRChaperone::_GetCalibrationState::*)(System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRChaperone::_GetCalibrationState::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperone::_GetCalibrationState*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_GetCalibrationState::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::ChaperoneCalibrationState (OVR::OpenVR::IVRChaperone::_GetCalibrationState::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRChaperone::_GetCalibrationState::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperone::_GetCalibrationState*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
