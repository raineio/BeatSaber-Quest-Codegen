// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LIV.SDK.Unity.SDKVector3
#include "LIV/SDK/Unity/SDKVector3.hpp"
// Including type: LIV.SDK.Unity.SDKQuaternion
#include "LIV/SDK/Unity/SDKQuaternion.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: SDKTransform
  struct SDKTransform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKTransform, "LIV.SDK.Unity", "SDKTransform");
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: LIV.SDK.Unity.SDKTransform
  // [TokenAttribute] Offset: FFFFFFFF
  struct SDKTransform/*, public ::System::ValueType*/ {
    public:
    public:
    // public LIV.SDK.Unity.SDKVector3 localPosition
    // Size: 0xC
    // Offset: 0x0
    ::LIV::SDK::Unity::SDKVector3 localPosition;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKVector3) == 0xC);
    // public LIV.SDK.Unity.SDKQuaternion localRotation
    // Size: 0x10
    // Offset: 0xC
    ::LIV::SDK::Unity::SDKQuaternion localRotation;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKQuaternion) == 0x10);
    // public LIV.SDK.Unity.SDKVector3 localScale
    // Size: 0xC
    // Offset: 0x1C
    ::LIV::SDK::Unity::SDKVector3 localScale;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKVector3) == 0xC);
    public:
    // Creating value type constructor for type: SDKTransform
    constexpr SDKTransform(::LIV::SDK::Unity::SDKVector3 localPosition_ = {}, ::LIV::SDK::Unity::SDKQuaternion localRotation_ = {}, ::LIV::SDK::Unity::SDKVector3 localScale_ = {}) noexcept : localPosition{localPosition_}, localRotation{localRotation_}, localScale{localScale_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public LIV.SDK.Unity.SDKVector3 localPosition
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKVector3& dyn_localPosition();
    // Get instance field reference: public LIV.SDK.Unity.SDKQuaternion localRotation
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKQuaternion& dyn_localRotation();
    // Get instance field reference: public LIV.SDK.Unity.SDKVector3 localScale
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKVector3& dyn_localScale();
    // static public LIV.SDK.Unity.SDKTransform get_empty()
    // Offset: 0x2A4A79C
    static ::LIV::SDK::Unity::SDKTransform get_empty();
    // public override System.String ToString()
    // Offset: 0x2A50A00
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // LIV.SDK.Unity.SDKTransform
  #pragma pack(pop)
  static check_size<sizeof(SDKTransform), 28 + sizeof(::LIV::SDK::Unity::SDKVector3)> __LIV_SDK_Unity_SDKTransformSizeCheck;
  static_assert(sizeof(SDKTransform) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKTransform::get_empty
// Il2CppName: get_empty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKTransform (*)()>(&LIV::SDK::Unity::SDKTransform::get_empty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKTransform), "get_empty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKTransform::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LIV::SDK::Unity::SDKTransform::*)()>(&LIV::SDK::Unity::SDKTransform::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKTransform), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
