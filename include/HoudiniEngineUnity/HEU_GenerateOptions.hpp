// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_GenerateOptions
  struct HEU_GenerateOptions;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_GenerateOptions, "HoudiniEngineUnity", "HEU_GenerateOptions");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x5
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: HoudiniEngineUnity.HEU_GenerateOptions
  // [TokenAttribute] Offset: FFFFFFFF
  struct HEU_GenerateOptions/*, public System::ValueType*/ {
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
    // public System.Boolean _generateUVs
    // Size: 0x1
    // Offset: 0x0
    bool generateUVs;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _generateTangents
    // Size: 0x1
    // Offset: 0x1
    bool generateTangents;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _generateNormals
    // Size: 0x1
    // Offset: 0x2
    bool generateNormals;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _useLODGroups
    // Size: 0x1
    // Offset: 0x3
    bool useLODGroups;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _splitPoints
    // Size: 0x1
    // Offset: 0x4
    bool splitPoints;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: HEU_GenerateOptions
    constexpr HEU_GenerateOptions(bool generateUVs_ = {}, bool generateTangents_ = {}, bool generateNormals_ = {}, bool useLODGroups_ = {}, bool splitPoints_ = {}) noexcept : generateUVs{generateUVs_}, generateTangents{generateTangents_}, generateNormals{generateNormals_}, useLODGroups{useLODGroups_}, splitPoints{splitPoints_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Boolean _generateUVs
    bool& dyn__generateUVs();
    // Get instance field reference: public System.Boolean _generateTangents
    bool& dyn__generateTangents();
    // Get instance field reference: public System.Boolean _generateNormals
    bool& dyn__generateNormals();
    // Get instance field reference: public System.Boolean _useLODGroups
    bool& dyn__useLODGroups();
    // Get instance field reference: public System.Boolean _splitPoints
    bool& dyn__splitPoints();
  }; // HoudiniEngineUnity.HEU_GenerateOptions
  #pragma pack(pop)
  static check_size<sizeof(HEU_GenerateOptions), 4 + sizeof(bool)> __HoudiniEngineUnity_HEU_GenerateOptionsSizeCheck;
  static_assert(sizeof(HEU_GenerateOptions) == 0x5);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
