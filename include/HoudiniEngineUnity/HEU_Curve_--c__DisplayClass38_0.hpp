// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_Curve
#include "HoudiniEngineUnity/HEU_Curve.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: CurveNodeData
  class CurveNodeData;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass38_0);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass38_0*, "HoudiniEngineUnity", "HEU_Curve/<>c__DisplayClass38_0");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_Curve/HoudiniEngineUnity.<>c__DisplayClass38_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class HEU_Curve::$$c__DisplayClass38_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Collections.Generic.List`1<UnityEngine.Vector3> positions
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::Vector3>* positions;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector3>*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.Quaternion> rotations
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::Quaternion>* rotations;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Quaternion>*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.Vector3> scales
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::Vector3>* scales;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector3>*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.Vector3> positions
    System::Collections::Generic::List_1<UnityEngine::Vector3>*& dyn_positions();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.Quaternion> rotations
    System::Collections::Generic::List_1<UnityEngine::Quaternion>*& dyn_rotations();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.Vector3> scales
    System::Collections::Generic::List_1<UnityEngine::Vector3>*& dyn_scales();
    // System.Void <UpdateCurveInputForCustomAttributes>b__0(HoudiniEngineUnity.CurveNodeData data)
    // Offset: 0x14D4EF4
    void $UpdateCurveInputForCustomAttributes$b__0(HoudiniEngineUnity::CurveNodeData* data);
    // System.Void <UpdateCurveInputForCustomAttributes>b__1(System.Int32 nIndex1, System.Int32 nIndex2, System.Single fCoeff, System.Int32 nInsertIndex)
    // Offset: 0x14D4FA4
    void $UpdateCurveInputForCustomAttributes$b__1(int nIndex1, int nIndex2, float fCoeff, int nInsertIndex);
    // System.Void <UpdateCurveInputForCustomAttributes>b__2(System.Int32 nIndex, System.Int32 nInsertIndex)
    // Offset: 0x14D5338
    void $UpdateCurveInputForCustomAttributes$b__2(int nIndex, int nInsertIndex);
    // public System.Void .ctor()
    // Offset: 0x14D4EEC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_Curve::$$c__DisplayClass38_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass38_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_Curve::$$c__DisplayClass38_0*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_Curve/HoudiniEngineUnity.<>c__DisplayClass38_0
  #pragma pack(pop)
  static check_size<sizeof(HEU_Curve::$$c__DisplayClass38_0), 32 + sizeof(System::Collections::Generic::List_1<UnityEngine::Vector3>*)> __HoudiniEngineUnity_HEU_Curve_$$c__DisplayClass38_0SizeCheck;
  static_assert(sizeof(HEU_Curve::$$c__DisplayClass38_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass38_0::$UpdateCurveInputForCustomAttributes$b__0
// Il2CppName: <UpdateCurveInputForCustomAttributes>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass38_0::*)(HoudiniEngineUnity::CurveNodeData*)>(&HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass38_0::$UpdateCurveInputForCustomAttributes$b__0)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "CurveNodeData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass38_0*), "<UpdateCurveInputForCustomAttributes>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass38_0::$UpdateCurveInputForCustomAttributes$b__1
// Il2CppName: <UpdateCurveInputForCustomAttributes>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass38_0::*)(int, int, float, int)>(&HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass38_0::$UpdateCurveInputForCustomAttributes$b__1)> {
  static const MethodInfo* get() {
    static auto* nIndex1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nIndex2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fCoeff = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* nInsertIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass38_0*), "<UpdateCurveInputForCustomAttributes>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nIndex1, nIndex2, fCoeff, nInsertIndex});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass38_0::$UpdateCurveInputForCustomAttributes$b__2
// Il2CppName: <UpdateCurveInputForCustomAttributes>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass38_0::*)(int, int)>(&HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass38_0::$UpdateCurveInputForCustomAttributes$b__2)> {
  static const MethodInfo* get() {
    static auto* nIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nInsertIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass38_0*), "<UpdateCurveInputForCustomAttributes>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nIndex, nInsertIndex});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass38_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
