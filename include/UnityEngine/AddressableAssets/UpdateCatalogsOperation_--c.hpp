// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.UpdateCatalogsOperation
#include "UnityEngine/AddressableAssets/UpdateCatalogsOperation.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: IResourceProvider
  class IResourceProvider;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::UpdateCatalogsOperation::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::UpdateCatalogsOperation::$$c*, "UnityEngine.AddressableAssets", "UpdateCatalogsOperation/<>c");
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.UpdateCatalogsOperation/UnityEngine.AddressableAssets.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UpdateCatalogsOperation::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.AddressableAssets.UpdateCatalogsOperation/UnityEngine.AddressableAssets.<>c <>9
    static ::UnityEngine::AddressableAssets::UpdateCatalogsOperation::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.AddressableAssets.UpdateCatalogsOperation/UnityEngine.AddressableAssets.<>c <>9
    static void _set_$$9(::UnityEngine::AddressableAssets::UpdateCatalogsOperation::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider,System.Boolean> <>9__4_0
    static ::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* _get_$$9__4_0();
    // Set static field: static public System.Func`2<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider,System.Boolean> <>9__4_0
    static void _set_$$9__4_0(::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x2ABF8A4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2ABF908
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UpdateCatalogsOperation::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::UpdateCatalogsOperation::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UpdateCatalogsOperation::$$c*, creationType>()));
    }
    // System.Boolean <Start>b__4_0(UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider rp)
    // Offset: 0x2ABF910
    bool $Start$b__4_0(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* rp);
  }; // UnityEngine.AddressableAssets.UpdateCatalogsOperation/UnityEngine.AddressableAssets.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::UpdateCatalogsOperation::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::AddressableAssets::UpdateCatalogsOperation::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::UpdateCatalogsOperation::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::UpdateCatalogsOperation::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::UpdateCatalogsOperation::$$c::$Start$b__4_0
// Il2CppName: <Start>b__4_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::UpdateCatalogsOperation::$$c::*)(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*)>(&UnityEngine::AddressableAssets::UpdateCatalogsOperation::$$c::$Start$b__4_0)> {
  static const MethodInfo* get() {
    static auto* rp = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceProviders", "IResourceProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::UpdateCatalogsOperation::$$c*), "<Start>b__4_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rp});
  }
};
