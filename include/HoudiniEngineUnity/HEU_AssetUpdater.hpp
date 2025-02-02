// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_HoudiniAsset
  class HEU_HoudiniAsset;
  // Forward declaring type: HEU_BaseSync
  class HEU_BaseSync;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_AssetUpdater
  class HEU_AssetUpdater;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetUpdater);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetUpdater*, "HoudiniEngineUnity", "HEU_AssetUpdater");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_AssetUpdater
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_AssetUpdater : public ::Il2CppObject {
    public:
    // static private System.Void .cctor()
    // Offset: 0x17384F4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1738570
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_AssetUpdater* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_AssetUpdater::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_AssetUpdater*, creationType>()));
    }
    // static private System.Void OnBeforeAssemblyReload()
    // Offset: 0x17384F8
    static void OnBeforeAssemblyReload();
    // static private System.Void Update()
    // Offset: 0x1738558
    static void Update();
    // static public System.Void AddAssetForUpdate(HoudiniEngineUnity.HEU_HoudiniAsset asset)
    // Offset: 0x173855C
    static void AddAssetForUpdate(::HoudiniEngineUnity::HEU_HoudiniAsset* asset);
    // static public System.Void RemoveAsset(HoudiniEngineUnity.HEU_HoudiniAsset asset)
    // Offset: 0x1738560
    static void RemoveAsset(::HoudiniEngineUnity::HEU_HoudiniAsset* asset);
    // static public System.Void AddNodeSyncForUpdate(HoudiniEngineUnity.HEU_BaseSync nodeSync)
    // Offset: 0x1738564
    static void AddNodeSyncForUpdate(::HoudiniEngineUnity::HEU_BaseSync* nodeSync);
    // static public System.Void RemoveNodeSync(HoudiniEngineUnity.HEU_BaseSync nodeSync)
    // Offset: 0x1738568
    static void RemoveNodeSync(::HoudiniEngineUnity::HEU_BaseSync* nodeSync);
    // static private System.Void OnPrefabInstanceUpdate(UnityEngine.GameObject instance)
    // Offset: 0x173856C
    static void OnPrefabInstanceUpdate(::UnityEngine::GameObject* instance);
  }; // HoudiniEngineUnity.HEU_AssetUpdater
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetUpdater::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_AssetUpdater::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetUpdater*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetUpdater::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetUpdater::OnBeforeAssemblyReload
// Il2CppName: OnBeforeAssemblyReload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_AssetUpdater::OnBeforeAssemblyReload)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetUpdater*), "OnBeforeAssemblyReload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetUpdater::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_AssetUpdater::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetUpdater*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetUpdater::AddAssetForUpdate
// Il2CppName: AddAssetForUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(&HoudiniEngineUnity::HEU_AssetUpdater::AddAssetForUpdate)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetUpdater*), "AddAssetForUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetUpdater::RemoveAsset
// Il2CppName: RemoveAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(&HoudiniEngineUnity::HEU_AssetUpdater::RemoveAsset)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetUpdater*), "RemoveAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetUpdater::AddNodeSyncForUpdate
// Il2CppName: AddNodeSyncForUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_BaseSync*)>(&HoudiniEngineUnity::HEU_AssetUpdater::AddNodeSyncForUpdate)> {
  static const MethodInfo* get() {
    static auto* nodeSync = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_BaseSync")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetUpdater*), "AddNodeSyncForUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeSync});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetUpdater::RemoveNodeSync
// Il2CppName: RemoveNodeSync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_BaseSync*)>(&HoudiniEngineUnity::HEU_AssetUpdater::RemoveNodeSync)> {
  static const MethodInfo* get() {
    static auto* nodeSync = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_BaseSync")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetUpdater*), "RemoveNodeSync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeSync});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetUpdater::OnPrefabInstanceUpdate
// Il2CppName: OnPrefabInstanceUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*)>(&HoudiniEngineUnity::HEU_AssetUpdater::OnPrefabInstanceUpdate)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetUpdater*), "OnPrefabInstanceUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
