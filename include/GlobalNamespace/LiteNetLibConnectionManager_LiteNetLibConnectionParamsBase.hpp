// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLibConnectionManager
#include "GlobalNamespace/LiteNetLibConnectionManager.hpp"
// Including type: IConnectionInitParams`1
#include "GlobalNamespace/IConnectionInitParams_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectionRequestHandler
  class IConnectionRequestHandler;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase*, "", "LiteNetLibConnectionManager/LiteNetLibConnectionParamsBase");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLibConnectionManager/LiteNetLibConnectionParamsBase
  // [TokenAttribute] Offset: FFFFFFFF
  class LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase : public ::Il2CppObject/*, public ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager*>*/ {
    public:
    public:
    // public IConnectionRequestHandler connectionRequestHandler
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::IConnectionRequestHandler* connectionRequestHandler;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IConnectionRequestHandler*) == 0x8);
    // public System.Int32 port
    // Size: 0x4
    // Offset: 0x18
    int port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean filterUnencryptedTraffic
    // Size: 0x1
    // Offset: 0x1C
    bool filterUnencryptedTraffic;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean enableUnconnectedMessages
    // Size: 0x1
    // Offset: 0x1D
    bool enableUnconnectedMessages;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean enableBackgroundSentry
    // Size: 0x1
    // Offset: 0x1E
    bool enableBackgroundSentry;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean enableStatistics
    // Size: 0x1
    // Offset: 0x1F
    bool enableStatistics;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Int32 disconnectTimeoutMs
    // Size: 0x4
    // Offset: 0x20
    int disconnectTimeoutMs;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager*>
    operator ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager*>() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager*>*>(this);
    }
    // Get instance field reference: public IConnectionRequestHandler connectionRequestHandler
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IConnectionRequestHandler*& dyn_connectionRequestHandler();
    // Get instance field reference: public System.Int32 port
    [[deprecated("Use field access instead!")]] int& dyn_port();
    // Get instance field reference: public System.Boolean filterUnencryptedTraffic
    [[deprecated("Use field access instead!")]] bool& dyn_filterUnencryptedTraffic();
    // Get instance field reference: public System.Boolean enableUnconnectedMessages
    [[deprecated("Use field access instead!")]] bool& dyn_enableUnconnectedMessages();
    // Get instance field reference: public System.Boolean enableBackgroundSentry
    [[deprecated("Use field access instead!")]] bool& dyn_enableBackgroundSentry();
    // Get instance field reference: public System.Boolean enableStatistics
    [[deprecated("Use field access instead!")]] bool& dyn_enableStatistics();
    // Get instance field reference: public System.Int32 disconnectTimeoutMs
    [[deprecated("Use field access instead!")]] int& dyn_disconnectTimeoutMs();
    // protected System.Void .ctor()
    // Offset: 0x1682684
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase*, creationType>()));
    }
  }; // LiteNetLibConnectionManager/LiteNetLibConnectionParamsBase
  #pragma pack(pop)
  static check_size<sizeof(LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase), 32 + sizeof(int)> __GlobalNamespace_LiteNetLibConnectionManager_LiteNetLibConnectionParamsBaseSizeCheck;
  static_assert(sizeof(LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
