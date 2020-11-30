// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Autogenerated type: System.IO.Compression.CompressionMode
  struct CompressionMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: CompressionMode
    constexpr CompressionMode(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.IO.Compression.CompressionMode Decompress
    static constexpr const int Decompress = 0;
    // Get static field: static public System.IO.Compression.CompressionMode Decompress
    static System::IO::Compression::CompressionMode _get_Decompress();
    // Set static field: static public System.IO.Compression.CompressionMode Decompress
    static void _set_Decompress(System::IO::Compression::CompressionMode value);
    // static field const value: static public System.IO.Compression.CompressionMode Compress
    static constexpr const int Compress = 1;
    // Get static field: static public System.IO.Compression.CompressionMode Compress
    static System::IO::Compression::CompressionMode _get_Compress();
    // Set static field: static public System.IO.Compression.CompressionMode Compress
    static void _set_Compress(System::IO::Compression::CompressionMode value);
  }; // System.IO.Compression.CompressionMode
  check_size<sizeof(CompressionMode), 0 + sizeof(int) + 8 - (0 + sizeof(int)) % 8> __System_IO_Compression_CompressionModeSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::Compression::CompressionMode, "System.IO.Compression", "CompressionMode");
#pragma pack(pop)