// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.RSAParameters
  struct RSAParameters : public System::ValueType {
    public:
    // public System.Byte[] Exponent
    // Offset: 0x0
    ::Array<uint8_t>* Exponent;
    // public System.Byte[] Modulus
    // Offset: 0x8
    ::Array<uint8_t>* Modulus;
    // public System.Byte[] P
    // Offset: 0x10
    ::Array<uint8_t>* P;
    // public System.Byte[] Q
    // Offset: 0x18
    ::Array<uint8_t>* Q;
    // public System.Byte[] DP
    // Offset: 0x20
    ::Array<uint8_t>* DP;
    // public System.Byte[] DQ
    // Offset: 0x28
    ::Array<uint8_t>* DQ;
    // public System.Byte[] InverseQ
    // Offset: 0x30
    ::Array<uint8_t>* InverseQ;
    // public System.Byte[] D
    // Offset: 0x38
    ::Array<uint8_t>* D;
    // Creating value type constructor for type: RSAParameters
    constexpr RSAParameters(::Array<uint8_t>* Exponent_ = {}, ::Array<uint8_t>* Modulus_ = {}, ::Array<uint8_t>* P_ = {}, ::Array<uint8_t>* Q_ = {}, ::Array<uint8_t>* DP_ = {}, ::Array<uint8_t>* DQ_ = {}, ::Array<uint8_t>* InverseQ_ = {}, ::Array<uint8_t>* D_ = {}) noexcept : Exponent{Exponent_}, Modulus{Modulus_}, P{P_}, Q{Q_}, DP{DP_}, DQ{DQ_}, InverseQ{InverseQ_}, D{D_} {}
  }; // System.Security.Cryptography.RSAParameters
  check_size<sizeof(RSAParameters), 56 + sizeof(void*) + 8 - (56 + sizeof(void*)) % 8> __System_Security_Cryptography_RSAParametersSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RSAParameters, "System.Security.Cryptography", "RSAParameters");
#pragma pack(pop)