// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: IBeatmapLevelCollection
#include "GlobalNamespace/IBeatmapLevelCollection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PreviewBeatmapLevelSO
  class PreviewBeatmapLevelSO;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
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
  // Forward declaring type: PreviewBeatmapLevelCollectionSO
  class PreviewBeatmapLevelCollectionSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PreviewBeatmapLevelCollectionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PreviewBeatmapLevelCollectionSO*, "", "PreviewBeatmapLevelCollectionSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PreviewBeatmapLevelCollectionSO
  // [TokenAttribute] Offset: FFFFFFFF
  class PreviewBeatmapLevelCollectionSO : public ::GlobalNamespace::PersistentScriptableObject/*, public ::GlobalNamespace::IBeatmapLevelCollection*/ {
    public:
    public:
    // private PreviewBeatmapLevelSO[] _beatmapLevels
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO*> beatmapLevels;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO*>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IBeatmapLevelCollection
    operator ::GlobalNamespace::IBeatmapLevelCollection() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IBeatmapLevelCollection*>(this);
    }
    // Creating interface conversion operator: i_IBeatmapLevelCollection
    inline ::GlobalNamespace::IBeatmapLevelCollection* i_IBeatmapLevelCollection() noexcept {
      return reinterpret_cast<::GlobalNamespace::IBeatmapLevelCollection*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private PreviewBeatmapLevelSO[] _beatmapLevels
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO*>& dyn__beatmapLevels();
    // public System.Collections.Generic.IReadOnlyList`1<IPreviewBeatmapLevel> get_beatmapLevels()
    // Offset: 0x1427FB0
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* get_beatmapLevels();
    // public System.Void .ctor()
    // Offset: 0x1427FB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PreviewBeatmapLevelCollectionSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PreviewBeatmapLevelCollectionSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PreviewBeatmapLevelCollectionSO*, creationType>()));
    }
  }; // PreviewBeatmapLevelCollectionSO
  #pragma pack(pop)
  static check_size<sizeof(PreviewBeatmapLevelCollectionSO), 24 + sizeof(::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO*>)> __GlobalNamespace_PreviewBeatmapLevelCollectionSOSizeCheck;
  static_assert(sizeof(PreviewBeatmapLevelCollectionSO) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelCollectionSO::get_beatmapLevels
// Il2CppName: get_beatmapLevels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* (GlobalNamespace::PreviewBeatmapLevelCollectionSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelCollectionSO::get_beatmapLevels)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelCollectionSO*), "get_beatmapLevels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelCollectionSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
