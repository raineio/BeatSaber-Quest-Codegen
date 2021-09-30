// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerIntroCountdown
#include "GlobalNamespace/MultiplayerIntroCountdown.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerIntroCountdownTextController
  class MultiplayerIntroCountdownTextController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerIntroCountdown/<>c__DisplayClass25_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MultiplayerIntroCountdown::$$c__DisplayClass25_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public MultiplayerIntroCountdownTextController textController
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::MultiplayerIntroCountdownTextController* textController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerIntroCountdownTextController*) == 0x8);
    // public MultiplayerIntroCountdown <>4__this
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MultiplayerIntroCountdown* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerIntroCountdown*) == 0x8);
    public:
    // Get instance field reference: public MultiplayerIntroCountdownTextController textController
    GlobalNamespace::MultiplayerIntroCountdownTextController*& dyn_textController();
    // Get instance field reference: public MultiplayerIntroCountdown <>4__this
    GlobalNamespace::MultiplayerIntroCountdown*& dyn_$$4__this();
    // System.Void <PhaseRoutine>b__0(System.Single val)
    // Offset: 0x121B8F0
    void $PhaseRoutine$b__0(float val);
    // System.Void <PhaseRoutine>b__1(System.Single val)
    // Offset: 0x121B90C
    void $PhaseRoutine$b__1(float val);
    // System.Void <PhaseRoutine>b__2(UnityEngine.Vector3 pos)
    // Offset: 0x121B928
    void $PhaseRoutine$b__2(UnityEngine::Vector3 pos);
    // System.Void <PhaseRoutine>b__3(System.Single f)
    // Offset: 0x121B97C
    void $PhaseRoutine$b__3(float f);
    // System.Void <PhaseRoutine>b__4(System.Single val)
    // Offset: 0x121B9AC
    void $PhaseRoutine$b__4(float val);
    // public System.Void .ctor()
    // Offset: 0x121B8E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerIntroCountdown::$$c__DisplayClass25_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerIntroCountdown::$$c__DisplayClass25_0*, creationType>()));
    }
  }; // MultiplayerIntroCountdown/<>c__DisplayClass25_0
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerIntroCountdown::$$c__DisplayClass25_0), 24 + sizeof(GlobalNamespace::MultiplayerIntroCountdown*)> __GlobalNamespace_MultiplayerIntroCountdown_$$c__DisplayClass25_0SizeCheck;
  static_assert(sizeof(MultiplayerIntroCountdown::$$c__DisplayClass25_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0*, "", "MultiplayerIntroCountdown/<>c__DisplayClass25_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0::$PhaseRoutine$b__0
// Il2CppName: <PhaseRoutine>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0::*)(float)>(&GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0::$PhaseRoutine$b__0)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0*), "<PhaseRoutine>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0::$PhaseRoutine$b__1
// Il2CppName: <PhaseRoutine>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0::*)(float)>(&GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0::$PhaseRoutine$b__1)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0*), "<PhaseRoutine>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0::$PhaseRoutine$b__2
// Il2CppName: <PhaseRoutine>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0::*)(UnityEngine::Vector3)>(&GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0::$PhaseRoutine$b__2)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0*), "<PhaseRoutine>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0::$PhaseRoutine$b__3
// Il2CppName: <PhaseRoutine>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0::*)(float)>(&GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0::$PhaseRoutine$b__3)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0*), "<PhaseRoutine>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0::$PhaseRoutine$b__4
// Il2CppName: <PhaseRoutine>b__4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0::*)(float)>(&GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0::$PhaseRoutine$b__4)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0*), "<PhaseRoutine>b__4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
