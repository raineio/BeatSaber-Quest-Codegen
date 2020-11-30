// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Specialized.StringCollection
#include "System/Collections/Specialized/StringCollection.hpp"
// Including type: System.Collections.ArrayList
#include "System/Collections/ArrayList.hpp"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Collections.Specialized.StringCollection.get_Item
::Il2CppString* System::Collections::Specialized::StringCollection::get_Item(int index) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("StringCollection").WithContext("get_Item");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_Item", {}, ::il2cpp_utils::ExtractTypes(index)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method, index);
}
// Autogenerated method: System.Collections.Specialized.StringCollection.set_Item
void System::Collections::Specialized::StringCollection::set_Item(int index, ::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("StringCollection").WithContext("set_Item");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_Item", {}, ::il2cpp_utils::ExtractTypes(index, value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, index, value);
}
// Autogenerated method: System.Collections.Specialized.StringCollection.Add
int System::Collections::Specialized::StringCollection::Add(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("StringCollection").WithContext("Add");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "Add", {}, ::il2cpp_utils::ExtractTypes(value)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, value);
}
// Autogenerated method: System.Collections.Specialized.StringCollection.Contains
bool System::Collections::Specialized::StringCollection::Contains(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("StringCollection").WithContext("Contains");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "Contains", {}, ::il2cpp_utils::ExtractTypes(value)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, value);
}
// Autogenerated method: System.Collections.Specialized.StringCollection.CopyTo
void System::Collections::Specialized::StringCollection::CopyTo(::Array<::Il2CppString*>* array, int index) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("StringCollection").WithContext("CopyTo");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "CopyTo", {}, ::il2cpp_utils::ExtractTypes(array, index)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, array, index);
}
// Autogenerated method: System.Collections.Specialized.StringCollection.IndexOf
int System::Collections::Specialized::StringCollection::IndexOf(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("StringCollection").WithContext("IndexOf");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "IndexOf", {}, ::il2cpp_utils::ExtractTypes(value)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, value);
}
// Autogenerated method: System.Collections.Specialized.StringCollection.Insert
void System::Collections::Specialized::StringCollection::Insert(int index, ::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("StringCollection").WithContext("Insert");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Insert", {}, ::il2cpp_utils::ExtractTypes(index, value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, index, value);
}
// Autogenerated method: System.Collections.Specialized.StringCollection.Remove
void System::Collections::Specialized::StringCollection::Remove(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("StringCollection").WithContext("Remove");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Remove", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: System.Collections.Specialized.StringCollection.get_Count
int System::Collections::Specialized::StringCollection::get_Count() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("StringCollection").WithContext("get_Count");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "get_Count", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
int System::Collections::Specialized::StringCollection::System_Collections_ICollection_get_Count() {
  return System::Collections::Specialized::StringCollection::get_Count();
}
// Autogenerated method: System.Collections.Specialized.StringCollection.System.Collections.IList.get_IsReadOnly
bool System::Collections::Specialized::StringCollection::System_Collections_IList_get_IsReadOnly() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("StringCollection").WithContext("System.Collections.IList.get_IsReadOnly");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "System.Collections.IList.get_IsReadOnly", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.Collections.Specialized.StringCollection.Clear
void System::Collections::Specialized::StringCollection::Clear() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("StringCollection").WithContext("Clear");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Clear", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
void System::Collections::Specialized::StringCollection::System_Collections_IList_Clear() {
  System::Collections::Specialized::StringCollection::Clear();
}
// Autogenerated method: System.Collections.Specialized.StringCollection.RemoveAt
void System::Collections::Specialized::StringCollection::RemoveAt(int index) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("StringCollection").WithContext("RemoveAt");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "RemoveAt", {}, ::il2cpp_utils::ExtractTypes(index)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, index);
}
void System::Collections::Specialized::StringCollection::System_Collections_IList_RemoveAt(int index) {
  System::Collections::Specialized::StringCollection::RemoveAt(index);
}
// Autogenerated method: System.Collections.Specialized.StringCollection.System.Collections.IList.get_Item
::Il2CppObject* System::Collections::Specialized::StringCollection::System_Collections_IList_get_Item(int index) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("StringCollection").WithContext("System.Collections.IList.get_Item");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppObject*>(), "System.Collections.IList.get_Item", {}, ::il2cpp_utils::ExtractTypes(index)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method, index);
}
// Autogenerated method: System.Collections.Specialized.StringCollection.System.Collections.IList.set_Item
void System::Collections::Specialized::StringCollection::System_Collections_IList_set_Item(int index, ::Il2CppObject* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("StringCollection").WithContext("System.Collections.IList.set_Item");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "System.Collections.IList.set_Item", {}, ::il2cpp_utils::ExtractTypes(index, value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, index, value);
}
// Autogenerated method: System.Collections.Specialized.StringCollection.System.Collections.IList.Add
int System::Collections::Specialized::StringCollection::System_Collections_IList_Add(::Il2CppObject* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("StringCollection").WithContext("System.Collections.IList.Add");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "System.Collections.IList.Add", {}, ::il2cpp_utils::ExtractTypes(value)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, value);
}
// Autogenerated method: System.Collections.Specialized.StringCollection.System.Collections.IList.Contains
bool System::Collections::Specialized::StringCollection::System_Collections_IList_Contains(::Il2CppObject* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("StringCollection").WithContext("System.Collections.IList.Contains");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "System.Collections.IList.Contains", {}, ::il2cpp_utils::ExtractTypes(value)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, value);
}
// Autogenerated method: System.Collections.Specialized.StringCollection.System.Collections.IList.IndexOf
int System::Collections::Specialized::StringCollection::System_Collections_IList_IndexOf(::Il2CppObject* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("StringCollection").WithContext("System.Collections.IList.IndexOf");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "System.Collections.IList.IndexOf", {}, ::il2cpp_utils::ExtractTypes(value)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, value);
}
// Autogenerated method: System.Collections.Specialized.StringCollection.System.Collections.IList.Insert
void System::Collections::Specialized::StringCollection::System_Collections_IList_Insert(int index, ::Il2CppObject* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("StringCollection").WithContext("System.Collections.IList.Insert");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "System.Collections.IList.Insert", {}, ::il2cpp_utils::ExtractTypes(index, value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, index, value);
}
// Autogenerated method: System.Collections.Specialized.StringCollection.System.Collections.IList.Remove
void System::Collections::Specialized::StringCollection::System_Collections_IList_Remove(::Il2CppObject* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("StringCollection").WithContext("System.Collections.IList.Remove");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "System.Collections.IList.Remove", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: System.Collections.Specialized.StringCollection.System.Collections.ICollection.CopyTo
void System::Collections::Specialized::StringCollection::System_Collections_ICollection_CopyTo(System::Array* array, int index) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("StringCollection").WithContext("System.Collections.ICollection.CopyTo");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "System.Collections.ICollection.CopyTo", {}, ::il2cpp_utils::ExtractTypes(array, index)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, array, index);
}
// Autogenerated method: System.Collections.Specialized.StringCollection.System.Collections.IEnumerable.GetEnumerator
System::Collections::IEnumerator* System::Collections::Specialized::StringCollection::System_Collections_IEnumerable_GetEnumerator() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("StringCollection").WithContext("System.Collections.IEnumerable.GetEnumerator");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Collections::IEnumerator*>(), "System.Collections.IEnumerable.GetEnumerator", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
}
// Autogenerated method: System.Collections.Specialized.StringCollection..ctor
System::Collections::Specialized::StringCollection* System::Collections::Specialized::StringCollection::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("StringCollection").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<StringCollection*>());
}