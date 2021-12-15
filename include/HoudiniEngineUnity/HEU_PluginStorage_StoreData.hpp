// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_PluginStorage
#include "HoudiniEngineUnity/HEU_PluginStorage.hpp"
// Including type: HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.DataType
#include "HoudiniEngineUnity/HEU_PluginStorage_DataType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HoudiniEngineUnity::HEU_PluginStorage::StoreData);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_PluginStorage::StoreData*, "HoudiniEngineUnity", "HEU_PluginStorage/StoreData");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.StoreData
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_PluginStorage::StoreData : public ::Il2CppObject {
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
    // public HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.DataType _type
    // Size: 0x4
    // Offset: 0x10
    HoudiniEngineUnity::HEU_PluginStorage::DataType type;
    // Field size check
    static_assert(sizeof(HoudiniEngineUnity::HEU_PluginStorage::DataType) == 0x4);
    // Padding between fields: type and: valueStr
    char __padding0[0x4] = {};
    // public System.String _valueStr
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* valueStr;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Get instance field reference: public HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.DataType _type
    HoudiniEngineUnity::HEU_PluginStorage::DataType& dyn__type();
    // Get instance field reference: public System.String _valueStr
    ::Il2CppString*& dyn__valueStr();
    // public System.Void .ctor()
    // Offset: 0x1844534
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_PluginStorage::StoreData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_PluginStorage::StoreData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_PluginStorage::StoreData*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.StoreData
  #pragma pack(pop)
  static check_size<sizeof(HEU_PluginStorage::StoreData), 24 + sizeof(::Il2CppString*)> __HoudiniEngineUnity_HEU_PluginStorage_StoreDataSizeCheck;
  static_assert(sizeof(HEU_PluginStorage::StoreData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::StoreData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
