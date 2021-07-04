// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRNetwork
#include "GlobalNamespace/OVRNetwork.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRNetwork/FrameHeader
  struct OVRNetwork::FrameHeader/*, public System::ValueType*/ {
    public:
    // public System.UInt32 protocolIdentifier
    // Size: 0x4
    // Offset: 0x0
    uint protocolIdentifier;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Int32 payloadType
    // Size: 0x4
    // Offset: 0x4
    int payloadType;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 payloadLength
    // Size: 0x4
    // Offset: 0x8
    int payloadLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: FrameHeader
    constexpr FrameHeader(uint protocolIdentifier_ = {}, int payloadType_ = {}, int payloadLength_ = {}) noexcept : protocolIdentifier{protocolIdentifier_}, payloadType{payloadType_}, payloadLength{payloadLength_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // static field const value: static public System.Int32 StructSize
    static constexpr const int StructSize = 12;
    // Get static field: static public System.Int32 StructSize
    static int _get_StructSize();
    // Set static field: static public System.Int32 StructSize
    static void _set_StructSize(int value);
    // public System.Byte[] ToBytes()
    // Offset: 0xEE8948
    ::Array<uint8_t>* ToBytes();
    // static public OVRNetwork/FrameHeader FromBytes(System.Byte[] arr)
    // Offset: 0x12EF19C
    static GlobalNamespace::OVRNetwork::FrameHeader FromBytes(::Array<uint8_t>* arr);
  }; // OVRNetwork/FrameHeader
  #pragma pack(pop)
  static check_size<sizeof(OVRNetwork::FrameHeader), 8 + sizeof(int)> __GlobalNamespace_OVRNetwork_FrameHeaderSizeCheck;
  static_assert(sizeof(OVRNetwork::FrameHeader) == 0xC);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRNetwork::FrameHeader, "", "OVRNetwork/FrameHeader");
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::FrameHeader::ToBytes
// Il2CppName: ToBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (GlobalNamespace::OVRNetwork::FrameHeader::*)()>(&GlobalNamespace::OVRNetwork::FrameHeader::ToBytes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::FrameHeader), "ToBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::FrameHeader::FromBytes
// Il2CppName: FromBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRNetwork::FrameHeader (*)(::Array<uint8_t>*)>(&GlobalNamespace::OVRNetwork::FrameHeader::FromBytes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::FrameHeader), "FromBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
