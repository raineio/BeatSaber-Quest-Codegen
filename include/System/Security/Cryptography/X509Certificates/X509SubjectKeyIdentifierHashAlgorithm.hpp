// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm
  // [TokenAttribute] Offset: FFFFFFFF
  struct X509SubjectKeyIdentifierHashAlgorithm/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: X509SubjectKeyIdentifierHashAlgorithm
    constexpr X509SubjectKeyIdentifierHashAlgorithm(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm Sha1
    static constexpr const int Sha1 = 0;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm Sha1
    static System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm _get_Sha1();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm Sha1
    static void _set_Sha1(System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm ShortSha1
    static constexpr const int ShortSha1 = 1;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm ShortSha1
    static System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm _get_ShortSha1();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm ShortSha1
    static void _set_ShortSha1(System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm CapiSha1
    static constexpr const int CapiSha1 = 2;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm CapiSha1
    static System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm _get_CapiSha1();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm CapiSha1
    static void _set_CapiSha1(System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm
  #pragma pack(pop)
  static check_size<sizeof(X509SubjectKeyIdentifierHashAlgorithm), 0 + sizeof(int)> __System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierHashAlgorithmSizeCheck;
  static_assert(sizeof(X509SubjectKeyIdentifierHashAlgorithm) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm, "System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierHashAlgorithm");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
