// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Net.CFNetwork
#include "Mono/Net/CFNetwork.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Net
namespace Mono::Net {
  // Forward declaring type: CFProxy
  class CFProxy;
  // Forward declaring type: CFRunLoop
  class CFRunLoop;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Mono::Net::CFNetwork::$$c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::CFNetwork::$$c__DisplayClass13_0*, "Mono.Net", "CFNetwork/<>c__DisplayClass13_0");
// Type namespace: Mono.Net
namespace Mono::Net {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.CFNetwork/Mono.Net.<>c__DisplayClass13_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CFNetwork::$$c__DisplayClass13_0 : public ::Il2CppObject {
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
    // public Mono.Net.CFProxy[] proxies
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<Mono::Net::CFProxy*> proxies;
    // Field size check
    static_assert(sizeof(::ArrayW<Mono::Net::CFProxy*>) == 0x8);
    // public Mono.Net.CFRunLoop runLoop
    // Size: 0x8
    // Offset: 0x18
    Mono::Net::CFRunLoop* runLoop;
    // Field size check
    static_assert(sizeof(Mono::Net::CFRunLoop*) == 0x8);
    public:
    // Get instance field reference: public Mono.Net.CFProxy[] proxies
    ::ArrayW<Mono::Net::CFProxy*>& dyn_proxies();
    // Get instance field reference: public Mono.Net.CFRunLoop runLoop
    Mono::Net::CFRunLoop*& dyn_runLoop();
    // System.Void <ExecuteProxyAutoConfigurationURL>b__0(System.IntPtr client, System.IntPtr proxyList, System.IntPtr error)
    // Offset: 0x182B368
    void $ExecuteProxyAutoConfigurationURL$b__0(System::IntPtr client, System::IntPtr proxyList, System::IntPtr error);
    // public System.Void .ctor()
    // Offset: 0x182AB0C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CFNetwork::$$c__DisplayClass13_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::CFNetwork::$$c__DisplayClass13_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CFNetwork::$$c__DisplayClass13_0*, creationType>()));
    }
  }; // Mono.Net.CFNetwork/Mono.Net.<>c__DisplayClass13_0
  #pragma pack(pop)
  static check_size<sizeof(CFNetwork::$$c__DisplayClass13_0), 24 + sizeof(Mono::Net::CFRunLoop*)> __Mono_Net_CFNetwork_$$c__DisplayClass13_0SizeCheck;
  static_assert(sizeof(CFNetwork::$$c__DisplayClass13_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::CFNetwork::$$c__DisplayClass13_0::$ExecuteProxyAutoConfigurationURL$b__0
// Il2CppName: <ExecuteProxyAutoConfigurationURL>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::CFNetwork::$$c__DisplayClass13_0::*)(System::IntPtr, System::IntPtr, System::IntPtr)>(&Mono::Net::CFNetwork::$$c__DisplayClass13_0::$ExecuteProxyAutoConfigurationURL$b__0)> {
  static const MethodInfo* get() {
    static auto* client = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* proxyList = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork::$$c__DisplayClass13_0*), "<ExecuteProxyAutoConfigurationURL>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{client, proxyList, error});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::$$c__DisplayClass13_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
