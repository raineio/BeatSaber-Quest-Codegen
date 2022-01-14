// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color32
  struct Color32;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Color32, "UnityEngine", "Color32");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Color32
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: EB4094
  // [UsedByNativeCodeAttribute] Offset: EB4094
  struct Color32/*, public System::ValueType*/ {
    public:
    public:
    // [IgnoreAttribute] Offset: 0xEB8288
    // Ignoring hidden field: private System.Int32 rgba
    // Offset: 0x0
    // public System.Byte r
    // Size: 0x1
    // Offset: 0x0
    uint8_t r;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte g
    // Size: 0x1
    // Offset: 0x1
    uint8_t g;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte b
    // Size: 0x1
    // Offset: 0x2
    uint8_t b;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte a
    // Size: 0x1
    // Offset: 0x3
    uint8_t a;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: Color32
    constexpr Color32(uint8_t r_ = {}, uint8_t g_ = {}, uint8_t b_ = {}, uint8_t a_ = {}) noexcept : r{r_}, g{g_}, b{b_}, a{a_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private System.Int32 rgba
    int& dyn_rgba();
    // Get instance field reference: public System.Byte r
    uint8_t& dyn_r();
    // Get instance field reference: public System.Byte g
    uint8_t& dyn_g();
    // Get instance field reference: public System.Byte b
    uint8_t& dyn_b();
    // Get instance field reference: public System.Byte a
    uint8_t& dyn_a();
    // public System.Void .ctor(System.Byte r, System.Byte g, System.Byte b, System.Byte a)
    // Offset: 0x1D06648
    // ABORTED: conflicts with another method.  Color32(uint8_t r, uint8_t g, uint8_t b, uint8_t a);
    // static public UnityEngine.Color32 Lerp(UnityEngine.Color32 a, UnityEngine.Color32 b, System.Single t)
    // Offset: 0x1D06988
    static UnityEngine::Color32 Lerp(UnityEngine::Color32 a, UnityEngine::Color32 b, float t);
    // public override System.String ToString()
    // Offset: 0x1D06AD0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.Color32
  #pragma pack(pop)
  static check_size<sizeof(Color32), 3 + sizeof(uint8_t)> __UnityEngine_Color32SizeCheck;
  static_assert(sizeof(Color32) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Color32::Color32
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Color32::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color32 (*)(UnityEngine::Color32, UnityEngine::Color32, float)>(&UnityEngine::Color32::Lerp)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color32), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color32::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Color32::*)()>(&UnityEngine::Color32::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color32), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
