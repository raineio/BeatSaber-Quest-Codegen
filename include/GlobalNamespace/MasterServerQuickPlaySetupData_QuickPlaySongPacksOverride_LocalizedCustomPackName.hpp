// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride
#include "GlobalNamespace/MasterServerQuickPlaySetupData_QuickPlaySongPacksOverride.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName*, "", "MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPackName");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPackName
  // [TokenAttribute] Offset: FFFFFFFF
  class MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName : public ::Il2CppObject {
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
    // public System.String language
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* language;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String packName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* packName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Get instance field reference: public System.String language
    ::Il2CppString*& dyn_language();
    // Get instance field reference: public System.String packName
    ::Il2CppString*& dyn_packName();
    // public System.Void .ctor()
    // Offset: 0x1158CA0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName*, creationType>()));
    }
  }; // MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPackName
  #pragma pack(pop)
  static check_size<sizeof(MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName), 24 + sizeof(::Il2CppString*)> __GlobalNamespace_MasterServerQuickPlaySetupData_QuickPlaySongPacksOverride_LocalizedCustomPackNameSizeCheck;
  static_assert(sizeof(MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
