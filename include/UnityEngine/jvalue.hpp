// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: UnityEngine.jvalue
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeTypeAttribute] Offset: E9B09C
  struct jvalue/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Boolean z
    // Size: 0x1
    // Offset: 0x0
    bool z;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.SByte b
    // Size: 0x1
    // Offset: 0x0
    int8_t b;
    // Field size check
    static_assert(sizeof(int8_t) == 0x1);
    // public System.Char c
    // Size: 0x2
    // Offset: 0x0
    ::Il2CppChar c;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // public System.Int16 s
    // Size: 0x2
    // Offset: 0x0
    int16_t s;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // public System.Int32 i
    // Size: 0x4
    // Offset: 0x0
    int i;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int64 j
    // Size: 0x8
    // Offset: 0x0
    int64_t j;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.Single f
    // Size: 0x4
    // Offset: 0x0
    float f;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Double d
    // Size: 0x8
    // Offset: 0x0
    double d;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.IntPtr l
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr l;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: jvalue
    constexpr jvalue(bool z_ = {}, int8_t b_ = {}, ::Il2CppChar c_ = {}, int16_t s_ = {}, int i_ = {}, int64_t j_ = {}, float f_ = {}, double d_ = {}, System::IntPtr l_ = {}) noexcept : z{z_}, b{b_}, c{c_}, s{s_}, i{i_}, j{j_}, f{f_}, d{d_}, l{l_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Boolean z
    bool& dyn_z();
    // Get instance field reference: public System.SByte b
    int8_t& dyn_b();
    // Get instance field reference: public System.Char c
    ::Il2CppChar& dyn_c();
    // Get instance field reference: public System.Int16 s
    int16_t& dyn_s();
    // Get instance field reference: public System.Int32 i
    int& dyn_i();
    // Get instance field reference: public System.Int64 j
    int64_t& dyn_j();
    // Get instance field reference: public System.Single f
    float& dyn_f();
    // Get instance field reference: public System.Double d
    double& dyn_d();
    // Get instance field reference: public System.IntPtr l
    System::IntPtr& dyn_l();
  }; // UnityEngine.jvalue
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::jvalue, "UnityEngine", "jvalue");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
