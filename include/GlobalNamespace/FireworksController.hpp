// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: FireworkItemController
#include "GlobalNamespace/FireworkItemController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DirectionalLight
  class DirectionalLight;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: FireworksController
  // [TokenAttribute] Offset: FFFFFFFF
  class FireworksController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::FireworksController::$SpawningCoroutine$d__8
    class $SpawningCoroutine$d__8;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private UnityEngine.Vector3 _spawnSize
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 spawnSize;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _minSpawnInterval
    // Size: 0x4
    // Offset: 0x24
    float minSpawnInterval;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxSpawnInterval
    // Size: 0x4
    // Offset: 0x28
    float maxSpawnInterval;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: maxSpawnInterval and: directionalLights
    char __padding2[0x4] = {};
    // [HeaderAttribute] Offset: 0xF05C38
    // [NullAllowed] Offset: 0xF05C38
    // private DirectionalLight[] _directionalLights
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<GlobalNamespace::DirectionalLight*> directionalLights;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::DirectionalLight*>) == 0x8);
    // private System.Single _lightsIntensity
    // Size: 0x4
    // Offset: 0x38
    float lightsIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _currentLightId
    // Size: 0x4
    // Offset: 0x3C
    int currentLightId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [InjectAttribute] Offset: 0xF05CA4
    // private readonly FireworkItemController/Pool _fireworkItemPool
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::FireworkItemController::Pool* fireworkItemPool;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FireworkItemController::Pool*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Vector3 _spawnSize
    UnityEngine::Vector3& dyn__spawnSize();
    // Get instance field reference: private System.Single _minSpawnInterval
    float& dyn__minSpawnInterval();
    // Get instance field reference: private System.Single _maxSpawnInterval
    float& dyn__maxSpawnInterval();
    // Get instance field reference: private DirectionalLight[] _directionalLights
    ::ArrayW<GlobalNamespace::DirectionalLight*>& dyn__directionalLights();
    // Get instance field reference: private System.Single _lightsIntensity
    float& dyn__lightsIntensity();
    // Get instance field reference: private System.Int32 _currentLightId
    int& dyn__currentLightId();
    // Get instance field reference: private readonly FireworkItemController/Pool _fireworkItemPool
    GlobalNamespace::FireworkItemController::Pool*& dyn__fireworkItemPool();
    // protected System.Void OnEnable()
    // Offset: 0x11B7B2C
    void OnEnable();
    // private System.Collections.IEnumerator SpawningCoroutine()
    // Offset: 0x11B7B58
    System::Collections::IEnumerator* SpawningCoroutine();
    // private System.Void HandleFireworkItemControllerDidFinish(FireworkItemController fireworkItemController)
    // Offset: 0x11B7BF4
    void HandleFireworkItemControllerDidFinish(GlobalNamespace::FireworkItemController* fireworkItemController);
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x11B7CA0
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0x11B7D24
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FireworksController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FireworksController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FireworksController*, creationType>()));
    }
  }; // FireworksController
  #pragma pack(pop)
  static check_size<sizeof(FireworksController), 64 + sizeof(GlobalNamespace::FireworkItemController::Pool*)> __GlobalNamespace_FireworksControllerSizeCheck;
  static_assert(sizeof(FireworksController) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FireworksController*, "", "FireworksController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FireworksController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworksController::*)()>(&GlobalNamespace::FireworksController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworksController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworksController::SpawningCoroutine
// Il2CppName: SpawningCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::FireworksController::*)()>(&GlobalNamespace::FireworksController::SpawningCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworksController*), "SpawningCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworksController::HandleFireworkItemControllerDidFinish
// Il2CppName: HandleFireworkItemControllerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworksController::*)(GlobalNamespace::FireworkItemController*)>(&GlobalNamespace::FireworksController::HandleFireworkItemControllerDidFinish)> {
  static const MethodInfo* get() {
    static auto* fireworkItemController = &::il2cpp_utils::GetClassFromName("", "FireworkItemController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworksController*), "HandleFireworkItemControllerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fireworkItemController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworksController::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworksController::*)()>(&GlobalNamespace::FireworksController::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworksController*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworksController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
