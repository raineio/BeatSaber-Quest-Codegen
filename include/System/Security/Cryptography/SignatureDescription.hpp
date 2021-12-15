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
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: SignatureDescription
  class SignatureDescription;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Security::Cryptography::SignatureDescription);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SignatureDescription*, "System.Security.Cryptography", "SignatureDescription");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.SignatureDescription
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: EA0B2C
  class SignatureDescription : public ::Il2CppObject {
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
    // private System.String _strKey
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* strKey;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _strDigest
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* strDigest;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _strFormatter
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* strFormatter;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _strDeformatter
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* strDeformatter;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Get instance field reference: private System.String _strKey
    ::Il2CppString*& dyn__strKey();
    // Get instance field reference: private System.String _strDigest
    ::Il2CppString*& dyn__strDigest();
    // Get instance field reference: private System.String _strFormatter
    ::Il2CppString*& dyn__strFormatter();
    // Get instance field reference: private System.String _strDeformatter
    ::Il2CppString*& dyn__strDeformatter();
    // public System.Void set_KeyAlgorithm(System.String value)
    // Offset: 0x1D1EE78
    void set_KeyAlgorithm(::Il2CppString* value);
    // public System.Void set_DigestAlgorithm(System.String value)
    // Offset: 0x1D1EE80
    void set_DigestAlgorithm(::Il2CppString* value);
    // public System.Void set_FormatterAlgorithm(System.String value)
    // Offset: 0x1D1EE88
    void set_FormatterAlgorithm(::Il2CppString* value);
    // public System.Void set_DeformatterAlgorithm(System.String value)
    // Offset: 0x1D1EE90
    void set_DeformatterAlgorithm(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x1D16530
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignatureDescription* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::SignatureDescription::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignatureDescription*, creationType>()));
    }
  }; // System.Security.Cryptography.SignatureDescription
  #pragma pack(pop)
  static check_size<sizeof(SignatureDescription), 40 + sizeof(::Il2CppString*)> __System_Security_Cryptography_SignatureDescriptionSizeCheck;
  static_assert(sizeof(SignatureDescription) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::SignatureDescription::set_KeyAlgorithm
// Il2CppName: set_KeyAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SignatureDescription::*)(::Il2CppString*)>(&System::Security::Cryptography::SignatureDescription::set_KeyAlgorithm)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SignatureDescription*), "set_KeyAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SignatureDescription::set_DigestAlgorithm
// Il2CppName: set_DigestAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SignatureDescription::*)(::Il2CppString*)>(&System::Security::Cryptography::SignatureDescription::set_DigestAlgorithm)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SignatureDescription*), "set_DigestAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SignatureDescription::set_FormatterAlgorithm
// Il2CppName: set_FormatterAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SignatureDescription::*)(::Il2CppString*)>(&System::Security::Cryptography::SignatureDescription::set_FormatterAlgorithm)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SignatureDescription*), "set_FormatterAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SignatureDescription::set_DeformatterAlgorithm
// Il2CppName: set_DeformatterAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SignatureDescription::*)(::Il2CppString*)>(&System::Security::Cryptography::SignatureDescription::set_DeformatterAlgorithm)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SignatureDescription*), "set_DeformatterAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SignatureDescription::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
