// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IAnimatorIkHandler
  class IAnimatorIkHandler;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.AnimatorIkHandlerManager
  class AnimatorIkHandlerManager : public UnityEngine::MonoBehaviour {
    public:
    // private System.Collections.Generic.List`1<Zenject.IAnimatorIkHandler> _handlers
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<Zenject::IAnimatorIkHandler*>* handlers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::IAnimatorIkHandler*>*) == 0x8);
    // Creating value type constructor for type: AnimatorIkHandlerManager
    AnimatorIkHandlerManager(System::Collections::Generic::List_1<Zenject::IAnimatorIkHandler*>* handlers_ = {}) noexcept : handlers{handlers_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Construct(System.Collections.Generic.List`1<Zenject.IAnimatorIkHandler> handlers)
    // Offset: 0x1388154
    void Construct(System::Collections::Generic::List_1<Zenject::IAnimatorIkHandler*>* handlers);
    // public System.Void OnAnimatorIk()
    // Offset: 0x138815C
    void OnAnimatorIk();
    // public System.Void .ctor()
    // Offset: 0x13882BC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimatorIkHandlerManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::AnimatorIkHandlerManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimatorIkHandlerManager*, creationType>()));
    }
  }; // Zenject.AnimatorIkHandlerManager
  #pragma pack(pop)
  static check_size<sizeof(AnimatorIkHandlerManager), 24 + sizeof(System::Collections::Generic::List_1<Zenject::IAnimatorIkHandler*>*)> __Zenject_AnimatorIkHandlerManagerSizeCheck;
  static_assert(sizeof(AnimatorIkHandlerManager) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::AnimatorIkHandlerManager*, "Zenject", "AnimatorIkHandlerManager");
// Writing MetadataGetter for method: Zenject::AnimatorIkHandlerManager::Construct
// Il2CppName: Construct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::AnimatorIkHandlerManager::*)(System::Collections::Generic::List_1<Zenject::IAnimatorIkHandler*>*)>(&Zenject::AnimatorIkHandlerManager::Construct)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::AnimatorIkHandlerManager*), "Construct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<Zenject::IAnimatorIkHandler*>*>()});
  }
};
// Writing MetadataGetter for method: Zenject::AnimatorIkHandlerManager::OnAnimatorIk
// Il2CppName: OnAnimatorIk
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::AnimatorIkHandlerManager::*)()>(&Zenject::AnimatorIkHandlerManager::OnAnimatorIk)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::AnimatorIkHandlerManager*), "OnAnimatorIk", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::AnimatorIkHandlerManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
