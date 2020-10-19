// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Runtime::InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: GCHandleType
  struct GCHandleType;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.GCHandle
  struct GCHandle : public System::ValueType {
    public:
    // private System.Int32 handle
    // Offset: 0x0
    int handle;
    // Creating value type constructor for type: GCHandle
    constexpr GCHandle(int handle_ = {}) noexcept : handle{handle_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return handle;
    }
    // private System.Void .ctor(System.IntPtr h)
    // Offset: 0xC5DC54
    GCHandle(System::IntPtr h);
    // private System.Void .ctor(System.Object obj)
    // Offset: 0xC5DC80
    GCHandle(::Il2CppObject* obj);
    // System.Void .ctor(System.Object value, System.Runtime.InteropServices.GCHandleType type)
    // Offset: 0xC5DCB0
    GCHandle(::Il2CppObject* value, System::Runtime::InteropServices::GCHandleType type);
    // public System.Boolean get_IsAllocated()
    // Offset: 0xC5DCE8
    bool get_IsAllocated();
    // public System.Object get_Target()
    // Offset: 0xC5DCF8
    ::Il2CppObject* get_Target();
    // public System.Void set_Target(System.Object value)
    // Offset: 0xC5DD00
    void set_Target(::Il2CppObject* value);
    // public System.IntPtr AddrOfPinnedObject()
    // Offset: 0xC5DD34
    System::IntPtr AddrOfPinnedObject();
    // static public System.Runtime.InteropServices.GCHandle Alloc(System.Object value)
    // Offset: 0x108E3F8
    static System::Runtime::InteropServices::GCHandle Alloc(::Il2CppObject* value);
    // static public System.Runtime.InteropServices.GCHandle Alloc(System.Object value, System.Runtime.InteropServices.GCHandleType type)
    // Offset: 0x108E418
    static System::Runtime::InteropServices::GCHandle Alloc(::Il2CppObject* value, System::Runtime::InteropServices::GCHandleType type);
    // public System.Void Free()
    // Offset: 0xC5DD3C
    void Free();
    // static public System.IntPtr op_Explicit(System.Runtime.InteropServices.GCHandle value)
    // Offset: 0x108E4E8
    explicit operator System::IntPtr();
    // static public System.Runtime.InteropServices.GCHandle op_Explicit(System.IntPtr value)
    // Offset: 0x108E4F0
    explicit GCHandle(System::IntPtr& value);
    // static private System.Boolean CheckCurrentDomain(System.Int32 handle)
    // Offset: 0x108E5D0
    static bool CheckCurrentDomain(int handle);
    // static private System.Object GetTarget(System.Int32 handle)
    // Offset: 0x108E2BC
    static ::Il2CppObject* GetTarget(int handle);
    // static private System.Int32 GetTargetHandle(System.Object obj, System.Int32 handle, System.Runtime.InteropServices.GCHandleType type)
    // Offset: 0x108E210
    static int GetTargetHandle(::Il2CppObject* obj, int handle, System::Runtime::InteropServices::GCHandleType type);
    // static private System.Void FreeHandle(System.Int32 handle)
    // Offset: 0x108E4E4
    static void FreeHandle(int handle);
    // static private System.IntPtr GetAddrOfPinnedObject(System.Int32 handle)
    // Offset: 0x108E3F4
    static System::IntPtr GetAddrOfPinnedObject(int handle);
    // static public System.Runtime.InteropServices.GCHandle FromIntPtr(System.IntPtr value)
    // Offset: 0x108E670
    static System::Runtime::InteropServices::GCHandle FromIntPtr(System::IntPtr value);
    // static public System.IntPtr ToIntPtr(System.Runtime.InteropServices.GCHandle value)
    // Offset: 0x108E688
    static System::IntPtr ToIntPtr(System::Runtime::InteropServices::GCHandle value);
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0xC5DD44
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0xC5DD4C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Runtime.InteropServices.GCHandle
  // static public System.Boolean op_Equality(System.Runtime.InteropServices.GCHandle a, System.Runtime.InteropServices.GCHandle b)
  // Offset: 0x108E5D4
  bool operator ==(const System::Runtime::InteropServices::GCHandle& a, const System::Runtime::InteropServices::GCHandle& b);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::GCHandle, "System.Runtime.InteropServices", "GCHandle");
#pragma pack(pop)
