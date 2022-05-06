// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.ConformanceLevel
#include "System/Xml/ConformanceLevel.hpp"
// Including type: System.Xml.DtdProcessing
#include "System/Xml/DtdProcessing.hpp"
// Including type: System.Xml.ValidationType
#include "System/Xml/ValidationType.hpp"
// Including type: System.Xml.Schema.XmlSchemaValidationFlags
#include "System/Xml/Schema/XmlSchemaValidationFlags.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNameTable
  class XmlNameTable;
  // Forward declaring type: XmlResolver
  class XmlResolver;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaSet
  class XmlSchemaSet;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlReaderSettings
  class XmlReaderSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlReaderSettings);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlReaderSettings*, "System.Xml", "XmlReaderSettings");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x63
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlReaderSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlReaderSettings : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean useAsync
    // Size: 0x1
    // Offset: 0x10
    bool useAsync;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useAsync and: nameTable
    char __padding0[0x7] = {};
    // private System.Xml.XmlNameTable nameTable
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::XmlNameTable* nameTable;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNameTable*) == 0x8);
    // private System.Xml.XmlResolver xmlResolver
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::XmlResolver* xmlResolver;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlResolver*) == 0x8);
    // private System.Int32 lineNumberOffset
    // Size: 0x4
    // Offset: 0x28
    int lineNumberOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 linePositionOffset
    // Size: 0x4
    // Offset: 0x2C
    int linePositionOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Xml.ConformanceLevel conformanceLevel
    // Size: 0x4
    // Offset: 0x30
    ::System::Xml::ConformanceLevel conformanceLevel;
    // Field size check
    static_assert(sizeof(::System::Xml::ConformanceLevel) == 0x4);
    // private System.Boolean checkCharacters
    // Size: 0x1
    // Offset: 0x34
    bool checkCharacters;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: checkCharacters and: maxCharactersInDocument
    char __padding6[0x3] = {};
    // private System.Int64 maxCharactersInDocument
    // Size: 0x8
    // Offset: 0x38
    int64_t maxCharactersInDocument;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 maxCharactersFromEntities
    // Size: 0x8
    // Offset: 0x40
    int64_t maxCharactersFromEntities;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Boolean ignoreWhitespace
    // Size: 0x1
    // Offset: 0x48
    bool ignoreWhitespace;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean ignorePIs
    // Size: 0x1
    // Offset: 0x49
    bool ignorePIs;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean ignoreComments
    // Size: 0x1
    // Offset: 0x4A
    bool ignoreComments;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ignoreComments and: dtdProcessing
    char __padding11[0x1] = {};
    // private System.Xml.DtdProcessing dtdProcessing
    // Size: 0x4
    // Offset: 0x4C
    ::System::Xml::DtdProcessing dtdProcessing;
    // Field size check
    static_assert(sizeof(::System::Xml::DtdProcessing) == 0x4);
    // private System.Xml.ValidationType validationType
    // Size: 0x4
    // Offset: 0x50
    ::System::Xml::ValidationType validationType;
    // Field size check
    static_assert(sizeof(::System::Xml::ValidationType) == 0x4);
    // private System.Xml.Schema.XmlSchemaValidationFlags validationFlags
    // Size: 0x4
    // Offset: 0x54
    ::System::Xml::Schema::XmlSchemaValidationFlags validationFlags;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaValidationFlags) == 0x4);
    // private System.Xml.Schema.XmlSchemaSet schemas
    // Size: 0x8
    // Offset: 0x58
    ::System::Xml::Schema::XmlSchemaSet* schemas;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaSet*) == 0x8);
    // private System.Boolean closeInput
    // Size: 0x1
    // Offset: 0x60
    bool closeInput;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isReadOnly
    // Size: 0x1
    // Offset: 0x61
    bool isReadOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsXmlResolverSet>k__BackingField
    // Size: 0x1
    // Offset: 0x62
    bool IsXmlResolverSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private System.Nullable`1<System.Boolean> s_enableLegacyXmlSettings
    static ::System::Nullable_1<bool> _get_s_enableLegacyXmlSettings();
    // Set static field: static private System.Nullable`1<System.Boolean> s_enableLegacyXmlSettings
    static void _set_s_enableLegacyXmlSettings(::System::Nullable_1<bool> value);
    // Get instance field reference: private System.Boolean useAsync
    [[deprecated("Use field access instead!")]] bool& dyn_useAsync();
    // Get instance field reference: private System.Xml.XmlNameTable nameTable
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlNameTable*& dyn_nameTable();
    // Get instance field reference: private System.Xml.XmlResolver xmlResolver
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlResolver*& dyn_xmlResolver();
    // Get instance field reference: private System.Int32 lineNumberOffset
    [[deprecated("Use field access instead!")]] int& dyn_lineNumberOffset();
    // Get instance field reference: private System.Int32 linePositionOffset
    [[deprecated("Use field access instead!")]] int& dyn_linePositionOffset();
    // Get instance field reference: private System.Xml.ConformanceLevel conformanceLevel
    [[deprecated("Use field access instead!")]] ::System::Xml::ConformanceLevel& dyn_conformanceLevel();
    // Get instance field reference: private System.Boolean checkCharacters
    [[deprecated("Use field access instead!")]] bool& dyn_checkCharacters();
    // Get instance field reference: private System.Int64 maxCharactersInDocument
    [[deprecated("Use field access instead!")]] int64_t& dyn_maxCharactersInDocument();
    // Get instance field reference: private System.Int64 maxCharactersFromEntities
    [[deprecated("Use field access instead!")]] int64_t& dyn_maxCharactersFromEntities();
    // Get instance field reference: private System.Boolean ignoreWhitespace
    [[deprecated("Use field access instead!")]] bool& dyn_ignoreWhitespace();
    // Get instance field reference: private System.Boolean ignorePIs
    [[deprecated("Use field access instead!")]] bool& dyn_ignorePIs();
    // Get instance field reference: private System.Boolean ignoreComments
    [[deprecated("Use field access instead!")]] bool& dyn_ignoreComments();
    // Get instance field reference: private System.Xml.DtdProcessing dtdProcessing
    [[deprecated("Use field access instead!")]] ::System::Xml::DtdProcessing& dyn_dtdProcessing();
    // Get instance field reference: private System.Xml.ValidationType validationType
    [[deprecated("Use field access instead!")]] ::System::Xml::ValidationType& dyn_validationType();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaValidationFlags validationFlags
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaValidationFlags& dyn_validationFlags();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaSet schemas
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaSet*& dyn_schemas();
    // Get instance field reference: private System.Boolean closeInput
    [[deprecated("Use field access instead!")]] bool& dyn_closeInput();
    // Get instance field reference: private System.Boolean isReadOnly
    [[deprecated("Use field access instead!")]] bool& dyn_isReadOnly();
    // Get instance field reference: private System.Boolean <IsXmlResolverSet>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsXmlResolverSet$k__BackingField();
    // public System.Void set_NameTable(System.Xml.XmlNameTable value)
    // Offset: 0x15DCB04
    void set_NameTable(::System::Xml::XmlNameTable* value);
    // System.Void set_IsXmlResolverSet(System.Boolean value)
    // Offset: 0x15DCC3C
    void set_IsXmlResolverSet(bool value);
    // public System.Void set_XmlResolver(System.Xml.XmlResolver value)
    // Offset: 0x15DCC48
    void set_XmlResolver(::System::Xml::XmlResolver* value);
    // public System.Void set_LineNumberOffset(System.Int32 value)
    // Offset: 0x15DCCBC
    void set_LineNumberOffset(int value);
    // public System.Void set_LinePositionOffset(System.Int32 value)
    // Offset: 0x15DCD20
    void set_LinePositionOffset(int value);
    // public System.Void set_ConformanceLevel(System.Xml.ConformanceLevel value)
    // Offset: 0x15DCD84
    void set_ConformanceLevel(::System::Xml::ConformanceLevel value);
    // public System.Void set_CheckCharacters(System.Boolean value)
    // Offset: 0x15DCE2C
    void set_CheckCharacters(bool value);
    // public System.Void set_MaxCharactersInDocument(System.Int64 value)
    // Offset: 0x15DCE94
    void set_MaxCharactersInDocument(int64_t value);
    // public System.Void set_MaxCharactersFromEntities(System.Int64 value)
    // Offset: 0x15DCF38
    void set_MaxCharactersFromEntities(int64_t value);
    // public System.Void set_IgnoreWhitespace(System.Boolean value)
    // Offset: 0x15DCFDC
    void set_IgnoreWhitespace(bool value);
    // public System.Void set_IgnoreProcessingInstructions(System.Boolean value)
    // Offset: 0x15DD044
    void set_IgnoreProcessingInstructions(bool value);
    // public System.Void set_IgnoreComments(System.Boolean value)
    // Offset: 0x15DD0AC
    void set_IgnoreComments(bool value);
    // public System.Void set_DtdProcessing(System.Xml.DtdProcessing value)
    // Offset: 0x15DD114
    void set_DtdProcessing(::System::Xml::DtdProcessing value);
    // public System.Xml.ValidationType get_ValidationType()
    // Offset: 0x15DD1BC
    ::System::Xml::ValidationType get_ValidationType();
    // public System.Xml.Schema.XmlSchemaSet get_Schemas()
    // Offset: 0x15D212C
    ::System::Xml::Schema::XmlSchemaSet* get_Schemas();
    // System.Void set_ReadOnly(System.Boolean value)
    // Offset: 0x15DD1C4
    void set_ReadOnly(bool value);
    // public System.Void .ctor()
    // Offset: 0x15DCAD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlReaderSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlReaderSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlReaderSettings*, creationType>()));
    }
    // System.Xml.XmlResolver GetXmlResolver()
    // Offset: 0x15DCCB4
    ::System::Xml::XmlResolver* GetXmlResolver();
    // private System.Void CheckReadOnly(System.String propertyName)
    // Offset: 0x15DCB68
    void CheckReadOnly(::StringW propertyName);
    // private System.Void Initialize()
    // Offset: 0x15DCAFC
    void Initialize();
    // private System.Void Initialize(System.Xml.XmlResolver resolver)
    // Offset: 0x15DD1D0
    void Initialize(::System::Xml::XmlResolver* resolver);
    // static private System.Xml.XmlResolver CreateDefaultResolver()
    // Offset: 0x15DD240
    static ::System::Xml::XmlResolver* CreateDefaultResolver();
    // static System.Boolean EnableLegacyXmlSettings()
    // Offset: 0x15DD29C
    static bool EnableLegacyXmlSettings();
  }; // System.Xml.XmlReaderSettings
  #pragma pack(pop)
  static check_size<sizeof(XmlReaderSettings), 98 + sizeof(bool)> __System_Xml_XmlReaderSettingsSizeCheck;
  static_assert(sizeof(XmlReaderSettings) == 0x63);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::set_NameTable
