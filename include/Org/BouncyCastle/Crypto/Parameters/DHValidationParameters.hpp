// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.DHValidationParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class DHValidationParameters : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private readonly System.Byte[] seed
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> seed;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private readonly System.Int32 counter
    // Size: 0x4
    // Offset: 0x18
    int counter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private readonly System.Byte[] seed
    ::ArrayW<uint8_t>& dyn_seed();
    // Get instance field reference: private readonly System.Int32 counter
    int& dyn_counter();
    // public System.Void .ctor(System.Byte[] seed, System.Int32 counter)
    // Offset: 0x13927C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DHValidationParameters* New_ctor(::ArrayW<uint8_t> seed, int counter) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::DHValidationParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DHValidationParameters*, creationType>(seed, counter)));
    }
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.DHValidationParameters other)
    // Offset: 0x1392954
    bool Equals(Org::BouncyCastle::Crypto::Parameters::DHValidationParameters* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x13928A4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1392A00
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.DHValidationParameters
  #pragma pack(pop)
  static check_size<sizeof(DHValidationParameters), 24 + sizeof(int)> __Org_BouncyCastle_Crypto_Parameters_DHValidationParametersSizeCheck;
  static_assert(sizeof(DHValidationParameters) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DHValidationParameters*, "Org.BouncyCastle.Crypto.Parameters", "DHValidationParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHValidationParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHValidationParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::DHValidationParameters::*)(Org::BouncyCastle::Crypto::Parameters::DHValidationParameters*)>(&Org::BouncyCastle::Crypto::Parameters::DHValidationParameters::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "DHValidationParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHValidationParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHValidationParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::DHValidationParameters::*)(::Il2CppObject*)>(&Org::BouncyCastle::Crypto::Parameters::DHValidationParameters::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHValidationParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHValidationParameters::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Parameters::DHValidationParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::DHValidationParameters::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHValidationParameters*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
