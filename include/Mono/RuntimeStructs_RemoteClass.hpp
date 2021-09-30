// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.RuntimeStructs
#include "Mono/RuntimeStructs.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: Mono
namespace Mono {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.RuntimeStructs/Mono.RemoteClass
  // [TokenAttribute] Offset: FFFFFFFF
  struct RuntimeStructs::RemoteClass/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // System.IntPtr default_vtable
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr default_vtable;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // System.IntPtr xdomain_vtable
    // Size: 0x8
    // Offset: 0x8
    System::IntPtr xdomain_vtable;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Mono.RuntimeStructs/Mono.MonoClass* proxy_class
    // Size: 0x8
    // Offset: 0x10
    Mono::RuntimeStructs::MonoClass* proxy_class;
    // Field size check
    static_assert(sizeof(Mono::RuntimeStructs::MonoClass*) == 0x8);
    // System.IntPtr proxy_class_name
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr proxy_class_name;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // System.UInt32 interface_count
    // Size: 0x4
    // Offset: 0x20
    uint interface_count;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: RemoteClass
    constexpr RemoteClass(System::IntPtr default_vtable_ = {}, System::IntPtr xdomain_vtable_ = {}, Mono::RuntimeStructs::MonoClass* proxy_class_ = {}, System::IntPtr proxy_class_name_ = {}, uint interface_count_ = {}) noexcept : default_vtable{default_vtable_}, xdomain_vtable{xdomain_vtable_}, proxy_class{proxy_class_}, proxy_class_name{proxy_class_name_}, interface_count{interface_count_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: System.IntPtr default_vtable
    System::IntPtr& dyn_default_vtable();
    // Get instance field reference: System.IntPtr xdomain_vtable
    System::IntPtr& dyn_xdomain_vtable();
    // Get instance field reference: Mono.RuntimeStructs/Mono.MonoClass* proxy_class
    Mono::RuntimeStructs::MonoClass*& dyn_proxy_class();
    // Get instance field reference: System.IntPtr proxy_class_name
    System::IntPtr& dyn_proxy_class_name();
    // Get instance field reference: System.UInt32 interface_count
    uint& dyn_interface_count();
  }; // Mono.RuntimeStructs/Mono.RemoteClass
  #pragma pack(pop)
  static check_size<sizeof(RuntimeStructs::RemoteClass), 32 + sizeof(uint)> __Mono_RuntimeStructs_RemoteClassSizeCheck;
  static_assert(sizeof(RuntimeStructs::RemoteClass) == 0x24);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeStructs::RemoteClass, "Mono", "RuntimeStructs/RemoteClass");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
