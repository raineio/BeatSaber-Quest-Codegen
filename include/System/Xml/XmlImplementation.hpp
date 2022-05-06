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
  // Forward declaring type: XmlDocument
  class XmlDocument;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlImplementation
  class XmlImplementation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlImplementation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlImplementation*, "System.Xml", "XmlImplementation");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlImplementation
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlImplementation : public ::Il2CppObject {
    public:
    public:
    // private System.Xml.XmlNameTable nameTable
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::XmlNameTable* nameTable;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNameTable*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Xml::XmlNameTable*
    constexpr operator ::System::Xml::XmlNameTable*() const noexcept {
      return nameTable;
    }
    // Get instance field reference: private System.Xml.XmlNameTable nameTable
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlNameTable*& dyn_nameTable();
    // System.Xml.XmlNameTable get_NameTable()
    // Offset: 0x15D1E3C
    ::System::Xml::XmlNameTable* get_NameTable();
    // public System.Void .ctor()
    // Offset: 0x15D1D40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlImplementation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlImplementation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlImplementation*, creationType>()));
    }
    // public System.Void .ctor(System.Xml.XmlNameTable nt)
    // Offset: 0x15D1DAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlImplementation* New_ctor(::System::Xml::XmlNameTable* nt) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlImplementation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlImplementation*, creationType>(nt)));
    }
    // public System.Xml.XmlDocument CreateDocument()
    // Offset: 0x15D1DD8
    ::System::Xml::XmlDocument* CreateDocument();
  }; // System.Xml.XmlImplementation
  #pragma pack(pop)
  static check_size<sizeof(XmlImplementation), 16 + sizeof(::System::Xml::XmlNameTable*)> __System_Xml_XmlImplementationSizeCheck;
  static_assert(sizeof(XmlImplementation) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlImplementation::get_NameTable
// Il2CppName: get_NameTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (System::Xml::XmlImplementation::*)()>(&System::Xml::XmlImplementation::get_NameTable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlImplementation*), "get_NameTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlImplementation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlImplementation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlImplementation::CreateDocument
// Il2CppName: CreateDocument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDocument* (System::Xml::XmlImplementation::*)()>(&System::Xml::XmlImplementation::CreateDocument)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlImplementation*), "CreateDocument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
