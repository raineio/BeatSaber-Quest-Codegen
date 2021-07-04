// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.IPHostEntry
  class IPHostEntry : public ::Il2CppObject {
    public:
    // private System.String hostName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* hostName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String[] aliases
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppString*>* aliases;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.Net.IPAddress[] addressList
    // Size: 0x8
    // Offset: 0x20
    ::Array<System::Net::IPAddress*>* addressList;
    // Field size check
    static_assert(sizeof(::Array<System::Net::IPAddress*>*) == 0x8);
    // System.Boolean isTrustedHost
    // Size: 0x1
    // Offset: 0x28
    bool isTrustedHost;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: IPHostEntry
    IPHostEntry(::Il2CppString* hostName_ = {}, ::Array<::Il2CppString*>* aliases_ = {}, ::Array<System::Net::IPAddress*>* addressList_ = {}, bool isTrustedHost_ = {}) noexcept : hostName{hostName_}, aliases{aliases_}, addressList{addressList_}, isTrustedHost{isTrustedHost_} {}
    // public System.String get_HostName()
    // Offset: 0x1659D80
    ::Il2CppString* get_HostName();
    // public System.Void set_HostName(System.String value)
    // Offset: 0x1659D88
    void set_HostName(::Il2CppString* value);
    // public System.Void set_Aliases(System.String[] value)
    // Offset: 0x1659D90
    void set_Aliases(::Array<::Il2CppString*>* value);
    // public System.Net.IPAddress[] get_AddressList()
    // Offset: 0x1659D98
    ::Array<System::Net::IPAddress*>* get_AddressList();
    // public System.Void set_AddressList(System.Net.IPAddress[] value)
    // Offset: 0x1659DA0
    void set_AddressList(::Array<System::Net::IPAddress*>* value);
    // public System.Void .ctor()
    // Offset: 0x1659DA8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IPHostEntry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::IPHostEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IPHostEntry*, creationType>()));
    }
  }; // System.Net.IPHostEntry
  #pragma pack(pop)
  static check_size<sizeof(IPHostEntry), 40 + sizeof(bool)> __System_Net_IPHostEntrySizeCheck;
  static_assert(sizeof(IPHostEntry) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::IPHostEntry*, "System.Net", "IPHostEntry");
// Writing MetadataGetter for method: System::Net::IPHostEntry::get_HostName
// Il2CppName: get_HostName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::IPHostEntry::*)()>(&System::Net::IPHostEntry::get_HostName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPHostEntry*), "get_HostName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IPHostEntry::set_HostName
// Il2CppName: set_HostName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::IPHostEntry::*)(::Il2CppString*)>(&System::Net::IPHostEntry::set_HostName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPHostEntry*), "set_HostName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::IPHostEntry::set_Aliases
// Il2CppName: set_Aliases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::IPHostEntry::*)(::Array<::Il2CppString*>*)>(&System::Net::IPHostEntry::set_Aliases)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPHostEntry*), "set_Aliases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppString*>*>()});
  }
};
// Writing MetadataGetter for method: System::Net::IPHostEntry::get_AddressList
// Il2CppName: get_AddressList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Net::IPAddress*>* (System::Net::IPHostEntry::*)()>(&System::Net::IPHostEntry::get_AddressList)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPHostEntry*), "get_AddressList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IPHostEntry::set_AddressList
// Il2CppName: set_AddressList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::IPHostEntry::*)(::Array<System::Net::IPAddress*>*)>(&System::Net::IPHostEntry::set_AddressList)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPHostEntry*), "set_AddressList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<System::Net::IPAddress*>*>()});
  }
};
// Writing MetadataGetter for method: System::Net::IPHostEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
