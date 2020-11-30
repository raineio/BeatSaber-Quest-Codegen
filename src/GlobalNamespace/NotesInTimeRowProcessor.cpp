// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NotesInTimeRowProcessor
#include "GlobalNamespace/NotesInTimeRowProcessor.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: NoteData
#include "GlobalNamespace/NoteData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NotesInTimeRowProcessor..ctor
GlobalNamespace::NotesInTimeRowProcessor* GlobalNamespace::NotesInTimeRowProcessor::New_ctor(int numberOfLines) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NotesInTimeRowProcessor").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<NotesInTimeRowProcessor*>(numberOfLines));
}
// Autogenerated method: NotesInTimeRowProcessor.ProcessNote
void GlobalNamespace::NotesInTimeRowProcessor::ProcessNote(GlobalNamespace::NoteData* noteData) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NotesInTimeRowProcessor").WithContext("ProcessNote");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ProcessNote", {}, ::il2cpp_utils::ExtractTypes(noteData)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, noteData);
}
// Autogenerated method: NotesInTimeRowProcessor.ProcessAllRemainingData
void GlobalNamespace::NotesInTimeRowProcessor::ProcessAllRemainingData() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NotesInTimeRowProcessor").WithContext("ProcessAllRemainingData");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ProcessAllRemainingData", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: NotesInTimeRowProcessor.ProcessColorNotesInTimeRow
void GlobalNamespace::NotesInTimeRowProcessor::ProcessColorNotesInTimeRow(System::Collections::Generic::List_1<GlobalNamespace::NoteData*>* colorNotesData, float nextBasicNoteTimeRowTime) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NotesInTimeRowProcessor").WithContext("ProcessColorNotesInTimeRow");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ProcessColorNotesInTimeRow", {}, ::il2cpp_utils::ExtractTypes(colorNotesData, nextBasicNoteTimeRowTime)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, colorNotesData, nextBasicNoteTimeRowTime);
}
// Autogenerated method: NotesInTimeRowProcessor.ProcessAllNotesInTimeRow
void GlobalNamespace::NotesInTimeRowProcessor::ProcessAllNotesInTimeRow(System::Collections::Generic::List_1<GlobalNamespace::NoteData*>* notes) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NotesInTimeRowProcessor").WithContext("ProcessAllNotesInTimeRow");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ProcessAllNotesInTimeRow", {}, ::il2cpp_utils::ExtractTypes(notes)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, notes);
}