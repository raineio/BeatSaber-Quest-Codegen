// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Type namespace: System.Security
namespace System::Security {
  // Autogenerated type: System.Security.SecureString
  class SecureString : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private System.Int32 length
    // Offset: 0x10
    int length;
    // private System.Boolean disposed
    // Offset: 0x14
    bool disposed;
    // private System.Byte[] data
    // Offset: 0x18
    ::Array<uint8_t>* data;
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void .ctor(System.Char* value, System.Int32 length)
    // Offset: 0x1282CD0
    static SecureString* New_ctor(::Il2CppChar* value, int length);
    // public System.Int32 get_Length()
    // Offset: 0x1282E38
    int get_Length();
    // private System.Void Encrypt()
    // Offset: 0x1282E34
    void Encrypt();
    // private System.Void Decrypt()
    // Offset: 0x1282F14
    void Decrypt();
    // private System.Void Alloc(System.Int32 length, System.Boolean realloc)
    // Offset: 0x1282B44
    void Alloc(int length, bool realloc);
    // System.Byte[] GetBuffer()
    // Offset: 0x1282F18
    ::Array<uint8_t>* GetBuffer();
    // public System.Void .ctor()
    // Offset: 0x1282B14
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SecureString* New_ctor();
    // public System.Void Dispose()
    // Offset: 0x1282EC0
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.Security.SecureString
  check_size<sizeof(SecureString), 24 + sizeof(void*) + 8 - (24 + sizeof(void*)) % 8> __System_Security_SecureStringSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::SecureString*, "System.Security", "SecureString");
#pragma pack(pop)