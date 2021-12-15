// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: GCHandle
  struct GCHandle;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::GCHandle, "System.Runtime.InteropServices", "GCHandle");
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.InteropServices.GCHandle
  // [TokenAttribute] Offset: FFFFFFFF
  // [MonoTODOAttribute] Offset: EA2328
  // [ComVisibleAttribute] Offset: EA2328
  struct GCHandle/*, public System::ValueType*/ {
    public:
    public:
    // private System.Int32 handle
    // Size: 0x4
    // Offset: 0x0
    int handle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: GCHandle
    constexpr GCHandle(int handle_ = {}) noexcept : handle{handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return handle;
    }
    // Get instance field reference: private System.Int32 handle
    int& dyn_handle();
    // public System.Boolean get_IsAllocated()
    // Offset: 0x1622DE4
    bool get_IsAllocated();
    // public System.Object get_Target()
    // Offset: 0x1622DF4
    ::Il2CppObject* get_Target();
    // public System.Void set_Target(System.Object value)
    // Offset: 0x1622E90
    void set_Target(::Il2CppObject* value);
    // private System.Void .ctor(System.IntPtr h)
    // Offset: 0x1622D4C
    GCHandle(System::IntPtr h);
    // private System.Void .ctor(System.Object obj)
    // Offset: 0x1622D78
    GCHandle(::Il2CppObject* obj);
    // System.Void .ctor(System.Object value, System.Runtime.InteropServices.GCHandleType type)
    // Offset: 0x1622DA8
    GCHandle(::Il2CppObject* value, System::Runtime::InteropServices::GCHandleType type);
    // public System.IntPtr AddrOfPinnedObject()
    // Offset: 0x1622EC4
    System::IntPtr AddrOfPinnedObject();
    // static public System.Runtime.InteropServices.GCHandle Alloc(System.Object value)
    // Offset: 0x1622FC8
    static System::Runtime::InteropServices::GCHandle Alloc(::Il2CppObject* value);
    // static public System.Runtime.InteropServices.GCHandle Alloc(System.Object value, System.Runtime.InteropServices.GCHandleType type)
    // Offset: 0x1622FE8
    static System::Runtime::InteropServices::GCHandle Alloc(::Il2CppObject* value, System::Runtime::InteropServices::GCHandleType type);
    // public System.Void Free()
    // Offset: 0x1623010
    void Free();
    // static public System.IntPtr op_Explicit(System.Runtime.InteropServices.GCHandle value)
    // Offset: 0x16230B8
    explicit operator System::IntPtr();
    // static public System.Runtime.InteropServices.GCHandle op_Explicit(System.IntPtr value)
    // Offset: 0x16230C0
    explicit GCHandle(System::IntPtr& value);
    // static private System.Boolean CheckCurrentDomain(System.Int32 handle)
    // Offset: 0x16231A0
    static bool CheckCurrentDomain(int handle);
    // static private System.Object GetTarget(System.Int32 handle)
    // Offset: 0x1622E8C
    static ::Il2CppObject* GetTarget(int handle);
    // static private System.Int32 GetTargetHandle(System.Object obj, System.Int32 handle, System.Runtime.InteropServices.GCHandleType type)
    // Offset: 0x1622DE0
    static int GetTargetHandle(::Il2CppObject* obj, int handle, System::Runtime::InteropServices::GCHandleType type);
    // static private System.Void FreeHandle(System.Int32 handle)
    // Offset: 0x16230B4
    static void FreeHandle(int handle);
    // static private System.IntPtr GetAddrOfPinnedObject(System.Int32 handle)
    // Offset: 0x1622FC4
    static System::IntPtr GetAddrOfPinnedObject(int handle);
    // static public System.Runtime.InteropServices.GCHandle FromIntPtr(System.IntPtr value)
    // Offset: 0x1623240
    static System::Runtime::InteropServices::GCHandle FromIntPtr(System::IntPtr value);
    // static public System.IntPtr ToIntPtr(System.Runtime.InteropServices.GCHandle value)
    // Offset: 0x1623258
    static System::IntPtr ToIntPtr(System::Runtime::InteropServices::GCHandle value);
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x16231B0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1623238
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Runtime.InteropServices.GCHandle
  #pragma pack(pop)
  static check_size<sizeof(GCHandle), 0 + sizeof(int)> __System_Runtime_InteropServices_GCHandleSizeCheck;
  static_assert(sizeof(GCHandle) == 0x4);
  // static public System.Boolean op_Equality(System.Runtime.InteropServices.GCHandle a, System.Runtime.InteropServices.GCHandle b)
  // Offset: 0x16231A4
  bool operator ==(const System::Runtime::InteropServices::GCHandle& a, const System::Runtime::InteropServices::GCHandle& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::get_IsAllocated
// Il2CppName: get_IsAllocated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::InteropServices::GCHandle::*)()>(&System::Runtime::InteropServices::GCHandle::get_IsAllocated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "get_IsAllocated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::get_Target
// Il2CppName: get_Target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::InteropServices::GCHandle::*)()>(&System::Runtime::InteropServices::GCHandle::get_Target)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "get_Target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::set_Target
// Il2CppName: set_Target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::InteropServices::GCHandle::*)(::Il2CppObject*)>(&System::Runtime::InteropServices::GCHandle::set_Target)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "set_Target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GCHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GCHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GCHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::AddrOfPinnedObject
// Il2CppName: AddrOfPinnedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (System::Runtime::InteropServices::GCHandle::*)()>(&System::Runtime::InteropServices::GCHandle::AddrOfPinnedObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "AddrOfPinnedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::Alloc
// Il2CppName: Alloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::InteropServices::GCHandle (*)(::Il2CppObject*)>(&System::Runtime::InteropServices::GCHandle::Alloc)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "Alloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::Alloc
// Il2CppName: Alloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::InteropServices::GCHandle (*)(::Il2CppObject*, System::Runtime::InteropServices::GCHandleType)>(&System::Runtime::InteropServices::GCHandle::Alloc)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "GCHandleType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "Alloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, type});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::Free
// Il2CppName: Free
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::InteropServices::GCHandle::*)()>(&System::Runtime::InteropServices::GCHandle::Free)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "Free", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::operator System::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GCHandle
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::CheckCurrentDomain
// Il2CppName: CheckCurrentDomain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&System::Runtime::InteropServices::GCHandle::CheckCurrentDomain)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "CheckCurrentDomain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GetTarget
// Il2CppName: GetTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(int)>(&System::Runtime::InteropServices::GCHandle::GetTarget)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "GetTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GetTargetHandle
// Il2CppName: GetTargetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppObject*, int, System::Runtime::InteropServices::GCHandleType)>(&System::Runtime::InteropServices::GCHandle::GetTargetHandle)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "GCHandleType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "GetTargetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, handle, type});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::FreeHandle
// Il2CppName: FreeHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&System::Runtime::InteropServices::GCHandle::FreeHandle)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "FreeHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GetAddrOfPinnedObject
// Il2CppName: GetAddrOfPinnedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(int)>(&System::Runtime::InteropServices::GCHandle::GetAddrOfPinnedObject)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "GetAddrOfPinnedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::FromIntPtr
// Il2CppName: FromIntPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::InteropServices::GCHandle (*)(System::IntPtr)>(&System::Runtime::InteropServices::GCHandle::FromIntPtr)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "FromIntPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::ToIntPtr
// Il2CppName: ToIntPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::Runtime::InteropServices::GCHandle)>(&System::Runtime::InteropServices::GCHandle::ToIntPtr)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "GCHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "ToIntPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::InteropServices::GCHandle::*)(::Il2CppObject*)>(&System::Runtime::InteropServices::GCHandle::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::InteropServices::GCHandle::*)()>(&System::Runtime::InteropServices::GCHandle::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
