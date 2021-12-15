// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: HoudiniEngineUnity.HAPI_PackedPrimInstancingMode
#include "HoudiniEngineUnity/HAPI_PackedPrimInstancingMode.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HAPI_CookOptions
  struct HAPI_CookOptions;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_CookOptions, "HoudiniEngineUnity", "HAPI_CookOptions");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: HoudiniEngineUnity.HAPI_CookOptions
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_CookOptions/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Boolean splitGeosByGroup
    // Size: 0x1
    // Offset: 0x0
    bool splitGeosByGroup;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean splitGeosByAttribute
    // Size: 0x1
    // Offset: 0x1
    bool splitGeosByAttribute;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: splitGeosByAttribute and: splitAttrSH
    char __padding1[0x2] = {};
    // public System.Int32 splitAttrSH
    // Size: 0x4
    // Offset: 0x4
    int splitAttrSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 maxVerticesPerPrimitive
    // Size: 0x4
    // Offset: 0x8
    int maxVerticesPerPrimitive;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean refineCurveToLinear
    // Size: 0x1
    // Offset: 0xC
    bool refineCurveToLinear;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: refineCurveToLinear and: curveRefineLOD
    char __padding4[0x3] = {};
    // public System.Single curveRefineLOD
    // Size: 0x4
    // Offset: 0x10
    float curveRefineLOD;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean clearErrorsAndWarnings
    // Size: 0x1
    // Offset: 0x14
    bool clearErrorsAndWarnings;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean cookTemplatedGeos
    // Size: 0x1
    // Offset: 0x15
    bool cookTemplatedGeos;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean splitPointsByVertexAttributes
    // Size: 0x1
    // Offset: 0x16
    bool splitPointsByVertexAttributes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: splitPointsByVertexAttributes and: packedPrimInstancingMode
    char __padding8[0x1] = {};
    // public HoudiniEngineUnity.HAPI_PackedPrimInstancingMode packedPrimInstancingMode
    // Size: 0x4
    // Offset: 0x18
    HoudiniEngineUnity::HAPI_PackedPrimInstancingMode packedPrimInstancingMode;
    // Field size check
    static_assert(sizeof(HoudiniEngineUnity::HAPI_PackedPrimInstancingMode) == 0x4);
    // public System.Boolean handleBoxPartTypes
    // Size: 0x1
    // Offset: 0x1C
    bool handleBoxPartTypes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean handleSpherePartTypes
    // Size: 0x1
    // Offset: 0x1D
    bool handleSpherePartTypes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean checkPartChanges
    // Size: 0x1
    // Offset: 0x1E
    bool checkPartChanges;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean cacheMeshTopology
    // Size: 0x1
    // Offset: 0x1F
    bool cacheMeshTopology;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Int32 extraFlags
    // Size: 0x4
    // Offset: 0x20
    int extraFlags;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_CookOptions
    constexpr HAPI_CookOptions(bool splitGeosByGroup_ = {}, bool splitGeosByAttribute_ = {}, int splitAttrSH_ = {}, int maxVerticesPerPrimitive_ = {}, bool refineCurveToLinear_ = {}, float curveRefineLOD_ = {}, bool clearErrorsAndWarnings_ = {}, bool cookTemplatedGeos_ = {}, bool splitPointsByVertexAttributes_ = {}, HoudiniEngineUnity::HAPI_PackedPrimInstancingMode packedPrimInstancingMode_ = {}, bool handleBoxPartTypes_ = {}, bool handleSpherePartTypes_ = {}, bool checkPartChanges_ = {}, bool cacheMeshTopology_ = {}, int extraFlags_ = {}) noexcept : splitGeosByGroup{splitGeosByGroup_}, splitGeosByAttribute{splitGeosByAttribute_}, splitAttrSH{splitAttrSH_}, maxVerticesPerPrimitive{maxVerticesPerPrimitive_}, refineCurveToLinear{refineCurveToLinear_}, curveRefineLOD{curveRefineLOD_}, clearErrorsAndWarnings{clearErrorsAndWarnings_}, cookTemplatedGeos{cookTemplatedGeos_}, splitPointsByVertexAttributes{splitPointsByVertexAttributes_}, packedPrimInstancingMode{packedPrimInstancingMode_}, handleBoxPartTypes{handleBoxPartTypes_}, handleSpherePartTypes{handleSpherePartTypes_}, checkPartChanges{checkPartChanges_}, cacheMeshTopology{cacheMeshTopology_}, extraFlags{extraFlags_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Boolean splitGeosByGroup
    bool& dyn_splitGeosByGroup();
    // Get instance field reference: public System.Boolean splitGeosByAttribute
    bool& dyn_splitGeosByAttribute();
    // Get instance field reference: public System.Int32 splitAttrSH
    int& dyn_splitAttrSH();
    // Get instance field reference: public System.Int32 maxVerticesPerPrimitive
    int& dyn_maxVerticesPerPrimitive();
    // Get instance field reference: public System.Boolean refineCurveToLinear
    bool& dyn_refineCurveToLinear();
    // Get instance field reference: public System.Single curveRefineLOD
    float& dyn_curveRefineLOD();
    // Get instance field reference: public System.Boolean clearErrorsAndWarnings
    bool& dyn_clearErrorsAndWarnings();
    // Get instance field reference: public System.Boolean cookTemplatedGeos
    bool& dyn_cookTemplatedGeos();
    // Get instance field reference: public System.Boolean splitPointsByVertexAttributes
    bool& dyn_splitPointsByVertexAttributes();
    // Get instance field reference: public HoudiniEngineUnity.HAPI_PackedPrimInstancingMode packedPrimInstancingMode
    HoudiniEngineUnity::HAPI_PackedPrimInstancingMode& dyn_packedPrimInstancingMode();
    // Get instance field reference: public System.Boolean handleBoxPartTypes
    bool& dyn_handleBoxPartTypes();
    // Get instance field reference: public System.Boolean handleSpherePartTypes
    bool& dyn_handleSpherePartTypes();
    // Get instance field reference: public System.Boolean checkPartChanges
    bool& dyn_checkPartChanges();
    // Get instance field reference: public System.Boolean cacheMeshTopology
    bool& dyn_cacheMeshTopology();
    // Get instance field reference: public System.Int32 extraFlags
    int& dyn_extraFlags();
  }; // HoudiniEngineUnity.HAPI_CookOptions
  #pragma pack(pop)
  static check_size<sizeof(HAPI_CookOptions), 32 + sizeof(int)> __HoudiniEngineUnity_HAPI_CookOptionsSizeCheck;
  static_assert(sizeof(HAPI_CookOptions) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
