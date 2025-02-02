// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: ControlMode because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BezierPath
  class BezierPath;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BezierPath);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BezierPath*, "", "BezierPath");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BezierPath
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 1114EC4
  class BezierPath : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::BezierPath::ControlMode
    struct ControlMode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: BezierPath/ControlMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct ControlMode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ControlMode
      constexpr ControlMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public BezierPath/ControlMode Aligned
      static constexpr const int Aligned = 0;
      // Get static field: static public BezierPath/ControlMode Aligned
      static ::GlobalNamespace::BezierPath::ControlMode _get_Aligned();
      // Set static field: static public BezierPath/ControlMode Aligned
      static void _set_Aligned(::GlobalNamespace::BezierPath::ControlMode value);
      // static field const value: static public BezierPath/ControlMode Mirrored
      static constexpr const int Mirrored = 1;
      // Get static field: static public BezierPath/ControlMode Mirrored
      static ::GlobalNamespace::BezierPath::ControlMode _get_Mirrored();
      // Set static field: static public BezierPath/ControlMode Mirrored
      static void _set_Mirrored(::GlobalNamespace::BezierPath::ControlMode value);
      // static field const value: static public BezierPath/ControlMode Free
      static constexpr const int Free = 2;
      // Get static field: static public BezierPath/ControlMode Free
      static ::GlobalNamespace::BezierPath::ControlMode _get_Free();
      // Set static field: static public BezierPath/ControlMode Free
      static void _set_Free(::GlobalNamespace::BezierPath::ControlMode value);
      // static field const value: static public BezierPath/ControlMode Automatic
      static constexpr const int Automatic = 3;
      // Get static field: static public BezierPath/ControlMode Automatic
      static ::GlobalNamespace::BezierPath::ControlMode _get_Automatic();
      // Set static field: static public BezierPath/ControlMode Automatic
      static void _set_Automatic(::GlobalNamespace::BezierPath::ControlMode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // BezierPath/ControlMode
    #pragma pack(pop)
    static check_size<sizeof(BezierPath::ControlMode), 0 + sizeof(int)> __GlobalNamespace_BezierPath_ControlModeSizeCheck;
    static_assert(sizeof(BezierPath::ControlMode) == 0x4);
    public:
    // private System.Action bezierPathWasModifiedEvent
    // Size: 0x8
    // Offset: 0x10
    ::System::Action* bezierPathWasModifiedEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.Vector3> _points
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*) == 0x8);
    // private BezierPath/ControlMode _controlMode
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::BezierPath::ControlMode controlMode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BezierPath::ControlMode) == 0x4);
    // Padding between fields: controlMode and: perAnchorNormalsAngle
    char __padding2[0x4] = {};
    // private System.Collections.Generic.List`1<System.Single> _perAnchorNormalsAngle
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<float>* perAnchorNormalsAngle;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<float>*) == 0x8);
    // private System.Single[] _neighbourDistances
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<float> neighbourDistances;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    public:
    // static field const value: static private System.Single kAutoControlLength
    static constexpr const float kAutoControlLength = 0.3;
    // Get static field: static private System.Single kAutoControlLength
    static float _get_kAutoControlLength();
    // Set static field: static private System.Single kAutoControlLength
    static void _set_kAutoControlLength(float value);
    // Get instance field reference: private System.Action bezierPathWasModifiedEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_bezierPathWasModifiedEvent();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.Vector3> _points
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& dyn__points();
    // Get instance field reference: private BezierPath/ControlMode _controlMode
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BezierPath::ControlMode& dyn__controlMode();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Single> _perAnchorNormalsAngle
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<float>*& dyn__perAnchorNormalsAngle();
    // Get instance field reference: private System.Single[] _neighbourDistances
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn__neighbourDistances();
    // public BezierPath/ControlMode get_controlPointMode()
    // Offset: 0x13FBB8C
    ::GlobalNamespace::BezierPath::ControlMode get_controlPointMode();
    // public System.Void set_controlPointMode(BezierPath/ControlMode value)
    // Offset: 0x13FBB94
    void set_controlPointMode(::GlobalNamespace::BezierPath::ControlMode value);
    // public System.Int32 get_pointsCount()
    // Offset: 0x13FBDCC
    int get_pointsCount();
    // public System.Int32 get_anchorPointsCount()
    // Offset: 0x13FBE1C
    int get_anchorPointsCount();
    // public System.Int32 get_segmentsCount()
    // Offset: 0x13FBE88
    int get_segmentsCount();
    // public UnityEngine.Vector3 get_Item(System.Int32 i)
    // Offset: 0x13FCD18
    ::UnityEngine::Vector3 get_Item(int i);
    // public System.Void add_bezierPathWasModifiedEvent(System.Action value)
    // Offset: 0x13FBC84
    void add_bezierPathWasModifiedEvent(::System::Action* value);
    // public System.Void remove_bezierPathWasModifiedEvent(System.Action value)
    // Offset: 0x13FBD28
    void remove_bezierPathWasModifiedEvent(::System::Action* value);
    // public System.Void .ctor(UnityEngine.Vector3 centre, System.Boolean initTwoSegments)
    // Offset: 0x13FBEF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BezierPath* New_ctor(::UnityEngine::Vector3 centre, bool initTwoSegments) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BezierPath::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BezierPath*, creationType>(centre, initTwoSegments)));
    }
    // public System.Void UpdateByAnchorPoints(System.Collections.Generic.IReadOnlyList`1<UnityEngine.Vector3> points)
    // Offset: 0x13FC204
    void UpdateByAnchorPoints(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* points);
    // public System.Void UpdateControlPoints(System.Collections.Generic.IReadOnlyList`1<UnityEngine.Vector3> points)
    // Offset: 0x13FC9C8
    void UpdateControlPoints(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* points);
    // public UnityEngine.Vector3 GetPoint(System.Int32 i)
    // Offset: 0x13FCD1C
    ::UnityEngine::Vector3 GetPoint(int i);
    // public System.Void SetPoint(System.Int32 i, UnityEngine.Vector3 localPosition, System.Boolean suppressPathModified)
    // Offset: 0x13FCC58
    void SetPoint(int i, ::UnityEngine::Vector3 localPosition, bool suppressPathModified);
    // public System.Void AddSegmentToEnd(UnityEngine.Vector3 anchorPos)
    // Offset: 0x13FC5C0
    void AddSegmentToEnd(::UnityEngine::Vector3 anchorPos);
    // public System.Void GetPointsInSegment(System.Int32 segmentIndex, ref UnityEngine.Vector3[] points)
    // Offset: 0x13FCE3C
    void GetPointsInSegment(int segmentIndex, ByRef<::ArrayW<::UnityEngine::Vector3>> points);
    // public System.Void GetPointsInSegment(System.Int32 segmentIndex, out UnityEngine.Vector3 p0, out UnityEngine.Vector3 p1, out UnityEngine.Vector3 p2, out UnityEngine.Vector3 p3)
    // Offset: 0x13FCF30
    void GetPointsInSegment(int segmentIndex, ByRef<::UnityEngine::Vector3> p0, ByRef<::UnityEngine::Vector3> p1, ByRef<::UnityEngine::Vector3> p2, ByRef<::UnityEngine::Vector3> p3);
    // public System.Single GetAnchorNormalAngle(System.Int32 anchorIndex)
    // Offset: 0x13FD0D4
    float GetAnchorNormalAngle(int anchorIndex);
    // public System.Void SetAnchorNormalAngle(System.Int32 anchorIndex, System.Single angle)
    // Offset: 0x13FD154
    void SetAnchorNormalAngle(int anchorIndex, float angle);
    // private System.Void AutoSetAllAffectedControlPoints(System.Int32 updatedAnchorIndex)
    // Offset: 0x13FCDA0
    void AutoSetAllAffectedControlPoints(int updatedAnchorIndex);
    // private System.Void AutoSetAllControlPoints()
    // Offset: 0x13FBBE8
    void AutoSetAllControlPoints();
    // private System.Void AutoSetAnchorControlPoints(System.Int32 anchorIndex)
    // Offset: 0x13FD2C8
    void AutoSetAnchorControlPoints(int anchorIndex);
    // private System.Void AutoSetStartAndEndControls()
    // Offset: 0x13FD6B0
    void AutoSetStartAndEndControls();
    // private System.Int32 LoopIndex(System.Int32 i)
    // Offset: 0x13FD260
    int LoopIndex(int i);
    // private System.Void NotifyPathModified()
    // Offset: 0x13FBC70
    void NotifyPathModified();
  }; // BezierPath
  #pragma pack(pop)
  static check_size<sizeof(BezierPath), 48 + sizeof(::ArrayW<float>)> __GlobalNamespace_BezierPathSizeCheck;
  static_assert(sizeof(BezierPath) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BezierPath::ControlMode, "", "BezierPath/ControlMode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::get_controlPointMode
// Il2CppName: get_controlPointMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BezierPath::ControlMode (GlobalNamespace::BezierPath::*)()>(&GlobalNamespace::BezierPath::get_controlPointMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "get_controlPointMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::set_controlPointMode
// Il2CppName: set_controlPointMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierPath::*)(::GlobalNamespace::BezierPath::ControlMode)>(&GlobalNamespace::BezierPath::set_controlPointMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "BezierPath/ControlMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "set_controlPointMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::get_pointsCount
// Il2CppName: get_pointsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BezierPath::*)()>(&GlobalNamespace::BezierPath::get_pointsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "get_pointsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::get_anchorPointsCount
// Il2CppName: get_anchorPointsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BezierPath::*)()>(&GlobalNamespace::BezierPath::get_anchorPointsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "get_anchorPointsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::get_segmentsCount
// Il2CppName: get_segmentsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BezierPath::*)()>(&GlobalNamespace::BezierPath::get_segmentsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "get_segmentsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::BezierPath::*)(int)>(&GlobalNamespace::BezierPath::get_Item)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::add_bezierPathWasModifiedEvent
// Il2CppName: add_bezierPathWasModifiedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierPath::*)(::System::Action*)>(&GlobalNamespace::BezierPath::add_bezierPathWasModifiedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "add_bezierPathWasModifiedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::remove_bezierPathWasModifiedEvent
// Il2CppName: remove_bezierPathWasModifiedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierPath::*)(::System::Action*)>(&GlobalNamespace::BezierPath::remove_bezierPathWasModifiedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "remove_bezierPathWasModifiedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::UpdateByAnchorPoints
// Il2CppName: UpdateByAnchorPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierPath::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*)>(&GlobalNamespace::BezierPath::UpdateByAnchorPoints)> {
  static const MethodInfo* get() {
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "UpdateByAnchorPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::UpdateControlPoints
// Il2CppName: UpdateControlPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierPath::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*)>(&GlobalNamespace::BezierPath::UpdateControlPoints)> {
  static const MethodInfo* get() {
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "UpdateControlPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::GetPoint
// Il2CppName: GetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::BezierPath::*)(int)>(&GlobalNamespace::BezierPath::GetPoint)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "GetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::SetPoint
// Il2CppName: SetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierPath::*)(int, ::UnityEngine::Vector3, bool)>(&GlobalNamespace::BezierPath::SetPoint)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* localPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* suppressPathModified = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "SetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, localPosition, suppressPathModified});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::AddSegmentToEnd
// Il2CppName: AddSegmentToEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierPath::*)(::UnityEngine::Vector3)>(&GlobalNamespace::BezierPath::AddSegmentToEnd)> {
  static const MethodInfo* get() {
    static auto* anchorPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "AddSegmentToEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchorPos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::GetPointsInSegment
// Il2CppName: GetPointsInSegment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierPath::*)(int, ByRef<::ArrayW<::UnityEngine::Vector3>>)>(&GlobalNamespace::BezierPath::GetPointsInSegment)> {
  static const MethodInfo* get() {
    static auto* segmentIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "GetPointsInSegment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{segmentIndex, points});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::GetPointsInSegment
// Il2CppName: GetPointsInSegment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierPath::*)(int, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&GlobalNamespace::BezierPath::GetPointsInSegment)> {
  static const MethodInfo* get() {
    static auto* segmentIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* p0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* p1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* p3 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "GetPointsInSegment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{segmentIndex, p0, p1, p2, p3});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::GetAnchorNormalAngle
// Il2CppName: GetAnchorNormalAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BezierPath::*)(int)>(&GlobalNamespace::BezierPath::GetAnchorNormalAngle)> {
  static const MethodInfo* get() {
    static auto* anchorIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "GetAnchorNormalAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchorIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::SetAnchorNormalAngle
// Il2CppName: SetAnchorNormalAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierPath::*)(int, float)>(&GlobalNamespace::BezierPath::SetAnchorNormalAngle)> {
  static const MethodInfo* get() {
    static auto* anchorIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* angle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "SetAnchorNormalAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchorIndex, angle});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::AutoSetAllAffectedControlPoints
// Il2CppName: AutoSetAllAffectedControlPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierPath::*)(int)>(&GlobalNamespace::BezierPath::AutoSetAllAffectedControlPoints)> {
  static const MethodInfo* get() {
    static auto* updatedAnchorIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "AutoSetAllAffectedControlPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updatedAnchorIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::AutoSetAllControlPoints
// Il2CppName: AutoSetAllControlPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierPath::*)()>(&GlobalNamespace::BezierPath::AutoSetAllControlPoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "AutoSetAllControlPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::AutoSetAnchorControlPoints
// Il2CppName: AutoSetAnchorControlPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierPath::*)(int)>(&GlobalNamespace::BezierPath::AutoSetAnchorControlPoints)> {
  static const MethodInfo* get() {
    static auto* anchorIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "AutoSetAnchorControlPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchorIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::AutoSetStartAndEndControls
// Il2CppName: AutoSetStartAndEndControls
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierPath::*)()>(&GlobalNamespace::BezierPath::AutoSetStartAndEndControls)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "AutoSetStartAndEndControls", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::LoopIndex
// Il2CppName: LoopIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BezierPath::*)(int)>(&GlobalNamespace::BezierPath::LoopIndex)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "LoopIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierPath::NotifyPathModified
// Il2CppName: NotifyPathModified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierPath::*)()>(&GlobalNamespace::BezierPath::NotifyPathModified)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierPath*), "NotifyPathModified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
