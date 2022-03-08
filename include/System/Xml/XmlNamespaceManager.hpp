// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.IXmlNamespaceResolver
#include "System/Xml/IXmlNamespaceResolver.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNameTable
  class XmlNameTable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlNamespaceManager
  class XmlNamespaceManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlNamespaceManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNamespaceManager*, "System.Xml", "XmlNamespaceManager");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlNamespaceManager
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlNamespaceManager : public ::Il2CppObject/*, public ::System::Xml::IXmlNamespaceResolver, public ::System::Collections::IEnumerable*/ {
    public:
    // Nested type: ::System::Xml::XmlNamespaceManager::NamespaceDeclaration
    struct NamespaceDeclaration;
    // Size: 0x18
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: System.Xml.XmlNamespaceManager/System.Xml.NamespaceDeclaration
    // [TokenAttribute] Offset: FFFFFFFF
    struct NamespaceDeclaration/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.String prefix
      // Size: 0x8
      // Offset: 0x0
      ::StringW prefix;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      // public System.String uri
      // Size: 0x8
      // Offset: 0x8
      ::StringW uri;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      // public System.Int32 scopeId
      // Size: 0x4
      // Offset: 0x10
      int scopeId;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Int32 previousNsIndex
      // Size: 0x4
      // Offset: 0x14
      int previousNsIndex;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: NamespaceDeclaration
      constexpr NamespaceDeclaration(::StringW prefix_ = {}, ::StringW uri_ = {}, int scopeId_ = {}, int previousNsIndex_ = {}) noexcept : prefix{prefix_}, uri{uri_}, scopeId{scopeId_}, previousNsIndex{previousNsIndex_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.String prefix
      ::StringW& dyn_prefix();
      // Get instance field reference: public System.String uri
      ::StringW& dyn_uri();
      // Get instance field reference: public System.Int32 scopeId
      int& dyn_scopeId();
      // Get instance field reference: public System.Int32 previousNsIndex
      int& dyn_previousNsIndex();
      // public System.Void Set(System.String prefix, System.String uri, System.Int32 scopeId, System.Int32 previousNsIndex)
      // Offset: 0x15ABAC0
      void Set(::StringW prefix, ::StringW uri, int scopeId, int previousNsIndex);
    }; // System.Xml.XmlNamespaceManager/System.Xml.NamespaceDeclaration
    #pragma pack(pop)
    static check_size<sizeof(XmlNamespaceManager::NamespaceDeclaration), 20 + sizeof(int)> __System_Xml_XmlNamespaceManager_NamespaceDeclarationSizeCheck;
    static_assert(sizeof(XmlNamespaceManager::NamespaceDeclaration) == 0x18);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Xml.XmlNamespaceManager/System.Xml.NamespaceDeclaration[] nsdecls
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::System::Xml::XmlNamespaceManager::NamespaceDeclaration> nsdecls;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Xml::XmlNamespaceManager::NamespaceDeclaration>) == 0x8);
    // private System.Int32 lastDecl
    // Size: 0x4
    // Offset: 0x18
    int lastDecl;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: lastDecl and: nameTable
    char __padding1[0x4] = {};
    // private System.Xml.XmlNameTable nameTable
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::XmlNameTable* nameTable;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNameTable*) == 0x8);
    // private System.Int32 scopeId
    // Size: 0x4
    // Offset: 0x28
    int scopeId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: scopeId and: hashTable
    char __padding3[0x4] = {};
    // private System.Collections.Generic.Dictionary`2<System.String,System.Int32> hashTable
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::Dictionary_2<::StringW, int>* hashTable;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, int>*) == 0x8);
    // private System.Boolean useHashtable
    // Size: 0x1
    // Offset: 0x38
    bool useHashtable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useHashtable and: xml
    char __padding5[0x7] = {};
    // private System.String xml
    // Size: 0x8
    // Offset: 0x40
    ::StringW xml;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String xmlNs
    // Size: 0x8
    // Offset: 0x48
    ::StringW xmlNs;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Xml::IXmlNamespaceResolver
    operator ::System::Xml::IXmlNamespaceResolver() noexcept {
      return *reinterpret_cast<::System::Xml::IXmlNamespaceResolver*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::IEnumerable
    operator ::System::Collections::IEnumerable() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerable*>(this);
    }
    // Get instance field reference: private System.Xml.XmlNamespaceManager/System.Xml.NamespaceDeclaration[] nsdecls
    ::ArrayW<::System::Xml::XmlNamespaceManager::NamespaceDeclaration>& dyn_nsdecls();
    // Get instance field reference: private System.Int32 lastDecl
    int& dyn_lastDecl();
    // Get instance field reference: private System.Xml.XmlNameTable nameTable
    ::System::Xml::XmlNameTable*& dyn_nameTable();
    // Get instance field reference: private System.Int32 scopeId
    int& dyn_scopeId();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.Int32> hashTable
    ::System::Collections::Generic::Dictionary_2<::StringW, int>*& dyn_hashTable();
    // Get instance field reference: private System.Boolean useHashtable
    bool& dyn_useHashtable();
    // Get instance field reference: private System.String xml
    ::StringW& dyn_xml();
    // Get instance field reference: private System.String xmlNs
    ::StringW& dyn_xmlNs();
    // public System.Xml.XmlNameTable get_NameTable()
    // Offset: 0x15ABACC
    ::System::Xml::XmlNameTable* get_NameTable();
    // public System.String get_DefaultNamespace()
    // Offset: 0x15ABAD4
    ::StringW get_DefaultNamespace();
    // public System.Void .ctor(System.Xml.XmlNameTable nameTable)
    // Offset: 0x15A8418
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlNamespaceManager* New_ctor(::System::Xml::XmlNameTable* nameTable) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlNamespaceManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlNamespaceManager*, creationType>(nameTable)));
    }
    // public System.Void PushScope()
    // Offset: 0x15ABB4C
    void PushScope();
    // public System.Boolean PopScope()
    // Offset: 0x15ABB5C
    bool PopScope();
    // public System.Void AddNamespace(System.String prefix, System.String uri)
    // Offset: 0x15ABC44
    void AddNamespace(::StringW prefix, ::StringW uri);
    // public System.Void RemoveNamespace(System.String prefix, System.String uri)
    // Offset: 0x15AC170
    void RemoveNamespace(::StringW prefix, ::StringW uri);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x15AC2D8
    ::System::Collections::IEnumerator* GetEnumerator();
    // public System.String LookupNamespace(System.String prefix)
    // Offset: 0x15AC428
    ::StringW LookupNamespace(::StringW prefix);
    // private System.Int32 LookupNamespaceDecl(System.String prefix)
    // Offset: 0x15ABFB8
    int LookupNamespaceDecl(::StringW prefix);
    // public System.String LookupPrefix(System.String uri)
    // Offset: 0x15AC488
    ::StringW LookupPrefix(::StringW uri);
    // System.Void .ctor()
    // Offset: 0x15ABAB8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlNamespaceManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlNamespaceManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlNamespaceManager*, creationType>()));
    }
  }; // System.Xml.XmlNamespaceManager
  #pragma pack(pop)
  static check_size<sizeof(XmlNamespaceManager), 72 + sizeof(::StringW)> __System_Xml_XmlNamespaceManagerSizeCheck;
  static_assert(sizeof(XmlNamespaceManager) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNamespaceManager::NamespaceDeclaration, "System.Xml", "XmlNamespaceManager/NamespaceDeclaration");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlNamespaceManager::get_NameTable
