// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // [TokenAttribute] Offset: FFFFFFFF
  class IPHostEntry : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.String hostName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* hostName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String[] aliases
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Il2CppString*> aliases;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppString*>) == 0x8);
    // private System.Net.IPAddress[] addressList
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<System::Net::IPAddress*> addressList;
    // Field size check
    static_assert(sizeof(::ArrayW<System::Net::IPAddress*>) == 0x8);
    // System.Boolean isTrustedHost
    // Size: 0x1
    // Offset: 0x28
    bool isTrustedHost;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.String hostName
    ::Il2CppString*& dyn_hostName();
    // Get instance field reference: private System.String[] aliases
    ::ArrayW<::Il2CppString*>& dyn_aliases();
    // Get instance field reference: private System.Net.IPAddress[] addressList
    ::ArrayW<System::Net::IPAddress*>& dyn_addressList();
    // Get instance field reference: System.Boolean isTrustedHost
    bool& dyn_isTrustedHost();
    // public System.String get_HostName()
    // Offset: 0x184E684
    ::Il2CppString* get_HostName();
    // public System.Void set_HostName(System.String value)
    // Offset: 0x184E68C
    void set_HostName(::Il2CppString* value);
    // public System.Void set_Aliases(System.String[] value)
    // Offset: 0x184E694
    void set_Aliases(::ArrayW<::Il2CppString*> value);
    // public System.Net.IPAddress[] get_AddressList()
    // Offset: 0x184E69C
    ::ArrayW<System::Net::IPAddress*> get_AddressList();
    // public System.Void set_AddressList(System.Net.IPAddress[] value)
    // Offset: 0x184E6A4
    void set_AddressList(::ArrayW<System::Net::IPAddress*> value);
    // public System.Void .ctor()
    // Offset: 0x184E6AC
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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::IPHostEntry::get_HostName
// Il2CppName: get_HostName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::IPHostEntry::*)()>(&System::Net::IPHostEntry::get_HostName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPHostEntry*), "get_HostName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IPHostEntry::set_HostName
// Il2CppName: set_HostName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::IPHostEntry::*)(::Il2CppString*)>(&System::Net::IPHostEntry::set_HostName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPHostEntry*), "set_HostName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::IPHostEntry::set_Aliases
// Il2CppName: set_Aliases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::IPHostEntry::*)(::ArrayW<::Il2CppString*>)>(&System::Net::IPHostEntry::set_Aliases)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPHostEntry*), "set_Aliases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::IPHostEntry::get_AddressList
// Il2CppName: get_AddressList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Net::IPAddress*> (System::Net::IPHostEntry::*)()>(&System::Net::IPHostEntry::get_AddressList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPHostEntry*), "get_AddressList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IPHostEntry::set_AddressList
// Il2CppName: set_AddressList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::IPHostEntry::*)(::ArrayW<System::Net::IPAddress*>)>(&System::Net::IPHostEntry::set_AddressList)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Net", "IPAddress"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPHostEntry*), "set_AddressList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::IPHostEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
