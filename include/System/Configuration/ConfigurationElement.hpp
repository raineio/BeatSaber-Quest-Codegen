// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
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
  // Autogenerated type: System.Configuration.ConfigurationElement
  class ConfigurationElement : public ::Il2CppObject {
    public:
    // protected internal System.Configuration.ConfigurationPropertyCollection get_Properties()
    // Offset: 0x1F7C0E0
    System::Configuration::ConfigurationPropertyCollection* get_Properties();
    // protected internal System.Boolean IsModified()
    // Offset: 0x1F7C120
    bool IsModified();
    // protected internal System.Void Reset(System.Configuration.ConfigurationElement parentElement)
    // Offset: 0x1F7C160
    void Reset(System::Configuration::ConfigurationElement* parentElement);
    // protected internal System.Void ResetModified()
    // Offset: 0x1F7C1A0
    void ResetModified();
  }; // System.Configuration.ConfigurationElement
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Configuration::ConfigurationElement*, "System.Configuration", "ConfigurationElement");
#pragma pack(pop)
