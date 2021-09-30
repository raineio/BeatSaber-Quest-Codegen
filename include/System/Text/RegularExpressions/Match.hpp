// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.RegularExpressions.Group
#include "System/Text/RegularExpressions/Group.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: GroupCollection
  class GroupCollection;
  // Forward declaring type: Regex
  class Regex;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x69
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.Match
  // [TokenAttribute] Offset: FFFFFFFF
  class Match : public System::Text::RegularExpressions::Group {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // System.Text.RegularExpressions.GroupCollection _groupcoll
    // Size: 0x8
    // Offset: 0x38
    System::Text::RegularExpressions::GroupCollection* groupcoll;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::GroupCollection*) == 0x8);
    // System.Text.RegularExpressions.Regex _regex
    // Size: 0x8
    // Offset: 0x40
    System::Text::RegularExpressions::Regex* regex;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::Regex*) == 0x8);
    // System.Int32 _textbeg
    // Size: 0x4
    // Offset: 0x48
    int textbeg;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _textpos
    // Size: 0x4
    // Offset: 0x4C
    int textpos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _textend
    // Size: 0x4
    // Offset: 0x50
    int textend;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _textstart
    // Size: 0x4
    // Offset: 0x54
    int textstart;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32[][] _matches
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::ArrayW<int>> matches;
    // Field size check
    static_assert(sizeof(::ArrayW<::ArrayW<int>>) == 0x8);
    // System.Int32[] _matchcount
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<int> matchcount;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Boolean _balancing
    // Size: 0x1
    // Offset: 0x68
    bool balancing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static System.Text.RegularExpressions.Match _empty
    static System::Text::RegularExpressions::Match* _get__empty();
    // Set static field: static System.Text.RegularExpressions.Match _empty
    static void _set__empty(System::Text::RegularExpressions::Match* value);
    // Get instance field reference: System.Text.RegularExpressions.GroupCollection _groupcoll
    System::Text::RegularExpressions::GroupCollection*& dyn__groupcoll();
    // Get instance field reference: System.Text.RegularExpressions.Regex _regex
    System::Text::RegularExpressions::Regex*& dyn__regex();
    // Get instance field reference: System.Int32 _textbeg
    int& dyn__textbeg();
    // Get instance field reference: System.Int32 _textpos
    int& dyn__textpos();
    // Get instance field reference: System.Int32 _textend
    int& dyn__textend();
    // Get instance field reference: System.Int32 _textstart
    int& dyn__textstart();
    // Get instance field reference: System.Int32[][] _matches
    ::ArrayW<::ArrayW<int>>& dyn__matches();
    // Get instance field reference: System.Int32[] _matchcount
    ::ArrayW<int>& dyn__matchcount();
    // Get instance field reference: System.Boolean _balancing
    bool& dyn__balancing();
    // static public System.Text.RegularExpressions.Match get_Empty()
    // Offset: 0x19E1E6C
    static System::Text::RegularExpressions::Match* get_Empty();
    // public System.Text.RegularExpressions.GroupCollection get_Groups()
    // Offset: 0x19E2098
    System::Text::RegularExpressions::GroupCollection* get_Groups();
    // System.Void .ctor(System.Text.RegularExpressions.Regex regex, System.Int32 capcount, System.String text, System.Int32 begpos, System.Int32 len, System.Int32 startpos)
    // Offset: 0x19E1ED4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Match* New_ctor(System::Text::RegularExpressions::Regex* regex, int capcount, ::Il2CppString* text, int begpos, int len, int startpos) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::Match::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Match*, creationType>(regex, capcount, text, begpos, len, startpos)));
    }
    // System.Void Reset(System.Text.RegularExpressions.Regex regex, System.String text, System.Int32 textbeg, System.Int32 textend, System.Int32 textstart)
    // Offset: 0x19E2030
    void Reset(System::Text::RegularExpressions::Regex* regex, ::Il2CppString* text, int textbeg, int textend, int textstart);
    // public System.Text.RegularExpressions.Match NextMatch()
    // Offset: 0x19E2108
    System::Text::RegularExpressions::Match* NextMatch();
    // System.String GroupToStringImpl(System.Int32 groupnum)
    // Offset: 0x19E2400
    ::Il2CppString* GroupToStringImpl(int groupnum);
    // System.String LastGroupToStringImpl()
    // Offset: 0x19E2500
    ::Il2CppString* LastGroupToStringImpl();
    // System.Void AddMatch(System.Int32 cap, System.Int32 start, System.Int32 len)
    // Offset: 0x19E2528
    void AddMatch(int cap, int start, int len);
    // System.Void BalanceMatch(System.Int32 cap)
    // Offset: 0x19E2788
    void BalanceMatch(int cap);
    // System.Void RemoveMatch(System.Int32 cap)
    // Offset: 0x19E286C
    void RemoveMatch(int cap);
    // System.Boolean IsMatched(System.Int32 cap)
    // Offset: 0x19E28B0
    bool IsMatched(int cap);
    // System.Int32 MatchIndex(System.Int32 cap)
    // Offset: 0x19E294C
    int MatchIndex(int cap);
    // System.Int32 MatchLength(System.Int32 cap)
    // Offset: 0x19E29E4
    int MatchLength(int cap);
    // System.Void Tidy(System.Int32 textpos)
    // Offset: 0x19E2A7C
    void Tidy(int textpos);
    // static private System.Void .cctor()
    // Offset: 0x19E2C10
    // Implemented from: System.Text.RegularExpressions.Group
    // Base method: System.Void Group::.cctor()
    static void _cctor();
    // System.Void .ctor()
    // Offset: 0x19E2CA4
    // Implemented from: System.Text.RegularExpressions.Group
    // Base method: System.Void Group::.ctor()
    // Base method: System.Void Capture::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Match* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::Match::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Match*, creationType>()));
    }
  }; // System.Text.RegularExpressions.Match
  #pragma pack(pop)
  static check_size<sizeof(Match), 104 + sizeof(bool)> __System_Text_RegularExpressions_MatchSizeCheck;
  static_assert(sizeof(Match) == 0x69);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::Match*, "System.Text.RegularExpressions", "Match");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::Match::get_Empty
