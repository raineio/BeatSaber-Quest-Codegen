// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.SpriteAssetUtilities.TexturePacker
#include "TMPro/SpriteAssetUtilities/TexturePacker.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SpriteAssetUtilities::TexturePacker::SpriteFrame, "TMPro.SpriteAssetUtilities", "TexturePacker/SpriteFrame");
// Type namespace: TMPro.SpriteAssetUtilities
namespace TMPro::SpriteAssetUtilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.SpriteAssetUtilities.TexturePacker/TMPro.SpriteAssetUtilities.SpriteFrame
  // [TokenAttribute] Offset: FFFFFFFF
  struct TexturePacker::SpriteFrame/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single x
    // Size: 0x4
    // Offset: 0x0
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x4
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single w
    // Size: 0x4
    // Offset: 0x8
    float w;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single h
    // Size: 0x4
    // Offset: 0xC
    float h;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: SpriteFrame
    constexpr SpriteFrame(float x_ = {}, float y_ = {}, float w_ = {}, float h_ = {}) noexcept : x{x_}, y{y_}, w{w_}, h{h_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single x
    [[deprecated("Use field access instead!")]] float& dyn_x();
    // Get instance field reference: public System.Single y
    [[deprecated("Use field access instead!")]] float& dyn_y();
    // Get instance field reference: public System.Single w
    [[deprecated("Use field access instead!")]] float& dyn_w();
    // Get instance field reference: public System.Single h
    [[deprecated("Use field access instead!")]] float& dyn_h();
    // public override System.String ToString()
    // Offset: 0x14A962C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // TMPro.SpriteAssetUtilities.TexturePacker/TMPro.SpriteAssetUtilities.SpriteFrame
  #pragma pack(pop)
  static check_size<sizeof(TexturePacker::SpriteFrame), 12 + sizeof(float)> __TMPro_SpriteAssetUtilities_TexturePacker_SpriteFrameSizeCheck;
  static_assert(sizeof(TexturePacker::SpriteFrame) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::SpriteAssetUtilities::TexturePacker::SpriteFrame::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (TMPro::SpriteAssetUtilities::TexturePacker::SpriteFrame::*)()>(&TMPro::SpriteAssetUtilities::TexturePacker::SpriteFrame::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::SpriteAssetUtilities::TexturePacker::SpriteFrame), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
