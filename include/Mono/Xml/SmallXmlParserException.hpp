// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.SystemException
#include "System/SystemException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Mono.Xml
namespace Mono::Xml {
  // Forward declaring type: SmallXmlParserException
  class SmallXmlParserException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Xml::SmallXmlParserException);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Xml::SmallXmlParserException*, "Mono.Xml", "SmallXmlParserException");
// Type namespace: Mono.Xml
namespace Mono::Xml {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Xml.SmallXmlParserException
  // [TokenAttribute] Offset: FFFFFFFF
  class SmallXmlParserException : public ::System::SystemException {
    public:
    public:
    // private System.Int32 line
    // Size: 0x4
    // Offset: 0x88
    int line;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 column
    // Size: 0x4
    // Offset: 0x8C
    int column;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Int32 line
    [[deprecated("Use field access instead!")]] int& dyn_line();
    // Get instance field reference: private System.Int32 column
    [[deprecated("Use field access instead!")]] int& dyn_column();
    // public System.Void .ctor(System.String msg, System.Int32 line, System.Int32 column)
    // Offset: 0x1F6AD24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SmallXmlParserException* New_ctor(::StringW msg, int line, int column) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Xml::SmallXmlParserException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SmallXmlParserException*, creationType>(msg, line, column)));
    }
  }; // Mono.Xml.SmallXmlParserException
  #pragma pack(pop)
  static check_size<sizeof(SmallXmlParserException), 140 + sizeof(int)> __Mono_Xml_SmallXmlParserExceptionSizeCheck;
  static_assert(sizeof(SmallXmlParserException) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParserException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
