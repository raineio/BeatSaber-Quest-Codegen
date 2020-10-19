// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.X509.X509CertificateCollection
#include "Mono/Security/X509/X509CertificateCollection.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Autogenerated type: Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
  class X509CertificateCollection::X509CertificateEnumerator : public ::Il2CppObject, public System::Collections::IEnumerator {
    public:
    // private System.Collections.IEnumerator enumerator
    // Offset: 0x10
    System::Collections::IEnumerator* enumerator;
    // Creating conversion operator: operator System::Collections::IEnumerator*
    constexpr operator System::Collections::IEnumerator*() const noexcept {
      return enumerator;
    }
    // public System.Void .ctor(Mono.Security.X509.X509CertificateCollection mappings)
    // Offset: 0x1F36B84
    static X509CertificateCollection::X509CertificateEnumerator* New_ctor(Mono::Security::X509::X509CertificateCollection* mappings);
    // public Mono.Security.X509.X509Certificate get_Current()
    // Offset: 0x1F36CAC
    Mono::Security::X509::X509Certificate* get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0x1F36FB8
    bool MoveNext();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1F36DA0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Boolean System.Collections.IEnumerator.MoveNext()
    // Offset: 0x1F36E54
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1F36F04
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
  }; // Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator*, "Mono.Security.X509", "X509CertificateCollection/X509CertificateEnumerator");
#pragma pack(pop)
