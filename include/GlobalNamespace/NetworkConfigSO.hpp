// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: INetworkConfig
#include "GlobalNamespace/INetworkConfig.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MasterServerEndPoint
  class MasterServerEndPoint;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: NetworkConfigSO
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkConfigSO : public GlobalNamespace::PersistentScriptableObject/*, public GlobalNamespace::INetworkConfig*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Int32 _maxPartySize
    // Size: 0x4
    // Offset: 0x18
    int maxPartySize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _discoveryPort
    // Size: 0x4
    // Offset: 0x1C
    int discoveryPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _partyPort
    // Size: 0x4
    // Offset: 0x20
    int partyPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _multiplayerPort
    // Size: 0x4
    // Offset: 0x24
    int multiplayerPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _masterServerPort
    // Size: 0x4
    // Offset: 0x28
    int masterServerPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: masterServerPort and: masterServerHostName
    char __padding4[0x4] = {};
    // private System.String _masterServerHostName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* masterServerHostName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _masterServerStatusUrl
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* masterServerStatusUrl;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Creating interface conversion operator: operator GlobalNamespace::INetworkConfig
    operator GlobalNamespace::INetworkConfig() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkConfig*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Int32 _maxPartySize
    int& dyn__maxPartySize();
    // Get instance field reference: private System.Int32 _discoveryPort
    int& dyn__discoveryPort();
    // Get instance field reference: private System.Int32 _partyPort
    int& dyn__partyPort();
    // Get instance field reference: private System.Int32 _multiplayerPort
    int& dyn__multiplayerPort();
    // Get instance field reference: private System.Int32 _masterServerPort
    int& dyn__masterServerPort();
    // Get instance field reference: private System.String _masterServerHostName
    ::Il2CppString*& dyn__masterServerHostName();
    // Get instance field reference: private System.String _masterServerStatusUrl
    ::Il2CppString*& dyn__masterServerStatusUrl();
    // public System.Int32 get_maxPartySize()
    // Offset: 0x1138910
    int get_maxPartySize();
    // public System.Int32 get_discoveryPort()
    // Offset: 0x1138918
    int get_discoveryPort();
    // public System.Int32 get_partyPort()
    // Offset: 0x1138920
    int get_partyPort();
    // public System.Int32 get_multiplayerPort()
    // Offset: 0x1138928
    int get_multiplayerPort();
    // public MasterServerEndPoint get_masterServerEndPoint()
    // Offset: 0x1138930
    GlobalNamespace::MasterServerEndPoint* get_masterServerEndPoint();
    // public System.String get_masterServerStatusUrl()
    // Offset: 0x11389A8
    ::Il2CppString* get_masterServerStatusUrl();
    // public System.Void .ctor()
    // Offset: 0x11389B0
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkConfigSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkConfigSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkConfigSO*, creationType>()));
    }
  }; // NetworkConfigSO
  #pragma pack(pop)
  static check_size<sizeof(NetworkConfigSO), 56 + sizeof(::Il2CppString*)> __GlobalNamespace_NetworkConfigSOSizeCheck;
  static_assert(sizeof(NetworkConfigSO) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkConfigSO*, "", "NetworkConfigSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetworkConfigSO::get_maxPartySize
// Il2CppName: get_maxPartySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::NetworkConfigSO::*)()>(&GlobalNamespace::NetworkConfigSO::get_maxPartySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkConfigSO*), "get_maxPartySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkConfigSO::get_discoveryPort
// Il2CppName: get_discoveryPort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::NetworkConfigSO::*)()>(&GlobalNamespace::NetworkConfigSO::get_discoveryPort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkConfigSO*), "get_discoveryPort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkConfigSO::get_partyPort
// Il2CppName: get_partyPort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::NetworkConfigSO::*)()>(&GlobalNamespace::NetworkConfigSO::get_partyPort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkConfigSO*), "get_partyPort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkConfigSO::get_multiplayerPort
// Il2CppName: get_multiplayerPort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::NetworkConfigSO::*)()>(&GlobalNamespace::NetworkConfigSO::get_multiplayerPort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkConfigSO*), "get_multiplayerPort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkConfigSO::get_masterServerEndPoint
// Il2CppName: get_masterServerEndPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MasterServerEndPoint* (GlobalNamespace::NetworkConfigSO::*)()>(&GlobalNamespace::NetworkConfigSO::get_masterServerEndPoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkConfigSO*), "get_masterServerEndPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkConfigSO::get_masterServerStatusUrl
// Il2CppName: get_masterServerStatusUrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::NetworkConfigSO::*)()>(&GlobalNamespace::NetworkConfigSO::get_masterServerStatusUrl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkConfigSO*), "get_masterServerStatusUrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkConfigSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
