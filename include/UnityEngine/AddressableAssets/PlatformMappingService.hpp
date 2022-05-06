// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.RuntimePlatform
#include "UnityEngine/RuntimePlatform.hpp"
// Including type: UnityEngine.AddressableAssets.AddressablesPlatform
#include "UnityEngine/AddressableAssets/AddressablesPlatform.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Forward declaring type: PlatformMappingService
  class PlatformMappingService;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::PlatformMappingService);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::PlatformMappingService*, "UnityEngine.AddressableAssets", "PlatformMappingService");
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.PlatformMappingService
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformMappingService : public ::Il2CppObject {
    public:
    // Get static field: static readonly System.Collections.Generic.Dictionary`2<UnityEngine.RuntimePlatform,UnityEngine.AddressableAssets.AddressablesPlatform> s_RuntimeTargetMapping
    static ::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform, ::UnityEngine::AddressableAssets::AddressablesPlatform>* _get_s_RuntimeTargetMapping();
    // Set static field: static readonly System.Collections.Generic.Dictionary`2<UnityEngine.RuntimePlatform,UnityEngine.AddressableAssets.AddressablesPlatform> s_RuntimeTargetMapping
    static void _set_s_RuntimeTargetMapping(::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform, ::UnityEngine::AddressableAssets::AddressablesPlatform>* value);
    // public System.Void .ctor()
    // Offset: 0x18CC170
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformMappingService* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::PlatformMappingService::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformMappingService*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x18CC178
    static void _cctor();
    // static UnityEngine.AddressableAssets.AddressablesPlatform GetAddressablesPlatformInternal(UnityEngine.RuntimePlatform platform)
    // Offset: 0x18CBECC
    static ::UnityEngine::AddressableAssets::AddressablesPlatform GetAddressablesPlatformInternal(::UnityEngine::RuntimePlatform platform);
    // static System.String GetAddressablesPlatformPathInternal(UnityEngine.RuntimePlatform platform)
    // Offset: 0x18CBFA0
    static ::StringW GetAddressablesPlatformPathInternal(::UnityEngine::RuntimePlatform platform);
    // static public UnityEngine.AddressableAssets.AddressablesPlatform GetPlatform()
    // Offset: 0x18CC100
    static ::UnityEngine::AddressableAssets::AddressablesPlatform GetPlatform();
    // static public System.String GetPlatformPathSubFolder()
    // Offset: 0x18BEE68
    static ::StringW GetPlatformPathSubFolder();
  }; // UnityEngine.AddressableAssets.PlatformMappingService
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::PlatformMappingService::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::PlatformMappingService::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::AddressableAssets::PlatformMappingService::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::PlatformMappingService*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::PlatformMappingService::GetAddressablesPlatformInternal
// Il2CppName: GetAddressablesPlatformInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::AddressablesPlatform (*)(::UnityEngine::RuntimePlatform)>(&UnityEngine::AddressableAssets::PlatformMappingService::GetAddressablesPlatformInternal)> {
  static const MethodInfo* get() {
    static auto* platform = &::il2cpp_utils::GetClassFromName("UnityEngine", "RuntimePlatform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::PlatformMappingService*), "GetAddressablesPlatformInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{platform});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::PlatformMappingService::GetAddressablesPlatformPathInternal
// Il2CppName: GetAddressablesPlatformPathInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::RuntimePlatform)>(&UnityEngine::AddressableAssets::PlatformMappingService::GetAddressablesPlatformPathInternal)> {
  static const MethodInfo* get() {
    static auto* platform = &::il2cpp_utils::GetClassFromName("UnityEngine", "RuntimePlatform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::PlatformMappingService*), "GetAddressablesPlatformPathInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{platform});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::PlatformMappingService::GetPlatform
// Il2CppName: GetPlatform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::AddressablesPlatform (*)()>(&UnityEngine::AddressableAssets::PlatformMappingService::GetPlatform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::PlatformMappingService*), "GetPlatform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::PlatformMappingService::GetPlatformPathSubFolder
// Il2CppName: GetPlatformPathSubFolder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&UnityEngine::AddressableAssets::PlatformMappingService::GetPlatformPathSubFolder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::PlatformMappingService*), "GetPlatformPathSubFolder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
