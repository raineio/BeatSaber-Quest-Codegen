// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: Polyglot.Language
#include "Polyglot/Language.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: LocalizationDocument
  class LocalizationDocument;
  // Forward declaring type: LocalizationAsset
  class LocalizationAsset;
  // Forward declaring type: LanguageDirection
  struct LanguageDirection;
  // Forward declaring type: ILocalize
  class ILocalize;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SystemLanguage
  struct SystemLanguage;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: Localization
  class Localization;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Polyglot::Localization);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::Localization*, "Polyglot", "Localization");
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.Localization
  // [TokenAttribute] Offset: FFFFFFFF
  class Localization : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // private Polyglot.LocalizationDocument customDocument
    // Size: 0x8
    // Offset: 0x18
    ::Polyglot::LocalizationDocument* customDocument;
    // Field size check
    static_assert(sizeof(::Polyglot::LocalizationDocument*) == 0x8);
    // [TooltipAttribute] Offset: 0x10FBE8C
    // private System.Collections.Generic.List`1<Polyglot.LocalizationAsset> inputFiles
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::Polyglot::LocalizationAsset*>* inputFiles;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Polyglot::LocalizationAsset*>*) == 0x8);
    // [HeaderAttribute] Offset: 0x10FBED8
    // [TooltipAttribute] Offset: 0x10FBED8
    // private System.Collections.Generic.List`1<Polyglot.Language> supportedLanguages
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::Polyglot::Language>* supportedLanguages;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Polyglot::Language>*) == 0x8);
    // [TooltipAttribute] Offset: 0x10FBF48
    // private Polyglot.Language selectedLanguage
    // Size: 0x4
    // Offset: 0x30
    ::Polyglot::Language selectedLanguage;
    // Field size check
    static_assert(sizeof(::Polyglot::Language) == 0x4);
    // [TooltipAttribute] Offset: 0x10FBF94
    // private Polyglot.Language fallbackLanguage
    // Size: 0x4
    // Offset: 0x34
    ::Polyglot::Language fallbackLanguage;
    // Field size check
    static_assert(sizeof(::Polyglot::Language) == 0x4);
    // [HeaderAttribute] Offset: 0x10FBFE0
    // [TooltipAttribute] Offset: 0x10FBFE0
    // public UnityEngine.Events.UnityEvent Localize
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Events::UnityEvent* Localize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // private System.Globalization.CultureInfo selectedCultureInfo
    // Size: 0x8
    // Offset: 0x40
    ::System::Globalization::CultureInfo* selectedCultureInfo;
    // Field size check
    static_assert(sizeof(::System::Globalization::CultureInfo*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String KeyNotFound
    static constexpr const char* KeyNotFound = "[{0}]";
    // Get static field: static private System.String KeyNotFound
    static ::StringW _get_KeyNotFound();
    // Set static field: static private System.String KeyNotFound
    static void _set_KeyNotFound(::StringW value);
    // Get static field: static private Polyglot.Localization instance
    static ::Polyglot::Localization* _get_instance();
    // Set static field: static private Polyglot.Localization instance
    static void _set_instance(::Polyglot::Localization* value);
    // Get instance field reference: private Polyglot.LocalizationDocument customDocument
    [[deprecated("Use field access instead!")]] ::Polyglot::LocalizationDocument*& dyn_customDocument();
    // Get instance field reference: private System.Collections.Generic.List`1<Polyglot.LocalizationAsset> inputFiles
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Polyglot::LocalizationAsset*>*& dyn_inputFiles();
    // Get instance field reference: private System.Collections.Generic.List`1<Polyglot.Language> supportedLanguages
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Polyglot::Language>*& dyn_supportedLanguages();
    // Get instance field reference: private Polyglot.Language selectedLanguage
    [[deprecated("Use field access instead!")]] ::Polyglot::Language& dyn_selectedLanguage();
    // Get instance field reference: private Polyglot.Language fallbackLanguage
    [[deprecated("Use field access instead!")]] ::Polyglot::Language& dyn_fallbackLanguage();
    // Get instance field reference: public UnityEngine.Events.UnityEvent Localize
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn_Localize();
    // Get instance field reference: private System.Globalization.CultureInfo selectedCultureInfo
    [[deprecated("Use field access instead!")]] ::System::Globalization::CultureInfo*& dyn_selectedCultureInfo();
    // public Polyglot.LocalizationDocument get_CustomDocument()
    // Offset: 0x2ADE94C
    ::Polyglot::LocalizationDocument* get_CustomDocument();
    // public System.Collections.Generic.List`1<Polyglot.LocalizationAsset> get_InputFiles()
    // Offset: 0x2ADE954
    ::System::Collections::Generic::List_1<::Polyglot::LocalizationAsset*>* get_InputFiles();
    // static public Polyglot.Localization get_Instance()
    // Offset: 0x2ADDCFC
    static ::Polyglot::Localization* get_Instance();
    // static public System.Void set_Instance(Polyglot.Localization value)
    // Offset: 0x2ADEA0C
    static void set_Instance(::Polyglot::Localization* value);
    // static private System.Boolean get_HasInstance()
    // Offset: 0x2ADE95C
    static bool get_HasInstance();
    // public System.Collections.Generic.List`1<Polyglot.Language> get_SupportedLanguages()
    // Offset: 0x2ADEA60
    ::System::Collections::Generic::List_1<::Polyglot::Language>* get_SupportedLanguages();
    // public Polyglot.LanguageDirection get_SelectedLanguageDirection()
    // Offset: 0x2ADEA68
    ::Polyglot::LanguageDirection get_SelectedLanguageDirection();
    // public System.Int32 get_SelectedLanguageIndex()
    // Offset: 0x2ADDFDC
    int get_SelectedLanguageIndex();
    // public System.Globalization.CultureInfo get_SelectedCultureInfo()
    // Offset: 0x2ADEA98
    ::System::Globalization::CultureInfo* get_SelectedCultureInfo();
    // public Polyglot.Language get_SelectedLanguage()
    // Offset: 0x2ADEAA0
    ::Polyglot::Language get_SelectedLanguage();
    // public System.Void set_SelectedLanguage(Polyglot.Language value)
    // Offset: 0x2ADEAA8
    void set_SelectedLanguage(::Polyglot::Language value);
    // public System.Collections.Generic.List`1<System.String> get_EnglishLanguageNames()
    // Offset: 0x2ADDF68
    ::System::Collections::Generic::List_1<::StringW>* get_EnglishLanguageNames();
    // public System.Collections.Generic.List`1<System.String> get_LocalizedLanguageNames()
    // Offset: 0x2ADEEF4
    ::System::Collections::Generic::List_1<::StringW>* get_LocalizedLanguageNames();
    // public System.String get_EnglishLanguageName()
    // Offset: 0x2ADEF68
    ::StringW get_EnglishLanguageName();
    // public System.String get_LocalizedLanguageName()
    // Offset: 0x2ADEFE0
    ::StringW get_LocalizedLanguageName();
    // public System.Void .ctor()
    // Offset: 0x2ADF96C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Localization* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::Localization::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Localization*, creationType>()));
    }
    // private Polyglot.LanguageDirection GetLanguageDirection(Polyglot.Language language)
    // Offset: 0x2ADEA7C
    ::Polyglot::LanguageDirection GetLanguageDirection(::Polyglot::Language language);
    // private System.Boolean IsLanguageSupported(Polyglot.Language language)
    // Offset: 0x2ADEBC4
    bool IsLanguageSupported(::Polyglot::Language language);
    // public System.Void InvokeOnLocalize()
    // Offset: 0x2ADEC44
    void InvokeOnLocalize();
    // public System.Void SelectLanguage(System.Int32 selected)
    // Offset: 0x2ADF028
    void SelectLanguage(int selected);
    // public System.Void SelectLanguage(Polyglot.Language selected)
    // Offset: 0x2ADF0B0
    void SelectLanguage(::Polyglot::Language selected);
    // public Polyglot.Language ConvertSystemLanguage(UnityEngine.SystemLanguage selected)
    // Offset: 0x2ADF0B4
    ::Polyglot::Language ConvertSystemLanguage(::UnityEngine::SystemLanguage selected);
    // public System.Void AddOnLocalizeEvent(Polyglot.ILocalize localize)
    // Offset: 0x2ADDD88
    void AddOnLocalizeEvent(::Polyglot::ILocalize* localize);
    // public System.Void RemoveOnLocalizeEvent(Polyglot.ILocalize localize)
    // Offset: 0x2ADF0F0
    void RemoveOnLocalizeEvent(::Polyglot::ILocalize* localize);
    // static public System.String Get(System.String key)
    // Offset: 0x2ADEFB0
    static ::StringW Get(::StringW key);
    // static public System.String Get(System.String key, Polyglot.Language language)
    // Offset: 0x2ADF1DC
    static ::StringW Get(::StringW key, ::Polyglot::Language language);
    // static public System.Boolean KeyExist(System.String key)
    // Offset: 0x2ADF5F0
    static bool KeyExist(::StringW key);
    // static public System.Collections.Generic.List`1<System.String> GetKeys()
    // Offset: 0x2ADF6A4
    static ::System::Collections::Generic::List_1<::StringW>* GetKeys();
    // static public System.String GetFormat(System.String key, params System.Object[] arguments)
    // Offset: 0x2ADF78C
    static ::StringW GetFormat(::StringW key, ::ArrayW<::Il2CppObject*> arguments);
    // public System.Boolean InputFilesContains(Polyglot.LocalizationDocument doc)
    // Offset: 0x2ADF808
    bool InputFilesContains(::Polyglot::LocalizationDocument* doc);
  }; // Polyglot.Localization
  #pragma pack(pop)
  static check_size<sizeof(Localization), 64 + sizeof(::System::Globalization::CultureInfo*)> __Polyglot_LocalizationSizeCheck;
  static_assert(sizeof(Localization) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Polyglot::Localization::get_CustomDocument
// Il2CppName: get_CustomDocument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Polyglot::LocalizationDocument* (Polyglot::Localization::*)()>(&Polyglot::Localization::get_CustomDocument)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_CustomDocument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_InputFiles
// Il2CppName: get_InputFiles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Polyglot::LocalizationAsset*>* (Polyglot::Localization::*)()>(&Polyglot::Localization::get_InputFiles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_InputFiles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Polyglot::Localization* (*)()>(&Polyglot::Localization::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::set_Instance
// Il2CppName: set_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Polyglot::Localization*)>(&Polyglot::Localization::set_Instance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Polyglot", "Localization")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "set_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_HasInstance
// Il2CppName: get_HasInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Polyglot::Localization::get_HasInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_HasInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_SupportedLanguages
// Il2CppName: get_SupportedLanguages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Polyglot::Language>* (Polyglot::Localization::*)()>(&Polyglot::Localization::get_SupportedLanguages)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_SupportedLanguages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_SelectedLanguageDirection
// Il2CppName: get_SelectedLanguageDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Polyglot::LanguageDirection (Polyglot::Localization::*)()>(&Polyglot::Localization::get_SelectedLanguageDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_SelectedLanguageDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_SelectedLanguageIndex
// Il2CppName: get_SelectedLanguageIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Polyglot::Localization::*)()>(&Polyglot::Localization::get_SelectedLanguageIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_SelectedLanguageIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_SelectedCultureInfo
// Il2CppName: get_SelectedCultureInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (Polyglot::Localization::*)()>(&Polyglot::Localization::get_SelectedCultureInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_SelectedCultureInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_SelectedLanguage
// Il2CppName: get_SelectedLanguage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Polyglot::Language (Polyglot::Localization::*)()>(&Polyglot::Localization::get_SelectedLanguage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_SelectedLanguage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::set_SelectedLanguage
// Il2CppName: set_SelectedLanguage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::Localization::*)(::Polyglot::Language)>(&Polyglot::Localization::set_SelectedLanguage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Polyglot", "Language")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "set_SelectedLanguage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_EnglishLanguageNames
// Il2CppName: get_EnglishLanguageNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (Polyglot::Localization::*)()>(&Polyglot::Localization::get_EnglishLanguageNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_EnglishLanguageNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_LocalizedLanguageNames
// Il2CppName: get_LocalizedLanguageNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (Polyglot::Localization::*)()>(&Polyglot::Localization::get_LocalizedLanguageNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_LocalizedLanguageNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_EnglishLanguageName
// Il2CppName: get_EnglishLanguageName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Polyglot::Localization::*)()>(&Polyglot::Localization::get_EnglishLanguageName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_EnglishLanguageName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_LocalizedLanguageName
// Il2CppName: get_LocalizedLanguageName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Polyglot::Localization::*)()>(&Polyglot::Localization::get_LocalizedLanguageName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_LocalizedLanguageName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Polyglot::Localization::GetLanguageDirection
// Il2CppName: GetLanguageDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Polyglot::LanguageDirection (Polyglot::Localization::*)(::Polyglot::Language)>(&Polyglot::Localization::GetLanguageDirection)> {
  static const MethodInfo* get() {
    static auto* language = &::il2cpp_utils::GetClassFromName("Polyglot", "Language")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "GetLanguageDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{language});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::IsLanguageSupported
// Il2CppName: IsLanguageSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Polyglot::Localization::*)(::Polyglot::Language)>(&Polyglot::Localization::IsLanguageSupported)> {
  static const MethodInfo* get() {
    static auto* language = &::il2cpp_utils::GetClassFromName("Polyglot", "Language")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "IsLanguageSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{language});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::InvokeOnLocalize
// Il2CppName: InvokeOnLocalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::Localization::*)()>(&Polyglot::Localization::InvokeOnLocalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "InvokeOnLocalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::SelectLanguage
// Il2CppName: SelectLanguage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::Localization::*)(int)>(&Polyglot::Localization::SelectLanguage)> {
  static const MethodInfo* get() {
    static auto* selected = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "SelectLanguage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selected});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::SelectLanguage
// Il2CppName: SelectLanguage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::Localization::*)(::Polyglot::Language)>(&Polyglot::Localization::SelectLanguage)> {
  static const MethodInfo* get() {
    static auto* selected = &::il2cpp_utils::GetClassFromName("Polyglot", "Language")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "SelectLanguage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selected});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::ConvertSystemLanguage
// Il2CppName: ConvertSystemLanguage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Polyglot::Language (Polyglot::Localization::*)(::UnityEngine::SystemLanguage)>(&Polyglot::Localization::ConvertSystemLanguage)> {
  static const MethodInfo* get() {
    static auto* selected = &::il2cpp_utils::GetClassFromName("UnityEngine", "SystemLanguage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "ConvertSystemLanguage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selected});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::AddOnLocalizeEvent
// Il2CppName: AddOnLocalizeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::Localization::*)(::Polyglot::ILocalize*)>(&Polyglot::Localization::AddOnLocalizeEvent)> {
  static const MethodInfo* get() {
    static auto* localize = &::il2cpp_utils::GetClassFromName("Polyglot", "ILocalize")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "AddOnLocalizeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localize});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::RemoveOnLocalizeEvent
// Il2CppName: RemoveOnLocalizeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::Localization::*)(::Polyglot::ILocalize*)>(&Polyglot::Localization::RemoveOnLocalizeEvent)> {
  static const MethodInfo* get() {
    static auto* localize = &::il2cpp_utils::GetClassFromName("Polyglot", "ILocalize")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "RemoveOnLocalizeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localize});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&Polyglot::Localization::Get)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::Polyglot::Language)>(&Polyglot::Localization::Get)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* language = &::il2cpp_utils::GetClassFromName("Polyglot", "Language")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, language});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::KeyExist
// Il2CppName: KeyExist
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Polyglot::Localization::KeyExist)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "KeyExist", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::GetKeys
// Il2CppName: GetKeys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)()>(&Polyglot::Localization::GetKeys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "GetKeys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::GetFormat
// Il2CppName: GetFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&Polyglot::Localization::GetFormat)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arguments = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "GetFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, arguments});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::InputFilesContains
// Il2CppName: InputFilesContains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Polyglot::Localization::*)(::Polyglot::LocalizationDocument*)>(&Polyglot::Localization::InputFilesContains)> {
  static const MethodInfo* get() {
    static auto* doc = &::il2cpp_utils::GetClassFromName("Polyglot", "LocalizationDocument")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "InputFilesContains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{doc});
  }
};
