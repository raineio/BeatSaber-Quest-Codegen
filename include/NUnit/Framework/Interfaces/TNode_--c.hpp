// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Interfaces.TNode
#include "NUnit/Framework/Interfaces/TNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: MatchEvaluator
  class MatchEvaluator;
  // Forward declaring type: Match
  class Match;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: <>c
  class $$c;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(NUnit::Framework::Interfaces::TNode::$$c);
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::TNode::$$c*, "NUnit.Framework.Interfaces", "TNode/<>c");
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.TNode/NUnit.Framework.Interfaces.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TNode::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly NUnit.Framework.Interfaces.TNode/NUnit.Framework.Interfaces.<>c <>9
    static NUnit::Framework::Interfaces::TNode::$$c* _get_$$9();
    // Set static field: static public readonly NUnit.Framework.Interfaces.TNode/NUnit.Framework.Interfaces.<>c <>9
    static void _set_$$9(NUnit::Framework::Interfaces::TNode::$$c* value);
    // Get static field: static public System.Text.RegularExpressions.MatchEvaluator <>9__38_0
    static System::Text::RegularExpressions::MatchEvaluator* _get_$$9__38_0();
    // Set static field: static public System.Text.RegularExpressions.MatchEvaluator <>9__38_0
    static void _set_$$9__38_0(System::Text::RegularExpressions::MatchEvaluator* value);
    // static private System.Void .cctor()
    // Offset: 0x19426E4
    static void _cctor();
    // System.String <EscapeInvalidXmlCharacters>b__38_0(System.Text.RegularExpressions.Match match)
    // Offset: 0x1942750
    ::Il2CppString* $EscapeInvalidXmlCharacters$b__38_0(System::Text::RegularExpressions::Match* match);
    // public System.Void .ctor()
    // Offset: 0x1942748
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TNode::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Interfaces::TNode::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TNode::$$c*, creationType>()));
    }
  }; // NUnit.Framework.Interfaces.TNode/NUnit.Framework.Interfaces.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Interfaces::TNode::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::$$c::$EscapeInvalidXmlCharacters$b__38_0
// Il2CppName: <EscapeInvalidXmlCharacters>b__38_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Interfaces::TNode::$$c::*)(System::Text::RegularExpressions::Match*)>(&NUnit::Framework::Interfaces::TNode::$$c::$EscapeInvalidXmlCharacters$b__38_0)> {
  static const MethodInfo* get() {
    static auto* match = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "Match")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode::$$c*), "<EscapeInvalidXmlCharacters>b__38_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{match});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
