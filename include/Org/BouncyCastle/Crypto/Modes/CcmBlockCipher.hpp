// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Modes.IAeadBlockCipher
#include "Org/BouncyCastle/Crypto/Modes/IAeadBlockCipher.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IBlockCipher
  class IBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: MemoryStream
  class MemoryStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Modes
namespace Org::BouncyCastle::Crypto::Modes {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.CcmBlockCipher
  // [TokenAttribute] Offset: FFFFFFFF
  class CcmBlockCipher : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private readonly Org.BouncyCastle.Crypto.IBlockCipher cipher
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::IBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IBlockCipher*) == 0x8);
    // private readonly System.Byte[] macBlock
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> macBlock;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x20
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forEncryption and: nonce
    char __padding2[0x7] = {};
    // private System.Byte[] nonce
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> nonce;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] initialAssociatedText
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> initialAssociatedText;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 macSize
    // Size: 0x4
    // Offset: 0x38
    int macSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: macSize and: keyParam
    char __padding5[0x4] = {};
    // private Org.BouncyCastle.Crypto.ICipherParameters keyParam
    // Size: 0x8
    // Offset: 0x40
    Org::BouncyCastle::Crypto::ICipherParameters* keyParam;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::ICipherParameters*) == 0x8);
    // private readonly System.IO.MemoryStream associatedText
    // Size: 0x8
    // Offset: 0x48
    System::IO::MemoryStream* associatedText;
    // Field size check
    static_assert(sizeof(System::IO::MemoryStream*) == 0x8);
    // private readonly System.IO.MemoryStream data
    // Size: 0x8
    // Offset: 0x50
    System::IO::MemoryStream* data;
    // Field size check
    static_assert(sizeof(System::IO::MemoryStream*) == 0x8);
    public:
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher
    operator Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>(this);
    }
    // Get static field: static private readonly System.Int32 BlockSize
    static int _get_BlockSize();
    // Set static field: static private readonly System.Int32 BlockSize
    static void _set_BlockSize(int value);
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IBlockCipher cipher
    Org::BouncyCastle::Crypto::IBlockCipher*& dyn_cipher();
    // Get instance field reference: private readonly System.Byte[] macBlock
    ::ArrayW<uint8_t>& dyn_macBlock();
    // Get instance field reference: private System.Boolean forEncryption
    bool& dyn_forEncryption();
    // Get instance field reference: private System.Byte[] nonce
    ::ArrayW<uint8_t>& dyn_nonce();
    // Get instance field reference: private System.Byte[] initialAssociatedText
    ::ArrayW<uint8_t>& dyn_initialAssociatedText();
    // Get instance field reference: private System.Int32 macSize
    int& dyn_macSize();
    // Get instance field reference: private Org.BouncyCastle.Crypto.ICipherParameters keyParam
    Org::BouncyCastle::Crypto::ICipherParameters*& dyn_keyParam();
    // Get instance field reference: private readonly System.IO.MemoryStream associatedText
    System::IO::MemoryStream*& dyn_associatedText();
    // Get instance field reference: private readonly System.IO.MemoryStream data
    System::IO::MemoryStream*& dyn_data();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher)
    // Offset: 0x1A8B220
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CcmBlockCipher* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CcmBlockCipher*, creationType>(cipher)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1A8CC9C
    static void _cctor();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1A8B424
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetBlockSize()
    // Offset: 0x1A8B6A8
    int GetBlockSize();
    // public System.Int32 ProcessBytes(System.Byte[] inBytes, System.Int32 inOff, System.Int32 inLen, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1A8B75C
    int ProcessBytes(::ArrayW<uint8_t> inBytes, int inOff, int inLen, ::ArrayW<uint8_t> outBytes, int outOff);
    // public System.Int32 DoFinal(System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1A8B804
    int DoFinal(::ArrayW<uint8_t> outBytes, int outOff);
    // public System.Void Reset()
    // Offset: 0x1A8B8AC
    void Reset();
    // public System.Int32 GetUpdateOutputSize(System.Int32 len)
    // Offset: 0x1A8B998
    int GetUpdateOutputSize(int len);
    // public System.Int32 GetOutputSize(System.Int32 len)
    // Offset: 0x1A8B9A0
    int GetOutputSize(int len);
    // public System.Int32 ProcessPacket(System.Byte[] input, System.Int32 inOff, System.Int32 inLen, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1A8B9F8
    int ProcessPacket(::ArrayW<uint8_t> input, int inOff, int inLen, ::ArrayW<uint8_t> output, int outOff);
    // private System.Int32 CalculateMac(System.Byte[] data, System.Int32 dataOff, System.Int32 dataLen, System.Byte[] macBlock)
    // Offset: 0x1A8C2F0
    int CalculateMac(::ArrayW<uint8_t> data, int dataOff, int dataLen, ::ArrayW<uint8_t> macBlock);
    // private System.Int32 GetMacSize(System.Boolean forEncryption, System.Int32 requestedMacBits)
    // Offset: 0x1A8B604
    int GetMacSize(bool forEncryption, int requestedMacBits);
    // private System.Int32 GetAssociatedTextLength()
    // Offset: 0x1A8CC58
    int GetAssociatedTextLength();
    // private System.Boolean HasAssociatedText()
    // Offset: 0x1A8CC3C
    bool HasAssociatedText();
  }; // Org.BouncyCastle.Crypto.Modes.CcmBlockCipher
  #pragma pack(pop)
  static check_size<sizeof(CcmBlockCipher), 80 + sizeof(System::IO::MemoryStream*)> __Org_BouncyCastle_Crypto_Modes_CcmBlockCipherSizeCheck;
  static_assert(sizeof(CcmBlockCipher) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::CcmBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "CcmBlockCipher");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::CcmBlockCipher*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::CcmBlockCipher*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::CcmBlockCipher*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::ProcessBytes
// Il2CppName: ProcessBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::ProcessBytes)> {
  static const MethodInfo* get() {
    static auto* inBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::CcmBlockCipher*), "ProcessBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBytes, inOff, inLen, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::DoFinal)> {
  static const MethodInfo* get() {
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::CcmBlockCipher*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::CcmBlockCipher*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetUpdateOutputSize
// Il2CppName: GetUpdateOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)(int)>(&Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetUpdateOutputSize)> {
  static const MethodInfo* get() {
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::CcmBlockCipher*), "GetUpdateOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetOutputSize
// Il2CppName: GetOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)(int)>(&Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetOutputSize)> {
  static const MethodInfo* get() {
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::CcmBlockCipher*), "GetOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::ProcessPacket
// Il2CppName: ProcessPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::ProcessPacket)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::CcmBlockCipher*), "ProcessPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, inLen, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::CalculateMac
// Il2CppName: CalculateMac
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::CalculateMac)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dataOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dataLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* macBlock = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::CcmBlockCipher*), "CalculateMac", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, dataOff, dataLen, macBlock});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetMacSize
// Il2CppName: GetMacSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)(bool, int)>(&Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetMacSize)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* requestedMacBits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::CcmBlockCipher*), "GetMacSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, requestedMacBits});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetAssociatedTextLength
// Il2CppName: GetAssociatedTextLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetAssociatedTextLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::CcmBlockCipher*), "GetAssociatedTextLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::HasAssociatedText
// Il2CppName: HasAssociatedText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::HasAssociatedText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::CcmBlockCipher*), "HasAssociatedText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
