// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
#include "Org/BouncyCastle/Crypto/Engines/Salsa20Engine.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.ChaChaEngine
  class ChaChaEngine : public Org::BouncyCastle::Crypto::Engines::Salsa20Engine {
    public:
    // static System.Void ChachaCore(System.Int32 rounds, System.UInt32[] input, System.UInt32[] x)
    // Offset: 0x196C8F8
    static void ChachaCore(int rounds, ::Array<uint>* input, ::Array<uint>* x);
    // public System.Void .ctor()
    // Offset: 0x196CFCC
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
    // Base method: System.Void Salsa20Engine::.ctor()
    // Base method: System.Void Object::.ctor()
    static ChaChaEngine* New_ctor();
    // public override System.String get_AlgorithmName()
    // Offset: 0x196D034
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
    // Base method: System.String Salsa20Engine::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // protected override System.Void AdvanceCounter()
    // Offset: 0x196D0B4
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
    // Base method: System.Void Salsa20Engine::AdvanceCounter()
    void AdvanceCounter();
    // protected override System.Void ResetCounter()
    // Offset: 0x196D118
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
    // Base method: System.Void Salsa20Engine::ResetCounter()
    void ResetCounter();
    // protected override System.Void SetKey(System.Byte[] keyBytes, System.Byte[] ivBytes)
    // Offset: 0x196D150
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
    // Base method: System.Void Salsa20Engine::SetKey(System.Byte[] keyBytes, System.Byte[] ivBytes)
    void SetKey(::Array<uint8_t>* keyBytes, ::Array<uint8_t>* ivBytes);
    // protected override System.Void GenerateKeyStream(System.Byte[] output)
    // Offset: 0x196D28C
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
    // Base method: System.Void Salsa20Engine::GenerateKeyStream(System.Byte[] output)
    void GenerateKeyStream(::Array<uint8_t>* output);
  }; // Org.BouncyCastle.Crypto.Engines.ChaChaEngine
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::ChaChaEngine*, "Org.BouncyCastle.Crypto.Engines", "ChaChaEngine");
#pragma pack(pop)
