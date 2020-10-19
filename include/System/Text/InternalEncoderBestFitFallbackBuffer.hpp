// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.EncoderFallbackBuffer
#include "System/Text/EncoderFallbackBuffer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: InternalEncoderBestFitFallback
  class InternalEncoderBestFitFallback;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.InternalEncoderBestFitFallbackBuffer
  class InternalEncoderBestFitFallbackBuffer : public System::Text::EncoderFallbackBuffer {
    public:
    // private System.Char cBestFit
    // Offset: 0x30
    ::Il2CppChar cBestFit;
    // private System.Text.InternalEncoderBestFitFallback oFallback
    // Offset: 0x38
    System::Text::InternalEncoderBestFitFallback* oFallback;
    // private System.Int32 iCount
    // Offset: 0x40
    int iCount;
    // private System.Int32 iSize
    // Offset: 0x44
    int iSize;
    // Get static field: static private System.Object s_InternalSyncObject
    static ::Il2CppObject* _get_s_InternalSyncObject();
    // Set static field: static private System.Object s_InternalSyncObject
    static void _set_s_InternalSyncObject(::Il2CppObject* value);
    // static private System.Object get_InternalSyncObject()
    // Offset: 0x16362A8
    static ::Il2CppObject* get_InternalSyncObject();
    // public System.Void .ctor(System.Text.InternalEncoderBestFitFallback fallback)
    // Offset: 0x1636084
    static InternalEncoderBestFitFallbackBuffer* New_ctor(System::Text::InternalEncoderBestFitFallback* fallback);
    // private System.Char TryBestFit(System.Char cUnknown)
    // Offset: 0x1636374
    ::Il2CppChar TryBestFit(::Il2CppChar cUnknown);
    // public override System.Boolean Fallback(System.Char charUnknown, System.Int32 index)
    // Offset: 0x1636338
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Boolean EncoderFallbackBuffer::Fallback(System.Char charUnknown, System.Int32 index)
    bool Fallback(::Il2CppChar charUnknown, int index);
    // public override System.Boolean Fallback(System.Char charUnknownHigh, System.Char charUnknownLow, System.Int32 index)
    // Offset: 0x1636454
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Boolean EncoderFallbackBuffer::Fallback(System.Char charUnknownHigh, System.Char charUnknownLow, System.Int32 index)
    bool Fallback(::Il2CppChar charUnknownHigh, ::Il2CppChar charUnknownLow, int index);
    // public override System.Char GetNextChar()
    // Offset: 0x16366E4
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Char EncoderFallbackBuffer::GetNextChar()
    ::Il2CppChar GetNextChar();
    // public override System.Boolean MovePrevious()
    // Offset: 0x1636724
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Boolean EncoderFallbackBuffer::MovePrevious()
    bool MovePrevious();
    // public override System.Int32 get_Remaining()
    // Offset: 0x1636750
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Int32 EncoderFallbackBuffer::get_Remaining()
    int get_Remaining();
    // public override System.Void Reset()
    // Offset: 0x163675C
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Void EncoderFallbackBuffer::Reset()
    void Reset();
  }; // System.Text.InternalEncoderBestFitFallbackBuffer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::InternalEncoderBestFitFallbackBuffer*, "System.Text", "InternalEncoderBestFitFallbackBuffer");
#pragma pack(pop)
