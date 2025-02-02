// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_TextElement_Legacy
  class TMP_TextElement_Legacy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_TextElement_Legacy);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_TextElement_Legacy*, "TMPro", "TMP_TextElement_Legacy");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_TextElement_Legacy
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_TextElement_Legacy : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 id
    // Size: 0x4
    // Offset: 0x10
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single x
    // Size: 0x4
    // Offset: 0x14
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x18
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single width
    // Size: 0x4
    // Offset: 0x1C
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single height
    // Size: 0x4
    // Offset: 0x20
    float height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single xOffset
    // Size: 0x4
    // Offset: 0x24
    float xOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single yOffset
    // Size: 0x4
    // Offset: 0x28
    float yOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single xAdvance
    // Size: 0x4
    // Offset: 0x2C
    float xAdvance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single scale
    // Size: 0x4
    // Offset: 0x30
    float scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Int32 id
    [[deprecated("Use field access instead!")]] int& dyn_id();
    // Get instance field reference: public System.Single x
    [[deprecated("Use field access instead!")]] float& dyn_x();
    // Get instance field reference: public System.Single y
    [[deprecated("Use field access instead!")]] float& dyn_y();
    // Get instance field reference: public System.Single width
    [[deprecated("Use field access instead!")]] float& dyn_width();
    // Get instance field reference: public System.Single height
    [[deprecated("Use field access instead!")]] float& dyn_height();
    // Get instance field reference: public System.Single xOffset
    [[deprecated("Use field access instead!")]] float& dyn_xOffset();
    // Get instance field reference: public System.Single yOffset
    [[deprecated("Use field access instead!")]] float& dyn_yOffset();
    // Get instance field reference: public System.Single xAdvance
    [[deprecated("Use field access instead!")]] float& dyn_xAdvance();
    // Get instance field reference: public System.Single scale
    [[deprecated("Use field access instead!")]] float& dyn_scale();
    // public System.Void .ctor()
    // Offset: 0x1944734
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_TextElement_Legacy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_TextElement_Legacy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_TextElement_Legacy*, creationType>()));
    }
  }; // TMPro.TMP_TextElement_Legacy
  #pragma pack(pop)
  static check_size<sizeof(TMP_TextElement_Legacy), 48 + sizeof(float)> __TMPro_TMP_TextElement_LegacySizeCheck;
  static_assert(sizeof(TMP_TextElement_Legacy) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_TextElement_Legacy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
