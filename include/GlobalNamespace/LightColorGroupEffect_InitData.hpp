// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightColorGroupEffect
#include "GlobalNamespace/LightColorGroupEffect.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightColorGroupEffect::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorGroupEffect::InitData*, "", "LightColorGroupEffect/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: LightColorGroupEffect/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class LightColorGroupEffect::InitData : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Int32 groupId
    // Size: 0x4
    // Offset: 0x10
    int groupId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 elementId
    // Size: 0x4
    // Offset: 0x14
    int elementId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 lightId
    // Size: 0x4
    // Offset: 0x18
    int lightId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public readonly System.Int32 groupId
    [[deprecated("Use field access instead!")]] int& dyn_groupId();
    // Get instance field reference: public readonly System.Int32 elementId
    [[deprecated("Use field access instead!")]] int& dyn_elementId();
    // Get instance field reference: public readonly System.Int32 lightId
    [[deprecated("Use field access instead!")]] int& dyn_lightId();
    // public System.Void .ctor(System.Int32 groupId, System.Int32 elementId, System.Int32 lightId)
    // Offset: 0x14C2F0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightColorGroupEffect::InitData* New_ctor(int groupId, int elementId, int lightId) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightColorGroupEffect::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightColorGroupEffect::InitData*, creationType>(groupId, elementId, lightId)));
    }
  }; // LightColorGroupEffect/InitData
  #pragma pack(pop)
  static check_size<sizeof(LightColorGroupEffect::InitData), 24 + sizeof(int)> __GlobalNamespace_LightColorGroupEffect_InitDataSizeCheck;
  static_assert(sizeof(LightColorGroupEffect::InitData) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightColorGroupEffect::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
