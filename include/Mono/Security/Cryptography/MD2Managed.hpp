// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Cryptography.MD2
#include "Mono/Security/Cryptography/MD2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.MD2Managed
  // [TokenAttribute] Offset: FFFFFFFF
  class MD2Managed : public Mono::Security::Cryptography::MD2 {
    public:
    // Writing base type padding for base size: 0x25 to desired offset: 0x28
    char ___base_padding[0x3] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Byte[] state
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> state;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] checksum
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> checksum;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<uint8_t> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 count
    // Size: 0x4
    // Offset: 0x40
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: count and: x
    char __padding3[0x4] = {};
    // private System.Byte[] x
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint8_t> x;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get static field: static private readonly System.Byte[] PI_SUBST
    static ::ArrayW<uint8_t> _get_PI_SUBST();
    // Set static field: static private readonly System.Byte[] PI_SUBST
    static void _set_PI_SUBST(::ArrayW<uint8_t> value);
    // Get instance field reference: private System.Byte[] state
    ::ArrayW<uint8_t>& dyn_state();
    // Get instance field reference: private System.Byte[] checksum
    ::ArrayW<uint8_t>& dyn_checksum();
    // Get instance field reference: private System.Byte[] buffer
    ::ArrayW<uint8_t>& dyn_buffer();
    // Get instance field reference: private System.Int32 count
    int& dyn_count();
    // Get instance field reference: private System.Byte[] x
    ::ArrayW<uint8_t>& dyn_x();
    // static private System.Void .cctor()
    // Offset: 0x1F9CD38
    static void _cctor();
    // private System.Byte[] Padding(System.Int32 nLength)
    // Offset: 0x1F9C7C4
    ::ArrayW<uint8_t> Padding(int nLength);
    // private System.Void MD2Transform(System.Byte[] state, System.Byte[] checksum, System.Byte[] block, System.Int32 index)
    // Offset: 0x1F9C9B0
    void MD2Transform(::ArrayW<uint8_t> state, ::ArrayW<uint8_t> checksum, ::ArrayW<uint8_t> block, int index);
    // public System.Void .ctor()
    // Offset: 0x1F9C718
    // Implemented from: Mono.Security.Cryptography.MD2
    // Base method: System.Void MD2::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MD2Managed* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Cryptography::MD2Managed::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MD2Managed*, creationType>()));
    }
    // public override System.Void Initialize()
    // Offset: 0x1F9C870
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize()
    void Initialize();
    // protected override System.Void HashCore(System.Byte[] array, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x1F9C8DC
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore(System.Byte[] array, System.Int32 ibStart, System.Int32 cbSize)
    void HashCore(::ArrayW<uint8_t> array, int ibStart, int cbSize);
    // protected override System.Byte[] HashFinal()
    // Offset: 0x1F9CC40
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal()
    ::ArrayW<uint8_t> HashFinal();
  }; // Mono.Security.Cryptography.MD2Managed
  #pragma pack(pop)
  static check_size<sizeof(MD2Managed), 72 + sizeof(::ArrayW<uint8_t>)> __Mono_Security_Cryptography_MD2ManagedSizeCheck;
  static_assert(sizeof(MD2Managed) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::MD2Managed*, "Mono.Security.Cryptography", "MD2Managed");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD2Managed::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Security::Cryptography::MD2Managed::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD2Managed*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD2Managed::Padding
// Il2CppName: Padding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Cryptography::MD2Managed::*)(int)>(&Mono::Security::Cryptography::MD2Managed::Padding)> {
  static const MethodInfo* get() {
    static auto* nLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD2Managed*), "Padding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nLength});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD2Managed::MD2Transform
// Il2CppName: MD2Transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::MD2Managed::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int)>(&Mono::Security::Cryptography::MD2Managed::MD2Transform)> {
  static const MethodInfo* get() {
    static auto* state = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* checksum = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* block = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD2Managed*), "MD2Transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, checksum, block, index});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD2Managed::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD2Managed::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::MD2Managed::*)()>(&Mono::Security::Cryptography::MD2Managed::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD2Managed*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD2Managed::HashCore
// Il2CppName: HashCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::MD2Managed::*)(::ArrayW<uint8_t>, int, int)>(&Mono::Security::Cryptography::MD2Managed::HashCore)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ibStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cbSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD2Managed*), "HashCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, ibStart, cbSize});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD2Managed::HashFinal
// Il2CppName: HashFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Cryptography::MD2Managed::*)()>(&Mono::Security::Cryptography::MD2Managed::HashFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD2Managed*), "HashFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
