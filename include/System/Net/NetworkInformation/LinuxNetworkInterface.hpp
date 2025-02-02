// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.NetworkInformation.UnixNetworkInterface
#include "System/Net/NetworkInformation/UnixNetworkInterface.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: OperationalStatus
  struct OperationalStatus;
  // Forward declaring type: IPInterfaceProperties
  class IPInterfaceProperties;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: LinuxNetworkInterface
  class LinuxNetworkInterface;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NetworkInformation::LinuxNetworkInterface);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::LinuxNetworkInterface*, "System.Net.NetworkInformation", "LinuxNetworkInterface");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.LinuxNetworkInterface
  // [TokenAttribute] Offset: FFFFFFFF
  class LinuxNetworkInterface : public ::System::Net::NetworkInformation::UnixNetworkInterface {
    public:
    // Writing base type padding for base size: 0x34 to desired offset: 0x38
    char ___base_padding[0x4] = {};
    public:
    // private System.String iface_path
    // Size: 0x8
    // Offset: 0x38
    ::StringW iface_path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String iface_operstate_path
    // Size: 0x8
    // Offset: 0x40
    ::StringW iface_operstate_path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String iface_flags_path
    // Size: 0x8
    // Offset: 0x48
    ::StringW iface_flags_path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String iface_path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_iface_path();
    // Get instance field reference: private System.String iface_operstate_path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_iface_operstate_path();
    // Get instance field reference: private System.String iface_flags_path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_iface_flags_path();
    // System.String get_IfacePath()
    // Offset: 0x1AF81C0
    ::StringW get_IfacePath();
    // static System.String ReadLine(System.String path)
    // Offset: 0x1AF8578
    static ::StringW ReadLine(::StringW path);
    // public override System.Net.NetworkInformation.OperationalStatus get_OperationalStatus()
    // Offset: 0x1AF82FC
    // Implemented from: System.Net.NetworkInformation.NetworkInterface
    // Base method: System.Net.NetworkInformation.OperationalStatus NetworkInterface::get_OperationalStatus()
    ::System::Net::NetworkInformation::OperationalStatus get_OperationalStatus();
    // System.Void .ctor(System.String name)
    // Offset: 0x1AF81C8
    // Implemented from: System.Net.NetworkInformation.UnixNetworkInterface
    // Base method: System.Void UnixNetworkInterface::.ctor(System.String name)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinuxNetworkInterface* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::NetworkInformation::LinuxNetworkInterface::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinuxNetworkInterface*, creationType>(name)));
    }
    // public override System.Net.NetworkInformation.IPInterfaceProperties GetIPProperties()
    // Offset: 0x1AF8280
    // Implemented from: System.Net.NetworkInformation.NetworkInterface
    // Base method: System.Net.NetworkInformation.IPInterfaceProperties NetworkInterface::GetIPProperties()
    ::System::Net::NetworkInformation::IPInterfaceProperties* GetIPProperties();
  }; // System.Net.NetworkInformation.LinuxNetworkInterface
  #pragma pack(pop)
  static check_size<sizeof(LinuxNetworkInterface), 72 + sizeof(::StringW)> __System_Net_NetworkInformation_LinuxNetworkInterfaceSizeCheck;
  static_assert(sizeof(LinuxNetworkInterface) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::LinuxNetworkInterface::get_IfacePath
// Il2CppName: get_IfacePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::NetworkInformation::LinuxNetworkInterface::*)()>(&System::Net::NetworkInformation::LinuxNetworkInterface::get_IfacePath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::LinuxNetworkInterface*), "get_IfacePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::LinuxNetworkInterface::ReadLine
// Il2CppName: ReadLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Net::NetworkInformation::LinuxNetworkInterface::ReadLine)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::LinuxNetworkInterface*), "ReadLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::LinuxNetworkInterface::get_OperationalStatus
// Il2CppName: get_OperationalStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::OperationalStatus (System::Net::NetworkInformation::LinuxNetworkInterface::*)()>(&System::Net::NetworkInformation::LinuxNetworkInterface::get_OperationalStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::LinuxNetworkInterface*), "get_OperationalStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::LinuxNetworkInterface::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkInformation::LinuxNetworkInterface::GetIPProperties
// Il2CppName: GetIPProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::IPInterfaceProperties* (System::Net::NetworkInformation::LinuxNetworkInterface::*)()>(&System::Net::NetworkInformation::LinuxNetworkInterface::GetIPProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::LinuxNetworkInterface*), "GetIPProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
