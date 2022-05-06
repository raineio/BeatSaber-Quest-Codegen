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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayServerFiniteStateMachine
  class GameplayServerFiniteStateMachine;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GameState
  class GameState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameState);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameState*, "", "GameState");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: GameState
  // [TokenAttribute] Offset: FFFFFFFF
  class GameState : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // protected readonly GameplayServerFiniteStateMachine fsm
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::GameplayServerFiniteStateMachine* fsm;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayServerFiniteStateMachine*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating conversion operator: operator ::GlobalNamespace::GameplayServerFiniteStateMachine*
    constexpr operator ::GlobalNamespace::GameplayServerFiniteStateMachine*() const noexcept {
      return fsm;
    }
    // Get instance field reference: protected readonly GameplayServerFiniteStateMachine fsm
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayServerFiniteStateMachine*& dyn_fsm();
    // public System.Void .ctor(GameplayServerFiniteStateMachine fsm)
    // Offset: 0x167C068
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameState* New_ctor(::GlobalNamespace::GameplayServerFiniteStateMachine* fsm) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameState*, creationType>(fsm)));
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dispose();
    // public System.Void Init()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Init();
  }; // GameState
  #pragma pack(pop)
  static check_size<sizeof(GameState), 16 + sizeof(::GlobalNamespace::GameplayServerFiniteStateMachine*)> __GlobalNamespace_GameStateSizeCheck;
  static_assert(sizeof(GameState) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameState::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameState::*)()>(&GlobalNamespace::GameState::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameState*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameState::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameState::*)()>(&GlobalNamespace::GameState::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameState*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
