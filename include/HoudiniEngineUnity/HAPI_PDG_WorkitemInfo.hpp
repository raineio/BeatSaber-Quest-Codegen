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
  // Forward declaring type: HAPI_PDG_WorkitemInfo
  struct HAPI_PDG_WorkitemInfo;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_PDG_WorkitemInfo, "HoudiniEngineUnity", "HAPI_PDG_WorkitemInfo");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: HoudiniEngineUnity.HAPI_PDG_WorkitemInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_PDG_WorkitemInfo/*, public System::ValueType*/ {
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
    // public System.Int32 index
    // Size: 0x4
    // Offset: 0x0
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 numResults
    // Size: 0x4
    // Offset: 0x4
    int numResults;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 nameSH
    // Size: 0x4
    // Offset: 0x8
    int nameSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_PDG_WorkitemInfo
    constexpr HAPI_PDG_WorkitemInfo(int index_ = {}, int numResults_ = {}, int nameSH_ = {}) noexcept : index{index_}, numResults{numResults_}, nameSH{nameSH_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 index
    int& dyn_index();
    // Get instance field reference: public System.Int32 numResults
    int& dyn_numResults();
    // Get instance field reference: public System.Int32 nameSH
    int& dyn_nameSH();
  }; // HoudiniEngineUnity.HAPI_PDG_WorkitemInfo
  #pragma pack(pop)
  static check_size<sizeof(HAPI_PDG_WorkitemInfo), 8 + sizeof(int)> __HoudiniEngineUnity_HAPI_PDG_WorkitemInfoSizeCheck;
  static_assert(sizeof(HAPI_PDG_WorkitemInfo) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
