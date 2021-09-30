// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRChaperoneSetup
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/OVR.OpenVR._SetWorkingCollisionBoundsTagsInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: EB084C
  class IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1771FFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo*, creationType>(object, method)));
    }
    // public System.Void Invoke(in System.Byte[] pTagsBuffer, System.UInt32 unTagCount)
    // Offset: 0x1769A98
    void Invoke(ByRef<::ArrayW<uint8_t>> pTagsBuffer, uint unTagCount);
    // public System.IAsyncResult BeginInvoke(in System.Byte[] pTagsBuffer, System.UInt32 unTagCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x177200C
    System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<uint8_t>> pTagsBuffer, uint unTagCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x17720A8
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/OVR.OpenVR._SetWorkingCollisionBoundsTagsInfo
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingCollisionBoundsTagsInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo::*)(ByRef<::ArrayW<uint8_t>>, uint)>(&OVR::OpenVR::IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo::Invoke)> {
  static const MethodInfo* get() {
    static auto* pTagsBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* unTagCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pTagsBuffer, unTagCount});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo::*)(ByRef<::ArrayW<uint8_t>>, uint, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pTagsBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* unTagCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pTagsBuffer, unTagCount, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