// Il2CppName: set_NameTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlReaderSettings::*)(::System::Xml::XmlNameTable*)>(&System::Xml::XmlReaderSettings::set_NameTable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNameTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReaderSettings*), "set_NameTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::set_IsXmlResolverSet
// Il2CppName: set_IsXmlResolverSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlReaderSettings::*)(bool)>(&System::Xml::XmlReaderSettings::set_IsXmlResolverSet)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReaderSettings*), "set_IsXmlResolverSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::set_XmlResolver
// Il2CppName: set_XmlResolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlReaderSettings::*)(::System::Xml::XmlResolver*)>(&System::Xml::XmlReaderSettings::set_XmlResolver)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReaderSettings*), "set_XmlResolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::set_LineNumberOffset
// Il2CppName: set_LineNumberOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlReaderSettings::*)(int)>(&System::Xml::XmlReaderSettings::set_LineNumberOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReaderSettings*), "set_LineNumberOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::set_LinePositionOffset
// Il2CppName: set_LinePositionOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlReaderSettings::*)(int)>(&System::Xml::XmlReaderSettings::set_LinePositionOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReaderSettings*), "set_LinePositionOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::set_ConformanceLevel
// Il2CppName: set_ConformanceLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlReaderSettings::*)(::System::Xml::ConformanceLevel)>(&System::Xml::XmlReaderSettings::set_ConformanceLevel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "ConformanceLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReaderSettings*), "set_ConformanceLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::set_CheckCharacters
// Il2CppName: set_CheckCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlReaderSettings::*)(bool)>(&System::Xml::XmlReaderSettings::set_CheckCharacters)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReaderSettings*), "set_CheckCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::set_MaxCharactersInDocument
// Il2CppName: set_MaxCharactersInDocument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlReaderSettings::*)(int64_t)>(&System::Xml::XmlReaderSettings::set_MaxCharactersInDocument)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReaderSettings*), "set_MaxCharactersInDocument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::set_MaxCharactersFromEntities
// Il2CppName: set_MaxCharactersFromEntities
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlReaderSettings::*)(int64_t)>(&System::Xml::XmlReaderSettings::set_MaxCharactersFromEntities)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReaderSettings*), "set_MaxCharactersFromEntities", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::set_IgnoreWhitespace
// Il2CppName: set_IgnoreWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlReaderSettings::*)(bool)>(&System::Xml::XmlReaderSettings::set_IgnoreWhitespace)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReaderSettings*), "set_IgnoreWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::set_IgnoreProcessingInstructions
// Il2CppName: set_IgnoreProcessingInstructions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlReaderSettings::*)(bool)>(&System::Xml::XmlReaderSettings::set_IgnoreProcessingInstructions)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReaderSettings*), "set_IgnoreProcessingInstructions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::set_IgnoreComments
// Il2CppName: set_IgnoreComments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlReaderSettings::*)(bool)>(&System::Xml::XmlReaderSettings::set_IgnoreComments)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReaderSettings*), "set_IgnoreComments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::set_DtdProcessing
// Il2CppName: set_DtdProcessing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlReaderSettings::*)(::System::Xml::DtdProcessing)>(&System::Xml::XmlReaderSettings::set_DtdProcessing)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "DtdProcessing")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReaderSettings*), "set_DtdProcessing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::get_ValidationType
// Il2CppName: get_ValidationType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::ValidationType (System::Xml::XmlReaderSettings::*)()>(&System::Xml::XmlReaderSettings::get_ValidationType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReaderSettings*), "get_ValidationType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::get_Schemas
// Il2CppName: get_Schemas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaSet* (System::Xml::XmlReaderSettings::*)()>(&System::Xml::XmlReaderSettings::get_Schemas)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReaderSettings*), "get_Schemas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::set_ReadOnly
// Il2CppName: set_ReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlReaderSettings::*)(bool)>(&System::Xml::XmlReaderSettings::set_ReadOnly)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReaderSettings*), "set_ReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::GetXmlResolver
// Il2CppName: GetXmlResolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlResolver* (System::Xml::XmlReaderSettings::*)()>(&System::Xml::XmlReaderSettings::GetXmlResolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReaderSettings*), "GetXmlResolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::CheckReadOnly
// Il2CppName: CheckReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlReaderSettings::*)(::StringW)>(&System::Xml::XmlReaderSettings::CheckReadOnly)> {
  static const MethodInfo* get() {
    static auto* propertyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReaderSettings*), "CheckReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyName});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlReaderSettings::*)()>(&System::Xml::XmlReaderSettings::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReaderSettings*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlReaderSettings::*)(::System::Xml::XmlResolver*)>(&System::Xml::XmlReaderSettings::Initialize)> {
  static const MethodInfo* get() {
    static auto* resolver = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReaderSettings*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resolver});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::CreateDefaultResolver
// Il2CppName: CreateDefaultResolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlResolver* (*)()>(&System::Xml::XmlReaderSettings::CreateDefaultResolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReaderSettings*), "CreateDefaultResolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReaderSettings::EnableLegacyXmlSettings
// Il2CppName: EnableLegacyXmlSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Xml::XmlReaderSettings::EnableLegacyXmlSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReaderSettings*), "EnableLegacyXmlSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
