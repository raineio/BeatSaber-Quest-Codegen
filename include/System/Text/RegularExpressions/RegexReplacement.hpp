// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexNode
  class RegexNode;
  // Forward declaring type: Match
  class Match;
  // Forward declaring type: Regex
  class Regex;
  // Forward declaring type: MatchEvaluator
  class MatchEvaluator;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexReplacement
  // [TokenAttribute] Offset: FFFFFFFF
  class RegexReplacement : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // System.String _rep
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* rep;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Collections.Generic.List`1<System.String> _strings
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<::Il2CppString*>* strings;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // System.Collections.Generic.List`1<System.Int32> _rules
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<int>* rules;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<int>*) == 0x8);
    public:
    // Get instance field reference: System.String _rep
    ::Il2CppString*& dyn__rep();
    // Get instance field reference: System.Collections.Generic.List`1<System.String> _strings
    System::Collections::Generic::List_1<::Il2CppString*>*& dyn__strings();
    // Get instance field reference: System.Collections.Generic.List`1<System.Int32> _rules
    System::Collections::Generic::List_1<int>*& dyn__rules();
    // System.String get_Pattern()
    // Offset: 0x1A40440
    ::Il2CppString* get_Pattern();
    // System.Void .ctor(System.String rep, System.Text.RegularExpressions.RegexNode concat, System.Collections.Hashtable _caps)
    // Offset: 0x1A3B13C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexReplacement* New_ctor(::Il2CppString* rep, System::Text::RegularExpressions::RegexNode* concat, System::Collections::Hashtable* _caps) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::RegexReplacement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexReplacement*, creationType>(rep, concat, _caps)));
    }
    // private System.Void ReplacementImpl(System.Text.StringBuilder sb, System.Text.RegularExpressions.Match match)
    // Offset: 0x1A40114
    void ReplacementImpl(System::Text::StringBuilder* sb, System::Text::RegularExpressions::Match* match);
    // private System.Void ReplacementImplRTL(System.Collections.Generic.List`1<System.String> al, System.Text.RegularExpressions.Match match)
    // Offset: 0x1A402A0
    void ReplacementImplRTL(System::Collections::Generic::List_1<::Il2CppString*>* al, System::Text::RegularExpressions::Match* match);
    // System.String Replace(System.Text.RegularExpressions.Regex regex, System.String input, System.Int32 count, System.Int32 startat)
    // Offset: 0x1A40448
    ::Il2CppString* Replace(System::Text::RegularExpressions::Regex* regex, ::Il2CppString* input, int count, int startat);
    // static System.String Replace(System.Text.RegularExpressions.MatchEvaluator evaluator, System.Text.RegularExpressions.Regex regex, System.String input, System.Int32 count, System.Int32 startat)
    // Offset: 0x1A407C0
    static ::Il2CppString* Replace(System::Text::RegularExpressions::MatchEvaluator* evaluator, System::Text::RegularExpressions::Regex* regex, ::Il2CppString* input, int count, int startat);
  }; // System.Text.RegularExpressions.RegexReplacement
  #pragma pack(pop)
  static check_size<sizeof(RegexReplacement), 32 + sizeof(System::Collections::Generic::List_1<int>*)> __System_Text_RegularExpressions_RegexReplacementSizeCheck;
  static_assert(sizeof(RegexReplacement) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexReplacement*, "System.Text.RegularExpressions", "RegexReplacement");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexReplacement::get_Pattern
// Il2CppName: get_Pattern
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Text::RegularExpressions::RegexReplacement::*)()>(&System::Text::RegularExpressions::RegexReplacement::get_Pattern)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexReplacement*), "get_Pattern", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexReplacement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexReplacement::ReplacementImpl
// Il2CppName: ReplacementImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexReplacement::*)(System::Text::StringBuilder*, System::Text::RegularExpressions::Match*)>(&System::Text::RegularExpressions::RegexReplacement::ReplacementImpl)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* match = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "Match")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexReplacement*), "ReplacementImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, match});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexReplacement::ReplacementImplRTL
// Il2CppName: ReplacementImplRTL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexReplacement::*)(System::Collections::Generic::List_1<::Il2CppString*>*, System::Text::RegularExpressions::Match*)>(&System::Text::RegularExpressions::RegexReplacement::ReplacementImplRTL)> {
  static const MethodInfo* get() {
    static auto* al = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* match = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "Match")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexReplacement*), "ReplacementImplRTL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{al, match});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexReplacement::Replace
// Il2CppName: Replace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Text::RegularExpressions::RegexReplacement::*)(System::Text::RegularExpressions::Regex*, ::Il2CppString*, int, int)>(&System::Text::RegularExpressions::RegexReplacement::Replace)> {
  static const MethodInfo* get() {
    static auto* regex = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "Regex")->byval_arg;
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* startat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexReplacement*), "Replace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{regex, input, count, startat});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexReplacement::Replace
// Il2CppName: Replace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Text::RegularExpressions::MatchEvaluator*, System::Text::RegularExpressions::Regex*, ::Il2CppString*, int, int)>(&System::Text::RegularExpressions::RegexReplacement::Replace)> {
  static const MethodInfo* get() {
    static auto* evaluator = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "MatchEvaluator")->byval_arg;
    static auto* regex = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "Regex")->byval_arg;
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* startat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexReplacement*), "Replace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evaluator, regex, input, count, startat});
  }
};
