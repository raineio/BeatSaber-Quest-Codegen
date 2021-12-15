// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeSO
  class ColorSchemeSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: INoTransitionColorSchemeProvider
  class INoTransitionColorSchemeProvider;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::INoTransitionColorSchemeProvider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoTransitionColorSchemeProvider*, "", "INoTransitionColorSchemeProvider");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: INoTransitionColorSchemeProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class INoTransitionColorSchemeProvider {
    public:
    // public ColorSchemeSO get_colorScheme()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::ColorSchemeSO* get_colorScheme();
    // public System.Void set_colorScheme(ColorSchemeSO value)
    // Offset: 0xFFFFFFFF
    void set_colorScheme(GlobalNamespace::ColorSchemeSO* value);
  }; // INoTransitionColorSchemeProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::INoTransitionColorSchemeProvider::get_colorScheme
// Il2CppName: get_colorScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ColorSchemeSO* (GlobalNamespace::INoTransitionColorSchemeProvider::*)()>(&GlobalNamespace::INoTransitionColorSchemeProvider::get_colorScheme)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INoTransitionColorSchemeProvider*), "get_colorScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INoTransitionColorSchemeProvider::set_colorScheme
// Il2CppName: set_colorScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INoTransitionColorSchemeProvider::*)(GlobalNamespace::ColorSchemeSO*)>(&GlobalNamespace::INoTransitionColorSchemeProvider::set_colorScheme)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "ColorSchemeSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INoTransitionColorSchemeProvider*), "set_colorScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
