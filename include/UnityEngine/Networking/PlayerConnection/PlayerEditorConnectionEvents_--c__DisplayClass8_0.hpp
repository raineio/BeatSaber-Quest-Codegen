// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
#include "UnityEngine/Networking/PlayerConnection/PlayerEditorConnectionEvents.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Networking.PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Forward declaring type: <>c__DisplayClass8_0
  class $$c__DisplayClass8_0;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$$c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$$c__DisplayClass8_0*, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents/<>c__DisplayClass8_0");
// Type namespace: UnityEngine.Networking.PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/UnityEngine.Networking.PlayerConnection.<>c__DisplayClass8_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PlayerEditorConnectionEvents::$$c__DisplayClass8_0 : public ::Il2CppObject {
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
    // public System.Guid messageId
    // Size: 0x10
    // Offset: 0x10
    System::Guid messageId;
    // Field size check
    static_assert(sizeof(System::Guid) == 0x10);
    public:
    // Creating conversion operator: operator System::Guid
    constexpr operator System::Guid() const noexcept {
      return messageId;
    }
    // Get instance field reference: public System.Guid messageId
    System::Guid& dyn_messageId();
    // System.Boolean <UnregisterManagedCallback>b__0(UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/UnityEngine.Networking.PlayerConnection.MessageTypeSubscribers x)
    // Offset: 0x1DA86B0
    bool $UnregisterManagedCallback$b__0(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers* x);
    // public System.Void .ctor()
    // Offset: 0x1DA84F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerEditorConnectionEvents::$$c__DisplayClass8_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$$c__DisplayClass8_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerEditorConnectionEvents::$$c__DisplayClass8_0*, creationType>()));
    }
  }; // UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/UnityEngine.Networking.PlayerConnection.<>c__DisplayClass8_0
  #pragma pack(pop)
  static check_size<sizeof(PlayerEditorConnectionEvents::$$c__DisplayClass8_0), 16 + sizeof(System::Guid)> __UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_$$c__DisplayClass8_0SizeCheck;
  static_assert(sizeof(PlayerEditorConnectionEvents::$$c__DisplayClass8_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$$c__DisplayClass8_0::$UnregisterManagedCallback$b__0
// Il2CppName: <UnregisterManagedCallback>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$$c__DisplayClass8_0::*)(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers*)>(&UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$$c__DisplayClass8_0::$UnregisterManagedCallback$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents/MessageTypeSubscribers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$$c__DisplayClass8_0*), "<UnregisterManagedCallback>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$$c__DisplayClass8_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
