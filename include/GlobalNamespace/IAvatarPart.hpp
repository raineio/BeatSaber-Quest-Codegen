// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IAvatarPart
  class IAvatarPart;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::IAvatarPart);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IAvatarPart*, "", "IAvatarPart");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IAvatarPart
  // [TokenAttribute] Offset: FFFFFFFF
  class IAvatarPart {
    public:
    // public System.String get_id()
    // Offset: 0xFFFFFFFF
    ::StringW get_id();
    // public System.String get_localizedName()
    // Offset: 0xFFFFFFFF
    ::StringW get_localizedName();
  }; // IAvatarPart
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IAvatarPart::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::IAvatarPart::*)()>(&GlobalNamespace::IAvatarPart::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IAvatarPart*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IAvatarPart::get_localizedName
// Il2CppName: get_localizedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::IAvatarPart::*)()>(&GlobalNamespace::IAvatarPart::get_localizedName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IAvatarPart*), "get_localizedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
