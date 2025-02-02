// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TrailElement
  class TrailElement;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TrailElementCollection
  class TrailElementCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TrailElementCollection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrailElementCollection*, "", "TrailElementCollection");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: TrailElementCollection
  // [TokenAttribute] Offset: FFFFFFFF
  class TrailElementCollection : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::TrailElementCollection::InterpolationState
    struct InterpolationState;
    public:
    // private readonly System.Int32 _capacity
    // Size: 0x4
    // Offset: 0x10
    int capacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: capacity and: snapshots
    char __padding0[0x4] = {};
    // private readonly TrailElement[] _snapshots
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::TrailElement*> snapshots;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::TrailElement*>) == 0x8);
    // private System.Int32 _headIndex
    // Size: 0x4
    // Offset: 0x20
    int headIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _totalDistance
    // Size: 0x4
    // Offset: 0x24
    float totalDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private readonly System.Int32 _capacity
    [[deprecated("Use field access instead!")]] int& dyn__capacity();
    // Get instance field reference: private readonly TrailElement[] _snapshots
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::TrailElement*>& dyn__snapshots();
    // Get instance field reference: private System.Int32 _headIndex
    [[deprecated("Use field access instead!")]] int& dyn__headIndex();
    // Get instance field reference: private System.Single _totalDistance
    [[deprecated("Use field access instead!")]] float& dyn__totalDistance();
    // public System.Void .ctor(System.Int32 capacity, UnityEngine.Vector3 defaultStartPosition, UnityEngine.Vector3 defaultEndPosition, System.Single time)
    // Offset: 0x13C4F18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrailElementCollection* New_ctor(int capacity, ::UnityEngine::Vector3 defaultStartPosition, ::UnityEngine::Vector3 defaultEndPosition, float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TrailElementCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrailElementCollection*, creationType>(capacity, defaultStartPosition, defaultEndPosition, time)));
    }
    // public System.Void InitSnapshots(UnityEngine.Vector3 defaultStartPosition, UnityEngine.Vector3 defaultEndPosition, System.Single time)
    // Offset: 0x13C50B4
    void InitSnapshots(::UnityEngine::Vector3 defaultStartPosition, ::UnityEngine::Vector3 defaultEndPosition, float time);
    // public System.Void SetHeadData(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single time)
    // Offset: 0x13C517C
    void SetHeadData(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float time);
    // public System.Void MoveTailToHead()
    // Offset: 0x13C5218
    void MoveTailToHead();
    // public System.Void UpdateDistances()
    // Offset: 0x13C5290
    void UpdateDistances();
    // public System.Void Interpolate(System.Single t, ref TrailElementCollection/InterpolationState lerpState, out UnityEngine.Vector3 position, out UnityEngine.Vector3 normal, out System.Single time)
    // Offset: 0x13C531C
    void Interpolate(float t, ByRef<::GlobalNamespace::TrailElementCollection::InterpolationState> lerpState, ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Vector3> normal, ByRef<float> time);
    // private System.Void UpdateLerpState(System.Single t, ref TrailElementCollection/InterpolationState interpolationState)
    // Offset: 0x13C5574
    void UpdateLerpState(float t, ByRef<::GlobalNamespace::TrailElementCollection::InterpolationState> interpolationState);
    // private TrailElement GetElement(System.Int32 index)
    // Offset: 0x13C56B0
    ::GlobalNamespace::TrailElement* GetElement(int index);
  }; // TrailElementCollection
  #pragma pack(pop)
  static check_size<sizeof(TrailElementCollection), 36 + sizeof(float)> __GlobalNamespace_TrailElementCollectionSizeCheck;
  static_assert(sizeof(TrailElementCollection) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TrailElementCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TrailElementCollection::InitSnapshots
// Il2CppName: InitSnapshots
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrailElementCollection::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&GlobalNamespace::TrailElementCollection::InitSnapshots)> {
  static const MethodInfo* get() {
    static auto* defaultStartPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* defaultEndPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailElementCollection*), "InitSnapshots", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{defaultStartPosition, defaultEndPosition, time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailElementCollection::SetHeadData
// Il2CppName: SetHeadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrailElementCollection::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&GlobalNamespace::TrailElementCollection::SetHeadData)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailElementCollection*), "SetHeadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailElementCollection::MoveTailToHead
// Il2CppName: MoveTailToHead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrailElementCollection::*)()>(&GlobalNamespace::TrailElementCollection::MoveTailToHead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailElementCollection*), "MoveTailToHead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailElementCollection::UpdateDistances
// Il2CppName: UpdateDistances
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrailElementCollection::*)()>(&GlobalNamespace::TrailElementCollection::UpdateDistances)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailElementCollection*), "UpdateDistances", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailElementCollection::Interpolate
// Il2CppName: Interpolate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrailElementCollection::*)(float, ByRef<::GlobalNamespace::TrailElementCollection::InterpolationState>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<float>)>(&GlobalNamespace::TrailElementCollection::Interpolate)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* lerpState = &::il2cpp_utils::GetClassFromName("", "TrailElementCollection/InterpolationState")->this_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailElementCollection*), "Interpolate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, lerpState, position, normal, time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailElementCollection::UpdateLerpState
// Il2CppName: UpdateLerpState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrailElementCollection::*)(float, ByRef<::GlobalNamespace::TrailElementCollection::InterpolationState>)>(&GlobalNamespace::TrailElementCollection::UpdateLerpState)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* interpolationState = &::il2cpp_utils::GetClassFromName("", "TrailElementCollection/InterpolationState")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailElementCollection*), "UpdateLerpState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, interpolationState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailElementCollection::GetElement
// Il2CppName: GetElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::TrailElement* (GlobalNamespace::TrailElementCollection::*)(int)>(&GlobalNamespace::TrailElementCollection::GetElement)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailElementCollection*), "GetElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
