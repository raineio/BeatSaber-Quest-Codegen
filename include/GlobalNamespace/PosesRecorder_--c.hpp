// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PosesRecorder
#include "GlobalNamespace/PosesRecorder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PoseObject
  class PoseObject;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: <>c
  class $$c;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::PosesRecorder::$$c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PosesRecorder::$$c*, "", "PosesRecorder/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PosesRecorder/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PosesRecorder::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly PosesRecorder/<>c <>9
    static GlobalNamespace::PosesRecorder::$$c* _get_$$9();
    // Set static field: static public readonly PosesRecorder/<>c <>9
    static void _set_$$9(GlobalNamespace::PosesRecorder::$$c* value);
    // Get static field: static public System.Func`2<PoseObject,UnityEngine.Transform> <>9__2_0
    static System::Func_2<GlobalNamespace::PoseObject*, UnityEngine::Transform*>* _get_$$9__2_0();
    // Set static field: static public System.Func`2<PoseObject,UnityEngine.Transform> <>9__2_0
    static void _set_$$9__2_0(System::Func_2<GlobalNamespace::PoseObject*, UnityEngine::Transform*>* value);
    // Get static field: static public System.Func`2<PoseObject,System.String> <>9__2_1
    static System::Func_2<GlobalNamespace::PoseObject*, ::Il2CppString*>* _get_$$9__2_1();
    // Set static field: static public System.Func`2<PoseObject,System.String> <>9__2_1
    static void _set_$$9__2_1(System::Func_2<GlobalNamespace::PoseObject*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x11AE3C8
    static void _cctor();
    // UnityEngine.Transform <StartRecording>b__2_0(PoseObject ro)
    // Offset: 0x11AE434
    UnityEngine::Transform* $StartRecording$b__2_0(GlobalNamespace::PoseObject* ro);
    // System.String <StartRecording>b__2_1(PoseObject ro)
    // Offset: 0x11AE44C
    ::Il2CppString* $StartRecording$b__2_1(GlobalNamespace::PoseObject* ro);
    // public System.Void .ctor()
    // Offset: 0x11AE42C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PosesRecorder::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PosesRecorder::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PosesRecorder::$$c*, creationType>()));
    }
  }; // PosesRecorder/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PosesRecorder::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::PosesRecorder::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosesRecorder::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PosesRecorder::$$c::$StartRecording$b__2_0
// Il2CppName: <StartRecording>b__2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (GlobalNamespace::PosesRecorder::$$c::*)(GlobalNamespace::PoseObject*)>(&GlobalNamespace::PosesRecorder::$$c::$StartRecording$b__2_0)> {
  static const MethodInfo* get() {
    static auto* ro = &::il2cpp_utils::GetClassFromName("", "PoseObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosesRecorder::$$c*), "<StartRecording>b__2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ro});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PosesRecorder::$$c::$StartRecording$b__2_1
// Il2CppName: <StartRecording>b__2_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PosesRecorder::$$c::*)(GlobalNamespace::PoseObject*)>(&GlobalNamespace::PosesRecorder::$$c::$StartRecording$b__2_1)> {
  static const MethodInfo* get() {
    static auto* ro = &::il2cpp_utils::GetClassFromName("", "PoseObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosesRecorder::$$c*), "<StartRecording>b__2_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ro});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PosesRecorder::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
