// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PS4LocalPlayerAudioSyncHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class PS4LocalPlayerAudioSyncHelper : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: PS4LocalPlayerAudioSyncHelper
    PS4LocalPlayerAudioSyncHelper() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1147E38
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4LocalPlayerAudioSyncHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PS4LocalPlayerAudioSyncHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4LocalPlayerAudioSyncHelper*, creationType>()));
    }
  }; // PS4LocalPlayerAudioSyncHelper
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4LocalPlayerAudioSyncHelper*, "", "PS4LocalPlayerAudioSyncHelper");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PS4LocalPlayerAudioSyncHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!