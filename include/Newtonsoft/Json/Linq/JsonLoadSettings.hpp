// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Linq.CommentHandling
#include "Newtonsoft/Json/Linq/CommentHandling.hpp"
// Including type: Newtonsoft.Json.Linq.LineInfoHandling
#include "Newtonsoft/Json/Linq/LineInfoHandling.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Forward declaring type: JsonLoadSettings
  class JsonLoadSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonLoadSettings);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonLoadSettings*, "Newtonsoft.Json.Linq", "JsonLoadSettings");
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Linq.JsonLoadSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class JsonLoadSettings : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private Newtonsoft.Json.Linq.CommentHandling _commentHandling
    // Size: 0x4
    // Offset: 0x10
    ::Newtonsoft::Json::Linq::CommentHandling commentHandling;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Linq::CommentHandling) == 0x4);
    // private Newtonsoft.Json.Linq.LineInfoHandling _lineInfoHandling
    // Size: 0x4
    // Offset: 0x14
    ::Newtonsoft::Json::Linq::LineInfoHandling lineInfoHandling;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Linq::LineInfoHandling) == 0x4);
    public:
    // Get instance field reference: private Newtonsoft.Json.Linq.CommentHandling _commentHandling
    ::Newtonsoft::Json::Linq::CommentHandling& dyn__commentHandling();
    // Get instance field reference: private Newtonsoft.Json.Linq.LineInfoHandling _lineInfoHandling
    ::Newtonsoft::Json::Linq::LineInfoHandling& dyn__lineInfoHandling();
    // public Newtonsoft.Json.Linq.CommentHandling get_CommentHandling()
    // Offset: 0x172BBB8
    ::Newtonsoft::Json::Linq::CommentHandling get_CommentHandling();
    // public Newtonsoft.Json.Linq.LineInfoHandling get_LineInfoHandling()
    // Offset: 0x172BBC0
    ::Newtonsoft::Json::Linq::LineInfoHandling get_LineInfoHandling();
    // public System.Void .ctor()
    // Offset: 0x172BBC8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonLoadSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JsonLoadSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonLoadSettings*, creationType>()));
    }
  }; // Newtonsoft.Json.Linq.JsonLoadSettings
  #pragma pack(pop)
  static check_size<sizeof(JsonLoadSettings), 20 + sizeof(::Newtonsoft::Json::Linq::LineInfoHandling)> __Newtonsoft_Json_Linq_JsonLoadSettingsSizeCheck;
  static_assert(sizeof(JsonLoadSettings) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JsonLoadSettings::get_CommentHandling
// Il2CppName: get_CommentHandling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::CommentHandling (Newtonsoft::Json::Linq::JsonLoadSettings::*)()>(&Newtonsoft::Json::Linq::JsonLoadSettings::get_CommentHandling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JsonLoadSettings*), "get_CommentHandling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JsonLoadSettings::get_LineInfoHandling
// Il2CppName: get_LineInfoHandling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::LineInfoHandling (Newtonsoft::Json::Linq::JsonLoadSettings::*)()>(&Newtonsoft::Json::Linq::JsonLoadSettings::get_LineInfoHandling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JsonLoadSettings*), "get_LineInfoHandling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JsonLoadSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!