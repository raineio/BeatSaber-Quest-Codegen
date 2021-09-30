// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Digests.GeneralDigest
#include "Org/BouncyCastle/Crypto/Digests/GeneralDigest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Utilities
namespace Org::BouncyCastle::Utilities {
  // Skipping declaration: IMemoable because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.MD5Digest
  // [TokenAttribute] Offset: FFFFFFFF
  class MD5Digest : public Org::BouncyCastle::Crypto::Digests::GeneralDigest {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.UInt32 H1
    // Size: 0x4
    // Offset: 0x28
    uint H1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 H2
    // Size: 0x4
    // Offset: 0x2C
    uint H2;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 H3
    // Size: 0x4
    // Offset: 0x30
    uint H3;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 H4
    // Size: 0x4
    // Offset: 0x34
    uint H4;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32[] X
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<uint> X;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private System.Int32 xOff
    // Size: 0x4
    // Offset: 0x40
    int xOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static private readonly System.Int32 S11
    static int _get_S11();
    // Set static field: static private readonly System.Int32 S11
    static void _set_S11(int value);
    // Get static field: static private readonly System.Int32 S12
    static int _get_S12();
    // Set static field: static private readonly System.Int32 S12
    static void _set_S12(int value);
    // Get static field: static private readonly System.Int32 S13
    static int _get_S13();
    // Set static field: static private readonly System.Int32 S13
    static void _set_S13(int value);
    // Get static field: static private readonly System.Int32 S14
    static int _get_S14();
    // Set static field: static private readonly System.Int32 S14
    static void _set_S14(int value);
    // Get static field: static private readonly System.Int32 S21
    static int _get_S21();
    // Set static field: static private readonly System.Int32 S21
    static void _set_S21(int value);
    // Get static field: static private readonly System.Int32 S22
    static int _get_S22();
    // Set static field: static private readonly System.Int32 S22
    static void _set_S22(int value);
    // Get static field: static private readonly System.Int32 S23
    static int _get_S23();
    // Set static field: static private readonly System.Int32 S23
    static void _set_S23(int value);
    // Get static field: static private readonly System.Int32 S24
    static int _get_S24();
    // Set static field: static private readonly System.Int32 S24
    static void _set_S24(int value);
    // Get static field: static private readonly System.Int32 S31
    static int _get_S31();
    // Set static field: static private readonly System.Int32 S31
    static void _set_S31(int value);
    // Get static field: static private readonly System.Int32 S32
    static int _get_S32();
    // Set static field: static private readonly System.Int32 S32
    static void _set_S32(int value);
    // Get static field: static private readonly System.Int32 S33
    static int _get_S33();
    // Set static field: static private readonly System.Int32 S33
    static void _set_S33(int value);
    // Get static field: static private readonly System.Int32 S34
    static int _get_S34();
    // Set static field: static private readonly System.Int32 S34
    static void _set_S34(int value);
    // Get static field: static private readonly System.Int32 S41
    static int _get_S41();
    // Set static field: static private readonly System.Int32 S41
    static void _set_S41(int value);
    // Get static field: static private readonly System.Int32 S42
    static int _get_S42();
    // Set static field: static private readonly System.Int32 S42
    static void _set_S42(int value);
    // Get static field: static private readonly System.Int32 S43
    static int _get_S43();
    // Set static field: static private readonly System.Int32 S43
    static void _set_S43(int value);
    // Get static field: static private readonly System.Int32 S44
    static int _get_S44();
    // Set static field: static private readonly System.Int32 S44
    static void _set_S44(int value);
    // Get instance field reference: private System.UInt32 H1
    uint& dyn_H1();
    // Get instance field reference: private System.UInt32 H2
    uint& dyn_H2();
    // Get instance field reference: private System.UInt32 H3
    uint& dyn_H3();
    // Get instance field reference: private System.UInt32 H4
    uint& dyn_H4();
    // Get instance field reference: private System.UInt32[] X
    ::ArrayW<uint>& dyn_X();
    // Get instance field reference: private System.Int32 xOff
    int& dyn_xOff();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.MD5Digest t)
    // Offset: 0x1F0533C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MD5Digest* New_ctor(Org::BouncyCastle::Crypto::Digests::MD5Digest* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::MD5Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MD5Digest*, creationType>(t)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1F0646C
    static void _cctor();
    // private System.Void CopyIn(Org.BouncyCastle.Crypto.Digests.MD5Digest t)
    // Offset: 0x1F053B4
    void CopyIn(Org::BouncyCastle::Crypto::Digests::MD5Digest* t);
    // static private System.UInt32 RotateLeft(System.UInt32 x, System.Int32 n)
    // Offset: 0x1F056E4
    static uint RotateLeft(uint x, int n);
    // static private System.UInt32 F(System.UInt32 u, System.UInt32 v, System.UInt32 w)
    // Offset: 0x1F056F0
    static uint F(uint u, uint v, uint w);
    // static private System.UInt32 G(System.UInt32 u, System.UInt32 v, System.UInt32 w)
    // Offset: 0x1F05700
    static uint G(uint u, uint v, uint w);
    // static private System.UInt32 H(System.UInt32 u, System.UInt32 v, System.UInt32 w)
    // Offset: 0x1F05710
    static uint H(uint u, uint v, uint w);
    // static private System.UInt32 K(System.UInt32 u, System.UInt32 v, System.UInt32 w)
    // Offset: 0x1F0571C
    static uint K(uint u, uint v, uint w);
    // public override System.String get_AlgorithmName()
    // Offset: 0x1F05428
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.String GeneralDigest::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Void .ctor()
    // Offset: 0x1F052CC
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MD5Digest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::MD5Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MD5Digest*, creationType>()));
    }
    // public override System.Int32 GetDigestSize()
    // Offset: 0x1F05470
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::GetDigestSize()
    int GetDigestSize();
    // override System.Void ProcessWord(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x1F05478
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessWord(System.Byte[] input, System.Int32 inOff)
    void ProcessWord(::ArrayW<uint8_t> input, int inOff);
    // override System.Void ProcessLength(System.Int64 bitLength)
    // Offset: 0x1F05510
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessLength(System.Int64 bitLength)
    void ProcessLength(int64_t bitLength);
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1F055DC
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::ArrayW<uint8_t> output, int outOff);
    // public override System.Void Reset()
    // Offset: 0x1F05674
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset()
    void Reset();
    // override System.Void ProcessBlock()
    // Offset: 0x1F05728
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessBlock()
    void ProcessBlock();
    // public override Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x1F06378
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: Org.BouncyCastle.Utilities.IMemoable GeneralDigest::Copy()
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public override System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x1F063D8
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset(Org.BouncyCastle.Utilities.IMemoable other)
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.MD5Digest
  #pragma pack(pop)
  static check_size<sizeof(MD5Digest), 64 + sizeof(int)> __Org_BouncyCastle_Crypto_Digests_MD5DigestSizeCheck;
  static_assert(sizeof(MD5Digest) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::MD5Digest*, "Org.BouncyCastle.Crypto.Digests", "MD5Digest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD5Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD5Digest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Digests::MD5Digest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD5Digest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD5Digest::CopyIn
// Il2CppName: CopyIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::MD5Digest::*)(Org::BouncyCastle::Crypto::Digests::MD5Digest*)>(&Org::BouncyCastle::Crypto::Digests::MD5Digest::CopyIn)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Digests", "MD5Digest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD5Digest*), "CopyIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD5Digest::RotateLeft
// Il2CppName: RotateLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, int)>(&Org::BouncyCastle::Crypto::Digests::MD5Digest::RotateLeft)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD5Digest*), "RotateLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, n});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD5Digest::F
// Il2CppName: F
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint, uint)>(&Org::BouncyCastle::Crypto::Digests::MD5Digest::F)> {
  static const MethodInfo* get() {
    static auto* u = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD5Digest*), "F", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{u, v, w});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD5Digest::G
