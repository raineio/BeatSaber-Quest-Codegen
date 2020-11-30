// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.SortedList/SyncSortedList
#include "System/Collections/SortedList_SyncSortedList.hpp"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
// Including type: System.Collections.IList
#include "System/Collections/IList.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Collections.SortedList/SyncSortedList..ctor
System::Collections::SortedList::SyncSortedList* System::Collections::SortedList::SyncSortedList::New_ctor(System::Collections::SortedList* list) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections").WithContext("SyncSortedList").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<SortedList::SyncSortedList*>(list));
}
// Autogenerated method: System.Collections.SortedList/SyncSortedList.get_Count
int System::Collections::SortedList::SyncSortedList::get_Count() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections").WithContext("SyncSortedList").WithContext("get_Count");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "get_Count", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
int System::Collections::SortedList::SyncSortedList::System_Collections_ICollection_get_Count() {
  return System::Collections::SortedList::SyncSortedList::get_Count();
}
// Autogenerated method: System.Collections.SortedList/SyncSortedList.get_SyncRoot
::Il2CppObject* System::Collections::SortedList::SyncSortedList::get_SyncRoot() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections").WithContext("SyncSortedList").WithContext("get_SyncRoot");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppObject*>(), "get_SyncRoot", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method);
}
// Autogenerated method: System.Collections.SortedList/SyncSortedList.get_Item
::Il2CppObject* System::Collections::SortedList::SyncSortedList::get_Item(::Il2CppObject* key) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections").WithContext("SyncSortedList").WithContext("get_Item");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppObject*>(), "get_Item", {}, ::il2cpp_utils::ExtractTypes(key)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method, key);
}
::Il2CppObject* System::Collections::SortedList::SyncSortedList::System_Collections_IDictionary_get_Item(::Il2CppObject* key) {
  return System::Collections::SortedList::SyncSortedList::get_Item(key);
}
// Autogenerated method: System.Collections.SortedList/SyncSortedList.set_Item
void System::Collections::SortedList::SyncSortedList::set_Item(::Il2CppObject* key, ::Il2CppObject* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections").WithContext("SyncSortedList").WithContext("set_Item");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_Item", {}, ::il2cpp_utils::ExtractTypes(key, value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, key, value);
}
void System::Collections::SortedList::SyncSortedList::System_Collections_IDictionary_set_Item(::Il2CppObject* key, ::Il2CppObject* value) {
  System::Collections::SortedList::SyncSortedList::set_Item(key, value);
}
// Autogenerated method: System.Collections.SortedList/SyncSortedList.Add
void System::Collections::SortedList::SyncSortedList::Add(::Il2CppObject* key, ::Il2CppObject* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections").WithContext("SyncSortedList").WithContext("Add");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Add", {}, ::il2cpp_utils::ExtractTypes(key, value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, key, value);
}
void System::Collections::SortedList::SyncSortedList::System_Collections_IDictionary_Add(::Il2CppObject* key, ::Il2CppObject* value) {
  System::Collections::SortedList::SyncSortedList::Add(key, value);
}
// Autogenerated method: System.Collections.SortedList/SyncSortedList.get_Capacity
int System::Collections::SortedList::SyncSortedList::get_Capacity() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections").WithContext("SyncSortedList").WithContext("get_Capacity");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "get_Capacity", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: System.Collections.SortedList/SyncSortedList.Clone
::Il2CppObject* System::Collections::SortedList::SyncSortedList::Clone() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections").WithContext("SyncSortedList").WithContext("Clone");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppObject*>(), "Clone", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method);
}
::Il2CppObject* System::Collections::SortedList::SyncSortedList::System_ICloneable_Clone() {
  return System::Collections::SortedList::SyncSortedList::Clone();
}
// Autogenerated method: System.Collections.SortedList/SyncSortedList.Contains
bool System::Collections::SortedList::SyncSortedList::Contains(::Il2CppObject* key) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections").WithContext("SyncSortedList").WithContext("Contains");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "Contains", {}, ::il2cpp_utils::ExtractTypes(key)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, key);
}
bool System::Collections::SortedList::SyncSortedList::System_Collections_IDictionary_Contains(::Il2CppObject* key) {
  return System::Collections::SortedList::SyncSortedList::Contains(key);
}
// Autogenerated method: System.Collections.SortedList/SyncSortedList.ContainsValue
bool System::Collections::SortedList::SyncSortedList::ContainsValue(::Il2CppObject* key) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections").WithContext("SyncSortedList").WithContext("ContainsValue");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "ContainsValue", {}, ::il2cpp_utils::ExtractTypes(key)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, key);
}
// Autogenerated method: System.Collections.SortedList/SyncSortedList.CopyTo
void System::Collections::SortedList::SyncSortedList::CopyTo(System::Array* array, int index) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections").WithContext("SyncSortedList").WithContext("CopyTo");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "CopyTo", {}, ::il2cpp_utils::ExtractTypes(array, index)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, array, index);
}
void System::Collections::SortedList::SyncSortedList::System_Collections_ICollection_CopyTo(System::Array* array, int index) {
  System::Collections::SortedList::SyncSortedList::CopyTo(array, index);
}
// Autogenerated method: System.Collections.SortedList/SyncSortedList.GetByIndex
::Il2CppObject* System::Collections::SortedList::SyncSortedList::GetByIndex(int index) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections").WithContext("SyncSortedList").WithContext("GetByIndex");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppObject*>(), "GetByIndex", {}, ::il2cpp_utils::ExtractTypes(index)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method, index);
}
// Autogenerated method: System.Collections.SortedList/SyncSortedList.GetEnumerator
System::Collections::IDictionaryEnumerator* System::Collections::SortedList::SyncSortedList::GetEnumerator() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections").WithContext("SyncSortedList").WithContext("GetEnumerator");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Collections::IDictionaryEnumerator*>(), "GetEnumerator", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::IDictionaryEnumerator*, false>(this, ___internal__method);
}
System::Collections::IDictionaryEnumerator* System::Collections::SortedList::SyncSortedList::System_Collections_IDictionary_GetEnumerator() {
  return System::Collections::SortedList::SyncSortedList::GetEnumerator();
}
// Autogenerated method: System.Collections.SortedList/SyncSortedList.GetKey
::Il2CppObject* System::Collections::SortedList::SyncSortedList::GetKey(int index) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections").WithContext("SyncSortedList").WithContext("GetKey");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppObject*>(), "GetKey", {}, ::il2cpp_utils::ExtractTypes(index)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method, index);
}
// Autogenerated method: System.Collections.SortedList/SyncSortedList.GetKeyList
System::Collections::IList* System::Collections::SortedList::SyncSortedList::GetKeyList() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections").WithContext("SyncSortedList").WithContext("GetKeyList");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Collections::IList*>(), "GetKeyList", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::IList*, false>(this, ___internal__method);
}
// Autogenerated method: System.Collections.SortedList/SyncSortedList.GetValueList
System::Collections::IList* System::Collections::SortedList::SyncSortedList::GetValueList() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections").WithContext("SyncSortedList").WithContext("GetValueList");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Collections::IList*>(), "GetValueList", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::IList*, false>(this, ___internal__method);
}
// Autogenerated method: System.Collections.SortedList/SyncSortedList.IndexOfKey
int System::Collections::SortedList::SyncSortedList::IndexOfKey(::Il2CppObject* key) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections").WithContext("SyncSortedList").WithContext("IndexOfKey");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "IndexOfKey", {}, ::il2cpp_utils::ExtractTypes(key)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, key);
}
// Autogenerated method: System.Collections.SortedList/SyncSortedList.IndexOfValue
int System::Collections::SortedList::SyncSortedList::IndexOfValue(::Il2CppObject* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections").WithContext("SyncSortedList").WithContext("IndexOfValue");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "IndexOfValue", {}, ::il2cpp_utils::ExtractTypes(value)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, value);
}
// Autogenerated method: System.Collections.SortedList/SyncSortedList.RemoveAt
void System::Collections::SortedList::SyncSortedList::RemoveAt(int index) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections").WithContext("SyncSortedList").WithContext("RemoveAt");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "RemoveAt", {}, ::il2cpp_utils::ExtractTypes(index)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, index);
}