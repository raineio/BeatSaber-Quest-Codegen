// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ScoringElement
#include "GlobalNamespace/ScoringElement.hpp"
// Including type: ScoreMultiplierCounter/MultiplierEventType
#include "GlobalNamespace/ScoreMultiplierCounter_MultiplierEventType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteData
  class NoteData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BadCutScoringElement
  class BadCutScoringElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BadCutScoringElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BadCutScoringElement*, "", "BadCutScoringElement");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: BadCutScoringElement
  // [TokenAttribute] Offset: FFFFFFFF
  class BadCutScoringElement : public ::GlobalNamespace::ScoringElement {
    public:
    // Writing base type padding for base size: 0x21 to desired offset: 0x24
    char ___base_padding[0x3] = {};
    // Nested type: ::GlobalNamespace::BadCutScoringElement::Pool
    class Pool;
    public:
    // private ScoreMultiplierCounter/MultiplierEventType _multiplierEventType
    // Size: 0x4
    // Offset: 0x24
    ::GlobalNamespace::ScoreMultiplierCounter::MultiplierEventType multiplierEventType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ScoreMultiplierCounter::MultiplierEventType) == 0x4);
    // private ScoreMultiplierCounter/MultiplierEventType _wouldBeCorrectCutBestPossibleMultiplierEventType
    // Size: 0x4
    // Offset: 0x28
    ::GlobalNamespace::ScoreMultiplierCounter::MultiplierEventType wouldBeCorrectCutBestPossibleMultiplierEventType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ScoreMultiplierCounter::MultiplierEventType) == 0x4);
    public:
    // Get instance field reference: private ScoreMultiplierCounter/MultiplierEventType _multiplierEventType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ScoreMultiplierCounter::MultiplierEventType& dyn__multiplierEventType();
    // Get instance field reference: private ScoreMultiplierCounter/MultiplierEventType _wouldBeCorrectCutBestPossibleMultiplierEventType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ScoreMultiplierCounter::MultiplierEventType& dyn__wouldBeCorrectCutBestPossibleMultiplierEventType();
    // public System.Void Init(NoteData noteData)
    // Offset: 0x13A8CB4
    void Init(::GlobalNamespace::NoteData* noteData);
    // public override System.Int32 get_cutScore()
    // Offset: 0x13A8C90
    // Implemented from: ScoringElement
    // Base method: System.Int32 ScoringElement::get_cutScore()
    int get_cutScore();
    // public override ScoreMultiplierCounter/MultiplierEventType get_wouldBeCorrectCutBestPossibleMultiplierEventType()
    // Offset: 0x13A8C98
    // Implemented from: ScoringElement
    // Base method: ScoreMultiplierCounter/MultiplierEventType ScoringElement::get_wouldBeCorrectCutBestPossibleMultiplierEventType()
    ::GlobalNamespace::ScoreMultiplierCounter::MultiplierEventType get_wouldBeCorrectCutBestPossibleMultiplierEventType();
    // public override ScoreMultiplierCounter/MultiplierEventType get_multiplierEventType()
    // Offset: 0x13A8CA0
    // Implemented from: ScoringElement
    // Base method: ScoreMultiplierCounter/MultiplierEventType ScoringElement::get_multiplierEventType()
    ::GlobalNamespace::ScoreMultiplierCounter::MultiplierEventType get_multiplierEventType();
    // protected override System.Int32 get_executionOrder()
    // Offset: 0x13A8CA8
    // Implemented from: ScoringElement
    // Base method: System.Int32 ScoringElement::get_executionOrder()
    int get_executionOrder();
    // public System.Void .ctor()
    // Offset: 0x13A8D00
    // Implemented from: ScoringElement
    // Base method: System.Void ScoringElement::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BadCutScoringElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BadCutScoringElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BadCutScoringElement*, creationType>()));
    }
  }; // BadCutScoringElement
  #pragma pack(pop)
  static check_size<sizeof(BadCutScoringElement), 40 + sizeof(::GlobalNamespace::ScoreMultiplierCounter::MultiplierEventType)> __GlobalNamespace_BadCutScoringElementSizeCheck;
  static_assert(sizeof(BadCutScoringElement) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BadCutScoringElement::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BadCutScoringElement::*)(::GlobalNamespace::NoteData*)>(&GlobalNamespace::BadCutScoringElement::Init)> {
  static const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BadCutScoringElement*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BadCutScoringElement::get_cutScore
// Il2CppName: get_cutScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BadCutScoringElement::*)()>(&GlobalNamespace::BadCutScoringElement::get_cutScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BadCutScoringElement*), "get_cutScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BadCutScoringElement::get_wouldBeCorrectCutBestPossibleMultiplierEventType
// Il2CppName: get_wouldBeCorrectCutBestPossibleMultiplierEventType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ScoreMultiplierCounter::MultiplierEventType (GlobalNamespace::BadCutScoringElement::*)()>(&GlobalNamespace::BadCutScoringElement::get_wouldBeCorrectCutBestPossibleMultiplierEventType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BadCutScoringElement*), "get_wouldBeCorrectCutBestPossibleMultiplierEventType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BadCutScoringElement::get_multiplierEventType
// Il2CppName: get_multiplierEventType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ScoreMultiplierCounter::MultiplierEventType (GlobalNamespace::BadCutScoringElement::*)()>(&GlobalNamespace::BadCutScoringElement::get_multiplierEventType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BadCutScoringElement*), "get_multiplierEventType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BadCutScoringElement::get_executionOrder
// Il2CppName: get_executionOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BadCutScoringElement::*)()>(&GlobalNamespace::BadCutScoringElement::get_executionOrder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BadCutScoringElement*), "get_executionOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BadCutScoringElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
