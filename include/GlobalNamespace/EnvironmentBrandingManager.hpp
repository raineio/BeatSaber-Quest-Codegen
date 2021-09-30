// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentBrandingManager
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvironmentBrandingManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::EnvironmentBrandingManager::InitData
    class InitData;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private UnityEngine.GameObject[] _brandingObjects
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<UnityEngine::GameObject*> brandingObjects;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::GameObject*>) == 0x8);
    // private UnityEngine.GameObject[] _replacementBrandingObjects
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<UnityEngine::GameObject*> replacementBrandingObjects;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::GameObject*>) == 0x8);
    // [InjectOptionalAttribute] Offset: 0xF041DC
    // private readonly EnvironmentBrandingManager/InitData _initData
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::EnvironmentBrandingManager::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentBrandingManager::InitData*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.GameObject[] _brandingObjects
    ::ArrayW<UnityEngine::GameObject*>& dyn__brandingObjects();
    // Get instance field reference: private UnityEngine.GameObject[] _replacementBrandingObjects
    ::ArrayW<UnityEngine::GameObject*>& dyn__replacementBrandingObjects();
    // Get instance field reference: private readonly EnvironmentBrandingManager/InitData _initData
    GlobalNamespace::EnvironmentBrandingManager::InitData*& dyn__initData();
    // protected System.Void Start()
    // Offset: 0x11AFE7C
    void Start();
    // public System.Void .ctor()
    // Offset: 0x11AFF54
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentBrandingManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnvironmentBrandingManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentBrandingManager*, creationType>()));
    }
  }; // EnvironmentBrandingManager
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentBrandingManager), 40 + sizeof(GlobalNamespace::EnvironmentBrandingManager::InitData*)> __GlobalNamespace_EnvironmentBrandingManagerSizeCheck;
  static_assert(sizeof(EnvironmentBrandingManager) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentBrandingManager*, "", "EnvironmentBrandingManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentBrandingManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentBrandingManager::*)()>(&GlobalNamespace::EnvironmentBrandingManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentBrandingManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentBrandingManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
