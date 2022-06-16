// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.IUnconnectedResponse
#include "BGNet/Core/Messages/IUnconnectedResponse.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: BaseResponse
  class BaseResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::BaseResponse);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseResponse*, "BGNet.Core.Messages", "BaseResponse");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.BaseResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseResponse : public ::Il2CppObject/*, public ::BGNet::Core::Messages::IUnconnectedResponse*/ {
    public:
    public:
    // private System.UInt32 <responseId>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    uint responseId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating interface conversion operator: operator ::BGNet::Core::Messages::IUnconnectedResponse
    operator ::BGNet::Core::Messages::IUnconnectedResponse() noexcept {
      return *reinterpret_cast<::BGNet::Core::Messages::IUnconnectedResponse*>(this);
    }
    // Creating interface conversion operator: i_IUnconnectedResponse
    inline ::BGNet::Core::Messages::IUnconnectedResponse* i_IUnconnectedResponse() noexcept {
      return reinterpret_cast<::BGNet::Core::Messages::IUnconnectedResponse*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return responseId;
    }
    // Get instance field reference: private System.UInt32 <responseId>k__BackingField
    [[deprecated("Use field access instead!")]] uint& dyn_$responseId$k__BackingField();
    // public System.UInt32 get_responseId()
    // Offset: 0x1549140
    uint get_responseId();
    // private System.Void set_responseId(System.UInt32 value)
    // Offset: 0x1549148
    void set_responseId(uint value);
    // public System.Byte get_resultCode()
    // Offset: 0x1549150
    uint8_t get_resultCode();
    // public System.String get_resultCodeString()
    // Offset: 0x1549158
    ::StringW get_resultCodeString();
    // protected System.Void .ctor()
    // Offset: 0x1543E5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::BaseResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseResponse*, creationType>()));
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1543DB0
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1543E20
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Release();
    // private BGNet.Core.Messages.IUnconnectedResponse BGNet.Core.Messages.IUnconnectedResponse.WithResponseId(System.UInt32 responseId)
    // Offset: 0x15491A0
    ::BGNet::Core::Messages::IUnconnectedResponse* BGNet_Core_Messages_IUnconnectedResponse_WithResponseId(uint responseId);
  }; // BGNet.Core.Messages.BaseResponse
  #pragma pack(pop)
  static check_size<sizeof(BaseResponse), 16 + sizeof(uint)> __BGNet_Core_Messages_BaseResponseSizeCheck;
  static_assert(sizeof(BaseResponse) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseResponse::get_responseId
// Il2CppName: get_responseId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (BGNet::Core::Messages::BaseResponse::*)()>(&BGNet::Core::Messages::BaseResponse::get_responseId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseResponse*), "get_responseId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseResponse::set_responseId
// Il2CppName: set_responseId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseResponse::*)(uint)>(&BGNet::Core::Messages::BaseResponse::set_responseId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseResponse*), "set_responseId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseResponse::get_resultCode
// Il2CppName: get_resultCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (BGNet::Core::Messages::BaseResponse::*)()>(&BGNet::Core::Messages::BaseResponse::get_resultCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseResponse*), "get_resultCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseResponse::get_resultCodeString
// Il2CppName: get_resultCodeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (BGNet::Core::Messages::BaseResponse::*)()>(&BGNet::Core::Messages::BaseResponse::get_resultCodeString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseResponse*), "get_resultCodeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseResponse::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseResponse::*)(::LiteNetLib::Utils::NetDataWriter*)>(&BGNet::Core::Messages::BaseResponse::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseResponse*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseResponse::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseResponse::*)(::LiteNetLib::Utils::NetDataReader*)>(&BGNet::Core::Messages::BaseResponse::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseResponse*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseResponse::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseResponse::*)()>(&BGNet::Core::Messages::BaseResponse::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseResponse*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseResponse::BGNet_Core_Messages_IUnconnectedResponse_WithResponseId
// Il2CppName: BGNet.Core.Messages.IUnconnectedResponse.WithResponseId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::Messages::IUnconnectedResponse* (BGNet::Core::Messages::BaseResponse::*)(uint)>(&BGNet::Core::Messages::BaseResponse::BGNet_Core_Messages_IUnconnectedResponse_WithResponseId)> {
  static const MethodInfo* get() {
    static auto* responseId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseResponse*), "BGNet.Core.Messages.IUnconnectedResponse.WithResponseId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{responseId});
  }
};