// Il2CppName: get_Empty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::Match* (*)()>(&System::Text::RegularExpressions::Match::get_Empty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Match*), "get_Empty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Match::get_Groups
// Il2CppName: get_Groups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::GroupCollection* (System::Text::RegularExpressions::Match::*)()>(&System::Text::RegularExpressions::Match::get_Groups)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Match*), "get_Groups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Match::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::Match::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::Match::*)(System::Text::RegularExpressions::Regex*, ::Il2CppString*, int, int, int)>(&System::Text::RegularExpressions::Match::Reset)> {
  static const MethodInfo* get() {
    static auto* regex = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "Regex")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* textbeg = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* textend = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* textstart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Match*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{regex, text, textbeg, textend, textstart});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Match::NextMatch
// Il2CppName: NextMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::Match* (System::Text::RegularExpressions::Match::*)()>(&System::Text::RegularExpressions::Match::NextMatch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Match*), "NextMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Match::GroupToStringImpl
// Il2CppName: GroupToStringImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Text::RegularExpressions::Match::*)(int)>(&System::Text::RegularExpressions::Match::GroupToStringImpl)> {
  static const MethodInfo* get() {
    static auto* groupnum = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Match*), "GroupToStringImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{groupnum});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Match::LastGroupToStringImpl
// Il2CppName: LastGroupToStringImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Text::RegularExpressions::Match::*)()>(&System::Text::RegularExpressions::Match::LastGroupToStringImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Match*), "LastGroupToStringImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Match::AddMatch
// Il2CppName: AddMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::Match::*)(int, int, int)>(&System::Text::RegularExpressions::Match::AddMatch)> {
  static const MethodInfo* get() {
    static auto* cap = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Match*), "AddMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cap, start, len});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Match::BalanceMatch
// Il2CppName: BalanceMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::Match::*)(int)>(&System::Text::RegularExpressions::Match::BalanceMatch)> {
  static const MethodInfo* get() {
    static auto* cap = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Match*), "BalanceMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cap});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Match::RemoveMatch
// Il2CppName: RemoveMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::Match::*)(int)>(&System::Text::RegularExpressions::Match::RemoveMatch)> {
  static const MethodInfo* get() {
    static auto* cap = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Match*), "RemoveMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cap});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Match::IsMatched
// Il2CppName: IsMatched
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::Match::*)(int)>(&System::Text::RegularExpressions::Match::IsMatched)> {
  static const MethodInfo* get() {
    static auto* cap = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Match*), "IsMatched", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cap});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Match::MatchIndex
// Il2CppName: MatchIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::Match::*)(int)>(&System::Text::RegularExpressions::Match::MatchIndex)> {
  static const MethodInfo* get() {
    static auto* cap = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Match*), "MatchIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cap});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Match::MatchLength
// Il2CppName: MatchLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::Match::*)(int)>(&System::Text::RegularExpressions::Match::MatchLength)> {
  static const MethodInfo* get() {
    static auto* cap = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Match*), "MatchLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cap});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Match::Tidy
// Il2CppName: Tidy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::Match::*)(int)>(&System::Text::RegularExpressions::Match::Tidy)> {
  static const MethodInfo* get() {
    static auto* textpos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Match*), "Tidy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textpos});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Match::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Text::RegularExpressions::Match::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Match*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Match::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
