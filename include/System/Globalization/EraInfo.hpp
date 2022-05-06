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
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: EraInfo
  class EraInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Globalization::EraInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::EraInfo*, "System.Globalization", "EraInfo");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.EraInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class EraInfo : public ::Il2CppObject {
    public:
    public:
    // System.Int32 era
    // Size: 0x4
    // Offset: 0x10
    int era;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: era and: ticks
    char __padding0[0x4] = {};
    // System.Int64 ticks
    // Size: 0x8
    // Offset: 0x18
    int64_t ticks;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Int32 yearOffset
    // Size: 0x4
    // Offset: 0x20
    int yearOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 minEraYear
    // Size: 0x4
    // Offset: 0x24
    int minEraYear;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 maxEraYear
    // Size: 0x4
    // Offset: 0x28
    int maxEraYear;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: maxEraYear and: eraName
    char __padding4[0x4] = {};
    // [OptionalFieldAttribute] Offset: 0x1035618
    // System.String eraName
    // Size: 0x8
    // Offset: 0x30
    ::StringW eraName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [OptionalFieldAttribute] Offset: 0x1035650
    // System.String abbrevEraName
    // Size: 0x8
    // Offset: 0x38
    ::StringW abbrevEraName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [OptionalFieldAttribute] Offset: 0x1035688
    // System.String englishEraName
    // Size: 0x8
    // Offset: 0x40
    ::StringW englishEraName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: System.Int32 era
    [[deprecated("Use field access instead!")]] int& dyn_era();
    // Get instance field reference: System.Int64 ticks
    [[deprecated("Use field access instead!")]] int64_t& dyn_ticks();
    // Get instance field reference: System.Int32 yearOffset
    [[deprecated("Use field access instead!")]] int& dyn_yearOffset();
    // Get instance field reference: System.Int32 minEraYear
    [[deprecated("Use field access instead!")]] int& dyn_minEraYear();
    // Get instance field reference: System.Int32 maxEraYear
    [[deprecated("Use field access instead!")]] int& dyn_maxEraYear();
    // Get instance field reference: System.String eraName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_eraName();
    // Get instance field reference: System.String abbrevEraName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_abbrevEraName();
    // Get instance field reference: System.String englishEraName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_englishEraName();
    // System.Void .ctor(System.Int32 era, System.Int32 startYear, System.Int32 startMonth, System.Int32 startDay, System.Int32 yearOffset, System.Int32 minEraYear, System.Int32 maxEraYear)
    // Offset: 0x213BFFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EraInfo* New_ctor(int era, int startYear, int startMonth, int startDay, int yearOffset, int minEraYear, int maxEraYear) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Globalization::EraInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EraInfo*, creationType>(era, startYear, startMonth, startDay, yearOffset, minEraYear, maxEraYear)));
    }
    // System.Void .ctor(System.Int32 era, System.Int32 startYear, System.Int32 startMonth, System.Int32 startDay, System.Int32 yearOffset, System.Int32 minEraYear, System.Int32 maxEraYear, System.String eraName, System.String abbrevEraName, System.String englishEraName)
    // Offset: 0x213C09C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EraInfo* New_ctor(int era, int startYear, int startMonth, int startDay, int yearOffset, int minEraYear, int maxEraYear, ::StringW eraName, ::StringW abbrevEraName, ::StringW englishEraName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Globalization::EraInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EraInfo*, creationType>(era, startYear, startMonth, startDay, yearOffset, minEraYear, maxEraYear, eraName, abbrevEraName, englishEraName)));
    }
  }; // System.Globalization.EraInfo
  #pragma pack(pop)
  static check_size<sizeof(EraInfo), 64 + sizeof(::StringW)> __System_Globalization_EraInfoSizeCheck;
  static_assert(sizeof(EraInfo) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::EraInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::EraInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
