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
// Type namespace: NUnit.Framework.Internal.Execution
namespace NUnit::Framework::Internal::Execution {
  // Autogenerated type: NUnit.Framework.Internal.Execution.EventListenerTextWriter
  class EventListenerTextWriter : public System::IO::TextWriter {
    public:
    // private System.IO.TextWriter _defaultWriter
    // Offset: 0x28
    System::IO::TextWriter* defaultWriter;
    // private System.String _streamName
    // Offset: 0x30
    ::Il2CppString* streamName;
    // public System.Void .ctor(System.String streamName, System.IO.TextWriter defaultWriter)
    // Offset: 0x13CBDB0
    static EventListenerTextWriter* New_ctor(::Il2CppString* streamName, System::IO::TextWriter* defaultWriter);
    // private System.Boolean TrySendToListener(System.String text)
    // Offset: 0x13CBEA0
    bool TrySendToListener(::Il2CppString* text);
    // public override System.Void Write(System.Char aChar)
    // Offset: 0x13CBE48
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char aChar)
    void Write(::Il2CppChar aChar);
    // public override System.Void Write(System.String aString)
    // Offset: 0x13CC01C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.String aString)
    void Write(::Il2CppString* aString);
    // public override System.Void WriteLine(System.String aString)
    // Offset: 0x13CC06C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::WriteLine(System.String aString)
    void WriteLine(::Il2CppString* aString);
    // public override System.Text.Encoding get_Encoding()
    // Offset: 0x13CC0DC
    // Implemented from: System.IO.TextWriter
    // Base method: System.Text.Encoding TextWriter::get_Encoding()
    System::Text::Encoding* get_Encoding();
  }; // NUnit.Framework.Internal.Execution.EventListenerTextWriter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Execution::EventListenerTextWriter*, "NUnit.Framework.Internal.Execution", "EventListenerTextWriter");
#pragma pack(pop)
