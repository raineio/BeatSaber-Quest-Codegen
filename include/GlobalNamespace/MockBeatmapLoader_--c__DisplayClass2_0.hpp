// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MockBeatmapLoader
#include "GlobalNamespace/MockBeatmapLoader.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapIdentifierNetSerializable
  class BeatmapIdentifierNetSerializable;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0*, "", "MockBeatmapLoader/<>c__DisplayClass2_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MockBeatmapLoader/<>c__DisplayClass2_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MockBeatmapLoader::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0::$$GetBeatmapData$b__3$d
    struct $$GetBeatmapData$b__3$d;
    public:
    // public BeatmapIdentifierNetSerializable beatmap
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::BeatmapIdentifierNetSerializable* beatmap;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapIdentifierNetSerializable*) == 0x8);
    // public IReadonlyBeatmapData beatmapData
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::IReadonlyBeatmapData* beatmapData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IReadonlyBeatmapData*) == 0x8);
    // public IDifficultyBeatmap difficultyBeatmap
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    public:
    // Get instance field reference: public BeatmapIdentifierNetSerializable beatmap
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapIdentifierNetSerializable*& dyn_beatmap();
    // Get instance field reference: public IReadonlyBeatmapData beatmapData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IReadonlyBeatmapData*& dyn_beatmapData();
    // Get instance field reference: public IDifficultyBeatmap difficultyBeatmap
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IDifficultyBeatmap*& dyn_difficultyBeatmap();
    // public System.Void .ctor()
    // Offset: 0x1499B58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockBeatmapLoader::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockBeatmapLoader::$$c__DisplayClass2_0*, creationType>()));
    }
    // System.Boolean <GetBeatmapData>b__0(IDifficultyBeatmapSet bds)
    // Offset: 0x1499B60
    bool $GetBeatmapData$b__0(::GlobalNamespace::IDifficultyBeatmapSet* bds);
    // System.Boolean <GetBeatmapData>b__2(IDifficultyBeatmap dbm)
    // Offset: 0x1499C34
    bool $GetBeatmapData$b__2(::GlobalNamespace::IDifficultyBeatmap* dbm);
    // System.Threading.Tasks.Task <GetBeatmapData>b__3()
    // Offset: 0x1499D08
    ::System::Threading::Tasks::Task* $GetBeatmapData$b__3();
  }; // MockBeatmapLoader/<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(MockBeatmapLoader::$$c__DisplayClass2_0), 32 + sizeof(::GlobalNamespace::IDifficultyBeatmap*)> __GlobalNamespace_MockBeatmapLoader_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(MockBeatmapLoader::$$c__DisplayClass2_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0::$GetBeatmapData$b__0
// Il2CppName: <GetBeatmapData>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0::*)(::GlobalNamespace::IDifficultyBeatmapSet*)>(&GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0::$GetBeatmapData$b__0)> {
  static const MethodInfo* get() {
    static auto* bds = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmapSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0*), "<GetBeatmapData>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bds});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0::$GetBeatmapData$b__2
// Il2CppName: <GetBeatmapData>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0::*)(::GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0::$GetBeatmapData$b__2)> {
  static const MethodInfo* get() {
    static auto* dbm = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0*), "<GetBeatmapData>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dbm});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0::$GetBeatmapData$b__3
// Il2CppName: <GetBeatmapData>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0::*)()>(&GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0::$GetBeatmapData$b__3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0*), "<GetBeatmapData>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
