// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.ICryptoTransform
#include "System/Security/Cryptography/ICryptoTransform.hpp"
// Including type: System.Security.Cryptography.PaddingMode
#include "System/Security/Cryptography/PaddingMode.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: SymmetricAlgorithm
  class SymmetricAlgorithm;
  // Forward declaring type: RandomNumberGenerator
  class RandomNumberGenerator;
}
// Completed forward declares
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Autogenerated type: Mono.Security.Cryptography.SymmetricTransform
  class SymmetricTransform : public ::Il2CppObject, public System::Security::Cryptography::ICryptoTransform {
    public:
    // protected System.Security.Cryptography.SymmetricAlgorithm algo
    // Offset: 0x10
    System::Security::Cryptography::SymmetricAlgorithm* algo;
    // protected System.Boolean encrypt
    // Offset: 0x18
    bool encrypt;
    // protected System.Int32 BlockSizeByte
    // Offset: 0x1C
    int BlockSizeByte;
    // protected System.Byte[] temp
    // Offset: 0x20
    ::Array<uint8_t>* temp;
    // protected System.Byte[] temp2
    // Offset: 0x28
    ::Array<uint8_t>* temp2;
    // private System.Byte[] workBuff
    // Offset: 0x30
    ::Array<uint8_t>* workBuff;
    // private System.Byte[] workout
    // Offset: 0x38
    ::Array<uint8_t>* workout;
    // protected System.Security.Cryptography.PaddingMode padmode
    // Offset: 0x40
    System::Security::Cryptography::PaddingMode padmode;
    // protected System.Int32 FeedBackByte
    // Offset: 0x44
    int FeedBackByte;
    // private System.Boolean m_disposed
    // Offset: 0x48
    bool m_disposed;
    // protected System.Boolean lastBlock
    // Offset: 0x49
    bool lastBlock;
    // private System.Security.Cryptography.RandomNumberGenerator _rng
    // Offset: 0x50
    System::Security::Cryptography::RandomNumberGenerator* rng;
    // public System.Void .ctor(System.Security.Cryptography.SymmetricAlgorithm symmAlgo, System.Boolean encryption, System.Byte[] rgbIV)
    // Offset: 0x164828C
    static SymmetricTransform* New_ctor(System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, bool encryption, ::Array<uint8_t>* rgbIV);
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1648678
    void Dispose(bool disposing);
    // protected System.Void Transform(System.Byte[] input, System.Byte[] output)
    // Offset: 0x1648714
    void Transform(::Array<uint8_t>* input, ::Array<uint8_t>* output);
    // protected System.Void ECB(System.Byte[] input, System.Byte[] output)
    // Offset: 0xFFFFFFFF
    void ECB(::Array<uint8_t>* input, ::Array<uint8_t>* output);
    // protected System.Void CBC(System.Byte[] input, System.Byte[] output)
    // Offset: 0x16488C8
    void CBC(::Array<uint8_t>* input, ::Array<uint8_t>* output);
    // protected System.Void CFB(System.Byte[] input, System.Byte[] output)
    // Offset: 0x1648A40
    void CFB(::Array<uint8_t>* input, ::Array<uint8_t>* output);
    // protected System.Void OFB(System.Byte[] input, System.Byte[] output)
    // Offset: 0x1648C1C
    void OFB(::Array<uint8_t>* input, ::Array<uint8_t>* output);
    // protected System.Void CTS(System.Byte[] input, System.Byte[] output)
    // Offset: 0x1648C88
    void CTS(::Array<uint8_t>* input, ::Array<uint8_t>* output);
    // private System.Void CheckInput(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x1648CF4
    void CheckInput(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
    // private System.Boolean get_KeepLastBlock()
    // Offset: 0x1649064
    bool get_KeepLastBlock();
    // private System.Int32 InternalTransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    // Offset: 0x1649088
    int InternalTransformBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount, ::Array<uint8_t>* outputBuffer, int outputOffset);
    // private System.Void Random(System.Byte[] buffer, System.Int32 start, System.Int32 length)
    // Offset: 0x1649268
    void Random(::Array<uint8_t>* buffer, int start, int length);
    // private System.Void ThrowBadPaddingException(System.Security.Cryptography.PaddingMode padding, System.Int32 length, System.Int32 position)
    // Offset: 0x1649334
    void ThrowBadPaddingException(System::Security::Cryptography::PaddingMode padding, int length, int position);
    // protected System.Byte[] FinalEncrypt(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x16494A0
    ::Array<uint8_t>* FinalEncrypt(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
    // protected System.Byte[] FinalDecrypt(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x1649744
    ::Array<uint8_t>* FinalDecrypt(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
    // protected override System.Void Finalize()
    // Offset: 0x1648588
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x16485FC
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // public System.Boolean get_CanTransformMultipleBlocks()
    // Offset: 0x16486FC
    // Implemented from: System.Security.Cryptography.ICryptoTransform
    // Base method: System.Boolean ICryptoTransform::get_CanTransformMultipleBlocks()
    bool get_CanTransformMultipleBlocks();
    // public System.Int32 get_InputBlockSize()
    // Offset: 0x1648704
    // Implemented from: System.Security.Cryptography.ICryptoTransform
    // Base method: System.Int32 ICryptoTransform::get_InputBlockSize()
    int get_InputBlockSize();
    // public System.Int32 get_OutputBlockSize()
    // Offset: 0x164870C
    // Implemented from: System.Security.Cryptography.ICryptoTransform
    // Base method: System.Int32 ICryptoTransform::get_OutputBlockSize()
    int get_OutputBlockSize();
    // public System.Int32 TransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    // Offset: 0x1648E4C
    // Implemented from: System.Security.Cryptography.ICryptoTransform
    // Base method: System.Int32 ICryptoTransform::TransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    int TransformBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount, ::Array<uint8_t>* outputBuffer, int outputOffset);
    // public System.Byte[] TransformFinalBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x16499F8
    // Implemented from: System.Security.Cryptography.ICryptoTransform
    // Base method: System.Byte[] ICryptoTransform::TransformFinalBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    ::Array<uint8_t>* TransformFinalBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
  }; // Mono.Security.Cryptography.SymmetricTransform
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::SymmetricTransform*, "Mono.Security.Cryptography", "SymmetricTransform");
#pragma pack(pop)
