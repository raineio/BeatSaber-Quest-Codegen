// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: MatchEvaluator
  class MatchEvaluator;
  // Forward declaring type: Regex
  class Regex;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Autogenerated type: System.Text.RegularExpressions.RegexReplacement
  class RegexReplacement : public ::Il2CppObject {
    public:
    // static System.String Replace(System.Text.RegularExpressions.MatchEvaluator evaluator, System.Text.RegularExpressions.Regex regex, System.String input, System.Int32 count, System.Int32 startat)
    // Offset: 0x15B19D8
    static ::Il2CppString* Replace(System::Text::RegularExpressions::MatchEvaluator* evaluator, System::Text::RegularExpressions::Regex* regex, ::Il2CppString* input, int count, int startat);
  }; // System.Text.RegularExpressions.RegexReplacement
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexReplacement*, "System.Text.RegularExpressions", "RegexReplacement");
#pragma pack(pop)
