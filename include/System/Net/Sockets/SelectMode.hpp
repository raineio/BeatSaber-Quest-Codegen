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
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.SelectMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct SelectMode/*, public System::Enum*/ {
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
    // Creating value type constructor for type: SelectMode
    constexpr SelectMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.Sockets.SelectMode SelectRead
    static constexpr const int SelectRead = 0;
    // Get static field: static public System.Net.Sockets.SelectMode SelectRead
    static System::Net::Sockets::SelectMode _get_SelectRead();
    // Set static field: static public System.Net.Sockets.SelectMode SelectRead
    static void _set_SelectRead(System::Net::Sockets::SelectMode value);
    // static field const value: static public System.Net.Sockets.SelectMode SelectWrite
    static constexpr const int SelectWrite = 1;
    // Get static field: static public System.Net.Sockets.SelectMode SelectWrite
    static System::Net::Sockets::SelectMode _get_SelectWrite();
    // Set static field: static public System.Net.Sockets.SelectMode SelectWrite
    static void _set_SelectWrite(System::Net::Sockets::SelectMode value);
    // static field const value: static public System.Net.Sockets.SelectMode SelectError
    static constexpr const int SelectError = 2;
    // Get static field: static public System.Net.Sockets.SelectMode SelectError
    static System::Net::Sockets::SelectMode _get_SelectError();
    // Set static field: static public System.Net.Sockets.SelectMode SelectError
    static void _set_SelectError(System::Net::Sockets::SelectMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Net.Sockets.SelectMode
  #pragma pack(pop)
  static check_size<sizeof(SelectMode), 0 + sizeof(int)> __System_Net_Sockets_SelectModeSizeCheck;
  static_assert(sizeof(SelectMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SelectMode, "System.Net.Sockets", "SelectMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
