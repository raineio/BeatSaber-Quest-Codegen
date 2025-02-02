// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: EncryptionUtility
#include "GlobalNamespace/EncryptionUtility.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EncryptionUtility::$$c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EncryptionUtility::$$c__DisplayClass18_0*, "", "EncryptionUtility/<>c__DisplayClass18_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: EncryptionUtility/<>c__DisplayClass18_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class EncryptionUtility::$$c__DisplayClass18_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Byte[] preMasterSecret
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> preMasterSecret;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] serverSeed
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> serverSeed;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] clientSeed
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> clientSeed;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Boolean isClient
    // Size: 0x1
    // Offset: 0x28
    bool isClient;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Byte[] preMasterSecret
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_preMasterSecret();
    // Get instance field reference: public System.Byte[] serverSeed
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_serverSeed();
    // Get instance field reference: public System.Byte[] clientSeed
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_clientSeed();
    // Get instance field reference: public System.Boolean isClient
    [[deprecated("Use field access instead!")]] bool& dyn_isClient();
    // public System.Void .ctor()
    // Offset: 0x16BE328
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncryptionUtility::$$c__DisplayClass18_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EncryptionUtility::$$c__DisplayClass18_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncryptionUtility::$$c__DisplayClass18_0*, creationType>()));
    }
    // EncryptionUtility/IEncryptionState <CreateEncryptionStateAsync>b__0()
    // Offset: 0x16BFE98
    ::GlobalNamespace::EncryptionUtility::IEncryptionState* $CreateEncryptionStateAsync$b__0();
  }; // EncryptionUtility/<>c__DisplayClass18_0
  #pragma pack(pop)
  static check_size<sizeof(EncryptionUtility::$$c__DisplayClass18_0), 40 + sizeof(bool)> __GlobalNamespace_EncryptionUtility_$$c__DisplayClass18_0SizeCheck;
  static_assert(sizeof(EncryptionUtility::$$c__DisplayClass18_0) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::$$c__DisplayClass18_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::$$c__DisplayClass18_0::$CreateEncryptionStateAsync$b__0
// Il2CppName: <CreateEncryptionStateAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EncryptionUtility::IEncryptionState* (GlobalNamespace::EncryptionUtility::$$c__DisplayClass18_0::*)()>(&GlobalNamespace::EncryptionUtility::$$c__DisplayClass18_0::$CreateEncryptionStateAsync$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility::$$c__DisplayClass18_0*), "<CreateEncryptionStateAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
