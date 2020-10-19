// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.UTF8Encoding
#include "System/Text/UTF8Encoding.hpp"
// Including type: System.Text.EncoderNLS
#include "System/Text/EncoderNLS.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.UTF8Encoding/UTF8Encoder
  class UTF8Encoding::UTF8Encoder : public System::Text::EncoderNLS {
    public:
    // System.Int32 surrogateChar
    // Offset: 0x38
    int surrogateChar;
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return surrogateChar;
    }
    // public System.Void .ctor(System.Text.UTF8Encoding encoding)
    // Offset: 0x17B9294
    static UTF8Encoding::UTF8Encoder* New_ctor(System::Text::UTF8Encoding* encoding);
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x17B9B14
    // Implemented from: System.Text.EncoderNLS
    // Base method: System.Void EncoderNLS::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static UTF8Encoding::UTF8Encoder* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x17B9DEC
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Void Reset()
    // Offset: 0x17B9F08
    // Implemented from: System.Text.EncoderNLS
    // Base method: System.Void EncoderNLS::Reset()
    void Reset();
    // override System.Boolean get_HasState()
    // Offset: 0x17B9F28
    // Implemented from: System.Text.EncoderNLS
    // Base method: System.Boolean EncoderNLS::get_HasState()
    bool get_HasState();
  }; // System.Text.UTF8Encoding/UTF8Encoder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::UTF8Encoding::UTF8Encoder*, "System.Text", "UTF8Encoding/UTF8Encoder");
#pragma pack(pop)
