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
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.StringBuilderCache
  class StringBuilderCache : public ::Il2CppObject {
    public:
    // Get static field: static private System.Text.StringBuilder CachedInstance
    static System::Text::StringBuilder* _get_CachedInstance();
    // Set static field: static private System.Text.StringBuilder CachedInstance
    static void _set_CachedInstance(System::Text::StringBuilder* value);
    // static public System.Text.StringBuilder Acquire(System.Int32 capacity)
    // Offset: 0x17B09E4
    static System::Text::StringBuilder* Acquire(int capacity);
    // static public System.Void Release(System.Text.StringBuilder sb)
    // Offset: 0x17B0AA8
    static void Release(System::Text::StringBuilder* sb);
    // static public System.String GetStringAndRelease(System.Text.StringBuilder sb)
    // Offset: 0x17B0B28
    static ::Il2CppString* GetStringAndRelease(System::Text::StringBuilder* sb);
  }; // System.Text.StringBuilderCache
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::StringBuilderCache*, "System.Text", "StringBuilderCache");
#pragma pack(pop)
