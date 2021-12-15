// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Sockets.Socket
#include "System/Net/Sockets/Socket.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::Socket::WSABUF, "System.Net.Sockets", "Socket/WSABUF");
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.Sockets.Socket/System.Net.Sockets.WSABUF
  // [TokenAttribute] Offset: FFFFFFFF
  struct Socket::WSABUF/*, public System::ValueType*/ {
    public:
    public:
    // public System.Int32 len
    // Size: 0x4
    // Offset: 0x0
    int len;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: len and: buf
    char __padding0[0x4] = {};
    // public System.IntPtr buf
    // Size: 0x8
    // Offset: 0x8
    System::IntPtr buf;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: WSABUF
    constexpr WSABUF(int len_ = {}, System::IntPtr buf_ = {}) noexcept : len{len_}, buf{buf_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 len
    int& dyn_len();
    // Get instance field reference: public System.IntPtr buf
    System::IntPtr& dyn_buf();
  }; // System.Net.Sockets.Socket/System.Net.Sockets.WSABUF
  #pragma pack(pop)
  static check_size<sizeof(Socket::WSABUF), 8 + sizeof(System::IntPtr)> __System_Net_Sockets_Socket_WSABUFSizeCheck;
  static_assert(sizeof(Socket::WSABUF) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
