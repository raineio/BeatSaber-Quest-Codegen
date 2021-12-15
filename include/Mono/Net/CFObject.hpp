// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Net
namespace Mono::Net {
  // Forward declaring type: CFObject
  class CFObject;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Mono::Net::CFObject);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::CFObject*, "Mono.Net", "CFObject");
// Type namespace: Mono.Net
namespace Mono::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.CFObject
  // [TokenAttribute] Offset: FFFFFFFF
  class CFObject : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.IntPtr <Handle>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr Handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    public:
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return Handle;
    }
    // Get instance field reference: private System.IntPtr <Handle>k__BackingField
    System::IntPtr& dyn_$Handle$k__BackingField();
    // public System.IntPtr get_Handle()
    // Offset: 0x182C880
    System::IntPtr get_Handle();
    // private System.Void set_Handle(System.IntPtr value)
    // Offset: 0x182C888
    void set_Handle(System::IntPtr value);
    // public System.Void .ctor(System.IntPtr handle, System.Boolean own)
    // Offset: 0x182956C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CFObject* New_ctor(System::IntPtr handle, bool own) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::CFObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CFObject*, creationType>(handle, own)));
    }
    // static public System.IntPtr dlopen(System.String path, System.Int32 mode)
    // Offset: 0x1829688
    static System::IntPtr dlopen(::Il2CppString* path, int mode);
    // static private System.IntPtr dlsym(System.IntPtr handle, System.String symbol)
    // Offset: 0x182C6B0
    static System::IntPtr dlsym(System::IntPtr handle, ::Il2CppString* symbol);
    // static public System.Void dlclose(System.IntPtr handle)
    // Offset: 0x1829734
    static void dlclose(System::IntPtr handle);
    // static public System.IntPtr GetIndirect(System.IntPtr handle, System.String symbol)
    // Offset: 0x1829730
    static System::IntPtr GetIndirect(System::IntPtr handle, ::Il2CppString* symbol);
    // static public System.IntPtr GetCFObjectHandle(System.IntPtr handle, System.String symbol)
    // Offset: 0x182C75C
    static System::IntPtr GetCFObjectHandle(System::IntPtr handle, ::Il2CppString* symbol);
    // static System.IntPtr CFRetain(System.IntPtr handle)
    // Offset: 0x182C890
    static System::IntPtr CFRetain(System::IntPtr handle);
    // private System.Void Retain()
    // Offset: 0x182C804
    void Retain();
    // static System.Void CFRelease(System.IntPtr handle)
    // Offset: 0x182C90C
    static void CFRelease(System::IntPtr handle);
    // private System.Void Release()
    // Offset: 0x182C98C
    void Release();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x182C994
    void Dispose(bool disposing);
    // public System.Void Dispose()
    // Offset: 0x182A6F4
    void Dispose();
    // protected override System.Void Finalize()
    // Offset: 0x182C80C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Mono.Net.CFObject
  #pragma pack(pop)
  static check_size<sizeof(CFObject), 16 + sizeof(System::IntPtr)> __Mono_Net_CFObjectSizeCheck;
  static_assert(sizeof(CFObject) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::CFObject::get_Handle
// Il2CppName: get_Handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (Mono::Net::CFObject::*)()>(&Mono::Net::CFObject::get_Handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFObject*), "get_Handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFObject::set_Handle
// Il2CppName: set_Handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::CFObject::*)(System::IntPtr)>(&Mono::Net::CFObject::set_Handle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFObject*), "set_Handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Net::CFObject::dlopen
// Il2CppName: dlopen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(::Il2CppString*, int)>(&Mono::Net::CFObject::dlopen)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFObject*), "dlopen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, mode});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFObject::dlsym
// Il2CppName: dlsym
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, ::Il2CppString*)>(&Mono::Net::CFObject::dlsym)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* symbol = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFObject*), "dlsym", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, symbol});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFObject::dlclose
// Il2CppName: dlclose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IntPtr)>(&Mono::Net::CFObject::dlclose)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFObject*), "dlclose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFObject::GetIndirect
// Il2CppName: GetIndirect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, ::Il2CppString*)>(&Mono::Net::CFObject::GetIndirect)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* symbol = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFObject*), "GetIndirect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, symbol});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFObject::GetCFObjectHandle
// Il2CppName: GetCFObjectHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, ::Il2CppString*)>(&Mono::Net::CFObject::GetCFObjectHandle)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* symbol = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFObject*), "GetCFObjectHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, symbol});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFObject::CFRetain
// Il2CppName: CFRetain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr)>(&Mono::Net::CFObject::CFRetain)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFObject*), "CFRetain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFObject::Retain
// Il2CppName: Retain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::CFObject::*)()>(&Mono::Net::CFObject::Retain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFObject*), "Retain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFObject::CFRelease
// Il2CppName: CFRelease
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IntPtr)>(&Mono::Net::CFObject::CFRelease)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFObject*), "CFRelease", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFObject::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::CFObject::*)()>(&Mono::Net::CFObject::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFObject*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFObject::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::CFObject::*)(bool)>(&Mono::Net::CFObject::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFObject*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFObject::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::CFObject::*)()>(&Mono::Net::CFObject::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFObject*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFObject::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::CFObject::*)()>(&Mono::Net::CFObject::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFObject*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
