// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: AsymmetricSignatureDeformatter
  class AsymmetricSignatureDeformatter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::AsymmetricSignatureDeformatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AsymmetricSignatureDeformatter*, "System.Security.Cryptography", "AsymmetricSignatureDeformatter");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.AsymmetricSignatureDeformatter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1076C64
  class AsymmetricSignatureDeformatter : public ::Il2CppObject {
    public:
    // public System.Void SetKey(System.Security.Cryptography.AsymmetricAlgorithm key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key);
    // public System.Void SetHashAlgorithm(System.String strName)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetHashAlgorithm(::StringW strName);
    // public System.Boolean VerifySignature(System.Byte[] rgbHash, System.Byte[] rgbSignature)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool VerifySignature(::ArrayW<uint8_t> rgbHash, ::ArrayW<uint8_t> rgbSignature);
    // protected System.Void .ctor()
    // Offset: 0x1BDFEC0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsymmetricSignatureDeformatter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::AsymmetricSignatureDeformatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsymmetricSignatureDeformatter*, creationType>()));
    }
  }; // System.Security.Cryptography.AsymmetricSignatureDeformatter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricSignatureDeformatter::SetKey
// Il2CppName: SetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AsymmetricSignatureDeformatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&System::Security::Cryptography::AsymmetricSignatureDeformatter::SetKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "AsymmetricAlgorithm")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricSignatureDeformatter*), "SetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricSignatureDeformatter::SetHashAlgorithm
// Il2CppName: SetHashAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AsymmetricSignatureDeformatter::*)(::StringW)>(&System::Security::Cryptography::AsymmetricSignatureDeformatter::SetHashAlgorithm)> {
  static const MethodInfo* get() {
    static auto* strName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricSignatureDeformatter*), "SetHashAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{strName});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricSignatureDeformatter::VerifySignature
// Il2CppName: VerifySignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::AsymmetricSignatureDeformatter::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&System::Security::Cryptography::AsymmetricSignatureDeformatter::VerifySignature)> {
  static const MethodInfo* get() {
    static auto* rgbHash = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* rgbSignature = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricSignatureDeformatter*), "VerifySignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbHash, rgbSignature});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricSignatureDeformatter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
