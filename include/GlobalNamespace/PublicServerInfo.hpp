// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
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
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PublicServerInfo
  struct PublicServerInfo;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PublicServerInfo, "", "PublicServerInfo");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: PublicServerInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct PublicServerInfo/*, public System::ValueType*/ {
    public:
    public:
    // public readonly System.String code
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* code;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.Int32 currentPlayerCount
    // Size: 0x4
    // Offset: 0x8
    int currentPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PublicServerInfo
    constexpr PublicServerInfo(::Il2CppString* code_ = {}, int currentPlayerCount_ = {}) noexcept : code{code_}, currentPlayerCount{currentPlayerCount_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public readonly System.String code
    ::Il2CppString*& dyn_code();
    // Get instance field reference: public readonly System.Int32 currentPlayerCount
    int& dyn_currentPlayerCount();
    // public System.Void .ctor(System.String code, System.Int32 currentPlayerCount)
    // Offset: 0x1810744
    // ABORTED: conflicts with another method.  PublicServerInfo(::Il2CppString* code, int currentPlayerCount);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1810750
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // static public PublicServerInfo Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1810794
    static GlobalNamespace::PublicServerInfo Deserialize(LiteNetLib::Utils::NetDataReader* reader);
  }; // PublicServerInfo
  #pragma pack(pop)
  static check_size<sizeof(PublicServerInfo), 8 + sizeof(int)> __GlobalNamespace_PublicServerInfoSizeCheck;
  static_assert(sizeof(PublicServerInfo) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PublicServerInfo::PublicServerInfo
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PublicServerInfo::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PublicServerInfo::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::PublicServerInfo::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PublicServerInfo), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PublicServerInfo::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PublicServerInfo (*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::PublicServerInfo::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PublicServerInfo), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
