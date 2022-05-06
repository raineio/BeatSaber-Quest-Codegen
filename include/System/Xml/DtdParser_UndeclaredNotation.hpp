// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.DtdParser
#include "System/Xml/DtdParser.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::DtdParser::UndeclaredNotation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::DtdParser::UndeclaredNotation*, "System.Xml", "DtdParser/UndeclaredNotation");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.DtdParser/System.Xml.UndeclaredNotation
  // [TokenAttribute] Offset: FFFFFFFF
  class DtdParser::UndeclaredNotation : public ::Il2CppObject {
    public:
    public:
    // System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Int32 lineNo
    // Size: 0x4
    // Offset: 0x18
    int lineNo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 linePos
    // Size: 0x4
    // Offset: 0x1C
    int linePos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Xml.DtdParser/System.Xml.UndeclaredNotation next
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::DtdParser::UndeclaredNotation* next;
    // Field size check
    static_assert(sizeof(::System::Xml::DtdParser::UndeclaredNotation*) == 0x8);
    public:
    // Get instance field reference: System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: System.Int32 lineNo
    [[deprecated("Use field access instead!")]] int& dyn_lineNo();
    // Get instance field reference: System.Int32 linePos
    [[deprecated("Use field access instead!")]] int& dyn_linePos();
    // Get instance field reference: System.Xml.DtdParser/System.Xml.UndeclaredNotation next
    [[deprecated("Use field access instead!")]] ::System::Xml::DtdParser::UndeclaredNotation*& dyn_next();
    // System.Void .ctor(System.String name, System.Int32 lineNo, System.Int32 linePos)
    // Offset: 0x1AC10B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DtdParser::UndeclaredNotation* New_ctor(::StringW name, int lineNo, int linePos) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::DtdParser::UndeclaredNotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DtdParser::UndeclaredNotation*, creationType>(name, lineNo, linePos)));
    }
  }; // System.Xml.DtdParser/System.Xml.UndeclaredNotation
  #pragma pack(pop)
  static check_size<sizeof(DtdParser::UndeclaredNotation), 32 + sizeof(::System::Xml::DtdParser::UndeclaredNotation*)> __System_Xml_DtdParser_UndeclaredNotationSizeCheck;
  static_assert(sizeof(DtdParser::UndeclaredNotation) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::DtdParser::UndeclaredNotation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
