// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IBeatmapLevelPackCollection
#include "GlobalNamespace/IBeatmapLevelPackCollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelPackCollection
  class BeatmapLevelPackCollection : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapLevelPackCollection*/ {
    public:
    // private IBeatmapLevelPack[] _beatmapLevelPacks
    // Size: 0x8
    // Offset: 0x10
    ::Array<GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IBeatmapLevelPack*>*) == 0x8);
    // Creating value type constructor for type: BeatmapLevelPackCollection
    BeatmapLevelPackCollection(::Array<GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks_ = {}) noexcept : beatmapLevelPacks{beatmapLevelPacks_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevelPackCollection
    operator GlobalNamespace::IBeatmapLevelPackCollection() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevelPackCollection*>(this);
    }
    // Creating conversion operator: operator ::Array<GlobalNamespace::IBeatmapLevelPack*>*
    constexpr operator ::Array<GlobalNamespace::IBeatmapLevelPack*>*() const noexcept {
      return beatmapLevelPacks;
    }
    // public IBeatmapLevelPack[] get_beatmapLevelPacks()
    // Offset: 0x1100DBC
    ::Array<GlobalNamespace::IBeatmapLevelPack*>* get_beatmapLevelPacks();
    // public System.Void .ctor(IBeatmapLevelPack[] beatmapLevelPacks)
    // Offset: 0x1100DC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelPackCollection* New_ctor(::Array<GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelPackCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelPackCollection*, creationType>(beatmapLevelPacks)));
    }
  }; // BeatmapLevelPackCollection
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelPackCollection), 16 + sizeof(::Array<GlobalNamespace::IBeatmapLevelPack*>*)> __GlobalNamespace_BeatmapLevelPackCollectionSizeCheck;
  static_assert(sizeof(BeatmapLevelPackCollection) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelPackCollection*, "", "BeatmapLevelPackCollection");
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelPackCollection::get_beatmapLevelPacks
// Il2CppName: get_beatmapLevelPacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::IBeatmapLevelPack*>* (GlobalNamespace::BeatmapLevelPackCollection::*)()>(&GlobalNamespace::BeatmapLevelPackCollection::get_beatmapLevelPacks)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelPackCollection*), "get_beatmapLevelPacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelPackCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
