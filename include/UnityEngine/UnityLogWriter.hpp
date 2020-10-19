// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.TextWriter
#include "System/IO/TextWriter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.UnityLogWriter
  class UnityLogWriter : public System::IO::TextWriter {
    public:
    // static public System.Void WriteStringToUnityLog(System.String s)
    // Offset: 0x173E768
    static void WriteStringToUnityLog(::Il2CppString* s);
    // static private System.Void WriteStringToUnityLogImpl(System.String s)
    // Offset: 0x173E7B0
    static void WriteStringToUnityLogImpl(::Il2CppString* s);
    // static public System.Void Init()
    // Offset: 0x173E7F0
    static void Init();
    // public override System.Text.Encoding get_Encoding()
    // Offset: 0x173E8D4
    // Implemented from: System.IO.TextWriter
    // Base method: System.Text.Encoding TextWriter::get_Encoding()
    System::Text::Encoding* get_Encoding();
    // public override System.Void Write(System.Char value)
    // Offset: 0x173E8DC
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char value)
    void Write(::Il2CppChar value);
    // public override System.Void Write(System.String s)
    // Offset: 0x173E93C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.String s)
    void Write(::Il2CppString* s);
    // public override System.Void Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x173E984
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void Write(::Array<::Il2CppChar>* buffer, int index, int count);
    // public System.Void .ctor()
    // Offset: 0x173E86C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    static UnityLogWriter* New_ctor();
  }; // UnityEngine.UnityLogWriter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityLogWriter*, "UnityEngine", "UnityLogWriter");
#pragma pack(pop)
