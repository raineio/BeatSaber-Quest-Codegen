// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: SimpleTextDropdown
  class SimpleTextDropdown;
  // Forward declaring type: DropdownWithTableView
  class DropdownWithTableView;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDifficultyDropdown
  class BeatmapDifficultyDropdown : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BeatmapDifficultyDropdown::$$c
    class $$c;
    // private HMUI.SimpleTextDropdown _simpleTextDropdown
    // Size: 0x8
    // Offset: 0x18
    HMUI::SimpleTextDropdown* simpleTextDropdown;
    // Field size check
    static_assert(sizeof(HMUI::SimpleTextDropdown*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE23D54
    // private System.Action`1<System.Int32> didSelectCellWithIdxEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action_1<int>* didSelectCellWithIdxEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<int>*) == 0x8);
    // private System.Collections.Generic.IReadOnlyList`1<System.Tuple`2<BeatmapDifficultyMask,System.String>> _beatmapDifficultyData
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::BeatmapDifficultyMask, ::Il2CppString*>*>* beatmapDifficultyData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::BeatmapDifficultyMask, ::Il2CppString*>*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE23D64
    // private System.Boolean <includeAllDifficulties>k__BackingField
    // Size: 0x1
    // Offset: 0x30
    bool includeAllDifficulties;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: BeatmapDifficultyDropdown
    BeatmapDifficultyDropdown(HMUI::SimpleTextDropdown* simpleTextDropdown_ = {}, System::Action_1<int>* didSelectCellWithIdxEvent_ = {}, System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::BeatmapDifficultyMask, ::Il2CppString*>*>* beatmapDifficultyData_ = {}, bool includeAllDifficulties_ = {}) noexcept : simpleTextDropdown{simpleTextDropdown_}, didSelectCellWithIdxEvent{didSelectCellWithIdxEvent_}, beatmapDifficultyData{beatmapDifficultyData_}, includeAllDifficulties{includeAllDifficulties_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didSelectCellWithIdxEvent(System.Action`1<System.Int32> value)
    // Offset: 0x11C6AB4
    void add_didSelectCellWithIdxEvent(System::Action_1<int>* value);
    // public System.Void remove_didSelectCellWithIdxEvent(System.Action`1<System.Int32> value)
    // Offset: 0x11C6B58
    void remove_didSelectCellWithIdxEvent(System::Action_1<int>* value);
    // private System.Collections.Generic.IReadOnlyList`1<System.Tuple`2<BeatmapDifficultyMask,System.String>> get_beatmapDifficultyData()
    // Offset: 0x11C6BFC
    System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::BeatmapDifficultyMask, ::Il2CppString*>*>* get_beatmapDifficultyData();
    // public System.Boolean get_includeAllDifficulties()
    // Offset: 0x11C6DE8
    bool get_includeAllDifficulties();
    // public System.Void set_includeAllDifficulties(System.Boolean value)
    // Offset: 0x11C6DF0
    void set_includeAllDifficulties(bool value);
    // protected System.Void Start()
    // Offset: 0x11C6DFC
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x11C6F7C
    void OnDestroy();
    // public BeatmapDifficultyMask GetSelectedBeatmapDifficultyMask()
    // Offset: 0x11C7058
    GlobalNamespace::BeatmapDifficultyMask GetSelectedBeatmapDifficultyMask();
    // public System.Void SelectCellWithBeatmapDifficultyMask(BeatmapDifficultyMask beatmapDifficultyMask)
    // Offset: 0x11C712C
    void SelectCellWithBeatmapDifficultyMask(GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask);
    // private System.Int32 GetIdxForBeatmapDifficultyMask(BeatmapDifficultyMask beatmapDifficultyMask)
    // Offset: 0x11C7168
    int GetIdxForBeatmapDifficultyMask(GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask);
    // private System.Void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI.DropdownWithTableView dropdownWithTableView, System.Int32 idx)
    // Offset: 0x11C7210
    void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI::DropdownWithTableView* dropdownWithTableView, int idx);
    // public System.Void .ctor()
    // Offset: 0x11C7284
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDifficultyDropdown* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapDifficultyDropdown::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDifficultyDropdown*, creationType>()));
    }
  }; // BeatmapDifficultyDropdown
  #pragma pack(pop)
  static check_size<sizeof(BeatmapDifficultyDropdown), 48 + sizeof(bool)> __GlobalNamespace_BeatmapDifficultyDropdownSizeCheck;
  static_assert(sizeof(BeatmapDifficultyDropdown) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDifficultyDropdown*, "", "BeatmapDifficultyDropdown");
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyDropdown::add_didSelectCellWithIdxEvent
// Il2CppName: add_didSelectCellWithIdxEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDifficultyDropdown::*)(System::Action_1<int>*)>(&GlobalNamespace::BeatmapDifficultyDropdown::add_didSelectCellWithIdxEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyDropdown*), "add_didSelectCellWithIdxEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<int>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyDropdown::remove_didSelectCellWithIdxEvent
// Il2CppName: remove_didSelectCellWithIdxEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDifficultyDropdown::*)(System::Action_1<int>*)>(&GlobalNamespace::BeatmapDifficultyDropdown::remove_didSelectCellWithIdxEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyDropdown*), "remove_didSelectCellWithIdxEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<int>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyDropdown::get_beatmapDifficultyData
// Il2CppName: get_beatmapDifficultyData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::BeatmapDifficultyMask, ::Il2CppString*>*>* (GlobalNamespace::BeatmapDifficultyDropdown::*)()>(&GlobalNamespace::BeatmapDifficultyDropdown::get_beatmapDifficultyData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyDropdown*), "get_beatmapDifficultyData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyDropdown::get_includeAllDifficulties
// Il2CppName: get_includeAllDifficulties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapDifficultyDropdown::*)()>(&GlobalNamespace::BeatmapDifficultyDropdown::get_includeAllDifficulties)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyDropdown*), "get_includeAllDifficulties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyDropdown::set_includeAllDifficulties
// Il2CppName: set_includeAllDifficulties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDifficultyDropdown::*)(bool)>(&GlobalNamespace::BeatmapDifficultyDropdown::set_includeAllDifficulties)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyDropdown*), "set_includeAllDifficulties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyDropdown::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDifficultyDropdown::*)()>(&GlobalNamespace::BeatmapDifficultyDropdown::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyDropdown*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyDropdown::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDifficultyDropdown::*)()>(&GlobalNamespace::BeatmapDifficultyDropdown::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyDropdown*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyDropdown::GetSelectedBeatmapDifficultyMask
// Il2CppName: GetSelectedBeatmapDifficultyMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapDifficultyMask (GlobalNamespace::BeatmapDifficultyDropdown::*)()>(&GlobalNamespace::BeatmapDifficultyDropdown::GetSelectedBeatmapDifficultyMask)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyDropdown*), "GetSelectedBeatmapDifficultyMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyDropdown::SelectCellWithBeatmapDifficultyMask
// Il2CppName: SelectCellWithBeatmapDifficultyMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDifficultyDropdown::*)(GlobalNamespace::BeatmapDifficultyMask)>(&GlobalNamespace::BeatmapDifficultyDropdown::SelectCellWithBeatmapDifficultyMask)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyDropdown*), "SelectCellWithBeatmapDifficultyMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BeatmapDifficultyMask>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyDropdown::GetIdxForBeatmapDifficultyMask
// Il2CppName: GetIdxForBeatmapDifficultyMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapDifficultyDropdown::*)(GlobalNamespace::BeatmapDifficultyMask)>(&GlobalNamespace::BeatmapDifficultyDropdown::GetIdxForBeatmapDifficultyMask)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyDropdown*), "GetIdxForBeatmapDifficultyMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BeatmapDifficultyMask>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx
// Il2CppName: HandleSimpleTextDropdownDidSelectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDifficultyDropdown::*)(HMUI::DropdownWithTableView*, int)>(&GlobalNamespace::BeatmapDifficultyDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyDropdown*), "HandleSimpleTextDropdownDidSelectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<HMUI::DropdownWithTableView*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyDropdown::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