// Il2CppName: G
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint, uint)>(&Org::BouncyCastle::Crypto::Digests::MD5Digest::G)> {
  static const MethodInfo* get() {
    static auto* u = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD5Digest*), "G", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{u, v, w});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD5Digest::H
// Il2CppName: H
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint, uint)>(&Org::BouncyCastle::Crypto::Digests::MD5Digest::H)> {
  static const MethodInfo* get() {
    static auto* u = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD5Digest*), "H", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{u, v, w});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD5Digest::K
// Il2CppName: K
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint, uint)>(&Org::BouncyCastle::Crypto::Digests::MD5Digest::K)> {
  static const MethodInfo* get() {
    static auto* u = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD5Digest*), "K", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{u, v, w});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD5Digest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Digests::MD5Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::MD5Digest::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD5Digest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD5Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD5Digest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::MD5Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::MD5Digest::GetDigestSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD5Digest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD5Digest::ProcessWord
// Il2CppName: ProcessWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::MD5Digest::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::MD5Digest::ProcessWord)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD5Digest*), "ProcessWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD5Digest::ProcessLength
// Il2CppName: ProcessLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::MD5Digest::*)(int64_t)>(&Org::BouncyCastle::Crypto::Digests::MD5Digest::ProcessLength)> {
  static const MethodInfo* get() {
    static auto* bitLength = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD5Digest*), "ProcessLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bitLength});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD5Digest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::MD5Digest::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::MD5Digest::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD5Digest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD5Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::MD5Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::MD5Digest::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD5Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD5Digest::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::MD5Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::MD5Digest::ProcessBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD5Digest*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD5Digest::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::IMemoable* (Org::BouncyCastle::Crypto::Digests::MD5Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::MD5Digest::Copy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD5Digest*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::MD5Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::MD5Digest::*)(Org::BouncyCastle::Utilities::IMemoable*)>(&Org::BouncyCastle::Crypto::Digests::MD5Digest::Reset)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Utilities", "IMemoable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::MD5Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
