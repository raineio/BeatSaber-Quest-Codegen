// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRResources
#include "Valve/VR/IVRResources.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: CVRResources
  class CVRResources;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Valve::VR::CVRResources);
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRResources*, "Valve.VR", "CVRResources");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRResources
  // [TokenAttribute] Offset: FFFFFFFF
  class CVRResources : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private Valve.VR.IVRResources FnTable
    // Size: 0x10
    // Offset: 0x10
    Valve::VR::IVRResources FnTable;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRResources) == 0x10);
    public:
    // Creating conversion operator: operator Valve::VR::IVRResources
    constexpr operator Valve::VR::IVRResources() const noexcept {
      return FnTable;
    }
    // Get instance field reference: private Valve.VR.IVRResources FnTable
    Valve::VR::IVRResources& dyn_FnTable();
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x18CCD04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRResources* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::CVRResources::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRResources*, creationType>(pInterface)));
    }
    // public System.UInt32 LoadSharedResource(System.String pchResourceName, System.String pchBuffer, System.UInt32 unBufferLen)
    // Offset: 0x18CCE04
    uint LoadSharedResource(::StringW pchResourceName, ::StringW pchBuffer, uint unBufferLen);
    // public System.UInt32 GetResourceFullPath(System.String pchResourceName, System.String pchResourceTypeDirectory, System.Text.StringBuilder pchPathBuffer, System.UInt32 unBufferLen)
    // Offset: 0x18CCE20
    uint GetResourceFullPath(::StringW pchResourceName, ::StringW pchResourceTypeDirectory, System::Text::StringBuilder* pchPathBuffer, uint unBufferLen);
  }; // Valve.VR.CVRResources
  #pragma pack(pop)
  static check_size<sizeof(CVRResources), 16 + sizeof(Valve::VR::IVRResources)> __Valve_VR_CVRResourcesSizeCheck;
  static_assert(sizeof(CVRResources) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::CVRResources::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::CVRResources::LoadSharedResource
// Il2CppName: LoadSharedResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::CVRResources::*)(::StringW, ::StringW, uint)>(&Valve::VR::CVRResources::LoadSharedResource)> {
  static const MethodInfo* get() {
    static auto* pchResourceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchBuffer = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* unBufferLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRResources*), "LoadSharedResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchResourceName, pchBuffer, unBufferLen});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRResources::GetResourceFullPath
// Il2CppName: GetResourceFullPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::CVRResources::*)(::StringW, ::StringW, System::Text::StringBuilder*, uint)>(&Valve::VR::CVRResources::GetResourceFullPath)> {
  static const MethodInfo* get() {
    static auto* pchResourceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchResourceTypeDirectory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchPathBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unBufferLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRResources*), "GetResourceFullPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchResourceName, pchResourceTypeDirectory, pchPathBuffer, unBufferLen});
  }
};
