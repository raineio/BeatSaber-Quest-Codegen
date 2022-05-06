// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNameTable
  class XmlNameTable;
  // Forward declaring type: XmlReaderSettings
  class XmlReaderSettings;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: SortedList
  class SortedList;
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: ValidationEventHandler
  class ValidationEventHandler;
  // Forward declaring type: SchemaInfo
  class SchemaInfo;
  // Forward declaring type: XmlSchemaCompilationSettings
  class XmlSchemaCompilationSettings;
  // Forward declaring type: ValidationEventArgs
  class ValidationEventArgs;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaSet
  class XmlSchemaSet;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSet);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSet*, "System.Xml.Schema", "XmlSchemaSet");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaSet
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaSet : public ::Il2CppObject {
    public:
    public:
    // private System.Xml.XmlNameTable nameTable
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::XmlNameTable* nameTable;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNameTable*) == 0x8);
    // private System.Collections.SortedList schemas
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::SortedList* schemas;
    // Field size check
    static_assert(sizeof(::System::Collections::SortedList*) == 0x8);
    // private System.Xml.Schema.ValidationEventHandler internalEventHandler
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::Schema::ValidationEventHandler* internalEventHandler;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::ValidationEventHandler*) == 0x8);
    // private System.Xml.Schema.ValidationEventHandler eventHandler
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Schema::ValidationEventHandler* eventHandler;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::ValidationEventHandler*) == 0x8);
    // private System.Collections.Hashtable schemaLocations
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Hashtable* schemaLocations;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private System.Collections.Hashtable chameleonSchemas
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Hashtable* chameleonSchemas;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private System.Collections.Hashtable targetNamespaces
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Hashtable* targetNamespaces;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private System.Boolean compileAll
    // Size: 0x1
    // Offset: 0x48
    bool compileAll;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: compileAll and: cachedCompiledInfo
    char __padding7[0x7] = {};
    // private System.Xml.Schema.SchemaInfo cachedCompiledInfo
    // Size: 0x8
    // Offset: 0x50
    ::System::Xml::Schema::SchemaInfo* cachedCompiledInfo;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SchemaInfo*) == 0x8);
    // private System.Xml.XmlReaderSettings readerSettings
    // Size: 0x8
    // Offset: 0x58
    ::System::Xml::XmlReaderSettings* readerSettings;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlReaderSettings*) == 0x8);
    // private System.Xml.Schema.XmlSchemaCompilationSettings compilationSettings
    // Size: 0x8
    // Offset: 0x60
    ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaCompilationSettings*) == 0x8);
    public:
    // Get instance field reference: private System.Xml.XmlNameTable nameTable
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlNameTable*& dyn_nameTable();
    // Get instance field reference: private System.Collections.SortedList schemas
    [[deprecated("Use field access instead!")]] ::System::Collections::SortedList*& dyn_schemas();
    // Get instance field reference: private System.Xml.Schema.ValidationEventHandler internalEventHandler
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::ValidationEventHandler*& dyn_internalEventHandler();
    // Get instance field reference: private System.Xml.Schema.ValidationEventHandler eventHandler
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::ValidationEventHandler*& dyn_eventHandler();
    // Get instance field reference: private System.Collections.Hashtable schemaLocations
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_schemaLocations();
    // Get instance field reference: private System.Collections.Hashtable chameleonSchemas
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_chameleonSchemas();
    // Get instance field reference: private System.Collections.Hashtable targetNamespaces
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_targetNamespaces();
    // Get instance field reference: private System.Boolean compileAll
    [[deprecated("Use field access instead!")]] bool& dyn_compileAll();
    // Get instance field reference: private System.Xml.Schema.SchemaInfo cachedCompiledInfo
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::SchemaInfo*& dyn_cachedCompiledInfo();
    // Get instance field reference: private System.Xml.XmlReaderSettings readerSettings
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlReaderSettings*& dyn_readerSettings();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaCompilationSettings compilationSettings
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaCompilationSettings*& dyn_compilationSettings();
    // public System.Void .ctor()
    // Offset: 0x205B274
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaSet* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaSet*, creationType>()));
    }
    // public System.Void .ctor(System.Xml.XmlNameTable nameTable)
    // Offset: 0x205B2D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaSet* New_ctor(::System::Xml::XmlNameTable* nameTable) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaSet*, creationType>(nameTable)));
    }
    // private System.Void InternalValidationCallback(System.Object sender, System.Xml.Schema.ValidationEventArgs e)
    // Offset: 0x205B4F4
    void InternalValidationCallback(::Il2CppObject* sender, ::System::Xml::Schema::ValidationEventArgs* e);
  }; // System.Xml.Schema.XmlSchemaSet
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaSet), 96 + sizeof(::System::Xml::Schema::XmlSchemaCompilationSettings*)> __System_Xml_Schema_XmlSchemaSetSizeCheck;
  static_assert(sizeof(XmlSchemaSet) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSet::InternalValidationCallback
// Il2CppName: InternalValidationCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaSet::*)(::Il2CppObject*, ::System::Xml::Schema::ValidationEventArgs*)>(&System::Xml::Schema::XmlSchemaSet::InternalValidationCallback)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "ValidationEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSet*), "InternalValidationCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
