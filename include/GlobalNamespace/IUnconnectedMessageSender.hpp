// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketEncryptionLayer
  class PacketEncryptionLayer;
  // Forward declaring type: IUnconnectedMessageReceiver
  class IUnconnectedMessageReceiver;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IUnconnectedMessageSender
  class IUnconnectedMessageSender;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IUnconnectedMessageSender);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IUnconnectedMessageSender*, "", "IUnconnectedMessageSender");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IUnconnectedMessageSender
  // [TokenAttribute] Offset: FFFFFFFF
  class IUnconnectedMessageSender {
    public:
    // public System.Byte[] get_unconnectedPacketHeader()
    // Offset: 0xFFFFFFFF
    ::ArrayW<uint8_t> get_unconnectedPacketHeader();
    // public PacketEncryptionLayer get_encryptionLayer()
    // Offset: 0xFFFFFFFF
    ::GlobalNamespace::PacketEncryptionLayer* get_encryptionLayer();
    // public System.Void SendUnconnectedMessage(System.Net.IPEndPoint remoteEndPoint, LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xFFFFFFFF
    void SendUnconnectedMessage(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void RegisterReceiver(IUnconnectedMessageReceiver receiver)
    // Offset: 0xFFFFFFFF
    void RegisterReceiver(::GlobalNamespace::IUnconnectedMessageReceiver* receiver);
    // public System.Void UnregisterReceiver(IUnconnectedMessageReceiver receiver)
    // Offset: 0xFFFFFFFF
    void UnregisterReceiver(::GlobalNamespace::IUnconnectedMessageReceiver* receiver);
  }; // IUnconnectedMessageSender
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IUnconnectedMessageSender::get_unconnectedPacketHeader
// Il2CppName: get_unconnectedPacketHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::IUnconnectedMessageSender::*)()>(&GlobalNamespace::IUnconnectedMessageSender::get_unconnectedPacketHeader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnconnectedMessageSender*), "get_unconnectedPacketHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IUnconnectedMessageSender::get_encryptionLayer
// Il2CppName: get_encryptionLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketEncryptionLayer* (GlobalNamespace::IUnconnectedMessageSender::*)()>(&GlobalNamespace::IUnconnectedMessageSender::get_encryptionLayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnconnectedMessageSender*), "get_encryptionLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IUnconnectedMessageSender::SendUnconnectedMessage
// Il2CppName: SendUnconnectedMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IUnconnectedMessageSender::*)(::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::IUnconnectedMessageSender::SendUnconnectedMessage)> {
  static const MethodInfo* get() {
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnconnectedMessageSender*), "SendUnconnectedMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{remoteEndPoint, writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IUnconnectedMessageSender::RegisterReceiver
// Il2CppName: RegisterReceiver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IUnconnectedMessageSender::*)(::GlobalNamespace::IUnconnectedMessageReceiver*)>(&GlobalNamespace::IUnconnectedMessageSender::RegisterReceiver)> {
  static const MethodInfo* get() {
    static auto* receiver = &::il2cpp_utils::GetClassFromName("", "IUnconnectedMessageReceiver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnconnectedMessageSender*), "RegisterReceiver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiver});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IUnconnectedMessageSender::UnregisterReceiver
// Il2CppName: UnregisterReceiver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IUnconnectedMessageSender::*)(::GlobalNamespace::IUnconnectedMessageReceiver*)>(&GlobalNamespace::IUnconnectedMessageSender::UnregisterReceiver)> {
  static const MethodInfo* get() {
    static auto* receiver = &::il2cpp_utils::GetClassFromName("", "IUnconnectedMessageReceiver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnconnectedMessageSender*), "UnregisterReceiver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiver});
  }
};