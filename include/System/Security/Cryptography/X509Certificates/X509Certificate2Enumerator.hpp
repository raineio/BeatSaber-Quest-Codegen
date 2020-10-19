// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate2Collection
  class X509Certificate2Collection;
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator
  class X509Certificate2Enumerator : public ::Il2CppObject, public System::Collections::IEnumerator {
    public:
    // private System.Collections.IEnumerator enumerator
    // Offset: 0x10
    System::Collections::IEnumerator* enumerator;
    // Creating conversion operator: operator System::Collections::IEnumerator*
    constexpr operator System::Collections::IEnumerator*() const noexcept {
      return enumerator;
    }
    // System.Void .ctor(System.Security.Cryptography.X509Certificates.X509Certificate2Collection collection)
    // Offset: 0x1476EC8
    static X509Certificate2Enumerator* New_ctor(System::Security::Cryptography::X509Certificates::X509Certificate2Collection* collection);
    // public System.Security.Cryptography.X509Certificates.X509Certificate2 get_Current()
    // Offset: 0x1477064
    System::Security::Cryptography::X509Certificates::X509Certificate2* get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0x1477158
    bool MoveNext();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1477208
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Boolean System.Collections.IEnumerator.MoveNext()
    // Offset: 0x14772BC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x147736C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
  }; // System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*, "System.Security.Cryptography.X509Certificates", "X509Certificate2Enumerator");
#pragma pack(pop)
