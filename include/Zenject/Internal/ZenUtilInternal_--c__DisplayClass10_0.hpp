// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Internal.ZenUtilInternal
#include "Zenject/Internal/ZenUtilInternal.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::Internal::ZenUtilInternal::$$c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ZenUtilInternal::$$c__DisplayClass10_0*, "Zenject.Internal", "ZenUtilInternal/<>c__DisplayClass10_0");
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ZenUtilInternal/Zenject.Internal.<>c__DisplayClass10_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ZenUtilInternal::$$c__DisplayClass10_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.SceneManagement.Scene scene
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::SceneManagement::Scene scene;
    // Field size check
    static_assert(sizeof(::UnityEngine::SceneManagement::Scene) == 0x4);
    public:
    // Creating conversion operator: operator ::UnityEngine::SceneManagement::Scene
    constexpr operator ::UnityEngine::SceneManagement::Scene() const noexcept {
      return scene;
    }
    // Get instance field reference: public UnityEngine.SceneManagement.Scene scene
    [[deprecated("Use field access instead!")]] ::UnityEngine::SceneManagement::Scene& dyn_scene();
    // public System.Void .ctor()
    // Offset: 0x1C12ADC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenUtilInternal::$$c__DisplayClass10_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::Internal::ZenUtilInternal::$$c__DisplayClass10_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenUtilInternal::$$c__DisplayClass10_0*, creationType>()));
    }
    // System.Boolean <GetRootGameObjects>b__1(UnityEngine.GameObject x)
    // Offset: 0x1C12DF4
    bool $GetRootGameObjects$b__1(::UnityEngine::GameObject* x);
  }; // Zenject.Internal.ZenUtilInternal/Zenject.Internal.<>c__DisplayClass10_0
  #pragma pack(pop)
  static check_size<sizeof(ZenUtilInternal::$$c__DisplayClass10_0), 16 + sizeof(::UnityEngine::SceneManagement::Scene)> __Zenject_Internal_ZenUtilInternal_$$c__DisplayClass10_0SizeCheck;
  static_assert(sizeof(ZenUtilInternal::$$c__DisplayClass10_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::$$c__DisplayClass10_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::$$c__DisplayClass10_0::$GetRootGameObjects$b__1
// Il2CppName: <GetRootGameObjects>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::Internal::ZenUtilInternal::$$c__DisplayClass10_0::*)(::UnityEngine::GameObject*)>(&Zenject::Internal::ZenUtilInternal::$$c__DisplayClass10_0::$GetRootGameObjects$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal::$$c__DisplayClass10_0*), "<GetRootGameObjects>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
