// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: IBeatmapLevelPackCollection
#include "GlobalNamespace/IBeatmapLevelPackCollection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelPackSO
  class BeatmapLevelPackSO;
  // Forward declaring type: PreviewBeatmapLevelPackSO
  class PreviewBeatmapLevelPackSO;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelPackCollectionSO
  class BeatmapLevelPackCollectionSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelPackCollectionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelPackCollectionSO*, "", "BeatmapLevelPackCollectionSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelPackCollectionSO
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapLevelPackCollectionSO : public ::GlobalNamespace::PersistentScriptableObject/*, public ::GlobalNamespace::IBeatmapLevelPackCollection*/ {
    public:
    public:
    // private BeatmapLevelPackSO[] _beatmapLevelPacks
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::BeatmapLevelPackSO*> beatmapLevelPacks;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::BeatmapLevelPackSO*>) == 0x8);
    // private PreviewBeatmapLevelPackSO[] _previewBeatmapLevelPack
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::PreviewBeatmapLevelPackSO*> previewBeatmapLevelPack;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::PreviewBeatmapLevelPackSO*>) == 0x8);
    // private IBeatmapLevelPack[] _allBeatmapLevelPacks
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*> allBeatmapLevelPacks;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IBeatmapLevelPackCollection
    operator ::GlobalNamespace::IBeatmapLevelPackCollection() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IBeatmapLevelPackCollection*>(this);
    }
    // Creating interface conversion operator: i_IBeatmapLevelPackCollection
    inline ::GlobalNamespace::IBeatmapLevelPackCollection* i_IBeatmapLevelPackCollection() noexcept {
      return reinterpret_cast<::GlobalNamespace::IBeatmapLevelPackCollection*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BeatmapLevelPackSO[] _beatmapLevelPacks
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::BeatmapLevelPackSO*>& dyn__beatmapLevelPacks();
    // Get instance field reference: private PreviewBeatmapLevelPackSO[] _previewBeatmapLevelPack
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::PreviewBeatmapLevelPackSO*>& dyn__previewBeatmapLevelPack();
    // Get instance field reference: private IBeatmapLevelPack[] _allBeatmapLevelPacks
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*>& dyn__allBeatmapLevelPacks();
    // public IBeatmapLevelPack[] get_beatmapLevelPacks()
    // Offset: 0x1573C44
    ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*> get_beatmapLevelPacks();
    // public System.Void .ctor()
    // Offset: 0x1573DC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelPackCollectionSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapLevelPackCollectionSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelPackCollectionSO*, creationType>()));
    }
    // private System.Void LoadAllBeatmapLevelPacks()
    // Offset: 0x1573C74
    void LoadAllBeatmapLevelPacks();
  }; // BeatmapLevelPackCollectionSO
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelPackCollectionSO), 40 + sizeof(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*>)> __GlobalNamespace_BeatmapLevelPackCollectionSOSizeCheck;
  static_assert(sizeof(BeatmapLevelPackCollectionSO) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelPackCollectionSO::get_beatmapLevelPacks
// Il2CppName: get_beatmapLevelPacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*> (GlobalNamespace::BeatmapLevelPackCollectionSO::*)()>(&GlobalNamespace::BeatmapLevelPackCollectionSO::get_beatmapLevelPacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelPackCollectionSO*), "get_beatmapLevelPacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelPackCollectionSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelPackCollectionSO::LoadAllBeatmapLevelPacks
// Il2CppName: LoadAllBeatmapLevelPacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelPackCollectionSO::*)()>(&GlobalNamespace::BeatmapLevelPackCollectionSO::LoadAllBeatmapLevelPacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelPackCollectionSO*), "LoadAllBeatmapLevelPacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
