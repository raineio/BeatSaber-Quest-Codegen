// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapCallbackItemDataList/SpawnBombNoteCallback
#include "GlobalNamespace/BeatmapCallbackItemDataList_SpawnBombNoteCallback.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: NoteData
#include "GlobalNamespace/NoteData.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapCallbackItemDataList/SpawnBombNoteCallback..ctor
GlobalNamespace::BeatmapCallbackItemDataList::SpawnBombNoteCallback* GlobalNamespace::BeatmapCallbackItemDataList::SpawnBombNoteCallback::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SpawnBombNoteCallback").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<BeatmapCallbackItemDataList::SpawnBombNoteCallback*>(object, method));
}
// Autogenerated method: BeatmapCallbackItemDataList/SpawnBombNoteCallback.Invoke
void GlobalNamespace::BeatmapCallbackItemDataList::SpawnBombNoteCallback::Invoke(GlobalNamespace::NoteData* noteData) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SpawnBombNoteCallback").WithContext("Invoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Invoke", {}, ::il2cpp_utils::ExtractTypes(noteData)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, noteData);
}
// Autogenerated method: BeatmapCallbackItemDataList/SpawnBombNoteCallback.BeginInvoke
System::IAsyncResult* GlobalNamespace::BeatmapCallbackItemDataList::SpawnBombNoteCallback::BeginInvoke(GlobalNamespace::NoteData* noteData, System::AsyncCallback* callback, ::Il2CppObject* object) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SpawnBombNoteCallback").WithContext("BeginInvoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::IAsyncResult*>(), "BeginInvoke", {}, ::il2cpp_utils::ExtractTypes(noteData, callback, object)));
  return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, noteData, callback, object);
}
// Autogenerated method: BeatmapCallbackItemDataList/SpawnBombNoteCallback.EndInvoke
void GlobalNamespace::BeatmapCallbackItemDataList::SpawnBombNoteCallback::EndInvoke(System::IAsyncResult* result) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SpawnBombNoteCallback").WithContext("EndInvoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "EndInvoke", {}, ::il2cpp_utils::ExtractTypes(result)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, result);
}