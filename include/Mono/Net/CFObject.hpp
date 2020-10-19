// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: Mono.Net
namespace Mono::Net {
  // Autogenerated type: Mono.Net.CFObject
  class CFObject : public ::Il2CppObject, public System::IDisposable {
    public:
    // private System.IntPtr <Handle>k__BackingField
    // Offset: 0x10
    System::IntPtr Handle;
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return Handle;
    }
    // static public System.IntPtr dlopen(System.String path, System.Int32 mode)
    // Offset: 0x11EAD0C
    static System::IntPtr dlopen(::Il2CppString* path, int mode);
    // static private System.IntPtr dlsym(System.IntPtr handle, System.String symbol)
    // Offset: 0x11EDEA0
    static System::IntPtr dlsym(System::IntPtr handle, ::Il2CppString* symbol);
    // static public System.Void dlclose(System.IntPtr handle)
    // Offset: 0x11EADB8
    static void dlclose(System::IntPtr handle);
    // static public System.IntPtr GetIndirect(System.IntPtr handle, System.String symbol)
    // Offset: 0x11EADB4
    static System::IntPtr GetIndirect(System::IntPtr handle, ::Il2CppString* symbol);
    // static public System.IntPtr GetCFObjectHandle(System.IntPtr handle, System.String symbol)
    // Offset: 0x11EDF4C
    static System::IntPtr GetCFObjectHandle(System::IntPtr handle, ::Il2CppString* symbol);
    // public System.Void .ctor(System.IntPtr handle, System.Boolean own)
    // Offset: 0x11EABF0
    static CFObject* New_ctor(System::IntPtr handle, bool own);
    // public System.IntPtr get_Handle()
    // Offset: 0x11EE070
    System::IntPtr get_Handle();
    // private System.Void set_Handle(System.IntPtr value)
    // Offset: 0x11EE078
    void set_Handle(System::IntPtr value);
    // static System.IntPtr CFRetain(System.IntPtr handle)
    // Offset: 0x11EE080
    static System::IntPtr CFRetain(System::IntPtr handle);
    // private System.Void Retain()
    // Offset: 0x11EDFF4
    void Retain();
    // static System.Void CFRelease(System.IntPtr handle)
    // Offset: 0x11EE0FC
    static void CFRelease(System::IntPtr handle);
    // private System.Void Release()
    // Offset: 0x11EE17C
    void Release();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x11EE184
    void Dispose(bool disposing);
    // protected override System.Void Finalize()
    // Offset: 0x11EDFFC
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public System.Void Dispose()
    // Offset: 0x11EBDE8
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // Mono.Net.CFObject
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::CFObject*, "Mono.Net", "CFObject");
#pragma pack(pop)
