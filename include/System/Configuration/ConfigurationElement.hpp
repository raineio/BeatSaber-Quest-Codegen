// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Forward declaring type: ConfigurationPropertyCollection
  class ConfigurationPropertyCollection;
}
// Completed forward declares
// Type namespace: System.Configuration
namespace System::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Configuration.ConfigurationElement
  // [DefaultMemberAttribute] Offset: D86288
  class ConfigurationElement : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ConfigurationElement
    ConfigurationElement() noexcept {}
    // protected internal System.Configuration.ConfigurationPropertyCollection get_Properties()
    // Offset: 0x23F352C
    System::Configuration::ConfigurationPropertyCollection* get_Properties();
    // protected internal System.Boolean IsModified()
    // Offset: 0x23F356C
    bool IsModified();
    // protected internal System.Void Reset(System.Configuration.ConfigurationElement parentElement)
    // Offset: 0x23F35AC
    void Reset(System::Configuration::ConfigurationElement* parentElement);
    // protected internal System.Void ResetModified()
    // Offset: 0x23F35EC
    void ResetModified();
  }; // System.Configuration.ConfigurationElement
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Configuration::ConfigurationElement*, "System.Configuration", "ConfigurationElement");
// Writing MetadataGetter for method: System::Configuration::ConfigurationElement::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Configuration::ConfigurationPropertyCollection* (System::Configuration::ConfigurationElement::*)()>(&System::Configuration::ConfigurationElement::get_Properties)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::ConfigurationElement*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Configuration::ConfigurationElement::IsModified
// Il2CppName: IsModified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Configuration::ConfigurationElement::*)()>(&System::Configuration::ConfigurationElement::IsModified)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::ConfigurationElement*), "IsModified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Configuration::ConfigurationElement::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Configuration::ConfigurationElement::*)(System::Configuration::ConfigurationElement*)>(&System::Configuration::ConfigurationElement::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::ConfigurationElement*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Configuration::ConfigurationElement*>()});
  }
};
// Writing MetadataGetter for method: System::Configuration::ConfigurationElement::ResetModified
// Il2CppName: ResetModified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Configuration::ConfigurationElement::*)()>(&System::Configuration::ConfigurationElement::ResetModified)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::ConfigurationElement*), "ResetModified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
