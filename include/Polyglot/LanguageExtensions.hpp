// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: Language
  struct Language;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: LanguageExtensions
  class LanguageExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Polyglot::LanguageExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::LanguageExtensions*, "Polyglot", "LanguageExtensions");
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.LanguageExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class LanguageExtensions : public ::Il2CppObject {
    public:
    // static public System.String ToSerializedName(Polyglot.Language lang)
    // Offset: 0x2A33854
    static ::StringW ToSerializedName(::Polyglot::Language lang);
    // static public System.String ToCultureInfoName(Polyglot.Language lang)
    // Offset: 0x2A338BC
    static ::StringW ToCultureInfoName(::Polyglot::Language lang);
    // static public Polyglot.Language ToLanguage(System.String serializedName)
    // Offset: 0x2A3396C
    static ::Polyglot::Language ToLanguage(::StringW serializedName);
  }; // Polyglot.LanguageExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Polyglot::LanguageExtensions::ToSerializedName
// Il2CppName: ToSerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Polyglot::Language)>(&Polyglot::LanguageExtensions::ToSerializedName)> {
  static const MethodInfo* get() {
    static auto* lang = &::il2cpp_utils::GetClassFromName("Polyglot", "Language")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LanguageExtensions*), "ToSerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lang});
  }
};
// Writing MetadataGetter for method: Polyglot::LanguageExtensions::ToCultureInfoName
// Il2CppName: ToCultureInfoName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Polyglot::Language)>(&Polyglot::LanguageExtensions::ToCultureInfoName)> {
  static const MethodInfo* get() {
    static auto* lang = &::il2cpp_utils::GetClassFromName("Polyglot", "Language")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LanguageExtensions*), "ToCultureInfoName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lang});
  }
};
// Writing MetadataGetter for method: Polyglot::LanguageExtensions::ToLanguage
// Il2CppName: ToLanguage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Polyglot::Language (*)(::StringW)>(&Polyglot::LanguageExtensions::ToLanguage)> {
  static const MethodInfo* get() {
    static auto* serializedName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LanguageExtensions*), "ToLanguage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializedName});
  }
};
