// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerAvatarData
  struct MultiplayerAvatarData;
  // Forward declaring type: AvatarData
  class AvatarData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AvatarDataMultiplayerAvatarDataConverter
  class AvatarDataMultiplayerAvatarDataConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AvatarDataMultiplayerAvatarDataConverter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarDataMultiplayerAvatarDataConverter*, "", "AvatarDataMultiplayerAvatarDataConverter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: AvatarDataMultiplayerAvatarDataConverter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class AvatarDataMultiplayerAvatarDataConverter : public ::Il2CppObject {
    public:
    // static public MultiplayerAvatarData CreateMultiplayerAvatarData(AvatarData avatarData)
    // Offset: 0x14F5F98
    static ::GlobalNamespace::MultiplayerAvatarData CreateMultiplayerAvatarData(::GlobalNamespace::AvatarData* avatarData);
    // static public AvatarData CreateAvatarData(MultiplayerAvatarData multiplayerAvatarData)
    // Offset: 0x14F611C
    static ::GlobalNamespace::AvatarData* CreateAvatarData(::GlobalNamespace::MultiplayerAvatarData multiplayerAvatarData);
  }; // AvatarDataMultiplayerAvatarDataConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarDataMultiplayerAvatarDataConverter::CreateMultiplayerAvatarData
// Il2CppName: CreateMultiplayerAvatarData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerAvatarData (*)(::GlobalNamespace::AvatarData*)>(&GlobalNamespace::AvatarDataMultiplayerAvatarDataConverter::CreateMultiplayerAvatarData)> {
  static const MethodInfo* get() {
    static auto* avatarData = &::il2cpp_utils::GetClassFromName("", "AvatarData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarDataMultiplayerAvatarDataConverter*), "CreateMultiplayerAvatarData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{avatarData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarDataMultiplayerAvatarDataConverter::CreateAvatarData
// Il2CppName: CreateAvatarData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AvatarData* (*)(::GlobalNamespace::MultiplayerAvatarData)>(&GlobalNamespace::AvatarDataMultiplayerAvatarDataConverter::CreateAvatarData)> {
  static const MethodInfo* get() {
    static auto* multiplayerAvatarData = &::il2cpp_utils::GetClassFromName("", "MultiplayerAvatarData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarDataMultiplayerAvatarDataConverter*), "CreateAvatarData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiplayerAvatarData});
  }
};
