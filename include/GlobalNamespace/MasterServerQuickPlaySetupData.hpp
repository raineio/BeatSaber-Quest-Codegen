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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MasterServerQuickPlaySetupData
  class MasterServerQuickPlaySetupData;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MasterServerQuickPlaySetupData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerQuickPlaySetupData*, "", "MasterServerQuickPlaySetupData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MasterServerQuickPlaySetupData
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class MasterServerQuickPlaySetupData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride
    class QuickPlaySongPacksOverride;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride quickPlayAvailablePacksOverride
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride* quickPlayAvailablePacksOverride;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride*) == 0x8);
    public:
    // Creating conversion operator: operator GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride*
    constexpr operator GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride*() const noexcept {
      return quickPlayAvailablePacksOverride;
    }
    // Get instance field reference: public MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride quickPlayAvailablePacksOverride
    GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride*& dyn_quickPlayAvailablePacksOverride();
    // public System.Boolean get_hasOverride()
    // Offset: 0x1158B08
    bool get_hasOverride();
    // public System.Void .ctor()
    // Offset: 0x1158B8C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MasterServerQuickPlaySetupData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MasterServerQuickPlaySetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MasterServerQuickPlaySetupData*, creationType>()));
    }
  }; // MasterServerQuickPlaySetupData
  #pragma pack(pop)
  static check_size<sizeof(MasterServerQuickPlaySetupData), 16 + sizeof(GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride*)> __GlobalNamespace_MasterServerQuickPlaySetupDataSizeCheck;
  static_assert(sizeof(MasterServerQuickPlaySetupData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MasterServerQuickPlaySetupData::get_hasOverride
// Il2CppName: get_hasOverride
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MasterServerQuickPlaySetupData::*)()>(&GlobalNamespace::MasterServerQuickPlaySetupData::get_hasOverride)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerQuickPlaySetupData*), "get_hasOverride", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MasterServerQuickPlaySetupData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
