// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Configuration
namespace System::Configuration {
  // Autogenerated type: System.Configuration.ConfigurationCollectionAttribute
  class ConfigurationCollectionAttribute : public System::Attribute {
    public:
    // public System.Void .ctor(System.Type itemType)
    // Offset: 0x1F7C0DC
    static ConfigurationCollectionAttribute* New_ctor(System::Type* itemType);
  }; // System.Configuration.ConfigurationCollectionAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Configuration::ConfigurationCollectionAttribute*, "System.Configuration", "ConfigurationCollectionAttribute");
#pragma pack(pop)
