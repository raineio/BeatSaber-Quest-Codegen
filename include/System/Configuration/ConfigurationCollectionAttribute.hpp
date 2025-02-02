// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: ConfigurationCollectionAttribute
  class ConfigurationCollectionAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Configuration::ConfigurationCollectionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::ConfigurationCollectionAttribute*, "System.Configuration", "ConfigurationCollectionAttribute");
// Type namespace: System.Configuration
namespace System::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Configuration.ConfigurationCollectionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 107FFA4
  class ConfigurationCollectionAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor(System.Type itemType)
    // Offset: 0x2BA1488
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConfigurationCollectionAttribute* New_ctor(::System::Type* itemType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Configuration::ConfigurationCollectionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConfigurationCollectionAttribute*, creationType>(itemType)));
    }
  }; // System.Configuration.ConfigurationCollectionAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Configuration::ConfigurationCollectionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
