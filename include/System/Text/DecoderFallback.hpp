// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: DecoderFallbackBuffer
  class DecoderFallbackBuffer;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.DecoderFallback
  class DecoderFallback : public ::Il2CppObject {
    public:
    // System.Boolean bIsMicrosoftBestFitFallback
    // Offset: 0x10
    bool bIsMicrosoftBestFitFallback;
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return bIsMicrosoftBestFitFallback;
    }
    // Get static field: static private System.Text.DecoderFallback replacementFallback
    static System::Text::DecoderFallback* _get_replacementFallback();
    // Set static field: static private System.Text.DecoderFallback replacementFallback
    static void _set_replacementFallback(System::Text::DecoderFallback* value);
    // Get static field: static private System.Text.DecoderFallback exceptionFallback
    static System::Text::DecoderFallback* _get_exceptionFallback();
    // Set static field: static private System.Text.DecoderFallback exceptionFallback
    static void _set_exceptionFallback(System::Text::DecoderFallback* value);
    // Get static field: static private System.Object s_InternalSyncObject
    static ::Il2CppObject* _get_s_InternalSyncObject();
    // Set static field: static private System.Object s_InternalSyncObject
    static void _set_s_InternalSyncObject(::Il2CppObject* value);
    // static private System.Object get_InternalSyncObject()
    // Offset: 0x162B43C
    static ::Il2CppObject* get_InternalSyncObject();
    // static public System.Text.DecoderFallback get_ReplacementFallback()
    // Offset: 0x16283FC
    static System::Text::DecoderFallback* get_ReplacementFallback();
    // static public System.Text.DecoderFallback get_ExceptionFallback()
    // Offset: 0x162B520
    static System::Text::DecoderFallback* get_ExceptionFallback();
    // public System.Text.DecoderFallbackBuffer CreateFallbackBuffer()
    // Offset: 0xFFFFFFFF
    System::Text::DecoderFallbackBuffer* CreateFallbackBuffer();
    // public System.Int32 get_MaxCharCount()
    // Offset: 0xFFFFFFFF
    int get_MaxCharCount();
    // protected System.Void .ctor()
    // Offset: 0x162AF64
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DecoderFallback* New_ctor();
  }; // System.Text.DecoderFallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::DecoderFallback*, "System.Text", "DecoderFallback");
#pragma pack(pop)
