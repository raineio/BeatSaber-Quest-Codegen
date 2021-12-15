// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.NetworkInformation.UnixIPGlobalProperties
#include "System/Net/NetworkInformation/UnixIPGlobalProperties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: UnixNoLibCIPGlobalProperties
  class UnixNoLibCIPGlobalProperties;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties*, "System.Net.NetworkInformation", "UnixNoLibCIPGlobalProperties");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.UnixNoLibCIPGlobalProperties
  // [TokenAttribute] Offset: FFFFFFFF
  class UnixNoLibCIPGlobalProperties : public System::Net::NetworkInformation::UnixIPGlobalProperties {
    public:
    // public override System.String get_DomainName()
    // Offset: 0x16A99B4
    // Implemented from: System.Net.NetworkInformation.CommonUnixIPGlobalProperties
    // Base method: System.String CommonUnixIPGlobalProperties::get_DomainName()
    ::Il2CppString* get_DomainName();
    // public System.Void .ctor()
    // Offset: 0x16A5DF8
    // Implemented from: System.Net.NetworkInformation.UnixIPGlobalProperties
    // Base method: System.Void UnixIPGlobalProperties::.ctor()
    // Base method: System.Void CommonUnixIPGlobalProperties::.ctor()
    // Base method: System.Void IPGlobalProperties::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnixNoLibCIPGlobalProperties* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnixNoLibCIPGlobalProperties*, creationType>()));
    }
  }; // System.Net.NetworkInformation.UnixNoLibCIPGlobalProperties
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::get_DomainName
// Il2CppName: get_DomainName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::*)()>(&System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::get_DomainName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties*), "get_DomainName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
