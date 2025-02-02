// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Security.GeneralSecurityException
#include "Org/BouncyCastle/Security/GeneralSecurityException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Security.Certificates
namespace Org::BouncyCastle::Security::Certificates {
  // Forward declaring type: CertificateException
  class CertificateException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Security::Certificates::CertificateException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::Certificates::CertificateException*, "Org.BouncyCastle.Security.Certificates", "CertificateException");
// Type namespace: Org.BouncyCastle.Security.Certificates
namespace Org::BouncyCastle::Security::Certificates {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Security.Certificates.CertificateException
  // [TokenAttribute] Offset: FFFFFFFF
  class CertificateException : public ::Org::BouncyCastle::Security::GeneralSecurityException {
    public:
    // public System.Void .ctor()
    // Offset: 0x17FE830
    // Implemented from: Org.BouncyCastle.Security.GeneralSecurityException
    // Base method: System.Void GeneralSecurityException::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CertificateException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Security::Certificates::CertificateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CertificateException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x17FE838
    // Implemented from: Org.BouncyCastle.Security.GeneralSecurityException
    // Base method: System.Void GeneralSecurityException::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CertificateException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Security::Certificates::CertificateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CertificateException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception exception)
    // Offset: 0x17FE840
    // Implemented from: Org.BouncyCastle.Security.GeneralSecurityException
    // Base method: System.Void GeneralSecurityException::.ctor(System.String message, System.Exception exception)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CertificateException* New_ctor(::StringW message, ::System::Exception* exception) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Security::Certificates::CertificateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CertificateException*, creationType>(message, exception)));
    }
  }; // Org.BouncyCastle.Security.Certificates.CertificateException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Security::Certificates::CertificateException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Security::Certificates::CertificateException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Security::Certificates::CertificateException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
