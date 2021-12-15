// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.IMasterServerReliableRequest
#include "MasterServer/IMasterServerReliableRequest.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: IMasterServerMultipartMessage
  class IMasterServerMultipartMessage;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(MasterServer::IMasterServerMultipartMessage);
DEFINE_IL2CPP_ARG_TYPE(MasterServer::IMasterServerMultipartMessage*, "MasterServer", "IMasterServerMultipartMessage");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.IMasterServerMultipartMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class IMasterServerMultipartMessage/*, public MasterServer::IMasterServerReliableRequest*/ {
    public:
    // Creating interface conversion operator: operator MasterServer::IMasterServerReliableRequest
    operator MasterServer::IMasterServerReliableRequest() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerReliableRequest*>(this);
    }
    // public System.UInt32 get_multipartMessageId()
    // Offset: 0xFFFFFFFF
    uint get_multipartMessageId();
    // public System.Int32 get_offset()
    // Offset: 0xFFFFFFFF
    int get_offset();
    // public System.Int32 get_length()
    // Offset: 0xFFFFFFFF
    int get_length();
    // public System.Int32 get_totalLength()
    // Offset: 0xFFFFFFFF
    int get_totalLength();
    // public System.Byte[] get_data()
    // Offset: 0xFFFFFFFF
    ::ArrayW<uint8_t> get_data();
  }; // MasterServer.IMasterServerMultipartMessage
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::IMasterServerMultipartMessage::get_multipartMessageId
// Il2CppName: get_multipartMessageId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (MasterServer::IMasterServerMultipartMessage::*)()>(&MasterServer::IMasterServerMultipartMessage::get_multipartMessageId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServerMultipartMessage*), "get_multipartMessageId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::IMasterServerMultipartMessage::get_offset
// Il2CppName: get_offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (MasterServer::IMasterServerMultipartMessage::*)()>(&MasterServer::IMasterServerMultipartMessage::get_offset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServerMultipartMessage*), "get_offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::IMasterServerMultipartMessage::get_length
// Il2CppName: get_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (MasterServer::IMasterServerMultipartMessage::*)()>(&MasterServer::IMasterServerMultipartMessage::get_length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServerMultipartMessage*), "get_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::IMasterServerMultipartMessage::get_totalLength
// Il2CppName: get_totalLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (MasterServer::IMasterServerMultipartMessage::*)()>(&MasterServer::IMasterServerMultipartMessage::get_totalLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServerMultipartMessage*), "get_totalLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::IMasterServerMultipartMessage::get_data
// Il2CppName: get_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (MasterServer::IMasterServerMultipartMessage::*)()>(&MasterServer::IMasterServerMultipartMessage::get_data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServerMultipartMessage*), "get_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
