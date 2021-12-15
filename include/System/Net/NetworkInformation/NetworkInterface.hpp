// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: OperationalStatus
  struct OperationalStatus;
  // Forward declaring type: NetworkInterfaceType
  struct NetworkInterfaceType;
  // Forward declaring type: IPInterfaceProperties
  class IPInterfaceProperties;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: NetworkInterface
  class NetworkInterface;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Net::NetworkInformation::NetworkInterface);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::NetworkInterface*, "System.Net.NetworkInformation", "NetworkInterface");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.NetworkInterface
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkInterface : public ::Il2CppObject {
    public:
    // public System.String get_Name()
    // Offset: 0x16A7628
    ::Il2CppString* get_Name();
    // public System.Net.NetworkInformation.OperationalStatus get_OperationalStatus()
    // Offset: 0x16A76E8
    System::Net::NetworkInformation::OperationalStatus get_OperationalStatus();
    // public System.Net.NetworkInformation.NetworkInterfaceType get_NetworkInterfaceType()
    // Offset: 0x16A7748
    System::Net::NetworkInformation::NetworkInterfaceType get_NetworkInterfaceType();
    // static public System.Net.NetworkInformation.NetworkInterface[] GetAllNetworkInterfaces()
    // Offset: 0x16A74C4
    static ::ArrayW<System::Net::NetworkInformation::NetworkInterface*> GetAllNetworkInterfaces();
    // public System.Net.NetworkInformation.IPInterfaceProperties GetIPProperties()
    // Offset: 0x16A7688
    System::Net::NetworkInformation::IPInterfaceProperties* GetIPProperties();
    // protected System.Void .ctor()
    // Offset: 0x16A77A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkInterface* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::NetworkInterface::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkInterface*, creationType>()));
    }
  }; // System.Net.NetworkInformation.NetworkInterface
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterface::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::NetworkInformation::NetworkInterface::*)()>(&System::Net::NetworkInformation::NetworkInterface::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::NetworkInterface*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterface::get_OperationalStatus
// Il2CppName: get_OperationalStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::OperationalStatus (System::Net::NetworkInformation::NetworkInterface::*)()>(&System::Net::NetworkInformation::NetworkInterface::get_OperationalStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::NetworkInterface*), "get_OperationalStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterface::get_NetworkInterfaceType
// Il2CppName: get_NetworkInterfaceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::NetworkInterfaceType (System::Net::NetworkInformation::NetworkInterface::*)()>(&System::Net::NetworkInformation::NetworkInterface::get_NetworkInterfaceType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::NetworkInterface*), "get_NetworkInterfaceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterface::GetAllNetworkInterfaces
// Il2CppName: GetAllNetworkInterfaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Net::NetworkInformation::NetworkInterface*> (*)()>(&System::Net::NetworkInformation::NetworkInterface::GetAllNetworkInterfaces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::NetworkInterface*), "GetAllNetworkInterfaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterface::GetIPProperties
// Il2CppName: GetIPProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::IPInterfaceProperties* (System::Net::NetworkInformation::NetworkInterface::*)()>(&System::Net::NetworkInformation::NetworkInterface::GetIPProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::NetworkInterface*), "GetIPProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterface::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
