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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Forward declaring type: Contraction
  class Contraction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Globalization::Unicode::Contraction);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::Contraction*, "Mono.Globalization.Unicode", "Contraction");
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Globalization.Unicode.Contraction
  // [TokenAttribute] Offset: FFFFFFFF
  class Contraction : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 Index
    // Size: 0x4
    // Offset: 0x10
    int Index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Index and: Source
    char __padding0[0x4] = {};
    // public readonly System.Char[] Source
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Il2CppChar> Source;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // public readonly System.String Replacement
    // Size: 0x8
    // Offset: 0x20
    ::StringW Replacement;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.Byte[] SortKey
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> SortKey;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: public System.Int32 Index
    [[deprecated("Use field access instead!")]] int& dyn_Index();
    // Get instance field reference: public readonly System.Char[] Source
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn_Source();
    // Get instance field reference: public readonly System.String Replacement
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Replacement();
    // Get instance field reference: public readonly System.Byte[] SortKey
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_SortKey();
    // public System.Void .ctor(System.Int32 index, System.Char[] source, System.String replacement, System.Byte[] sortkey)
    // Offset: 0x1F453A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Contraction* New_ctor(int index, ::ArrayW<::Il2CppChar> source, ::StringW replacement, ::ArrayW<uint8_t> sortkey) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Globalization::Unicode::Contraction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Contraction*, creationType>(index, source, replacement, sortkey)));
    }
  }; // Mono.Globalization.Unicode.Contraction
  #pragma pack(pop)
  static check_size<sizeof(Contraction), 40 + sizeof(::ArrayW<uint8_t>)> __Mono_Globalization_Unicode_ContractionSizeCheck;
  static_assert(sizeof(Contraction) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Globalization::Unicode::Contraction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
