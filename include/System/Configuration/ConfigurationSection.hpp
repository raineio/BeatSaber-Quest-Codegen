// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Configuration.ConfigurationElement
#include "System/Configuration/ConfigurationElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlReader
  class XmlReader;
}
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Forward declaring type: ConfigurationSaveMode
  struct ConfigurationSaveMode;
}
// Completed forward declares
// Type namespace: System.Configuration
namespace System::Configuration {
  // Forward declaring type: ConfigurationSection
  class ConfigurationSection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Configuration::ConfigurationSection);
DEFINE_IL2CPP_ARG_TYPE(System::Configuration::ConfigurationSection*, "System.Configuration", "ConfigurationSection");
// Type namespace: System.Configuration
namespace System::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Configuration.ConfigurationSection
  // [TokenAttribute] Offset: FFFFFFFF
  class ConfigurationSection : public System::Configuration::ConfigurationElement {
    public:
    // protected internal System.Void DeserializeSection(System.Xml.XmlReader reader)
    // Offset: 0x26D3634
    void DeserializeSection(System::Xml::XmlReader* reader);
    // protected internal System.String SerializeSection(System.Configuration.ConfigurationElement parentElement, System.String name, System.Configuration.ConfigurationSaveMode saveMode)
    // Offset: 0x26D36F4
    ::StringW SerializeSection(System::Configuration::ConfigurationElement* parentElement, ::StringW name, System::Configuration::ConfigurationSaveMode saveMode);
    // protected internal override System.Boolean IsModified()
    // Offset: 0x26D3674
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Boolean ConfigurationElement::IsModified()
    bool IsModified();
    // protected internal override System.Void ResetModified()
    // Offset: 0x26D36B4
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Void ConfigurationElement::ResetModified()
    void ResetModified();
  }; // System.Configuration.ConfigurationSection
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Configuration::ConfigurationSection::DeserializeSection
// Il2CppName: DeserializeSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Configuration::ConfigurationSection::*)(System::Xml::XmlReader*)>(&System::Configuration::ConfigurationSection::DeserializeSection)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::ConfigurationSection*), "DeserializeSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: System::Configuration::ConfigurationSection::SerializeSection
// Il2CppName: SerializeSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Configuration::ConfigurationSection::*)(System::Configuration::ConfigurationElement*, ::StringW, System::Configuration::ConfigurationSaveMode)>(&System::Configuration::ConfigurationSection::SerializeSection)> {
  static const MethodInfo* get() {
    static auto* parentElement = &::il2cpp_utils::GetClassFromName("System.Configuration", "ConfigurationElement")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* saveMode = &::il2cpp_utils::GetClassFromName("System.Configuration", "ConfigurationSaveMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::ConfigurationSection*), "SerializeSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentElement, name, saveMode});
  }
};
// Writing MetadataGetter for method: System::Configuration::ConfigurationSection::IsModified
// Il2CppName: IsModified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Configuration::ConfigurationSection::*)()>(&System::Configuration::ConfigurationSection::IsModified)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::ConfigurationSection*), "IsModified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Configuration::ConfigurationSection::ResetModified
// Il2CppName: ResetModified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Configuration::ConfigurationSection::*)()>(&System::Configuration::ConfigurationSection::ResetModified)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::ConfigurationSection*), "ResetModified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
