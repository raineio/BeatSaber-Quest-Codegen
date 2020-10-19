// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Autogenerated type: UnityEngine.Networking.CertificateHandler
  class CertificateHandler : public ::Il2CppObject {
    public:
    // System.IntPtr m_Ptr
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // private System.Void Release()
    // Offset: 0x1F4BF58
    void Release();
    // protected System.Boolean ValidateCertificate(System.Byte[] certificateData)
    // Offset: 0x1F4BF98
    bool ValidateCertificate(::Array<uint8_t>* certificateData);
    // System.Boolean ValidateCertificateNative(System.Byte[] certificateData)
    // Offset: 0x1F4BFA0
    bool ValidateCertificateNative(::Array<uint8_t>* certificateData);
    // public System.Void Dispose()
    // Offset: 0x1F4BFAC
    void Dispose();
  }; // UnityEngine.Networking.CertificateHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::CertificateHandler*, "UnityEngine.Networking", "CertificateHandler");
#pragma pack(pop)
