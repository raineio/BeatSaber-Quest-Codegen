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
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonRequiredAttribute
  class JsonRequiredAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::JsonRequiredAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonRequiredAttribute*, "Newtonsoft.Json", "JsonRequiredAttribute");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.JsonRequiredAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10F892C
  // [AttributeUsageAttribute] Offset: 10F892C
  class JsonRequiredAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x1819A68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonRequiredAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::JsonRequiredAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonRequiredAttribute*, creationType>()));
    }
  }; // Newtonsoft.Json.JsonRequiredAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::JsonRequiredAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
