// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: AddressFamily
  struct AddressFamily;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.SocketAddress
  class SocketAddress : public ::Il2CppObject {
    public:
    // System.Int32 m_Size
    // Offset: 0x10
    int m_Size;
    // System.Byte[] m_Buffer
    // Offset: 0x18
    ::Array<uint8_t>* m_Buffer;
    // private System.Boolean m_changed
    // Offset: 0x20
    bool m_changed;
    // private System.Int32 m_hash
    // Offset: 0x24
    int m_hash;
    // public System.Net.Sockets.AddressFamily get_Family()
    // Offset: 0x10D0C3C
    System::Net::Sockets::AddressFamily get_Family();
    // public System.Int32 get_Size()
    // Offset: 0x10D0C80
    int get_Size();
    // public System.Byte get_Item(System.Int32 offset)
    // Offset: 0x10D0C88
    uint8_t get_Item(int offset);
    // public System.Void .ctor(System.Net.Sockets.AddressFamily family, System.Int32 size)
    // Offset: 0x10D0D40
    static SocketAddress* New_ctor(System::Net::Sockets::AddressFamily family, int size);
    // System.Void .ctor(System.Net.IPAddress ipAddress)
    // Offset: 0x10D0E74
    static SocketAddress* New_ctor(System::Net::IPAddress* ipAddress);
    // System.Void .ctor(System.Net.IPAddress ipaddress, System.Int32 port)
    // Offset: 0x10D10C8
    static SocketAddress* New_ctor(System::Net::IPAddress* ipaddress, int port);
    // System.Net.IPAddress GetIPAddress()
    // Offset: 0x10D1130
    System::Net::IPAddress* GetIPAddress();
    // System.Net.IPEndPoint GetIPEndPoint()
    // Offset: 0x10D1320
    System::Net::IPEndPoint* GetIPEndPoint();
    // public override System.Boolean Equals(System.Object comparand)
    // Offset: 0x10D13D4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object comparand)
    bool Equals(::Il2CppObject* comparand);
    // public override System.Int32 GetHashCode()
    // Offset: 0x10D14C8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x10D1614
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.SocketAddress
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::SocketAddress*, "System.Net", "SocketAddress");
#pragma pack(pop)
