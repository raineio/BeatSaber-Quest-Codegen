// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Converters.XObjectWrapper
#include "Newtonsoft/Json/Converters/XObjectWrapper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Linq
namespace System::Xml::Linq {
  // Forward declaring type: XProcessingInstruction
  class XProcessingInstruction;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Forward declaring type: XProcessingInstructionWrapper
  class XProcessingInstructionWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Converters::XProcessingInstructionWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XProcessingInstructionWrapper*, "Newtonsoft.Json.Converters", "XProcessingInstructionWrapper");
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Converters.XProcessingInstructionWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class XProcessingInstructionWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper {
    public:
    // private System.Xml.Linq.XProcessingInstruction get_ProcessingInstruction()
    // Offset: 0x17B6ECC
    ::System::Xml::Linq::XProcessingInstruction* get_ProcessingInstruction();
    // public System.Void .ctor(System.Xml.Linq.XProcessingInstruction processingInstruction)
    // Offset: 0x17B561C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XProcessingInstructionWrapper* New_ctor(::System::Xml::Linq::XProcessingInstruction* processingInstruction) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::XProcessingInstructionWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XProcessingInstructionWrapper*, creationType>(processingInstruction)));
    }
    // public override System.String get_LocalName()
    // Offset: 0x17B6F4C
    // Implemented from: Newtonsoft.Json.Converters.XObjectWrapper
    // Base method: System.String XObjectWrapper::get_LocalName()
    ::StringW get_LocalName();
    // public override System.String get_Value()
    // Offset: 0x17B6F6C
    // Implemented from: Newtonsoft.Json.Converters.XObjectWrapper
    // Base method: System.String XObjectWrapper::get_Value()
    ::StringW get_Value();
  }; // Newtonsoft.Json.Converters.XProcessingInstructionWrapper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XProcessingInstructionWrapper::get_ProcessingInstruction
// Il2CppName: get_ProcessingInstruction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XProcessingInstruction* (Newtonsoft::Json::Converters::XProcessingInstructionWrapper::*)()>(&Newtonsoft::Json::Converters::XProcessingInstructionWrapper::get_ProcessingInstruction)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XProcessingInstructionWrapper*), "get_ProcessingInstruction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XProcessingInstructionWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XProcessingInstructionWrapper::get_LocalName
// Il2CppName: get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XProcessingInstructionWrapper::*)()>(&Newtonsoft::Json::Converters::XProcessingInstructionWrapper::get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XProcessingInstructionWrapper*), "get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XProcessingInstructionWrapper::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XProcessingInstructionWrapper::*)()>(&Newtonsoft::Json::Converters::XProcessingInstructionWrapper::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XProcessingInstructionWrapper*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
