// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
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
  // Forward declaring type: ETrackedDeviceClass
  struct ETrackedDeviceClass;
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
  // Autogenerated type: Valve.VR.IVRSystem/_GetSortedTrackedDeviceIndicesOfClass
  // [UnmanagedFunctionPointerAttribute] Offset: DD3334
  class IVRSystem::_GetSortedTrackedDeviceIndicesOfClass : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetSortedTrackedDeviceIndicesOfClass
    _GetSortedTrackedDeviceIndicesOfClass() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C99FAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetSortedTrackedDeviceIndicesOfClass* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetSortedTrackedDeviceIndicesOfClass*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(Valve.VR.ETrackedDeviceClass eTrackedDeviceClass, in System.UInt32[] punTrackedDeviceIndexArray, System.UInt32 unTrackedDeviceIndexArrayCount, System.UInt32 unRelativeToTrackedDeviceIndex)
    // Offset: 0x1C99FBC
    uint Invoke(Valve::VR::ETrackedDeviceClass eTrackedDeviceClass, ::Array<uint>*& punTrackedDeviceIndexArray, uint unTrackedDeviceIndexArrayCount, uint unRelativeToTrackedDeviceIndex);
    // public System.IAsyncResult BeginInvoke(Valve.VR.ETrackedDeviceClass eTrackedDeviceClass, in System.UInt32[] punTrackedDeviceIndexArray, System.UInt32 unTrackedDeviceIndexArrayCount, System.UInt32 unRelativeToTrackedDeviceIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C9A294
    System::IAsyncResult* BeginInvoke(Valve::VR::ETrackedDeviceClass eTrackedDeviceClass, ::Array<uint>*& punTrackedDeviceIndexArray, uint unTrackedDeviceIndexArrayCount, uint unRelativeToTrackedDeviceIndex, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C9A360
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetSortedTrackedDeviceIndicesOfClass
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass*, "Valve.VR", "IVRSystem/_GetSortedTrackedDeviceIndicesOfClass");
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass::*)(Valve::VR::ETrackedDeviceClass, ::Array<uint>*&, uint, uint)>(&Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Valve::VR::ETrackedDeviceClass>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*&>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass::*)(Valve::VR::ETrackedDeviceClass, ::Array<uint>*&, uint, uint, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Valve::VR::ETrackedDeviceClass>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*&>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass::*)(System::IAsyncResult*)>(&Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
