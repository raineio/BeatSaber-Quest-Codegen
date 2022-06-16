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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1_;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Extension
  class X509Extension_;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::X509::X509Extension_);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509Extension_*, "Mono.Security.X509", "X509Extension");
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.X509Extension
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Extension_ : public ::Il2CppObject {
    public:
    public:
    // protected System.String extnOid
    // Size: 0x8
    // Offset: 0x10
    ::StringW extnOid;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected System.Boolean extnCritical
    // Size: 0x1
    // Offset: 0x18
    bool extnCritical;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: extnCritical and: extnValue
    char __padding1[0x7] = {};
    // protected Mono.Security.ASN1 extnValue
    // Size: 0x8
    // Offset: 0x20
    ::Mono::Security::ASN1_* extnValue;
    // Field size check
    static_assert(sizeof(::Mono::Security::ASN1_*) == 0x8);
    public:
    // Get instance field reference: protected System.String extnOid
    [[deprecated("Use field access instead!")]] ::StringW& dyn_extnOid();
    // Get instance field reference: protected System.Boolean extnCritical
    [[deprecated("Use field access instead!")]] bool& dyn_extnCritical();
    // Get instance field reference: protected Mono.Security.ASN1 extnValue
    [[deprecated("Use field access instead!")]] ::Mono::Security::ASN1_*& dyn_extnValue();
    // public System.Void .ctor(Mono.Security.ASN1 asn1)
    // Offset: 0x1F60AEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Extension_* New_ctor(::Mono::Security::ASN1_* asn1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::X509::X509Extension_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Extension_*, creationType>(asn1)));
    }
    // protected System.Void Decode()
    // Offset: 0x1F60DA8
    void Decode();
    // private System.Void WriteLine(System.Text.StringBuilder sb, System.Int32 n, System.Int32 pos)
    // Offset: 0x1F60F2C
    void WriteLine(::System::Text::StringBuilder* sb, int n, int pos);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1F60DAC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1F60F0C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1F61138
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Mono.Security.X509.X509Extension
  #pragma pack(pop)
  static check_size<sizeof(X509Extension_), 32 + sizeof(::Mono::Security::ASN1_*)> __Mono_Security_X509_X509Extension_SizeCheck;
  static_assert(sizeof(X509Extension_) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::X509::X509Extension_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::X509::X509Extension_::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::X509Extension_::*)()>(&Mono::Security::X509::X509Extension_::Decode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Extension_*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Extension_::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::X509Extension_::*)(::System::Text::StringBuilder*, int, int)>(&Mono::Security::X509::X509Extension_::WriteLine)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Extension_*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, n, pos});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Extension_::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::X509::X509Extension_::*)(::Il2CppObject*)>(&Mono::Security::X509::X509Extension_::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Extension_*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Extension_::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::X509::X509Extension_::*)()>(&Mono::Security::X509::X509Extension_::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Extension_*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Extension_::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::X509::X509Extension_::*)()>(&Mono::Security::X509::X509Extension_::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Extension_*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
