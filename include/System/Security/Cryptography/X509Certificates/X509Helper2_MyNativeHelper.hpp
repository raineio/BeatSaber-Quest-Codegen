// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509Helper2
#include "System/Security/Cryptography/X509Certificates/X509Helper2.hpp"
// Including type: System.Security.Cryptography.X509Certificates.INativeCertificateHelper
#include "System/Security/Cryptography/X509Certificates/INativeCertificateHelper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateImpl
  class X509CertificateImpl;
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Helper2::MyNativeHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Helper2::MyNativeHelper*, "System.Security.Cryptography.X509Certificates", "X509Helper2/MyNativeHelper");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Helper2/System.Security.Cryptography.X509Certificates.MyNativeHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Helper2::MyNativeHelper : public ::Il2CppObject/*, public ::System::Security::Cryptography::X509Certificates::INativeCertificateHelper*/ {
    public:
    // Creating interface conversion operator: operator ::System::Security::Cryptography::X509Certificates::INativeCertificateHelper
    operator ::System::Security::Cryptography::X509Certificates::INativeCertificateHelper() noexcept {
      return *reinterpret_cast<::System::Security::Cryptography::X509Certificates::INativeCertificateHelper*>(this);
    }
    // Creating interface conversion operator: i_INativeCertificateHelper
    inline ::System::Security::Cryptography::X509Certificates::INativeCertificateHelper* i_INativeCertificateHelper() noexcept {
      return reinterpret_cast<::System::Security::Cryptography::X509Certificates::INativeCertificateHelper*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x1C8FF88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Helper2::MyNativeHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509Helper2::MyNativeHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Helper2::MyNativeHelper*, creationType>()));
    }
    // public System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(System.Security.Cryptography.X509Certificates.X509Certificate cert)
    // Offset: 0x1C90020
    ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::System::Security::Cryptography::X509Certificates::X509Certificate* cert);
  }; // System.Security.Cryptography.X509Certificates.X509Helper2/System.Security.Cryptography.X509Certificates.MyNativeHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::MyNativeHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::MyNativeHelper::Import
// Il2CppName: Import
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (System::Security::Cryptography::X509Certificates::X509Helper2::MyNativeHelper::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&System::Security::Cryptography::X509Certificates::X509Helper2::MyNativeHelper::Import)> {
  static const MethodInfo* get() {
    static auto* cert = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2::MyNativeHelper*), "Import", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cert});
  }
};
