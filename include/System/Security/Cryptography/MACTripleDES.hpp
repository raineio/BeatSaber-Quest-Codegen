// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.KeyedHashAlgorithm
#include "System/Security/Cryptography/KeyedHashAlgorithm.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Skipping declaration: ICryptoTransform because it is already included!
  // Forward declaring type: CryptoStream
  class CryptoStream;
  // Forward declaring type: TailStream
  class TailStream;
  // Forward declaring type: TripleDES
  class TripleDES;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: MACTripleDES
  class MACTripleDES;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Security::Cryptography::MACTripleDES);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::MACTripleDES*, "System.Security.Cryptography", "MACTripleDES");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.MACTripleDES
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: EA0988
  class MACTripleDES : public System::Security::Cryptography::KeyedHashAlgorithm {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Security.Cryptography.ICryptoTransform m_encryptor
    // Size: 0x8
    // Offset: 0x30
    System::Security::Cryptography::ICryptoTransform* m_encryptor;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::ICryptoTransform*) == 0x8);
    // private System.Security.Cryptography.CryptoStream _cs
    // Size: 0x8
    // Offset: 0x38
    System::Security::Cryptography::CryptoStream* cs;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::CryptoStream*) == 0x8);
    // private System.Security.Cryptography.TailStream _ts
    // Size: 0x8
    // Offset: 0x40
    System::Security::Cryptography::TailStream* ts;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::TailStream*) == 0x8);
    // private System.Int32 m_bytesPerBlock
    // Size: 0x4
    // Offset: 0x48
    int m_bytesPerBlock;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_bytesPerBlock and: des
    char __padding3[0x4] = {};
    // private System.Security.Cryptography.TripleDES des
    // Size: 0x8
    // Offset: 0x50
    System::Security::Cryptography::TripleDES* des;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::TripleDES*) == 0x8);
    public:
    // Deleting conversion operator: operator ::ArrayW<uint8_t>
    constexpr operator ::ArrayW<uint8_t>() const noexcept = delete;
    // Get instance field reference: private System.Security.Cryptography.ICryptoTransform m_encryptor
    System::Security::Cryptography::ICryptoTransform*& dyn_m_encryptor();
    // Get instance field reference: private System.Security.Cryptography.CryptoStream _cs
    System::Security::Cryptography::CryptoStream*& dyn__cs();
    // Get instance field reference: private System.Security.Cryptography.TailStream _ts
    System::Security::Cryptography::TailStream*& dyn__ts();
    // Get instance field reference: private System.Int32 m_bytesPerBlock
    int& dyn_m_bytesPerBlock();
    // Get instance field reference: private System.Security.Cryptography.TripleDES des
    System::Security::Cryptography::TripleDES*& dyn_des();
    // public System.Void .ctor()
    // Offset: 0x1A91074
    // Implemented from: System.Security.Cryptography.KeyedHashAlgorithm
    // Base method: System.Void KeyedHashAlgorithm::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MACTripleDES* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::MACTripleDES::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MACTripleDES*, creationType>()));
    }
    // public override System.Void Initialize()
    // Offset: 0x1A99CB8
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize()
    void Initialize();
    // protected override System.Void HashCore(System.Byte[] rgbData, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x1A99CC0
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore(System.Byte[] rgbData, System.Int32 ibStart, System.Int32 cbSize)
    void HashCore(::ArrayW<uint8_t> rgbData, int ibStart, int cbSize);
    // protected override System.Byte[] HashFinal()
    // Offset: 0x1A99E24
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal()
    ::ArrayW<uint8_t> HashFinal();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1A99F64
    // Implemented from: System.Security.Cryptography.KeyedHashAlgorithm
    // Base method: System.Void KeyedHashAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Security.Cryptography.MACTripleDES
  #pragma pack(pop)
  static check_size<sizeof(MACTripleDES), 80 + sizeof(System::Security::Cryptography::TripleDES*)> __System_Security_Cryptography_MACTripleDESSizeCheck;
  static_assert(sizeof(MACTripleDES) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::MACTripleDES::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::MACTripleDES::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::MACTripleDES::*)()>(&System::Security::Cryptography::MACTripleDES::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::MACTripleDES*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::MACTripleDES::HashCore
// Il2CppName: HashCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::MACTripleDES::*)(::ArrayW<uint8_t>, int, int)>(&System::Security::Cryptography::MACTripleDES::HashCore)> {
  static const MethodInfo* get() {
    static auto* rgbData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ibStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cbSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::MACTripleDES*), "HashCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbData, ibStart, cbSize});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::MACTripleDES::HashFinal
// Il2CppName: HashFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::MACTripleDES::*)()>(&System::Security::Cryptography::MACTripleDES::HashFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::MACTripleDES*), "HashFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::MACTripleDES::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::MACTripleDES::*)(bool)>(&System::Security::Cryptography::MACTripleDES::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::MACTripleDES*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
