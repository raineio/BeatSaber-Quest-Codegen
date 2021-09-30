// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileOptions
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E5E42C
  struct FileOptions/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FileOptions
    constexpr FileOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.IO.FileOptions None
    static constexpr const int None = 0;
    // Get static field: static public System.IO.FileOptions None
    static System::IO::FileOptions _get_None();
    // Set static field: static public System.IO.FileOptions None
    static void _set_None(System::IO::FileOptions value);
    // static field const value: static public System.IO.FileOptions Encrypted
    static constexpr const int Encrypted = 16384;
    // Get static field: static public System.IO.FileOptions Encrypted
    static System::IO::FileOptions _get_Encrypted();
    // Set static field: static public System.IO.FileOptions Encrypted
    static void _set_Encrypted(System::IO::FileOptions value);
    // static field const value: static public System.IO.FileOptions DeleteOnClose
    static constexpr const int DeleteOnClose = 67108864;
    // Get static field: static public System.IO.FileOptions DeleteOnClose
    static System::IO::FileOptions _get_DeleteOnClose();
    // Set static field: static public System.IO.FileOptions DeleteOnClose
    static void _set_DeleteOnClose(System::IO::FileOptions value);
    // static field const value: static public System.IO.FileOptions SequentialScan
    static constexpr const int SequentialScan = 134217728;
    // Get static field: static public System.IO.FileOptions SequentialScan
    static System::IO::FileOptions _get_SequentialScan();
    // Set static field: static public System.IO.FileOptions SequentialScan
    static void _set_SequentialScan(System::IO::FileOptions value);
    // static field const value: static public System.IO.FileOptions RandomAccess
    static constexpr const int RandomAccess = 268435456;
    // Get static field: static public System.IO.FileOptions RandomAccess
    static System::IO::FileOptions _get_RandomAccess();
    // Set static field: static public System.IO.FileOptions RandomAccess
    static void _set_RandomAccess(System::IO::FileOptions value);
    // static field const value: static public System.IO.FileOptions Asynchronous
    static constexpr const int Asynchronous = 1073741824;
    // Get static field: static public System.IO.FileOptions Asynchronous
    static System::IO::FileOptions _get_Asynchronous();
    // Set static field: static public System.IO.FileOptions Asynchronous
    static void _set_Asynchronous(System::IO::FileOptions value);
    // static field const value: static public System.IO.FileOptions WriteThrough
    static constexpr const int WriteThrough = -2147483648;
    // Get static field: static public System.IO.FileOptions WriteThrough
    static System::IO::FileOptions _get_WriteThrough();
    // Set static field: static public System.IO.FileOptions WriteThrough
    static void _set_WriteThrough(System::IO::FileOptions value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.IO.FileOptions
  #pragma pack(pop)
  static check_size<sizeof(FileOptions), 0 + sizeof(int)> __System_IO_FileOptionsSizeCheck;
  static_assert(sizeof(FileOptions) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileOptions, "System.IO", "FileOptions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
