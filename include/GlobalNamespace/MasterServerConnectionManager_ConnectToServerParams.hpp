// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServerConnectionManager
#include "GlobalNamespace/MasterServerConnectionManager.hpp"
// Including type: MasterServerConnectionManager/MasterServerConnectionManagerParamsBase
#include "GlobalNamespace/MasterServerConnectionManager_MasterServerConnectionManagerParamsBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ConnectToServerParams
  class ConnectToServerParams;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MasterServerConnectionManager::ConnectToServerParams);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerConnectionManager::ConnectToServerParams*, "", "MasterServerConnectionManager/ConnectToServerParams");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: MasterServerConnectionManager/ConnectToServerParams
  // [TokenAttribute] Offset: FFFFFFFF
  class MasterServerConnectionManager::ConnectToServerParams : public GlobalNamespace::MasterServerConnectionManager::MasterServerConnectionManagerParamsBase {
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
    // public System.String secret
    // Size: 0x8
    // Offset: 0x60
    ::Il2CppString* secret;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String code
    // Size: 0x8
    // Offset: 0x68
    ::Il2CppString* code;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Get instance field reference: public System.String secret
    ::Il2CppString*& dyn_secret();
    // Get instance field reference: public System.String code
    ::Il2CppString*& dyn_code();
    // public System.Void .ctor()
    // Offset: 0x14C06C8
    // Implemented from: MasterServerConnectionManager/MasterServerConnectionManagerParamsBase
    // Base method: System.Void MasterServerConnectionManagerParamsBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MasterServerConnectionManager::ConnectToServerParams* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MasterServerConnectionManager::ConnectToServerParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MasterServerConnectionManager::ConnectToServerParams*, creationType>()));
    }
  }; // MasterServerConnectionManager/ConnectToServerParams
  #pragma pack(pop)
  static check_size<sizeof(MasterServerConnectionManager::ConnectToServerParams), 104 + sizeof(::Il2CppString*)> __GlobalNamespace_MasterServerConnectionManager_ConnectToServerParamsSizeCheck;
  static_assert(sizeof(MasterServerConnectionManager::ConnectToServerParams) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MasterServerConnectionManager::ConnectToServerParams::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
