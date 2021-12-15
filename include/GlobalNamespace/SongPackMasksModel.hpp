// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SongPackMaskModelSO
  class SongPackMaskModelSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SongPackMasksModel
  class SongPackMasksModel;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::SongPackMasksModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongPackMasksModel*, "", "SongPackMasksModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: SongPackMasksModel
  // [TokenAttribute] Offset: FFFFFFFF
  class SongPackMasksModel : public ::Il2CppObject {
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
    // private readonly SongPackMaskModelSO _songPackMaskModel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::SongPackMaskModelSO* songPackMaskModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMaskModelSO*) == 0x8);
    // private readonly SongPackMask _allSongPackMask
    // Size: 0x10
    // Offset: 0x18
    GlobalNamespace::SongPackMask allSongPackMask;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMask) == 0x10);
    public:
    // Get instance field reference: private readonly SongPackMaskModelSO _songPackMaskModel
    GlobalNamespace::SongPackMaskModelSO*& dyn__songPackMaskModel();
    // Get instance field reference: private readonly SongPackMask _allSongPackMask
    GlobalNamespace::SongPackMask& dyn__allSongPackMask();
    // public System.Void .ctor(SongPackMaskModelSO songPackMasks)
    // Offset: 0x1217344
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongPackMasksModel* New_ctor(GlobalNamespace::SongPackMaskModelSO* songPackMasks) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SongPackMasksModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongPackMasksModel*, creationType>(songPackMasks)));
    }
    // public SongPackMask GetAllSongsMask()
    // Offset: 0x12173CC
    GlobalNamespace::SongPackMask GetAllSongsMask();
    // public System.String GetSongPackMaskText(in SongPackMask songPackMask)
    // Offset: 0x12173D8
    ::Il2CppString* GetSongPackMaskText(ByRef<GlobalNamespace::SongPackMask> songPackMask);
    // public System.String GetSongPackMaskText(in SongPackMask songPackMask, out System.Boolean plural)
    // Offset: 0x12173FC
    ::Il2CppString* GetSongPackMaskText(ByRef<GlobalNamespace::SongPackMask> songPackMask, ByRef<bool> plural);
  }; // SongPackMasksModel
  #pragma pack(pop)
  static check_size<sizeof(SongPackMasksModel), 24 + sizeof(GlobalNamespace::SongPackMask)> __GlobalNamespace_SongPackMasksModelSizeCheck;
  static_assert(sizeof(SongPackMasksModel) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SongPackMasksModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SongPackMasksModel::GetAllSongsMask
// Il2CppName: GetAllSongsMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SongPackMask (GlobalNamespace::SongPackMasksModel::*)()>(&GlobalNamespace::SongPackMasksModel::GetAllSongsMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMasksModel*), "GetAllSongsMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMasksModel::GetSongPackMaskText
// Il2CppName: GetSongPackMaskText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::SongPackMasksModel::*)(ByRef<GlobalNamespace::SongPackMask>)>(&GlobalNamespace::SongPackMasksModel::GetSongPackMaskText)> {
  static const MethodInfo* get() {
    static auto* songPackMask = &::il2cpp_utils::GetClassFromName("", "SongPackMask")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMasksModel*), "GetSongPackMaskText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songPackMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMasksModel::GetSongPackMaskText
// Il2CppName: GetSongPackMaskText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::SongPackMasksModel::*)(ByRef<GlobalNamespace::SongPackMask>, ByRef<bool>)>(&GlobalNamespace::SongPackMasksModel::GetSongPackMaskText)> {
  static const MethodInfo* get() {
    static auto* songPackMask = &::il2cpp_utils::GetClassFromName("", "SongPackMask")->this_arg;
    static auto* plural = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMasksModel*), "GetSongPackMaskText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songPackMask, plural});
  }
};
