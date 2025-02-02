// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Resolution
  struct Resolution;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Resolution, "UnityEngine", "Resolution");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Resolution
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 108B304
  struct Resolution/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Int32 m_Width
    // Size: 0x4
    // Offset: 0x0
    int m_Width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Height
    // Size: 0x4
    // Offset: 0x4
    int m_Height;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_RefreshRate
    // Size: 0x4
    // Offset: 0x8
    int m_RefreshRate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Resolution
    constexpr Resolution(int m_Width_ = {}, int m_Height_ = {}, int m_RefreshRate_ = {}) noexcept : m_Width{m_Width_}, m_Height{m_Height_}, m_RefreshRate{m_RefreshRate_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Int32 m_Width
    [[deprecated("Use field access instead!")]] int& dyn_m_Width();
    // Get instance field reference: private System.Int32 m_Height
    [[deprecated("Use field access instead!")]] int& dyn_m_Height();
    // Get instance field reference: private System.Int32 m_RefreshRate
    [[deprecated("Use field access instead!")]] int& dyn_m_RefreshRate();
    // public System.Int32 get_width()
    // Offset: 0x215D1DC
    int get_width();
    // public System.Int32 get_height()
    // Offset: 0x215D1E4
    int get_height();
    // public override System.String ToString()
    // Offset: 0x215D1EC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.Resolution
  #pragma pack(pop)
  static check_size<sizeof(Resolution), 8 + sizeof(int)> __UnityEngine_ResolutionSizeCheck;
  static_assert(sizeof(Resolution) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Resolution::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Resolution::*)()>(&UnityEngine::Resolution::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Resolution), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Resolution::get_height
// Il2CppName: get_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Resolution::*)()>(&UnityEngine::Resolution::get_height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Resolution), "get_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Resolution::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Resolution::*)()>(&UnityEngine::Resolution::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Resolution), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
