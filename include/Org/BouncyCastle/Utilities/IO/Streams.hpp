// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: MemoryStream
  class MemoryStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Utilities.IO
namespace Org::BouncyCastle::Utilities::IO {
  // Autogenerated type: Org.BouncyCastle.Utilities.IO.Streams
  class Streams : public ::Il2CppObject {
    public:
    // static public System.Byte[] ReadAll(System.IO.Stream inStr)
    // Offset: 0x1B37CA0
    static ::Array<uint8_t>* ReadAll(System::IO::Stream* inStr);
    // static public System.Int32 ReadFully(System.IO.Stream inStr, System.Byte[] buf)
    // Offset: 0x1B37E08
    static int ReadFully(System::IO::Stream* inStr, ::Array<uint8_t>* buf);
    // static public System.Int32 ReadFully(System.IO.Stream inStr, System.Byte[] buf, System.Int32 off, System.Int32 len)
    // Offset: 0x1B37E24
    static int ReadFully(System::IO::Stream* inStr, ::Array<uint8_t>* buf, int off, int len);
    // static public System.Void PipeAll(System.IO.Stream inStr, System.IO.Stream outStr)
    // Offset: 0x1B37D20
    static void PipeAll(System::IO::Stream* inStr, System::IO::Stream* outStr);
    // static public System.Int32 WriteBufTo(System.IO.MemoryStream buf, System.Byte[] output, System.Int32 offset)
    // Offset: 0x1B37EB0
    static int WriteBufTo(System::IO::MemoryStream* buf, ::Array<uint8_t>* output, int offset);
  }; // Org.BouncyCastle.Utilities.IO.Streams
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::IO::Streams*, "Org.BouncyCastle.Utilities.IO", "Streams");
#pragma pack(pop)
