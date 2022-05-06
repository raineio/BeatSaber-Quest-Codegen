// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Serialization.JsonPrimitiveContract
#include "Newtonsoft/Json/Serialization/JsonPrimitiveContract.hpp"
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
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: JsonStringContract
  class JsonStringContract;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonStringContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonStringContract*, "Newtonsoft.Json.Serialization", "JsonStringContract");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Serialization.JsonStringContract
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class JsonStringContract : public ::Newtonsoft::Json::Serialization::JsonPrimitiveContract {
    public:
    // public System.Void .ctor(System.Type underlyingType)
    // Offset: 0x2083244
    // Implemented from: Newtonsoft.Json.Serialization.JsonPrimitiveContract
    // Base method: System.Void JsonPrimitiveContract::.ctor(System.Type underlyingType)
    // Base method: System.Void JsonContract::.ctor(System.Type underlyingType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonStringContract* New_ctor(::System::Type* underlyingType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::JsonStringContract::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonStringContract*, creationType>(underlyingType)));
    }
  }; // Newtonsoft.Json.Serialization.JsonStringContract
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonStringContract::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
