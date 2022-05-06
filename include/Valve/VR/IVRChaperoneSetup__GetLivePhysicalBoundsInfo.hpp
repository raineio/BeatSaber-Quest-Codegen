// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.HmdQuad_t
#include "Valve/VR/HmdQuad_t.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::IVRChaperoneSetup::_GetLivePhysicalBoundsInfo);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRChaperoneSetup::_GetLivePhysicalBoundsInfo*, "Valve.VR", "IVRChaperoneSetup/_GetLivePhysicalBoundsInfo");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/Valve.VR._GetLivePhysicalBoundsInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 108D664
  class IVRChaperoneSetup::_GetLivePhysicalBoundsInfo : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x267ACD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_GetLivePhysicalBoundsInfo* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRChaperoneSetup::_GetLivePhysicalBoundsInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_GetLivePhysicalBoundsInfo*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(in Valve.VR.HmdQuad_t[] pQuadsBuffer, ref System.UInt32 punQuadsCount)
    // Offset: 0x267ACE4
    bool Invoke(ByRef<::ArrayW<::Valve::VR::HmdQuad_t>> pQuadsBuffer, ByRef<uint> punQuadsCount);
    // public System.IAsyncResult BeginInvoke(in Valve.VR.HmdQuad_t[] pQuadsBuffer, ref System.UInt32 punQuadsCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x267AF60
    ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<::Valve::VR::HmdQuad_t>> pQuadsBuffer, ByRef<uint> punQuadsCount, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref System.UInt32 punQuadsCount, System.IAsyncResult result)
    // Offset: 0x267AFFC
    bool EndInvoke(ByRef<uint> punQuadsCount, ::System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/Valve.VR._GetLivePhysicalBoundsInfo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_GetLivePhysicalBoundsInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_GetLivePhysicalBoundsInfo::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRChaperoneSetup::_GetLivePhysicalBoundsInfo::*)(ByRef<::ArrayW<::Valve::VR::HmdQuad_t>>, ByRef<uint>)>(&Valve::VR::IVRChaperoneSetup::_GetLivePhysicalBoundsInfo::Invoke)> {
  static const MethodInfo* get() {
    static auto* pQuadsBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Valve.VR", "HmdQuad_t"), 1)->this_arg;
    static auto* punQuadsCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_GetLivePhysicalBoundsInfo*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pQuadsBuffer, punQuadsCount});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_GetLivePhysicalBoundsInfo::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRChaperoneSetup::_GetLivePhysicalBoundsInfo::*)(ByRef<::ArrayW<::Valve::VR::HmdQuad_t>>, ByRef<uint>, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRChaperoneSetup::_GetLivePhysicalBoundsInfo::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pQuadsBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Valve.VR", "HmdQuad_t"), 1)->this_arg;
    static auto* punQuadsCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_GetLivePhysicalBoundsInfo*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pQuadsBuffer, punQuadsCount, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_GetLivePhysicalBoundsInfo::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRChaperoneSetup::_GetLivePhysicalBoundsInfo::*)(ByRef<uint>, ::System::IAsyncResult*)>(&Valve::VR::IVRChaperoneSetup::_GetLivePhysicalBoundsInfo::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* punQuadsCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_GetLivePhysicalBoundsInfo*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{punQuadsCount, result});
  }
};
