// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRExtendedDisplay
#include "Valve/VR/IVRExtendedDisplay.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVREye
  struct EVREye;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: CVRExtendedDisplay
  class CVRExtendedDisplay;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::CVRExtendedDisplay);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::CVRExtendedDisplay*, "Valve.VR", "CVRExtendedDisplay");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRExtendedDisplay
  // [TokenAttribute] Offset: FFFFFFFF
  class CVRExtendedDisplay : public ::Il2CppObject {
    public:
    public:
    // private Valve.VR.IVRExtendedDisplay FnTable
    // Size: 0x18
    // Offset: 0x10
    ::Valve::VR::IVRExtendedDisplay FnTable;
    // Field size check
    static_assert(sizeof(::Valve::VR::IVRExtendedDisplay) == 0x18);
    public:
    // Creating conversion operator: operator ::Valve::VR::IVRExtendedDisplay
    constexpr operator ::Valve::VR::IVRExtendedDisplay() const noexcept {
      return FnTable;
    }
    // Get instance field reference: private Valve.VR.IVRExtendedDisplay FnTable
    [[deprecated("Use field access instead!")]] ::Valve::VR::IVRExtendedDisplay& dyn_FnTable();
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x1BD96A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRExtendedDisplay* New_ctor(::System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::CVRExtendedDisplay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRExtendedDisplay*, creationType>(pInterface)));
    }
    // public System.Void GetWindowBounds(ref System.Int32 pnX, ref System.Int32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x1BD97AC
    void GetWindowBounds(ByRef<int> pnX, ByRef<int> pnY, ByRef<uint> pnWidth, ByRef<uint> pnHeight);
    // public System.Void GetEyeOutputViewport(Valve.VR.EVREye eEye, ref System.UInt32 pnX, ref System.UInt32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x1BD97D8
    void GetEyeOutputViewport(::Valve::VR::EVREye eEye, ByRef<uint> pnX, ByRef<uint> pnY, ByRef<uint> pnWidth, ByRef<uint> pnHeight);
    // public System.Void GetDXGIOutputInfo(ref System.Int32 pnAdapterIndex, ref System.Int32 pnAdapterOutputIndex)
    // Offset: 0x1BD9804
    void GetDXGIOutputInfo(ByRef<int> pnAdapterIndex, ByRef<int> pnAdapterOutputIndex);
  }; // Valve.VR.CVRExtendedDisplay
  #pragma pack(pop)
  static check_size<sizeof(CVRExtendedDisplay), 16 + sizeof(::Valve::VR::IVRExtendedDisplay)> __Valve_VR_CVRExtendedDisplaySizeCheck;
  static_assert(sizeof(CVRExtendedDisplay) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::CVRExtendedDisplay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::CVRExtendedDisplay::GetWindowBounds
// Il2CppName: GetWindowBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRExtendedDisplay::*)(ByRef<int>, ByRef<int>, ByRef<uint>, ByRef<uint>)>(&Valve::VR::CVRExtendedDisplay::GetWindowBounds)> {
  static const MethodInfo* get() {
    static auto* pnX = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pnY = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRExtendedDisplay*), "GetWindowBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnX, pnY, pnWidth, pnHeight});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRExtendedDisplay::GetEyeOutputViewport
// Il2CppName: GetEyeOutputViewport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRExtendedDisplay::*)(::Valve::VR::EVREye, ByRef<uint>, ByRef<uint>, ByRef<uint>, ByRef<uint>)>(&Valve::VR::CVRExtendedDisplay::GetEyeOutputViewport)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVREye")->byval_arg;
    static auto* pnX = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnY = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRExtendedDisplay*), "GetEyeOutputViewport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, pnX, pnY, pnWidth, pnHeight});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRExtendedDisplay::GetDXGIOutputInfo
// Il2CppName: GetDXGIOutputInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRExtendedDisplay::*)(ByRef<int>, ByRef<int>)>(&Valve::VR::CVRExtendedDisplay::GetDXGIOutputInfo)> {
  static const MethodInfo* get() {
    static auto* pnAdapterIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pnAdapterOutputIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRExtendedDisplay*), "GetDXGIOutputInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnAdapterIndex, pnAdapterOutputIndex});
  }
};
