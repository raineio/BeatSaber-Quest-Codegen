// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Specialized.ListDictionary/NodeEnumerator
#include "System/Collections/Specialized/ListDictionary_NodeEnumerator.hpp"
// Including type: System.Collections.DictionaryEntry
#include "System/Collections/DictionaryEntry.hpp"
// Including type: System.Collections.Specialized.ListDictionary/DictionaryNode
#include "System/Collections/Specialized/ListDictionary_DictionaryNode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Collections.Specialized.ListDictionary/NodeEnumerator..ctor
System::Collections::Specialized::ListDictionary::NodeEnumerator* System::Collections::Specialized::ListDictionary::NodeEnumerator::New_ctor(System::Collections::Specialized::ListDictionary* list) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("NodeEnumerator").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<ListDictionary::NodeEnumerator*>(list));
}
// Autogenerated method: System.Collections.Specialized.ListDictionary/NodeEnumerator.get_Current
::Il2CppObject* System::Collections::Specialized::ListDictionary::NodeEnumerator::get_Current() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("NodeEnumerator").WithContext("get_Current");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppObject*>(), "get_Current", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method);
}
::Il2CppObject* System::Collections::Specialized::ListDictionary::NodeEnumerator::System_Collections_IEnumerator_get_Current() {
  return System::Collections::Specialized::ListDictionary::NodeEnumerator::get_Current();
}
// Autogenerated method: System.Collections.Specialized.ListDictionary/NodeEnumerator.get_Entry
System::Collections::DictionaryEntry System::Collections::Specialized::ListDictionary::NodeEnumerator::get_Entry() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("NodeEnumerator").WithContext("get_Entry");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Collections::DictionaryEntry>(), "get_Entry", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::DictionaryEntry, false>(this, ___internal__method);
}
System::Collections::DictionaryEntry System::Collections::Specialized::ListDictionary::NodeEnumerator::System_Collections_IDictionaryEnumerator_get_Entry() {
  return System::Collections::Specialized::ListDictionary::NodeEnumerator::get_Entry();
}
// Autogenerated method: System.Collections.Specialized.ListDictionary/NodeEnumerator.get_Key
::Il2CppObject* System::Collections::Specialized::ListDictionary::NodeEnumerator::get_Key() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("NodeEnumerator").WithContext("get_Key");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppObject*>(), "get_Key", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method);
}
::Il2CppObject* System::Collections::Specialized::ListDictionary::NodeEnumerator::System_Collections_IDictionaryEnumerator_get_Key() {
  return System::Collections::Specialized::ListDictionary::NodeEnumerator::get_Key();
}
// Autogenerated method: System.Collections.Specialized.ListDictionary/NodeEnumerator.get_Value
::Il2CppObject* System::Collections::Specialized::ListDictionary::NodeEnumerator::get_Value() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("NodeEnumerator").WithContext("get_Value");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppObject*>(), "get_Value", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method);
}
::Il2CppObject* System::Collections::Specialized::ListDictionary::NodeEnumerator::System_Collections_IDictionaryEnumerator_get_Value() {
  return System::Collections::Specialized::ListDictionary::NodeEnumerator::get_Value();
}
// Autogenerated method: System.Collections.Specialized.ListDictionary/NodeEnumerator.MoveNext
bool System::Collections::Specialized::ListDictionary::NodeEnumerator::MoveNext() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("NodeEnumerator").WithContext("MoveNext");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "MoveNext", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
bool System::Collections::Specialized::ListDictionary::NodeEnumerator::System_Collections_IEnumerator_MoveNext() {
  return System::Collections::Specialized::ListDictionary::NodeEnumerator::MoveNext();
}
// Autogenerated method: System.Collections.Specialized.ListDictionary/NodeEnumerator.Reset
void System::Collections::Specialized::ListDictionary::NodeEnumerator::Reset() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("NodeEnumerator").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Reset", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
void System::Collections::Specialized::ListDictionary::NodeEnumerator::System_Collections_IEnumerator_Reset() {
  System::Collections::Specialized::ListDictionary::NodeEnumerator::Reset();
}