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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Forward declaring type: XDeclaration
  class XDeclaration;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Linq::XDeclaration);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XDeclaration*, "System.Xml.Linq", "XDeclaration");
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Linq.XDeclaration
  // [TokenAttribute] Offset: FFFFFFFF
  class XDeclaration : public ::Il2CppObject {
    public:
    public:
    // private System.String version
    // Size: 0x8
    // Offset: 0x10
    ::StringW version;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String encoding
    // Size: 0x8
    // Offset: 0x18
    ::StringW encoding;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String standalone
    // Size: 0x8
    // Offset: 0x20
    ::StringW standalone;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String version
    [[deprecated("Use field access instead!")]] ::StringW& dyn_version();
    // Get instance field reference: private System.String encoding
    [[deprecated("Use field access instead!")]] ::StringW& dyn_encoding();
    // Get instance field reference: private System.String standalone
    [[deprecated("Use field access instead!")]] ::StringW& dyn_standalone();
    // public System.String get_Encoding()
    // Offset: 0x2B4022C
    ::StringW get_Encoding();
    // public System.String get_Standalone()
    // Offset: 0x2B40234
    ::StringW get_Standalone();
    // public System.String get_Version()
    // Offset: 0x2B4023C
    ::StringW get_Version();
    // public System.Void .ctor(System.String version, System.String encoding, System.String standalone)
    // Offset: 0x2B4013C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XDeclaration* New_ctor(::StringW version, ::StringW encoding, ::StringW standalone) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XDeclaration::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XDeclaration*, creationType>(version, encoding, standalone)));
    }
    // public System.Void .ctor(System.Xml.Linq.XDeclaration other)
    // Offset: 0x2B4017C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XDeclaration* New_ctor(::System::Xml::Linq::XDeclaration* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XDeclaration::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XDeclaration*, creationType>(other)));
    }
    // public override System.String ToString()
    // Offset: 0x2B40244
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Xml.Linq.XDeclaration
  #pragma pack(pop)
  static check_size<sizeof(XDeclaration), 32 + sizeof(::StringW)> __System_Xml_Linq_XDeclarationSizeCheck;
  static_assert(sizeof(XDeclaration) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Linq::XDeclaration::get_Encoding
// Il2CppName: get_Encoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Linq::XDeclaration::*)()>(&System::Xml::Linq::XDeclaration::get_Encoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XDeclaration*), "get_Encoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XDeclaration::get_Standalone
// Il2CppName: get_Standalone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Linq::XDeclaration::*)()>(&System::Xml::Linq::XDeclaration::get_Standalone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XDeclaration*), "get_Standalone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XDeclaration::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Linq::XDeclaration::*)()>(&System::Xml::Linq::XDeclaration::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XDeclaration*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XDeclaration::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Linq::XDeclaration::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Linq::XDeclaration::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Linq::XDeclaration::*)()>(&System::Xml::Linq::XDeclaration::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XDeclaration*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
