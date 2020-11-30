// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ProfanityFilter/TrieNode
#include "GlobalNamespace/ProfanityFilter_TrieNode.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: ProfanityFilter/TrieNode.AddWord
void GlobalNamespace::ProfanityFilter::TrieNode::AddWord(::Il2CppString* word, int index) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("TrieNode").WithContext("AddWord");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "AddWord", {}, ::il2cpp_utils::ExtractTypes(word, index)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, word, index);
}
// Autogenerated method: ProfanityFilter/TrieNode.IsMatch
bool GlobalNamespace::ProfanityFilter::TrieNode::IsMatch(::Il2CppString* word, int index) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("TrieNode").WithContext("IsMatch");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "IsMatch", {}, ::il2cpp_utils::ExtractTypes(word, index)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, word, index);
}
// Autogenerated method: ProfanityFilter/TrieNode..ctor
GlobalNamespace::ProfanityFilter::TrieNode* GlobalNamespace::ProfanityFilter::TrieNode::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("TrieNode").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<ProfanityFilter::TrieNode*>());
}