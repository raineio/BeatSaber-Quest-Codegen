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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VersionSaveData
  class VersionSaveData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VersionSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VersionSaveData*, "", "VersionSaveData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VersionSaveData
  // [TokenAttribute] Offset: FFFFFFFF
  class VersionSaveData : public ::Il2CppObject {
    public:
    public:
    // public System.String version
    // Size: 0x8
    // Offset: 0x10
    ::StringW version;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return version;
    }
    // Get instance field reference: public System.String version
    [[deprecated("Use field access instead!")]] ::StringW& dyn_version();
    // public System.Void .ctor()
    // Offset: 0x165E110
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VersionSaveData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VersionSaveData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VersionSaveData*, creationType>()));
    }
  }; // VersionSaveData
  #pragma pack(pop)
  static check_size<sizeof(VersionSaveData), 16 + sizeof(::StringW)> __GlobalNamespace_VersionSaveDataSizeCheck;
  static_assert(sizeof(VersionSaveData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VersionSaveData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
