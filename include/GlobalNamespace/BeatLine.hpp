// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightWithIdMonoBehaviour
#include "GlobalNamespace/LightWithIdMonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatLine
  class BeatLine;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::BeatLine);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatLine*, "", "BeatLine");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: BeatLine
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatLine : public GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    // Nested type: GlobalNamespace::BeatLine::Pool
    class Pool;
    // Nested type: GlobalNamespace::BeatLine::HighlightData
    struct HighlightData;
    // Size: 0xC
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: BeatLine/HighlightData
    // [TokenAttribute] Offset: FFFFFFFF
    struct HighlightData/*, public System::ValueType*/ {
      public:
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      protected:
      #endif
      // public System.Single startTime
      // Size: 0x4
      // Offset: 0x0
      float startTime;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single arriveDuration
      // Size: 0x4
      // Offset: 0x4
      float arriveDuration;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single halfJumpDuration
      // Size: 0x4
      // Offset: 0x8
      float halfJumpDuration;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      public:
      // Creating value type constructor for type: HighlightData
      constexpr HighlightData(float startTime_ = {}, float arriveDuration_ = {}, float halfJumpDuration_ = {}) noexcept : startTime{startTime_}, arriveDuration{arriveDuration_}, halfJumpDuration{halfJumpDuration_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get instance field reference: public System.Single startTime
      float& dyn_startTime();
      // Get instance field reference: public System.Single arriveDuration
      float& dyn_arriveDuration();
      // Get instance field reference: public System.Single halfJumpDuration
      float& dyn_halfJumpDuration();
    }; // BeatLine/HighlightData
    #pragma pack(pop)
    static check_size<sizeof(BeatLine::HighlightData), 8 + sizeof(float)> __GlobalNamespace_BeatLine_HighlightDataSizeCheck;
    static_assert(sizeof(BeatLine::HighlightData) == 0xC);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private TubeBloomPrePassLight _tubeBloomPrePassLight
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::TubeBloomPrePassLight* tubeBloomPrePassLight;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TubeBloomPrePassLight*) == 0x8);
    // private UnityEngine.AnimationCurve _arriveFadeCurve
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AnimationCurve* arriveFadeCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _jumpFadeCurve
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::AnimationCurve* jumpFadeCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _alphaMul
    // Size: 0x4
    // Offset: 0x48
    float alphaMul;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxAlpha
    // Size: 0x4
    // Offset: 0x4C
    float maxAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Collections.Generic.List`1<BeatLine/HighlightData> _highlights
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::List_1<GlobalNamespace::BeatLine::HighlightData>* highlights;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatLine::HighlightData>*) == 0x8);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x58
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single _rotation
    // Size: 0x4
    // Offset: 0x68
    float rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private TubeBloomPrePassLight _tubeBloomPrePassLight
    GlobalNamespace::TubeBloomPrePassLight*& dyn__tubeBloomPrePassLight();
    // Get instance field reference: private UnityEngine.AnimationCurve _arriveFadeCurve
    UnityEngine::AnimationCurve*& dyn__arriveFadeCurve();
    // Get instance field reference: private UnityEngine.AnimationCurve _jumpFadeCurve
    UnityEngine::AnimationCurve*& dyn__jumpFadeCurve();
    // Get instance field reference: private System.Single _alphaMul
    float& dyn__alphaMul();
    // Get instance field reference: private System.Single _maxAlpha
    float& dyn__maxAlpha();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<BeatLine/HighlightData> _highlights
    System::Collections::Generic::List_1<GlobalNamespace::BeatLine::HighlightData>*& dyn__highlights();
    // Get instance field reference: private UnityEngine.Color _color
    UnityEngine::Color& dyn__color();
    // Get instance field reference: private System.Single _rotation
    float& dyn__rotation();
    // public System.Boolean get_isFinished()
    // Offset: 0x123D16C
    bool get_isFinished();
    // public System.Single get_rotation()
    // Offset: 0x123D1C4
    float get_rotation();
    // public System.Void Init(UnityEngine.Vector3 position, System.Single rotation)
    // Offset: 0x123D1CC
    void Init(UnityEngine::Vector3 position, float rotation);
    // public System.Void AddHighlight(System.Single startTime, System.Single arriveDuration, System.Single jumpDuration)
    // Offset: 0x123D2E4
    void AddHighlight(float startTime, float arriveDuration, float jumpDuration);
    // public System.Void ManualUpdate(System.Single songTime)
    // Offset: 0x123D368
    void ManualUpdate(float songTime);
    // public System.Void .ctor()
    // Offset: 0x123D4DC
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatLine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatLine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatLine*, creationType>()));
    }
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x123D2D8
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
  }; // BeatLine
  #pragma pack(pop)
  static check_size<sizeof(BeatLine), 104 + sizeof(float)> __GlobalNamespace_BeatLineSizeCheck;
  static_assert(sizeof(BeatLine) == 0x6C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatLine::HighlightData, "", "BeatLine/HighlightData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatLine::get_isFinished
// Il2CppName: get_isFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatLine::*)()>(&GlobalNamespace::BeatLine::get_isFinished)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatLine*), "get_isFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatLine::get_rotation
// Il2CppName: get_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatLine::*)()>(&GlobalNamespace::BeatLine::get_rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatLine*), "get_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatLine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatLine::*)(UnityEngine::Vector3, float)>(&GlobalNamespace::BeatLine::Init)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatLine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatLine::AddHighlight
// Il2CppName: AddHighlight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatLine::*)(float, float, float)>(&GlobalNamespace::BeatLine::AddHighlight)> {
  static const MethodInfo* get() {
    static auto* startTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* arriveDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* jumpDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatLine*), "AddHighlight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startTime, arriveDuration, jumpDuration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatLine::ManualUpdate
// Il2CppName: ManualUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatLine::*)(float)>(&GlobalNamespace::BeatLine::ManualUpdate)> {
  static const MethodInfo* get() {
    static auto* songTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatLine*), "ManualUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatLine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatLine::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatLine::*)(UnityEngine::Color)>(&GlobalNamespace::BeatLine::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatLine*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
