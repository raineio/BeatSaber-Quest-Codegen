// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.ContentValidator
#include "System/Xml/Schema/ContentValidator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: BitSet
  class BitSet;
  // Forward declaring type: SymbolsDictionary
  class SymbolsDictionary;
  // Forward declaring type: Positions
  class Positions;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: NfaContentValidator
  class NfaContentValidator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::NfaContentValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::NfaContentValidator*, "System.Xml.Schema", "NfaContentValidator");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.NfaContentValidator
  // [TokenAttribute] Offset: FFFFFFFF
  class NfaContentValidator : public ::System::Xml::Schema::ContentValidator {
    public:
    // Writing base type padding for base size: 0x16 to desired offset: 0x18
    char ___base_padding[0x2] = {};
    public:
    // private System.Xml.Schema.BitSet firstpos
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::Schema::BitSet* firstpos;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::BitSet*) == 0x8);
    // private System.Xml.Schema.BitSet[] followpos
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::System::Xml::Schema::BitSet*> followpos;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Xml::Schema::BitSet*>) == 0x8);
    // private System.Xml.Schema.SymbolsDictionary symbols
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Schema::SymbolsDictionary* symbols;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SymbolsDictionary*) == 0x8);
    // private System.Xml.Schema.Positions positions
    // Size: 0x8
    // Offset: 0x30
    ::System::Xml::Schema::Positions* positions;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::Positions*) == 0x8);
    // private System.Int32 endMarkerPos
    // Size: 0x4
    // Offset: 0x38
    int endMarkerPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Xml.Schema.BitSet firstpos
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::BitSet*& dyn_firstpos();
    // Get instance field reference: private System.Xml.Schema.BitSet[] followpos
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Xml::Schema::BitSet*>& dyn_followpos();
    // Get instance field reference: private System.Xml.Schema.SymbolsDictionary symbols
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::SymbolsDictionary*& dyn_symbols();
    // Get instance field reference: private System.Xml.Schema.Positions positions
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::Positions*& dyn_positions();
    // Get instance field reference: private System.Int32 endMarkerPos
    [[deprecated("Use field access instead!")]] int& dyn_endMarkerPos();
    // System.Void .ctor(System.Xml.Schema.BitSet firstpos, System.Xml.Schema.BitSet[] followpos, System.Xml.Schema.SymbolsDictionary symbols, System.Xml.Schema.Positions positions, System.Int32 endMarkerPos, System.Xml.Schema.XmlSchemaContentType contentType, System.Boolean isOpen, System.Boolean isEmptiable)
    // Offset: 0x1C5F970
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NfaContentValidator* New_ctor(::System::Xml::Schema::BitSet* firstpos, ::ArrayW<::System::Xml::Schema::BitSet*> followpos, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions, int endMarkerPos, ::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::NfaContentValidator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NfaContentValidator*, creationType>(firstpos, followpos, symbols, positions, endMarkerPos, contentType, isOpen, isEmptiable)));
    }
  }; // System.Xml.Schema.NfaContentValidator
  #pragma pack(pop)
  static check_size<sizeof(NfaContentValidator), 56 + sizeof(int)> __System_Xml_Schema_NfaContentValidatorSizeCheck;
  static_assert(sizeof(NfaContentValidator) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::NfaContentValidator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
