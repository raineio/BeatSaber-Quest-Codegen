// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AddressableAssets.Initialization.CacheInitialization
#include "UnityEngine/AddressableAssets/Initialization/CacheInitialization.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.AddressableAssets.Initialization
namespace UnityEngine::AddressableAssets::Initialization {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.Initialization.CacheInitialization/<>c__DisplayClass1_0
  // [CompilerGeneratedAttribute] Offset: E017B0
  class CacheInitialization::$$c__DisplayClass1_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.AddressableAssets.Initialization.CacheInitialization <>4__this
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AddressableAssets::Initialization::CacheInitialization* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::Initialization::CacheInitialization*) == 0x8);
    // public System.String id
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* id;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String data
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* data;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass1_0
    $$c__DisplayClass1_0(UnityEngine::AddressableAssets::Initialization::CacheInitialization* $$4__this_ = {}, ::Il2CppString* id_ = {}, ::Il2CppString* data_ = {}) noexcept : $$4__this{$$4__this_}, id{id_}, data{data_} {}
    // System.Boolean <InitializeAsync>b__0()
    // Offset: 0x13D8580
    bool $InitializeAsync$b__0();
    // public System.Void .ctor()
    // Offset: 0x13D8490
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CacheInitialization::$$c__DisplayClass1_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::Initialization::CacheInitialization::$$c__DisplayClass1_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CacheInitialization::$$c__DisplayClass1_0*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.Initialization.CacheInitialization/<>c__DisplayClass1_0
  #pragma pack(pop)
  static check_size<sizeof(CacheInitialization::$$c__DisplayClass1_0), 32 + sizeof(::Il2CppString*)> __UnityEngine_AddressableAssets_Initialization_CacheInitialization_$$c__DisplayClass1_0SizeCheck;
  static_assert(sizeof(CacheInitialization::$$c__DisplayClass1_0) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Initialization::CacheInitialization::$$c__DisplayClass1_0*, "UnityEngine.AddressableAssets.Initialization", "CacheInitialization/<>c__DisplayClass1_0");