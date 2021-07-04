// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IMockPlayerScoreCalculator
#include "GlobalNamespace/IMockPlayerScoreCalculator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Random
  class Random;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockNoteData
  class MockNoteData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BasicMockPlayerScoreCalculator
  class BasicMockPlayerScoreCalculator : public ::Il2CppObject/*, public GlobalNamespace::IMockPlayerScoreCalculator*/ {
    public:
    // private readonly System.Single _hitFrequency
    // Size: 0x4
    // Offset: 0x10
    float hitFrequency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Int32 _minScore
    // Size: 0x4
    // Offset: 0x14
    int minScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 _maxScore
    // Size: 0x4
    // Offset: 0x18
    int maxScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: maxScore and: random
    char __padding2[0x4] = {};
    // private readonly System.Random _random
    // Size: 0x8
    // Offset: 0x20
    System::Random* random;
    // Field size check
    static_assert(sizeof(System::Random*) == 0x8);
    // Creating value type constructor for type: BasicMockPlayerScoreCalculator
    BasicMockPlayerScoreCalculator(float hitFrequency_ = {}, int minScore_ = {}, int maxScore_ = {}, System::Random* random_ = {}) noexcept : hitFrequency{hitFrequency_}, minScore{minScore_}, maxScore{maxScore_}, random{random_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IMockPlayerScoreCalculator
    operator GlobalNamespace::IMockPlayerScoreCalculator() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMockPlayerScoreCalculator*>(this);
    }
    // public System.Void .ctor(System.Single hitFrequency, System.Int32 minScore, System.Int32 maxScore)
    // Offset: 0x23B4BE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BasicMockPlayerScoreCalculator* New_ctor(float hitFrequency, int minScore, int maxScore) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BasicMockPlayerScoreCalculator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BasicMockPlayerScoreCalculator*, creationType>(hitFrequency, minScore, maxScore)));
    }
    // public System.Int32 GetScoreForNote(MockNoteData noteData)
    // Offset: 0x23B4CC8
    int GetScoreForNote(GlobalNamespace::MockNoteData* noteData);
  }; // BasicMockPlayerScoreCalculator
  #pragma pack(pop)
  static check_size<sizeof(BasicMockPlayerScoreCalculator), 32 + sizeof(System::Random*)> __GlobalNamespace_BasicMockPlayerScoreCalculatorSizeCheck;
  static_assert(sizeof(BasicMockPlayerScoreCalculator) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BasicMockPlayerScoreCalculator*, "", "BasicMockPlayerScoreCalculator");
// Writing MetadataGetter for method: GlobalNamespace::BasicMockPlayerScoreCalculator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BasicMockPlayerScoreCalculator::GetScoreForNote
// Il2CppName: GetScoreForNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BasicMockPlayerScoreCalculator::*)(GlobalNamespace::MockNoteData*)>(&GlobalNamespace::BasicMockPlayerScoreCalculator::GetScoreForNote)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicMockPlayerScoreCalculator*), "GetScoreForNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MockNoteData*>()});
  }
};
