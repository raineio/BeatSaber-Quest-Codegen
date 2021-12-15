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
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_InputAssetPreset
  class HEU_InputAssetPreset;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HoudiniEngineUnity::HEU_InputAssetPreset);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_InputAssetPreset*, "HoudiniEngineUnity", "HEU_InputAssetPreset");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_InputAssetPreset
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_InputAssetPreset : public ::Il2CppObject {
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
    // public System.String _gameObjectName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* gameObjectName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return gameObjectName;
    }
    // Get instance field reference: public System.String _gameObjectName
    ::Il2CppString*& dyn__gameObjectName();
    // public System.Void .ctor()
    // Offset: 0x158ABE4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_InputAssetPreset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_InputAssetPreset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_InputAssetPreset*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_InputAssetPreset
  #pragma pack(pop)
  static check_size<sizeof(HEU_InputAssetPreset), 16 + sizeof(::Il2CppString*)> __HoudiniEngineUnity_HEU_InputAssetPresetSizeCheck;
  static_assert(sizeof(HEU_InputAssetPreset) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputAssetPreset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
