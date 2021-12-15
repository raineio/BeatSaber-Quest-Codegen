// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: FlyingScoreEffect
#include "GlobalNamespace/FlyingScoreEffect.hpp"
// Including type: Zenject.MonoMemoryPool`1
#include "Zenject/MonoMemoryPool_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Pool
  class Pool;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::FlyingScoreEffect::Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingScoreEffect::Pool*, "", "FlyingScoreEffect/Pool");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: FlyingScoreEffect/Pool
  // [TokenAttribute] Offset: FFFFFFFF
  class FlyingScoreEffect::Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::FlyingScoreEffect*> {
    public:
    // protected System.Void OnDespawned(FlyingScoreEffect item)
    // Offset: 0x11E7C3C
    void OnDespawned(GlobalNamespace::FlyingScoreEffect* item);
    // public System.Void .ctor()
    // Offset: 0x11E7C54
    // Implemented from: Zenject.MonoMemoryPool`1
    // Base method: System.Void MonoMemoryPool_1::.ctor()
    // Base method: System.Void MemoryPool_1::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlyingScoreEffect::Pool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FlyingScoreEffect::Pool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlyingScoreEffect::Pool*, creationType>()));
    }
  }; // FlyingScoreEffect/Pool
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FlyingScoreEffect::Pool::OnDespawned
// Il2CppName: OnDespawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreEffect::Pool::*)(GlobalNamespace::FlyingScoreEffect*)>(&GlobalNamespace::FlyingScoreEffect::Pool::OnDespawned)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("", "FlyingScoreEffect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingScoreEffect::Pool*), "OnDespawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingScoreEffect::Pool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
