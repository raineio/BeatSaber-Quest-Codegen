// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Converters.XmlNodeWrapper
#include "Newtonsoft/Json/Converters/XmlNodeWrapper.hpp"
// Including type: Newtonsoft.Json.Converters.IXmlDeclaration
#include "Newtonsoft/Json/Converters/IXmlDeclaration.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlDeclaration
  class XmlDeclaration;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Forward declaring type: XmlDeclarationWrapper
  class XmlDeclarationWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Converters::XmlDeclarationWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XmlDeclarationWrapper*, "Newtonsoft.Json.Converters", "XmlDeclarationWrapper");
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Converters.XmlDeclarationWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlDeclarationWrapper : public ::Newtonsoft::Json::Converters::XmlNodeWrapper/*, public ::Newtonsoft::Json::Converters::IXmlDeclaration*/ {
    public:
    public:
    // private readonly System.Xml.XmlDeclaration _declaration
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::XmlDeclaration* declaration;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlDeclaration*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Newtonsoft::Json::Converters::IXmlDeclaration
    operator ::Newtonsoft::Json::Converters::IXmlDeclaration() noexcept {
      return *reinterpret_cast<::Newtonsoft::Json::Converters::IXmlDeclaration*>(this);
    }
    // Creating conversion operator: operator ::System::Xml::XmlDeclaration*
    constexpr operator ::System::Xml::XmlDeclaration*() const noexcept {
      return declaration;
    }
    // Get instance field reference: private readonly System.Xml.XmlDeclaration _declaration
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlDeclaration*& dyn__declaration();
    // public System.String get_Version()
    // Offset: 0x17BA598
    ::StringW get_Version();
    // public System.String get_Encoding()
    // Offset: 0x17BA5B4
    ::StringW get_Encoding();
    // public System.String get_Standalone()
    // Offset: 0x17BA5D0
    ::StringW get_Standalone();
    // public System.Void .ctor(System.Xml.XmlDeclaration declaration)
    // Offset: 0x17BA53C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlDeclarationWrapper* New_ctor(::System::Xml::XmlDeclaration* declaration) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::XmlDeclarationWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlDeclarationWrapper*, creationType>(declaration)));
    }
  }; // Newtonsoft.Json.Converters.XmlDeclarationWrapper
  #pragma pack(pop)
  static check_size<sizeof(XmlDeclarationWrapper), 40 + sizeof(::System::Xml::XmlDeclaration*)> __Newtonsoft_Json_Converters_XmlDeclarationWrapperSizeCheck;
  static_assert(sizeof(XmlDeclarationWrapper) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlDeclarationWrapper::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XmlDeclarationWrapper::*)()>(&Newtonsoft::Json::Converters::XmlDeclarationWrapper::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XmlDeclarationWrapper*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlDeclarationWrapper::get_Encoding
// Il2CppName: get_Encoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XmlDeclarationWrapper::*)()>(&Newtonsoft::Json::Converters::XmlDeclarationWrapper::get_Encoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XmlDeclarationWrapper*), "get_Encoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlDeclarationWrapper::get_Standalone
// Il2CppName: get_Standalone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XmlDeclarationWrapper::*)()>(&Newtonsoft::Json::Converters::XmlDeclarationWrapper::get_Standalone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XmlDeclarationWrapper*), "get_Standalone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlDeclarationWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
