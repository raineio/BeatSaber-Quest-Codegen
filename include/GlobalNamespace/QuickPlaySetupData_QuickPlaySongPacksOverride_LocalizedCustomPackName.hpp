// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: QuickPlaySetupData/QuickPlaySongPacksOverride
#include "GlobalNamespace/QuickPlaySetupData_QuickPlaySongPacksOverride.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName*, "", "QuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPackName");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: QuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPackName
  // [TokenAttribute] Offset: FFFFFFFF
  class QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName : public ::Il2CppObject {
    public:
    public:
    // public System.String language
    // Size: 0x8
    // Offset: 0x10
    ::StringW language;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String packName
    // Size: 0x8
    // Offset: 0x18
    ::StringW packName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String language
    [[deprecated("Use field access instead!")]] ::StringW& dyn_language();
    // Get instance field reference: public System.String packName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_packName();
    // public System.Void .ctor()
    // Offset: 0x142A420
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName*, creationType>()));
    }
  }; // QuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPackName
  #pragma pack(pop)
  static check_size<sizeof(QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName), 24 + sizeof(::StringW)> __GlobalNamespace_QuickPlaySetupData_QuickPlaySongPacksOverride_LocalizedCustomPackNameSizeCheck;
  static_assert(sizeof(QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
