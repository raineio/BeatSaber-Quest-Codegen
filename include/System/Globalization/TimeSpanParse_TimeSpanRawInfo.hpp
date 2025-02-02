// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Globalization.TimeSpanParse
#include "System/Globalization/TimeSpanParse.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals
#include "System/Globalization/TimeSpanFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: DateTimeFormatInfo
  class DateTimeFormatInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanParse::TimeSpanRawInfo, "System.Globalization", "TimeSpanParse/TimeSpanRawInfo");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x88
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Globalization.TimeSpanParse/System.Globalization.TimeSpanRawInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct TimeSpanParse::TimeSpanRawInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Globalization.TimeSpanParse/System.Globalization.TTT lastSeenTTT
    // Size: 0x4
    // Offset: 0x0
    ::System::Globalization::TimeSpanParse::TTT lastSeenTTT;
    // Field size check
    static_assert(sizeof(::System::Globalization::TimeSpanParse::TTT) == 0x4);
    // System.Int32 tokenCount
    // Size: 0x4
    // Offset: 0x4
    int tokenCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 SepCount
    // Size: 0x4
    // Offset: 0x8
    int SepCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 NumCount
    // Size: 0x4
    // Offset: 0xC
    int NumCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.String[] literals
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::StringW> literals;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.Globalization.TimeSpanParse/System.Globalization.TimeSpanToken[] numbers
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::System::Globalization::TimeSpanParse::TimeSpanToken> numbers;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Globalization::TimeSpanParse::TimeSpanToken>) == 0x8);
    // private System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals m_posLoc
    // Size: 0x28
    // Offset: 0x20
    ::System::Globalization::TimeSpanFormat::FormatLiterals m_posLoc;
    // Field size check
    static_assert(sizeof(::System::Globalization::TimeSpanFormat::FormatLiterals) == 0x28);
    // private System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals m_negLoc
    // Size: 0x28
    // Offset: 0x48
    ::System::Globalization::TimeSpanFormat::FormatLiterals m_negLoc;
    // Field size check
    static_assert(sizeof(::System::Globalization::TimeSpanFormat::FormatLiterals) == 0x28);
    // private System.Boolean m_posLocInit
    // Size: 0x1
    // Offset: 0x70
    bool m_posLocInit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_negLocInit
    // Size: 0x1
    // Offset: 0x71
    bool m_negLocInit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_negLocInit and: m_fullPosPattern
    char __padding9[0x6] = {};
    // private System.String m_fullPosPattern
    // Size: 0x8
    // Offset: 0x78
    ::StringW m_fullPosPattern;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_fullNegPattern
    // Size: 0x8
    // Offset: 0x80
    ::StringW m_fullNegPattern;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: TimeSpanRawInfo
    constexpr TimeSpanRawInfo(::System::Globalization::TimeSpanParse::TTT lastSeenTTT_ = {}, int tokenCount_ = {}, int SepCount_ = {}, int NumCount_ = {}, ::ArrayW<::StringW> literals_ = ::ArrayW<::StringW>(static_cast<void*>(nullptr)), ::ArrayW<::System::Globalization::TimeSpanParse::TimeSpanToken> numbers_ = ::ArrayW<::System::Globalization::TimeSpanParse::TimeSpanToken>(static_cast<void*>(nullptr)), ::System::Globalization::TimeSpanFormat::FormatLiterals m_posLoc_ = {}, ::System::Globalization::TimeSpanFormat::FormatLiterals m_negLoc_ = {}, bool m_posLocInit_ = {}, bool m_negLocInit_ = {}, ::StringW m_fullPosPattern_ = {}, ::StringW m_fullNegPattern_ = {}) noexcept : lastSeenTTT{lastSeenTTT_}, tokenCount{tokenCount_}, SepCount{SepCount_}, NumCount{NumCount_}, literals{literals_}, numbers{numbers_}, m_posLoc{m_posLoc_}, m_negLoc{m_negLoc_}, m_posLocInit{m_posLocInit_}, m_negLocInit{m_negLocInit_}, m_fullPosPattern{m_fullPosPattern_}, m_fullNegPattern{m_fullNegPattern_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.Globalization.TimeSpanParse/System.Globalization.TTT lastSeenTTT
    [[deprecated("Use field access instead!")]] ::System::Globalization::TimeSpanParse::TTT& dyn_lastSeenTTT();
    // Get instance field reference: System.Int32 tokenCount
    [[deprecated("Use field access instead!")]] int& dyn_tokenCount();
    // Get instance field reference: System.Int32 SepCount
    [[deprecated("Use field access instead!")]] int& dyn_SepCount();
    // Get instance field reference: System.Int32 NumCount
    [[deprecated("Use field access instead!")]] int& dyn_NumCount();
    // Get instance field reference: System.String[] literals
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_literals();
    // Get instance field reference: System.Globalization.TimeSpanParse/System.Globalization.TimeSpanToken[] numbers
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Globalization::TimeSpanParse::TimeSpanToken>& dyn_numbers();
    // Get instance field reference: private System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals m_posLoc
    [[deprecated("Use field access instead!")]] ::System::Globalization::TimeSpanFormat::FormatLiterals& dyn_m_posLoc();
    // Get instance field reference: private System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals m_negLoc
    [[deprecated("Use field access instead!")]] ::System::Globalization::TimeSpanFormat::FormatLiterals& dyn_m_negLoc();
    // Get instance field reference: private System.Boolean m_posLocInit
    [[deprecated("Use field access instead!")]] bool& dyn_m_posLocInit();
    // Get instance field reference: private System.Boolean m_negLocInit
    [[deprecated("Use field access instead!")]] bool& dyn_m_negLocInit();
    // Get instance field reference: private System.String m_fullPosPattern
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_fullPosPattern();
    // Get instance field reference: private System.String m_fullNegPattern
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_fullNegPattern();
    // System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals get_PositiveInvariant()
    // Offset: 0x21CF828
    ::System::Globalization::TimeSpanFormat::FormatLiterals get_PositiveInvariant();
    // System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals get_NegativeInvariant()
    // Offset: 0x21CF8A0
    ::System::Globalization::TimeSpanFormat::FormatLiterals get_NegativeInvariant();
    // System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals get_PositiveLocalized()
    // Offset: 0x21CEF08
    ::System::Globalization::TimeSpanFormat::FormatLiterals get_PositiveLocalized();
    // System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals get_NegativeLocalized()
    // Offset: 0x21CEF70
    ::System::Globalization::TimeSpanFormat::FormatLiterals get_NegativeLocalized();
    // System.Boolean FullAppCompatMatch(System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals pattern)
    // Offset: 0x21CF228
    bool FullAppCompatMatch(::System::Globalization::TimeSpanFormat::FormatLiterals pattern);
    // System.Boolean PartialAppCompatMatch(System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals pattern)
    // Offset: 0x21CF544
    bool PartialAppCompatMatch(::System::Globalization::TimeSpanFormat::FormatLiterals pattern);
    // System.Boolean FullMatch(System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals pattern)
    // Offset: 0x21CEDB4
    bool FullMatch(::System::Globalization::TimeSpanFormat::FormatLiterals pattern);
    // System.Boolean FullDMatch(System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals pattern)
    // Offset: 0x21CF70C
    bool FullDMatch(::System::Globalization::TimeSpanFormat::FormatLiterals pattern);
    // System.Boolean FullHMMatch(System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals pattern)
    // Offset: 0x21CF63C
    bool FullHMMatch(::System::Globalization::TimeSpanFormat::FormatLiterals pattern);
    // System.Boolean FullDHMMatch(System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals pattern)
    // Offset: 0x21CF448
    bool FullDHMMatch(::System::Globalization::TimeSpanFormat::FormatLiterals pattern);
    // System.Boolean FullHMSMatch(System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals pattern)
    // Offset: 0x21CF34C
    bool FullHMSMatch(::System::Globalization::TimeSpanFormat::FormatLiterals pattern);
    // System.Boolean FullDHMSMatch(System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals pattern)
    // Offset: 0x21CF100
    bool FullDHMSMatch(::System::Globalization::TimeSpanFormat::FormatLiterals pattern);
    // System.Boolean FullHMSFMatch(System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals pattern)
    // Offset: 0x21CEFD8
    bool FullHMSFMatch(::System::Globalization::TimeSpanFormat::FormatLiterals pattern);
    // System.Void Init(System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x21CB8B8
    void Init(::System::Globalization::DateTimeFormatInfo* dtfi);
    // System.Boolean ProcessToken(ref System.Globalization.TimeSpanParse/System.Globalization.TimeSpanToken tok, ref System.Globalization.TimeSpanParse/System.Globalization.TimeSpanResult result)
    // Offset: 0x21CB964
    bool ProcessToken(ByRef<::System::Globalization::TimeSpanParse::TimeSpanToken> tok, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult> result);
    // private System.Boolean AddSep(System.String sep, ref System.Globalization.TimeSpanParse/System.Globalization.TimeSpanResult result)
    // Offset: 0x21CF924
    bool AddSep(::StringW sep, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult> result);
    // private System.Boolean AddNum(System.Globalization.TimeSpanParse/System.Globalization.TimeSpanToken num, ref System.Globalization.TimeSpanParse/System.Globalization.TimeSpanResult result)
    // Offset: 0x21CFA1C
    bool AddNum(::System::Globalization::TimeSpanParse::TimeSpanToken num, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult> result);
  }; // System.Globalization.TimeSpanParse/System.Globalization.TimeSpanRawInfo
  #pragma pack(pop)
  static check_size<sizeof(TimeSpanParse::TimeSpanRawInfo), 128 + sizeof(::StringW)> __System_Globalization_TimeSpanParse_TimeSpanRawInfoSizeCheck;
  static_assert(sizeof(TimeSpanParse::TimeSpanRawInfo) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanRawInfo::get_PositiveInvariant
// Il2CppName: get_PositiveInvariant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::TimeSpanFormat::FormatLiterals (System::Globalization::TimeSpanParse::TimeSpanRawInfo::*)()>(&System::Globalization::TimeSpanParse::TimeSpanRawInfo::get_PositiveInvariant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanRawInfo), "get_PositiveInvariant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanRawInfo::get_NegativeInvariant
// Il2CppName: get_NegativeInvariant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::TimeSpanFormat::FormatLiterals (System::Globalization::TimeSpanParse::TimeSpanRawInfo::*)()>(&System::Globalization::TimeSpanParse::TimeSpanRawInfo::get_NegativeInvariant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanRawInfo), "get_NegativeInvariant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanRawInfo::get_PositiveLocalized
// Il2CppName: get_PositiveLocalized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::TimeSpanFormat::FormatLiterals (System::Globalization::TimeSpanParse::TimeSpanRawInfo::*)()>(&System::Globalization::TimeSpanParse::TimeSpanRawInfo::get_PositiveLocalized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanRawInfo), "get_PositiveLocalized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanRawInfo::get_NegativeLocalized
// Il2CppName: get_NegativeLocalized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::TimeSpanFormat::FormatLiterals (System::Globalization::TimeSpanParse::TimeSpanRawInfo::*)()>(&System::Globalization::TimeSpanParse::TimeSpanRawInfo::get_NegativeLocalized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanRawInfo), "get_NegativeLocalized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanRawInfo::FullAppCompatMatch
// Il2CppName: FullAppCompatMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::TimeSpanParse::TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat::FormatLiterals)>(&System::Globalization::TimeSpanParse::TimeSpanRawInfo::FullAppCompatMatch)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanFormat/FormatLiterals")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanRawInfo), "FullAppCompatMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanRawInfo::PartialAppCompatMatch
// Il2CppName: PartialAppCompatMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::TimeSpanParse::TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat::FormatLiterals)>(&System::Globalization::TimeSpanParse::TimeSpanRawInfo::PartialAppCompatMatch)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanFormat/FormatLiterals")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanRawInfo), "PartialAppCompatMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanRawInfo::FullMatch
// Il2CppName: FullMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::TimeSpanParse::TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat::FormatLiterals)>(&System::Globalization::TimeSpanParse::TimeSpanRawInfo::FullMatch)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanFormat/FormatLiterals")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanRawInfo), "FullMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanRawInfo::FullDMatch
// Il2CppName: FullDMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::TimeSpanParse::TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat::FormatLiterals)>(&System::Globalization::TimeSpanParse::TimeSpanRawInfo::FullDMatch)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanFormat/FormatLiterals")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanRawInfo), "FullDMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanRawInfo::FullHMMatch
// Il2CppName: FullHMMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::TimeSpanParse::TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat::FormatLiterals)>(&System::Globalization::TimeSpanParse::TimeSpanRawInfo::FullHMMatch)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanFormat/FormatLiterals")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanRawInfo), "FullHMMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanRawInfo::FullDHMMatch
// Il2CppName: FullDHMMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::TimeSpanParse::TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat::FormatLiterals)>(&System::Globalization::TimeSpanParse::TimeSpanRawInfo::FullDHMMatch)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanFormat/FormatLiterals")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanRawInfo), "FullDHMMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanRawInfo::FullHMSMatch
// Il2CppName: FullHMSMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::TimeSpanParse::TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat::FormatLiterals)>(&System::Globalization::TimeSpanParse::TimeSpanRawInfo::FullHMSMatch)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanFormat/FormatLiterals")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanRawInfo), "FullHMSMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanRawInfo::FullDHMSMatch
// Il2CppName: FullDHMSMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::TimeSpanParse::TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat::FormatLiterals)>(&System::Globalization::TimeSpanParse::TimeSpanRawInfo::FullDHMSMatch)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanFormat/FormatLiterals")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanRawInfo), "FullDHMSMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanRawInfo::FullHMSFMatch
// Il2CppName: FullHMSFMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::TimeSpanParse::TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat::FormatLiterals)>(&System::Globalization::TimeSpanParse::TimeSpanRawInfo::FullHMSFMatch)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanFormat/FormatLiterals")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanRawInfo), "FullHMSFMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanRawInfo::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::TimeSpanParse::TimeSpanRawInfo::*)(::System::Globalization::DateTimeFormatInfo*)>(&System::Globalization::TimeSpanParse::TimeSpanRawInfo::Init)> {
  static const MethodInfo* get() {
    static auto* dtfi = &::il2cpp_utils::GetClassFromName("System.Globalization", "DateTimeFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanRawInfo), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dtfi});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanRawInfo::ProcessToken
// Il2CppName: ProcessToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::TimeSpanParse::TimeSpanRawInfo::*)(ByRef<::System::Globalization::TimeSpanParse::TimeSpanToken>, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult>)>(&System::Globalization::TimeSpanParse::TimeSpanRawInfo::ProcessToken)> {
  static const MethodInfo* get() {
    static auto* tok = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanToken")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanRawInfo), "ProcessToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tok, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanRawInfo::AddSep
// Il2CppName: AddSep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::TimeSpanParse::TimeSpanRawInfo::*)(::StringW, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult>)>(&System::Globalization::TimeSpanParse::TimeSpanRawInfo::AddSep)> {
  static const MethodInfo* get() {
    static auto* sep = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanRawInfo), "AddSep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sep, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanRawInfo::AddNum
// Il2CppName: AddNum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::TimeSpanParse::TimeSpanRawInfo::*)(::System::Globalization::TimeSpanParse::TimeSpanToken, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult>)>(&System::Globalization::TimeSpanParse::TimeSpanRawInfo::AddNum)> {
  static const MethodInfo* get() {
    static auto* num = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanToken")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanRawInfo), "AddNum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{num, result});
  }
};
