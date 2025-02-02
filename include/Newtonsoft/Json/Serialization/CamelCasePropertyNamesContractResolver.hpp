// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Serialization.DefaultContractResolver
#include "Newtonsoft/Json/Serialization/DefaultContractResolver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: CamelCasePropertyNamesContractResolver
  class CamelCasePropertyNamesContractResolver;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*, "Newtonsoft.Json.Serialization", "CamelCasePropertyNamesContractResolver");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x23
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.CamelCasePropertyNamesContractResolver
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class CamelCasePropertyNamesContractResolver : public ::Newtonsoft::Json::Serialization::DefaultContractResolver {
    public:
    // public System.Void .ctor()
    // Offset: 0x17ACB10
    // Implemented from: Newtonsoft.Json.Serialization.DefaultContractResolver
    // Base method: System.Void DefaultContractResolver::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CamelCasePropertyNamesContractResolver* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CamelCasePropertyNamesContractResolver*, creationType>()));
    }
    // protected override System.String ResolvePropertyName(System.String propertyName)
    // Offset: 0x17ACBAC
    // Implemented from: Newtonsoft.Json.Serialization.DefaultContractResolver
    // Base method: System.String DefaultContractResolver::ResolvePropertyName(System.String propertyName)
    ::StringW ResolvePropertyName(::StringW propertyName);
  }; // Newtonsoft.Json.Serialization.CamelCasePropertyNamesContractResolver
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::ResolvePropertyName
// Il2CppName: ResolvePropertyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::*)(::StringW)>(&Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::ResolvePropertyName)> {
  static const MethodInfo* get() {
    static auto* propertyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*), "ResolvePropertyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyName});
  }
};
