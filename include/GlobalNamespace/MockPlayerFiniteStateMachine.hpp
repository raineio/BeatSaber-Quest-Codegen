// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockPlayerGamePoseGenerator
  class MockPlayerGamePoseGenerator;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: IMenuRpcManager
  class IMenuRpcManager;
  // Forward declaring type: IMockBeatmapDataProvider
  class IMockBeatmapDataProvider;
  // Forward declaring type: MockPlayerLobbyPoseGenerator
  class MockPlayerLobbyPoseGenerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MockPlayerFiniteStateMachine
  class MockPlayerFiniteStateMachine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MockPlayerFiniteStateMachine);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerFiniteStateMachine*, "", "MockPlayerFiniteStateMachine");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MockPlayerFiniteStateMachine
  // [TokenAttribute] Offset: FFFFFFFF
  class MockPlayerFiniteStateMachine : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // public UnityEngine.Color get_saberAColor()
    // Offset: 0x2AA8928
    ::UnityEngine::Color get_saberAColor();
    // public System.Void set_saberAColor(UnityEngine.Color value)
    // Offset: 0x2AA8930
    void set_saberAColor(::UnityEngine::Color value);
    // public UnityEngine.Color get_saberBColor()
    // Offset: 0x2AA8934
    ::UnityEngine::Color get_saberBColor();
    // public System.Void set_saberBColor(UnityEngine.Color value)
    // Offset: 0x2AA893C
    void set_saberBColor(::UnityEngine::Color value);
    // public UnityEngine.Color get_obstaclesColor()
    // Offset: 0x2AA8940
    ::UnityEngine::Color get_obstaclesColor();
    // public System.Void set_obstaclesColor(UnityEngine.Color value)
    // Offset: 0x2AA8948
    void set_obstaclesColor(::UnityEngine::Color value);
    // public System.Boolean get_leftHanded()
    // Offset: 0x2AA894C
    bool get_leftHanded();
    // public System.Void set_leftHanded(System.Boolean value)
    // Offset: 0x2AA8954
    void set_leftHanded(bool value);
    // public System.Boolean get_inactiveByDefault()
    // Offset: 0x2AA8958
    bool get_inactiveByDefault();
    // public System.Void set_inactiveByDefault(System.Boolean value)
    // Offset: 0x2AA8960
    void set_inactiveByDefault(bool value);
    // public MockPlayerGamePoseGenerator get_gamePoseGenerator()
    // Offset: 0x2AA8964
    ::GlobalNamespace::MockPlayerGamePoseGenerator* get_gamePoseGenerator();
    // public System.Void .ctor(IMultiplayerSessionManager multiplayerSessionManager, IGameplayRpcManager gameplayRpcManager, IMenuRpcManager menuRpcManager, IMockBeatmapDataProvider beatmapDataProvider, MockPlayerLobbyPoseGenerator lobbyPoseGenerator, MockPlayerGamePoseGenerator gamePoseGenerator)
    // Offset: 0x2AA8920
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockPlayerFiniteStateMachine* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, ::GlobalNamespace::IMenuRpcManager* menuRpcManager, ::GlobalNamespace::IMockBeatmapDataProvider* beatmapDataProvider, ::GlobalNamespace::MockPlayerLobbyPoseGenerator* lobbyPoseGenerator, ::GlobalNamespace::MockPlayerGamePoseGenerator* gamePoseGenerator) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MockPlayerFiniteStateMachine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockPlayerFiniteStateMachine*, creationType>(multiplayerSessionManager, gameplayRpcManager, menuRpcManager, beatmapDataProvider, lobbyPoseGenerator, gamePoseGenerator)));
    }
    // public System.Void Dispose()
    // Offset: 0x2AA896C
    void Dispose();
    // public System.Void SetIsReady(System.Boolean isReady)
    // Offset: 0x2AA8970
    void SetIsReady(bool isReady);
  }; // MockPlayerFiniteStateMachine
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerFiniteStateMachine::get_saberAColor
// Il2CppName: get_saberAColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::MockPlayerFiniteStateMachine::*)()>(&GlobalNamespace::MockPlayerFiniteStateMachine::get_saberAColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerFiniteStateMachine*), "get_saberAColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerFiniteStateMachine::set_saberAColor
// Il2CppName: set_saberAColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerFiniteStateMachine::*)(::UnityEngine::Color)>(&GlobalNamespace::MockPlayerFiniteStateMachine::set_saberAColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerFiniteStateMachine*), "set_saberAColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerFiniteStateMachine::get_saberBColor
// Il2CppName: get_saberBColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::MockPlayerFiniteStateMachine::*)()>(&GlobalNamespace::MockPlayerFiniteStateMachine::get_saberBColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerFiniteStateMachine*), "get_saberBColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerFiniteStateMachine::set_saberBColor
// Il2CppName: set_saberBColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerFiniteStateMachine::*)(::UnityEngine::Color)>(&GlobalNamespace::MockPlayerFiniteStateMachine::set_saberBColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerFiniteStateMachine*), "set_saberBColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerFiniteStateMachine::get_obstaclesColor
// Il2CppName: get_obstaclesColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::MockPlayerFiniteStateMachine::*)()>(&GlobalNamespace::MockPlayerFiniteStateMachine::get_obstaclesColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerFiniteStateMachine*), "get_obstaclesColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerFiniteStateMachine::set_obstaclesColor
// Il2CppName: set_obstaclesColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerFiniteStateMachine::*)(::UnityEngine::Color)>(&GlobalNamespace::MockPlayerFiniteStateMachine::set_obstaclesColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerFiniteStateMachine*), "set_obstaclesColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerFiniteStateMachine::get_leftHanded
// Il2CppName: get_leftHanded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MockPlayerFiniteStateMachine::*)()>(&GlobalNamespace::MockPlayerFiniteStateMachine::get_leftHanded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerFiniteStateMachine*), "get_leftHanded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerFiniteStateMachine::set_leftHanded
// Il2CppName: set_leftHanded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerFiniteStateMachine::*)(bool)>(&GlobalNamespace::MockPlayerFiniteStateMachine::set_leftHanded)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerFiniteStateMachine*), "set_leftHanded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerFiniteStateMachine::get_inactiveByDefault
// Il2CppName: get_inactiveByDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MockPlayerFiniteStateMachine::*)()>(&GlobalNamespace::MockPlayerFiniteStateMachine::get_inactiveByDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerFiniteStateMachine*), "get_inactiveByDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerFiniteStateMachine::set_inactiveByDefault
// Il2CppName: set_inactiveByDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerFiniteStateMachine::*)(bool)>(&GlobalNamespace::MockPlayerFiniteStateMachine::set_inactiveByDefault)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerFiniteStateMachine*), "set_inactiveByDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerFiniteStateMachine::get_gamePoseGenerator
// Il2CppName: get_gamePoseGenerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MockPlayerGamePoseGenerator* (GlobalNamespace::MockPlayerFiniteStateMachine::*)()>(&GlobalNamespace::MockPlayerFiniteStateMachine::get_gamePoseGenerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerFiniteStateMachine*), "get_gamePoseGenerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerFiniteStateMachine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerFiniteStateMachine::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerFiniteStateMachine::*)()>(&GlobalNamespace::MockPlayerFiniteStateMachine::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerFiniteStateMachine*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerFiniteStateMachine::SetIsReady
// Il2CppName: SetIsReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerFiniteStateMachine::*)(bool)>(&GlobalNamespace::MockPlayerFiniteStateMachine::SetIsReady)> {
  static const MethodInfo* get() {
    static auto* isReady = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerFiniteStateMachine*), "SetIsReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isReady});
  }
};
