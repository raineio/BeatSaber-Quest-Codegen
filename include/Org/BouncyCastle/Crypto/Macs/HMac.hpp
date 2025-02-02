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
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Utilities
namespace Org::BouncyCastle::Utilities {
  // Forward declaring type: IMemoable
  class IMemoable;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Macs
namespace Org::BouncyCastle::Crypto::Macs {
  // Forward declaring type: HMac
  class HMac;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::HMac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::HMac*, "Org.BouncyCastle.Crypto.Macs", "HMac");
// Type namespace: Org.BouncyCastle.Crypto.Macs
namespace Org::BouncyCastle::Crypto::Macs {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Macs.HMac
  // [TokenAttribute] Offset: FFFFFFFF
  class HMac : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IMac*/ {
    public:
    public:
    // private readonly Org.BouncyCastle.Crypto.IDigest digest
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Crypto::IDigest* digest;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::IDigest*) == 0x8);
    // private readonly System.Int32 digestSize
    // Size: 0x4
    // Offset: 0x18
    int digestSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 blockLength
    // Size: 0x4
    // Offset: 0x1C
    int blockLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private Org.BouncyCastle.Utilities.IMemoable ipadState
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Utilities::IMemoable* ipadState;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Utilities::IMemoable*) == 0x8);
    // private Org.BouncyCastle.Utilities.IMemoable opadState
    // Size: 0x8
    // Offset: 0x28
    ::Org::BouncyCastle::Utilities::IMemoable* opadState;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Utilities::IMemoable*) == 0x8);
    // private readonly System.Byte[] inputPad
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> inputPad;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private readonly System.Byte[] outputBuf
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<uint8_t> outputBuf;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IMac
    operator ::Org::BouncyCastle::Crypto::IMac() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IMac*>(this);
    }
    // Creating interface conversion operator: i_IMac
    inline ::Org::BouncyCastle::Crypto::IMac* i_IMac() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::IMac*>(this);
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IDigest digest
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::IDigest*& dyn_digest();
    // Get instance field reference: private readonly System.Int32 digestSize
    [[deprecated("Use field access instead!")]] int& dyn_digestSize();
    // Get instance field reference: private readonly System.Int32 blockLength
    [[deprecated("Use field access instead!")]] int& dyn_blockLength();
    // Get instance field reference: private Org.BouncyCastle.Utilities.IMemoable ipadState
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Utilities::IMemoable*& dyn_ipadState();
    // Get instance field reference: private Org.BouncyCastle.Utilities.IMemoable opadState
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Utilities::IMemoable*& dyn_opadState();
    // Get instance field reference: private readonly System.Byte[] inputPad
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_inputPad();
    // Get instance field reference: private readonly System.Byte[] outputBuf
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_outputBuf();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x1EB5C4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMac* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Macs::HMac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMac*, creationType>(digest)));
    }
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1EB9CF4
    void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetMacSize()
    // Offset: 0x1EBA2A0
    int GetMacSize();
    // public System.Void Update(System.Byte input)
    // Offset: 0x1EBA2A8
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 len)
    // Offset: 0x1EBA36C
    void BlockUpdate(::ArrayW<uint8_t> input, int inOff, int len);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1EBA448
    int DoFinal(::ArrayW<uint8_t> output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1EBA934
    void Reset();
    // static private System.Void XorPad(System.Byte[] pad, System.Int32 len, System.Byte n)
    // Offset: 0x1EBA244
    static void XorPad(::ArrayW<uint8_t> pad, int len, uint8_t n);
  }; // Org.BouncyCastle.Crypto.Macs.HMac
  #pragma pack(pop)
  static check_size<sizeof(HMac), 56 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Crypto_Macs_HMacSizeCheck;
  static_assert(sizeof(HMac) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::HMac::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::HMac::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::HMac::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Macs::HMac::Init)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::HMac*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::HMac::GetMacSize
// Il2CppName: GetMacSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Macs::HMac::*)()>(&Org::BouncyCastle::Crypto::Macs::HMac::GetMacSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::HMac*), "GetMacSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::HMac::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::HMac::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Macs::HMac::Update)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::HMac*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::HMac::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::HMac::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Macs::HMac::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::HMac*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::HMac::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Macs::HMac::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Macs::HMac::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::HMac*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::HMac::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::HMac::*)()>(&Org::BouncyCastle::Crypto::Macs::HMac::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::HMac*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::HMac::XorPad
// Il2CppName: XorPad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int, uint8_t)>(&Org::BouncyCastle::Crypto::Macs::HMac::XorPad)> {
  static const MethodInfo* get() {
    static auto* pad = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::HMac*), "XorPad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pad, len, n});
  }
};
