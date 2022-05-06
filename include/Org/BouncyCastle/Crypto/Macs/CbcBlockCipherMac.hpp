// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IMac
#include "Org/BouncyCastle/Crypto/IMac.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IBlockCipher
  class IBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Paddings
namespace Org::BouncyCastle::Crypto::Paddings {
  // Forward declaring type: IBlockCipherPadding
  class IBlockCipherPadding;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Macs
namespace Org::BouncyCastle::Crypto::Macs {
  // Forward declaring type: CbcBlockCipherMac
  class CbcBlockCipherMac;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*, "Org.BouncyCastle.Crypto.Macs", "CbcBlockCipherMac");
// Type namespace: Org.BouncyCastle.Crypto.Macs
namespace Org::BouncyCastle::Crypto::Macs {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac
  // [TokenAttribute] Offset: FFFFFFFF
  class CbcBlockCipherMac : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IMac*/ {
    public:
    public:
    // private System.Byte[] buf
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> buf;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 bufOff
    // Size: 0x4
    // Offset: 0x18
    int bufOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: bufOff and: cipher
    char __padding1[0x4] = {};
    // private Org.BouncyCastle.Crypto.IBlockCipher cipher
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Crypto::IBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::IBlockCipher*) == 0x8);
    // private Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding padding
    // Size: 0x8
    // Offset: 0x28
    ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*) == 0x8);
    // private System.Int32 macSize
    // Size: 0x4
    // Offset: 0x30
    int macSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IMac
    operator ::Org::BouncyCastle::Crypto::IMac() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IMac*>(this);
    }
    // Get instance field reference: private System.Byte[] buf
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_buf();
    // Get instance field reference: private System.Int32 bufOff
    [[deprecated("Use field access instead!")]] int& dyn_bufOff();
    // Get instance field reference: private Org.BouncyCastle.Crypto.IBlockCipher cipher
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::IBlockCipher*& dyn_cipher();
    // Get instance field reference: private Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding padding
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*& dyn_padding();
    // Get instance field reference: private System.Int32 macSize
    [[deprecated("Use field access instead!")]] int& dyn_macSize();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher)
    // Offset: 0x1E32DA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CbcBlockCipherMac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CbcBlockCipherMac*, creationType>(cipher)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher, System.Int32 macSizeInBits)
    // Offset: 0x1E33000
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CbcBlockCipherMac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int macSizeInBits) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CbcBlockCipherMac*, creationType>(cipher, macSizeInBits)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher, System.Int32 macSizeInBits, Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding padding)
    // Offset: 0x1E32E8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CbcBlockCipherMac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int macSizeInBits, ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CbcBlockCipherMac*, creationType>(cipher, macSizeInBits, padding)));
    }
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1E33008
    void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetMacSize()
    // Offset: 0x1E331A8
    int GetMacSize();
    // public System.Void Update(System.Byte input)
    // Offset: 0x1E331B0
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 len)
    // Offset: 0x1E332DC
    void BlockUpdate(::ArrayW<uint8_t> input, int inOff, int len);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1E33580
    int DoFinal(::ArrayW<uint8_t> output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1E330D8
    void Reset();
  }; // Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac
  #pragma pack(pop)
  static check_size<sizeof(CbcBlockCipherMac), 48 + sizeof(int)> __Org_BouncyCastle_Crypto_Macs_CbcBlockCipherMacSizeCheck;
  static_assert(sizeof(CbcBlockCipherMac) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::Init)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::GetMacSize
// Il2CppName: GetMacSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::*)()>(&Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::GetMacSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*), "GetMacSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::Update)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::*)()>(&Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
