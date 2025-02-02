// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BloomPrePassBackgroundNonLightInstancedGroupRenderer
#include "GlobalNamespace/BloomPrePassBackgroundNonLightInstancedGroupRenderer.hpp"
// Including type: BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType
#include "GlobalNamespace/BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::SupportedProperty);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::SupportedProperty*, "", "BloomPrePassBackgroundNonLightInstancedGroupRenderer/SupportedProperty");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundNonLightInstancedGroupRenderer/SupportedProperty
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassBackgroundNonLightInstancedGroupRenderer::SupportedProperty : public ::Il2CppObject {
    public:
    public:
    // public BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType propertyType
    // Size: 0x4
    // Offset: 0x10
    ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::PropertyType propertyType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::PropertyType) == 0x4);
    // Padding between fields: propertyType and: propertyName
    char __padding0[0x4] = {};
    // public System.String propertyName
    // Size: 0x8
    // Offset: 0x18
    ::StringW propertyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 propertyId
    // Size: 0x4
    // Offset: 0x20
    int propertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType propertyType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::PropertyType& dyn_propertyType();
    // Get instance field reference: public System.String propertyName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_propertyName();
    // Get instance field reference: public System.Int32 propertyId
    [[deprecated("Use field access instead!")]] int& dyn_propertyId();
    // public System.Void .ctor()
    // Offset: 0x1CD181C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundNonLightInstancedGroupRenderer::SupportedProperty* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::SupportedProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundNonLightInstancedGroupRenderer::SupportedProperty*, creationType>()));
    }
  }; // BloomPrePassBackgroundNonLightInstancedGroupRenderer/SupportedProperty
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundNonLightInstancedGroupRenderer::SupportedProperty), 32 + sizeof(int)> __GlobalNamespace_BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedPropertySizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundNonLightInstancedGroupRenderer::SupportedProperty) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::SupportedProperty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
