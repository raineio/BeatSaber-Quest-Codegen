// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ScoreModel
#include "GlobalNamespace/ScoreModel.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: NoteData/ScoringType
#include "GlobalNamespace/NoteData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ScoreModel::MaxScoreCounterElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreModel::MaxScoreCounterElement*, "", "ScoreModel/MaxScoreCounterElement");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: ScoreModel/MaxScoreCounterElement
  // [TokenAttribute] Offset: FFFFFFFF
  class ScoreModel::MaxScoreCounterElement : public ::Il2CppObject/*, public ::System::IComparable_1<::GlobalNamespace::ScoreModel::MaxScoreCounterElement*>*/ {
    public:
    public:
    // public readonly ScoreModel/NoteScoreDefinition noteScoreDefinition
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::ScoreModel::NoteScoreDefinition* noteScoreDefinition;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ScoreModel::NoteScoreDefinition*) == 0x8);
    // private readonly System.Single time
    // Size: 0x4
    // Offset: 0x18
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::IComparable_1<::GlobalNamespace::ScoreModel::MaxScoreCounterElement*>
    operator ::System::IComparable_1<::GlobalNamespace::ScoreModel::MaxScoreCounterElement*>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::GlobalNamespace::ScoreModel::MaxScoreCounterElement*>*>(this);
    }
    // Creating interface conversion operator: i_MaxScoreCounterElement
    inline ::System::IComparable_1<::GlobalNamespace::ScoreModel::MaxScoreCounterElement*>* i_MaxScoreCounterElement() noexcept {
      return reinterpret_cast<::System::IComparable_1<::GlobalNamespace::ScoreModel::MaxScoreCounterElement*>*>(this);
    }
    // Get instance field reference: public readonly ScoreModel/NoteScoreDefinition noteScoreDefinition
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ScoreModel::NoteScoreDefinition*& dyn_noteScoreDefinition();
    // Get instance field reference: private readonly System.Single time
    [[deprecated("Use field access instead!")]] float& dyn_time();
    // public System.Void .ctor(NoteData/ScoringType scoringType, System.Single time)
    // Offset: 0x14167F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScoreModel::MaxScoreCounterElement* New_ctor(::GlobalNamespace::NoteData::ScoringType scoringType, float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ScoreModel::MaxScoreCounterElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScoreModel::MaxScoreCounterElement*, creationType>(scoringType, time)));
    }
    // public System.Int32 CompareTo(ScoreModel/MaxScoreCounterElement other)
    // Offset: 0x1416BD4
    int CompareTo(::GlobalNamespace::ScoreModel::MaxScoreCounterElement* other);
  }; // ScoreModel/MaxScoreCounterElement
  #pragma pack(pop)
  static check_size<sizeof(ScoreModel::MaxScoreCounterElement), 24 + sizeof(float)> __GlobalNamespace_ScoreModel_MaxScoreCounterElementSizeCheck;
  static_assert(sizeof(ScoreModel::MaxScoreCounterElement) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScoreModel::MaxScoreCounterElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ScoreModel::MaxScoreCounterElement::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ScoreModel::MaxScoreCounterElement::*)(::GlobalNamespace::ScoreModel::MaxScoreCounterElement*)>(&GlobalNamespace::ScoreModel::MaxScoreCounterElement::CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "ScoreModel/MaxScoreCounterElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreModel::MaxScoreCounterElement*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
