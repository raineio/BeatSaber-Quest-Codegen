// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SongPackMaskModelSO
#include "GlobalNamespace/SongPackMaskModelSO.hpp"
// Including type: SongPackMaskModelSO/SongPackDataType
#include "GlobalNamespace/SongPackMaskModelSO_SongPackDataType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelPackSO
  class BeatmapLevelPackSO;
  // Forward declaring type: PreviewBeatmapLevelPackSO
  class PreviewBeatmapLevelPackSO;
  // Forward declaring type: BeatmapLevelPackCollectionSO
  class BeatmapLevelPackCollectionSO;
  // Forward declaring type: SongPackMask
  struct SongPackMask;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem*, "", "SongPackMaskModelSO/SongPackMaskItem");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: SongPackMaskModelSO/SongPackMaskItem
  // [TokenAttribute] Offset: FFFFFFFF
  class SongPackMaskModelSO::SongPackMaskItem : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem::$$c
    class $$c;
    public:
    // public SongPackMaskModelSO/SongPackDataType _type
    // Size: 0x4
    // Offset: 0x10
    ::GlobalNamespace::SongPackMaskModelSO::SongPackDataType type;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SongPackMaskModelSO::SongPackDataType) == 0x4);
    // Padding between fields: type and: beatmapLevelPack
    char __padding0[0x4] = {};
    // [NullAllowed] Offset: 0x1130C78
    // public BeatmapLevelPackSO _beatmapLevelPack
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BeatmapLevelPackSO* beatmapLevelPack;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapLevelPackSO*) == 0x8);
    // [NullAllowed] Offset: 0x1130C88
    // public PreviewBeatmapLevelPackSO _previewBeatmapLevelPack
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::PreviewBeatmapLevelPackSO* previewBeatmapLevelPack;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PreviewBeatmapLevelPackSO*) == 0x8);
    // public System.String _serializedName
    // Size: 0x8
    // Offset: 0x28
    ::StringW serializedName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [NullAllowed] Offset: 0x1130C98
    // public BeatmapLevelPackCollectionSO _levelPackCollection
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BeatmapLevelPackCollectionSO* levelPackCollection;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapLevelPackCollectionSO*) == 0x8);
    // public System.Collections.Generic.List`1<BeatmapLevelPackSO> _beatmapLevelPacks
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackSO*>* beatmapLevelPacks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackSO*>*) == 0x8);
    // public System.Collections.Generic.List`1<PreviewBeatmapLevelPackSO> _previewBeatmapLevelPacks
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO*>* previewBeatmapLevelPacks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO*>*) == 0x8);
    // public System.Collections.Generic.List`1<BeatmapLevelPackCollectionSO> _levelPackCollections
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackCollectionSO*>* levelPackCollections;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackCollectionSO*>*) == 0x8);
    public:
    // Get instance field reference: public SongPackMaskModelSO/SongPackDataType _type
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SongPackMaskModelSO::SongPackDataType& dyn__type();
    // Get instance field reference: public BeatmapLevelPackSO _beatmapLevelPack
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapLevelPackSO*& dyn__beatmapLevelPack();
    // Get instance field reference: public PreviewBeatmapLevelPackSO _previewBeatmapLevelPack
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PreviewBeatmapLevelPackSO*& dyn__previewBeatmapLevelPack();
    // Get instance field reference: public System.String _serializedName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__serializedName();
    // Get instance field reference: public BeatmapLevelPackCollectionSO _levelPackCollection
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapLevelPackCollectionSO*& dyn__levelPackCollection();
    // Get instance field reference: public System.Collections.Generic.List`1<BeatmapLevelPackSO> _beatmapLevelPacks
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackSO*>*& dyn__beatmapLevelPacks();
    // Get instance field reference: public System.Collections.Generic.List`1<PreviewBeatmapLevelPackSO> _previewBeatmapLevelPacks
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO*>*& dyn__previewBeatmapLevelPacks();
    // Get instance field reference: public System.Collections.Generic.List`1<BeatmapLevelPackCollectionSO> _levelPackCollections
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackCollectionSO*>*& dyn__levelPackCollections();
    // public System.String get_serializedName()
    // Offset: 0x1482FC0
    ::StringW get_serializedName();
    // public SongPackMask get_songPackMask()
    // Offset: 0x1483004
    ::GlobalNamespace::SongPackMask get_songPackMask();
    // public System.Boolean get_containsMultiplePacks()
    // Offset: 0x1483380
    bool get_containsMultiplePacks();
    // public System.Void .ctor()
    // Offset: 0x14833A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongPackMaskModelSO::SongPackMaskItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongPackMaskModelSO::SongPackMaskItem*, creationType>()));
    }
  }; // SongPackMaskModelSO/SongPackMaskItem
  #pragma pack(pop)
  static check_size<sizeof(SongPackMaskModelSO::SongPackMaskItem), 72 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackCollectionSO*>*)> __GlobalNamespace_SongPackMaskModelSO_SongPackMaskItemSizeCheck;
  static_assert(sizeof(SongPackMaskModelSO::SongPackMaskItem) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem::get_serializedName
// Il2CppName: get_serializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem::*)()>(&GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem::get_serializedName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem*), "get_serializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem::get_songPackMask
// Il2CppName: get_songPackMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SongPackMask (GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem::*)()>(&GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem::get_songPackMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem*), "get_songPackMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem::get_containsMultiplePacks
// Il2CppName: get_containsMultiplePacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem::*)()>(&GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem::get_containsMultiplePacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem*), "get_containsMultiplePacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
