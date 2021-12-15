// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: Mono.Net
namespace Mono::Net {
  // Forward declaring type: CFStreamClientContext
  struct CFStreamClientContext;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::CFStreamClientContext, "Mono.Net", "CFStreamClientContext");
// Type namespace: Mono.Net
namespace Mono::Net {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.Net.CFStreamClientContext
  // [TokenAttribute] Offset: FFFFFFFF
  struct CFStreamClientContext/*, public System::ValueType*/ {
    public:
    public:
    // public System.IntPtr Version
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr Version;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr Info
    // Size: 0x8
    // Offset: 0x8
    System::IntPtr Info;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr Retain
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr Retain;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr Release
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr Release;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr CopyDescription
    // Size: 0x8
    // Offset: 0x20
    System::IntPtr CopyDescription;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: CFStreamClientContext
    constexpr CFStreamClientContext(System::IntPtr Version_ = {}, System::IntPtr Info_ = {}, System::IntPtr Retain_ = {}, System::IntPtr Release_ = {}, System::IntPtr CopyDescription_ = {}) noexcept : Version{Version_}, Info{Info_}, Retain{Retain_}, Release{Release_}, CopyDescription{CopyDescription_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.IntPtr Version
    System::IntPtr& dyn_Version();
    // Get instance field reference: public System.IntPtr Info
    System::IntPtr& dyn_Info();
    // Get instance field reference: public System.IntPtr Retain
    System::IntPtr& dyn_Retain();
    // Get instance field reference: public System.IntPtr Release
    System::IntPtr& dyn_Release();
    // Get instance field reference: public System.IntPtr CopyDescription
    System::IntPtr& dyn_CopyDescription();
  }; // Mono.Net.CFStreamClientContext
  #pragma pack(pop)
  static check_size<sizeof(CFStreamClientContext), 32 + sizeof(System::IntPtr)> __Mono_Net_CFStreamClientContextSizeCheck;
  static_assert(sizeof(CFStreamClientContext) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