// Il2CppName: get_NameTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (System::Xml::XmlNamespaceManager::*)()>(&System::Xml::XmlNamespaceManager::get_NameTable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNamespaceManager*), "get_NameTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNamespaceManager::get_DefaultNamespace
// Il2CppName: get_DefaultNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlNamespaceManager::*)()>(&System::Xml::XmlNamespaceManager::get_DefaultNamespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNamespaceManager*), "get_DefaultNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNamespaceManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlNamespaceManager::PushScope
// Il2CppName: PushScope
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlNamespaceManager::*)()>(&System::Xml::XmlNamespaceManager::PushScope)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNamespaceManager*), "PushScope", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNamespaceManager::PopScope
// Il2CppName: PopScope
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlNamespaceManager::*)()>(&System::Xml::XmlNamespaceManager::PopScope)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNamespaceManager*), "PopScope", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNamespaceManager::AddNamespace
// Il2CppName: AddNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlNamespaceManager::*)(::StringW, ::StringW)>(&System::Xml::XmlNamespaceManager::AddNamespace)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNamespaceManager*), "AddNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, uri});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNamespaceManager::RemoveNamespace
// Il2CppName: RemoveNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlNamespaceManager::*)(::StringW, ::StringW)>(&System::Xml::XmlNamespaceManager::RemoveNamespace)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNamespaceManager*), "RemoveNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, uri});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNamespaceManager::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Xml::XmlNamespaceManager::*)()>(&System::Xml::XmlNamespaceManager::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNamespaceManager*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNamespaceManager::LookupNamespace
// Il2CppName: LookupNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlNamespaceManager::*)(::StringW)>(&System::Xml::XmlNamespaceManager::LookupNamespace)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNamespaceManager*), "LookupNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNamespaceManager::LookupNamespaceDecl
// Il2CppName: LookupNamespaceDecl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlNamespaceManager::*)(::StringW)>(&System::Xml::XmlNamespaceManager::LookupNamespaceDecl)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNamespaceManager*), "LookupNamespaceDecl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNamespaceManager::LookupPrefix
// Il2CppName: LookupPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlNamespaceManager::*)(::StringW)>(&System::Xml::XmlNamespaceManager::LookupPrefix)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNamespaceManager*), "LookupPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNamespaceManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!