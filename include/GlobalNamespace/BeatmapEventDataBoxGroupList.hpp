// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapEventDataBoxGroupProcessor
  class BeatmapEventDataBoxGroupProcessor;
  // Forward declaring type: SortedList`2<T, TBase>
  template<typename T, typename TBase>
  class SortedList_2;
  // Forward declaring type: BeatmapEventDataBoxGroup
  class BeatmapEventDataBoxGroup;
  // Forward declaring type: BeatmapData
  class BeatmapData;
  // Forward declaring type: IBeatToTimeConvertor
  class IBeatToTimeConvertor;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: LinkedListNode`1<T>
  template<typename T>
  class LinkedListNode_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapEventDataBoxGroupList
  class BeatmapEventDataBoxGroupList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapEventDataBoxGroupList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventDataBoxGroupList*, "", "BeatmapEventDataBoxGroupList");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapEventDataBoxGroupList
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapEventDataBoxGroupList : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean updateBeatmapDataOnInsert
    // Size: 0x1
    // Offset: 0x10
    bool updateBeatmapDataOnInsert;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: updateBeatmapDataOnInsert and: beatmapEventDataBoxGroupProcessor
    char __padding0[0x7] = {};
    // private readonly BeatmapEventDataBoxGroupProcessor _beatmapEventDataBoxGroupProcessor
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor* beatmapEventDataBoxGroupProcessor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*) == 0x8);
    // private readonly SortedList`2<BeatmapEventDataBoxGroup,BeatmapEventDataBoxGroup> _sortedList
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*, ::GlobalNamespace::BeatmapEventDataBoxGroup*>* sortedList;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*, ::GlobalNamespace::BeatmapEventDataBoxGroup*>*) == 0x8);
    // private readonly System.Int32 _groupId
    // Size: 0x4
    // Offset: 0x28
    int groupId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: groupId and: beatmapData
    char __padding3[0x4] = {};
    // private readonly BeatmapData _beatmapData
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BeatmapData* beatmapData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapData*) == 0x8);
    // private readonly IBeatToTimeConvertor _beatToTimeConvertor
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::IBeatToTimeConvertor* beatToTimeConvertor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IBeatToTimeConvertor*) == 0x8);
    // private System.Boolean _nonSyncedInsertsExist
    // Size: 0x1
    // Offset: 0x40
    bool nonSyncedInsertsExist;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private readonly System.Collections.Generic.HashSet`1<BeatmapEventDataBoxGroup> _usedBeatmapEventDataBoxes
    static ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* _get__usedBeatmapEventDataBoxes();
    // Set static field: static private readonly System.Collections.Generic.HashSet`1<BeatmapEventDataBoxGroup> _usedBeatmapEventDataBoxes
    static void _set__usedBeatmapEventDataBoxes(::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* value);
    // Get instance field reference: public System.Boolean updateBeatmapDataOnInsert
    [[deprecated("Use field access instead!")]] bool& dyn_updateBeatmapDataOnInsert();
    // Get instance field reference: private readonly BeatmapEventDataBoxGroupProcessor _beatmapEventDataBoxGroupProcessor
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*& dyn__beatmapEventDataBoxGroupProcessor();
    // Get instance field reference: private readonly SortedList`2<BeatmapEventDataBoxGroup,BeatmapEventDataBoxGroup> _sortedList
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*, ::GlobalNamespace::BeatmapEventDataBoxGroup*>*& dyn__sortedList();
    // Get instance field reference: private readonly System.Int32 _groupId
    [[deprecated("Use field access instead!")]] int& dyn__groupId();
    // Get instance field reference: private readonly BeatmapData _beatmapData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapData*& dyn__beatmapData();
    // Get instance field reference: private readonly IBeatToTimeConvertor _beatToTimeConvertor
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IBeatToTimeConvertor*& dyn__beatToTimeConvertor();
    // Get instance field reference: private System.Boolean _nonSyncedInsertsExist
    [[deprecated("Use field access instead!")]] bool& dyn__nonSyncedInsertsExist();
    // public System.Void .ctor(System.Int32 groupId, BeatmapData beatmapData, IBeatToTimeConvertor beatToTimeConvertor)
    // Offset: 0x156BF7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapEventDataBoxGroupList* New_ctor(int groupId, ::GlobalNamespace::BeatmapData* beatmapData, ::GlobalNamespace::IBeatToTimeConvertor* beatToTimeConvertor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapEventDataBoxGroupList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapEventDataBoxGroupList*, creationType>(groupId, beatmapData, beatToTimeConvertor)));
    }
    // static private System.Void .cctor()
    // Offset: 0x156C890
    static void _cctor();
    // static private System.Void NoDomainReloadInit()
    // Offset: 0x156BF00
    static void NoDomainReloadInit();
    // public System.Collections.Generic.LinkedListNode`1<BeatmapEventDataBoxGroup> Insert(BeatmapEventDataBoxGroup beatmapEventDataBoxGroup)
    // Offset: 0x156C0A8
    ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* Insert(::GlobalNamespace::BeatmapEventDataBoxGroup* beatmapEventDataBoxGroup);
    // public System.Void Remove(System.Collections.Generic.LinkedListNode`1<BeatmapEventDataBoxGroup> nodeToDelete)
    // Offset: 0x156C444
    void Remove(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* nodeToDelete);
    // public System.Void SyncWithBeatmapData()
    // Offset: 0x156C774
    void SyncWithBeatmapData();
  }; // BeatmapEventDataBoxGroupList
  #pragma pack(pop)
  static check_size<sizeof(BeatmapEventDataBoxGroupList), 64 + sizeof(bool)> __GlobalNamespace_BeatmapEventDataBoxGroupListSizeCheck;
  static_assert(sizeof(BeatmapEventDataBoxGroupList) == 0x41);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataBoxGroupList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataBoxGroupList::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BeatmapEventDataBoxGroupList::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataBoxGroupList*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataBoxGroupList::NoDomainReloadInit
// Il2CppName: NoDomainReloadInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BeatmapEventDataBoxGroupList::NoDomainReloadInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataBoxGroupList*), "NoDomainReloadInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataBoxGroupList::Insert
// Il2CppName: Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* (GlobalNamespace::BeatmapEventDataBoxGroupList::*)(::GlobalNamespace::BeatmapEventDataBoxGroup*)>(&GlobalNamespace::BeatmapEventDataBoxGroupList::Insert)> {
  static const MethodInfo* get() {
    static auto* beatmapEventDataBoxGroup = &::il2cpp_utils::GetClassFromName("", "BeatmapEventDataBoxGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataBoxGroupList*), "Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventDataBoxGroup});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataBoxGroupList::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapEventDataBoxGroupList::*)(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*)>(&GlobalNamespace::BeatmapEventDataBoxGroupList::Remove)> {
  static const MethodInfo* get() {
    static auto* nodeToDelete = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "LinkedListNode`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapEventDataBoxGroup")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataBoxGroupList*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeToDelete});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataBoxGroupList::SyncWithBeatmapData
// Il2CppName: SyncWithBeatmapData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapEventDataBoxGroupList::*)()>(&GlobalNamespace::BeatmapEventDataBoxGroupList::SyncWithBeatmapData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataBoxGroupList*), "SyncWithBeatmapData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
