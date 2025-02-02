// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Cryptography.MD4
#include "Mono/Security/Cryptography/MD4_.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Forward declaring type: MD4Managed
  class MD4Managed_;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Cryptography::MD4Managed_);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::MD4Managed_*, "Mono.Security.Cryptography", "MD4Managed");
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.MD4Managed
  // [TokenAttribute] Offset: FFFFFFFF
  class MD4Managed_ : public ::Mono::Security::Cryptography::MD4_ {
    public:
    // Writing base type padding for base size: 0x25 to desired offset: 0x28
    char ___base_padding[0x3] = {};
    public:
    // private System.UInt32[] state
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint> state;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.UInt32[] count
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<uint> count;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private System.UInt32[] x
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint> x;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private System.Byte[] digest
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint8_t> digest;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: private System.UInt32[] state
    [[deprecated("Use field access instead!")]] ::ArrayW<uint>& dyn_state();
    // Get instance field reference: private System.Byte[] buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_buffer();
    // Get instance field reference: private System.UInt32[] count
    [[deprecated("Use field access instead!")]] ::ArrayW<uint>& dyn_count();
    // Get instance field reference: private System.UInt32[] x
    [[deprecated("Use field access instead!")]] ::ArrayW<uint>& dyn_x();
    // Get instance field reference: private System.Byte[] digest
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_digest();
    // private System.Byte[] Padding(System.Int32 nLength)
    // Offset: 0x1FE60C8
    ::ArrayW<uint8_t> Padding(int nLength);
    // private System.UInt32 F(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x1FE6150
    uint F(uint x, uint y, uint z);
    // private System.UInt32 G(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x1FE6160
    uint G(uint x, uint y, uint z);
    // private System.UInt32 H(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x1FE6174
    uint H(uint x, uint y, uint z);
    // private System.UInt32 ROL(System.UInt32 x, System.Byte n)
    // Offset: 0x1FE6180
    uint ROL(uint x, uint8_t n);
    // private System.Void FF(ref System.UInt32 a, System.UInt32 b, System.UInt32 c, System.UInt32 d, System.UInt32 x, System.Byte s)
    // Offset: 0x1FE618C
    void FF(ByRef<uint> a, uint b, uint c, uint d, uint x, uint8_t s);
    // private System.Void GG(ref System.UInt32 a, System.UInt32 b, System.UInt32 c, System.UInt32 d, System.UInt32 x, System.Byte s)
    // Offset: 0x1FE61B4
    void GG(ByRef<uint> a, uint b, uint c, uint d, uint x, uint8_t s);
    // private System.Void HH(ref System.UInt32 a, System.UInt32 b, System.UInt32 c, System.UInt32 d, System.UInt32 x, System.Byte s)
    // Offset: 0x1FE61EC
    void HH(ByRef<uint> a, uint b, uint c, uint d, uint x, uint8_t s);
    // private System.Void Encode(System.Byte[] output, System.UInt32[] input)
    // Offset: 0x1FE5FC4
    void Encode(::ArrayW<uint8_t> output, ::ArrayW<uint> input);
    // private System.Void Decode(System.UInt32[] output, System.Byte[] input, System.Int32 index)
    // Offset: 0x1FE621C
    void Decode(::ArrayW<uint> output, ::ArrayW<uint8_t> input, int index);
    // private System.Void MD4Transform(System.UInt32[] state, System.Byte[] block, System.Int32 index)
    // Offset: 0x1FE582C
    void MD4Transform(::ArrayW<uint> state, ::ArrayW<uint8_t> block, int index);
    // public System.Void .ctor()
    // Offset: 0x1FE5524
    // Implemented from: Mono.Security.Cryptography.MD4
    // Base method: System.Void MD4_::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MD4Managed_* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Cryptography::MD4Managed_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MD4Managed_*, creationType>()));
    }
    // public override System.Void Initialize()
    // Offset: 0x1FE55F0
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize()
    void Initialize();
    // protected override System.Void HashCore(System.Byte[] array, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x1FE56E8
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore(System.Byte[] array, System.Int32 ibStart, System.Int32 cbSize)
    void HashCore(::ArrayW<uint8_t> array, int ibStart, int cbSize);
    // protected override System.Byte[] HashFinal()
    // Offset: 0x1FE5EB0
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal()
    ::ArrayW<uint8_t> HashFinal();
  }; // Mono.Security.Cryptography.MD4Managed
  #pragma pack(pop)
  static check_size<sizeof(MD4Managed_), 72 + sizeof(::ArrayW<uint8_t>)> __Mono_Security_Cryptography_MD4Managed_SizeCheck;
  static_assert(sizeof(MD4Managed_) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed_::Padding
// Il2CppName: Padding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Cryptography::MD4Managed_::*)(int)>(&Mono::Security::Cryptography::MD4Managed_::Padding)> {
  static const MethodInfo* get() {
    static auto* nLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed_*), "Padding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nLength});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed_::F
// Il2CppName: F
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Mono::Security::Cryptography::MD4Managed_::*)(uint, uint, uint)>(&Mono::Security::Cryptography::MD4Managed_::F)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed_*), "F", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed_::G
// Il2CppName: G
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Mono::Security::Cryptography::MD4Managed_::*)(uint, uint, uint)>(&Mono::Security::Cryptography::MD4Managed_::G)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed_*), "G", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed_::H
// Il2CppName: H
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Mono::Security::Cryptography::MD4Managed_::*)(uint, uint, uint)>(&Mono::Security::Cryptography::MD4Managed_::H)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed_*), "H", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed_::ROL
// Il2CppName: ROL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Mono::Security::Cryptography::MD4Managed_::*)(uint, uint8_t)>(&Mono::Security::Cryptography::MD4Managed_::ROL)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed_*), "ROL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, n});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed_::FF
// Il2CppName: FF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::MD4Managed_::*)(ByRef<uint>, uint, uint, uint, uint, uint8_t)>(&Mono::Security::Cryptography::MD4Managed_::FF)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed_*), "FF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d, x, s});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed_::GG
// Il2CppName: GG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::MD4Managed_::*)(ByRef<uint>, uint, uint, uint, uint, uint8_t)>(&Mono::Security::Cryptography::MD4Managed_::GG)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed_*), "GG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d, x, s});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed_::HH
// Il2CppName: HH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::MD4Managed_::*)(ByRef<uint>, uint, uint, uint, uint, uint8_t)>(&Mono::Security::Cryptography::MD4Managed_::HH)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed_*), "HH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d, x, s});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed_::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::MD4Managed_::*)(::ArrayW<uint8_t>, ::ArrayW<uint>)>(&Mono::Security::Cryptography::MD4Managed_::Encode)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed_*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, input});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed_::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::MD4Managed_::*)(::ArrayW<uint>, ::ArrayW<uint8_t>, int)>(&Mono::Security::Cryptography::MD4Managed_::Decode)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed_*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, input, index});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed_::MD4Transform
// Il2CppName: MD4Transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::MD4Managed_::*)(::ArrayW<uint>, ::ArrayW<uint8_t>, int)>(&Mono::Security::Cryptography::MD4Managed_::MD4Transform)> {
  static const MethodInfo* get() {
    static auto* state = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* block = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed_*), "MD4Transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, block, index});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed_::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::MD4Managed_::*)()>(&Mono::Security::Cryptography::MD4Managed_::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed_*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed_::HashCore
// Il2CppName: HashCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::MD4Managed_::*)(::ArrayW<uint8_t>, int, int)>(&Mono::Security::Cryptography::MD4Managed_::HashCore)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ibStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cbSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed_*), "HashCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, ibStart, cbSize});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed_::HashFinal
// Il2CppName: HashFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Cryptography::MD4Managed_::*)()>(&Mono::Security::Cryptography::MD4Managed_::HashFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed_*), "HashFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
