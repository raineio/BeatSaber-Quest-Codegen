// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerResultsTableView
#include "GlobalNamespace/MultiplayerResultsTableView.hpp"
// Including type: MultiplayerResultsTableView/Data
#include "GlobalNamespace/MultiplayerResultsTableView_Data.hpp"
// Including type: MultiplayerResultsTableView/<>c__DisplayClass31_0
#include "GlobalNamespace/MultiplayerResultsTableView_--c__DisplayClass31_0.hpp"
// Including type: MultiplayerResultsTableView/<>c__DisplayClass31_1
#include "GlobalNamespace/MultiplayerResultsTableView_--c__DisplayClass31_1.hpp"
// Including type: MultiplayerResultsTableView/<PlayRandomRowSlideInSound>d__32
#include "GlobalNamespace/MultiplayerResultsTableView_-PlayRandomRowSlideInSound-d__32.hpp"
// Including type: MultiplayerResultsTableView/<PlayAvatarSlideInSound>d__33
#include "GlobalNamespace/MultiplayerResultsTableView_-PlayAvatarSlideInSound-d__33.hpp"
// Including type: HMUI.TableView
#include "HMUI/TableView.hpp"
// Including type: UnityEngine.RectTransform
#include "UnityEngine/RectTransform.hpp"
// Including type: MultiplayerResultsTableCell
#include "GlobalNamespace/MultiplayerResultsTableCell.hpp"
// Including type: MultiplayerOffsetPositionByLocalPlayerPosition
#include "GlobalNamespace/MultiplayerOffsetPositionByLocalPlayerPosition.hpp"
// Including type: UnityEngine.AudioSource
#include "UnityEngine/AudioSource.hpp"
// Including type: UnityEngine.AudioClip
#include "UnityEngine/AudioClip.hpp"
// Including type: Tweening.TweeningManager
#include "Tweening/TweeningManager.hpp"
// Including type: MultiplayerLayoutProvider
#include "GlobalNamespace/MultiplayerLayoutProvider.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: System.Collections.Generic.IReadOnlyList`1
#include "System/Collections/Generic/IReadOnlyList_1.hpp"
// Including type: System.String
#include "System/String.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String kCellIdentifier
::Il2CppString* GlobalNamespace::MultiplayerResultsTableView::_get_kCellIdentifier() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerResultsTableView").WithContext("_get_kCellIdentifier");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("", "MultiplayerResultsTableView", "kCellIdentifier"));
}
// Autogenerated static field setter
// Set static field: static private System.String kCellIdentifier
void GlobalNamespace::MultiplayerResultsTableView::_set_kCellIdentifier(::Il2CppString* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerResultsTableView").WithContext("_set_kCellIdentifier");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "MultiplayerResultsTableView", "kCellIdentifier", value));
}
// Autogenerated method: MultiplayerResultsTableView.Awake
void GlobalNamespace::MultiplayerResultsTableView::Awake() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerResultsTableView").WithContext("Awake");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Awake", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerResultsTableView.OnDestroy
void GlobalNamespace::MultiplayerResultsTableView::OnDestroy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerResultsTableView").WithContext("OnDestroy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnDestroy", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerResultsTableView.SetData
void GlobalNamespace::MultiplayerResultsTableView::SetData(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerResultsTableView::Data*>* dataList) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerResultsTableView").WithContext("SetData");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetData", {}, ::il2cpp_utils::ExtractTypes(dataList)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, dataList);
}
// Autogenerated method: MultiplayerResultsTableView.StartAnimation
float GlobalNamespace::MultiplayerResultsTableView::StartAnimation() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerResultsTableView").WithContext("StartAnimation");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<float>(), "StartAnimation", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerResultsTableView.PlayRandomRowSlideInSound
System::Collections::IEnumerator* GlobalNamespace::MultiplayerResultsTableView::PlayRandomRowSlideInSound(float delay) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerResultsTableView").WithContext("PlayRandomRowSlideInSound");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Collections::IEnumerator*>(), "PlayRandomRowSlideInSound", {}, ::il2cpp_utils::ExtractTypes(delay)));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method, delay);
}
// Autogenerated method: MultiplayerResultsTableView.PlayAvatarSlideInSound
System::Collections::IEnumerator* GlobalNamespace::MultiplayerResultsTableView::PlayAvatarSlideInSound(float delay) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerResultsTableView").WithContext("PlayAvatarSlideInSound");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Collections::IEnumerator*>(), "PlayAvatarSlideInSound", {}, ::il2cpp_utils::ExtractTypes(delay)));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method, delay);
}
// Autogenerated method: MultiplayerResultsTableView.<StartAnimation>b__31_1
void GlobalNamespace::MultiplayerResultsTableView::$StartAnimation$b__31_1() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerResultsTableView").WithContext("<StartAnimation>b__31_1");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "<StartAnimation>b__31_1", {}, ::il2cpp_utils::ExtractTypes())));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerResultsTableView.<StartAnimation>b__31_4
void GlobalNamespace::MultiplayerResultsTableView::$StartAnimation$b__31_4() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerResultsTableView").WithContext("<StartAnimation>b__31_4");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "<StartAnimation>b__31_4", {}, ::il2cpp_utils::ExtractTypes())));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerResultsTableView.<StartAnimation>b__31_5
void GlobalNamespace::MultiplayerResultsTableView::$StartAnimation$b__31_5(float val) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerResultsTableView").WithContext("<StartAnimation>b__31_5");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "<StartAnimation>b__31_5", {}, ::il2cpp_utils::ExtractTypes(val))));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, val);
}
// Autogenerated method: MultiplayerResultsTableView.CellSize
float GlobalNamespace::MultiplayerResultsTableView::CellSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerResultsTableView").WithContext("CellSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<float>(), "CellSize", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerResultsTableView.NumberOfCells
int GlobalNamespace::MultiplayerResultsTableView::NumberOfCells() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerResultsTableView").WithContext("NumberOfCells");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "NumberOfCells", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerResultsTableView.CellForIdx
HMUI::TableCell* GlobalNamespace::MultiplayerResultsTableView::CellForIdx(HMUI::TableView* tableView, int idx) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerResultsTableView").WithContext("CellForIdx");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<HMUI::TableCell*>(), "CellForIdx", {}, ::il2cpp_utils::ExtractTypes(tableView, idx)));
  return ::il2cpp_utils::RunMethodThrow<HMUI::TableCell*, false>(this, ___internal__method, tableView, idx);
}
// Autogenerated method: MultiplayerResultsTableView..ctor
GlobalNamespace::MultiplayerResultsTableView* GlobalNamespace::MultiplayerResultsTableView::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerResultsTableView").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<MultiplayerResultsTableView*>());
}