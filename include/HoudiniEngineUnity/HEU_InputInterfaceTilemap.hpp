// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_InputInterface
#include "HoudiniEngineUnity/HEU_InputInterface.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_InputInterfaceTilemapSettings
  class HEU_InputInterfaceTilemapSettings;
  // Forward declaring type: HEU_SessionBase
  class HEU_SessionBase;
  // Forward declaring type: HEU_InputData
  class HEU_InputData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_InputInterfaceTilemap
  class HEU_InputInterfaceTilemap;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputInterfaceTilemap);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputInterfaceTilemap*, "HoudiniEngineUnity", "HEU_InputInterfaceTilemap");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_InputInterfaceTilemap
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_InputInterfaceTilemap : public ::HoudiniEngineUnity::HEU_InputInterface {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // Nested type: ::HoudiniEngineUnity::HEU_InputInterfaceTilemap::HEU_InputDataTilemap
    class HEU_InputDataTilemap;
    public:
    // private HoudiniEngineUnity.HEU_InputInterfaceTilemapSettings settings
    // Size: 0x8
    // Offset: 0x18
    ::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* settings;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*) == 0x8);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get instance field reference: private HoudiniEngineUnity.HEU_InputInterfaceTilemapSettings settings
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*& dyn_settings();
    // private System.Void .ctor()
    // Offset: 0x18C2E20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_InputInterfaceTilemap* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_InputInterfaceTilemap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_InputInterfaceTilemap*, creationType>()));
    }
    // public System.Void Initialize(HoudiniEngineUnity.HEU_InputInterfaceTilemapSettings settings)
    // Offset: 0x18C2E4C
    void Initialize(::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* settings);
    // private System.Boolean UploadData(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 inputNodeID, HoudiniEngineUnity.HEU_InputData inputData)
    // Offset: 0x18C3158
    bool UploadData(::HoudiniEngineUnity::HEU_SessionBase* session, int inputNodeID, ::HoudiniEngineUnity::HEU_InputData* inputData);
    // public HoudiniEngineUnity.HEU_InputInterfaceTilemap/HoudiniEngineUnity.HEU_InputDataTilemap GenerateTilemapDataFromGameObject(UnityEngine.GameObject inputObject)
    // Offset: 0x18C3080
    ::HoudiniEngineUnity::HEU_InputInterfaceTilemap::HEU_InputDataTilemap* GenerateTilemapDataFromGameObject(::UnityEngine::GameObject* inputObject);
    // public override System.Boolean CreateInputNodeWithDataUpload(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 connectNodeID, UnityEngine.GameObject inputObject, out System.Int32 inputNodeID)
    // Offset: 0x18C2ED4
    // Implemented from: HoudiniEngineUnity.HEU_InputInterface
    // Base method: System.Boolean HEU_InputInterface::CreateInputNodeWithDataUpload(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 connectNodeID, UnityEngine.GameObject inputObject, out System.Int32 inputNodeID)
    bool CreateInputNodeWithDataUpload(::HoudiniEngineUnity::HEU_SessionBase* session, int connectNodeID, ::UnityEngine::GameObject* inputObject, ByRef<int> inputNodeID);
    // public override System.Boolean IsThisInputObjectSupported(UnityEngine.GameObject inputObject)
    // Offset: 0x18C4744
    // Implemented from: HoudiniEngineUnity.HEU_InputInterface
    // Base method: System.Boolean HEU_InputInterface::IsThisInputObjectSupported(UnityEngine.GameObject inputObject)
    bool IsThisInputObjectSupported(::UnityEngine::GameObject* inputObject);
  }; // HoudiniEngineUnity.HEU_InputInterfaceTilemap
  #pragma pack(pop)
  static check_size<sizeof(HEU_InputInterfaceTilemap), 24 + sizeof(::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*)> __HoudiniEngineUnity_HEU_InputInterfaceTilemapSizeCheck;
  static_assert(sizeof(HEU_InputInterfaceTilemap) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceTilemap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceTilemap::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputInterfaceTilemap::*)(::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*)>(&HoudiniEngineUnity::HEU_InputInterfaceTilemap::Initialize)> {
  static const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_InputInterfaceTilemapSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceTilemap*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceTilemap::UploadData
// Il2CppName: UploadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputInterfaceTilemap::*)(::HoudiniEngineUnity::HEU_SessionBase*, int, ::HoudiniEngineUnity::HEU_InputData*)>(&HoudiniEngineUnity::HEU_InputInterfaceTilemap::UploadData)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* inputNodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputData = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_InputData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceTilemap*), "UploadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, inputNodeID, inputData});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceTilemap::GenerateTilemapDataFromGameObject
// Il2CppName: GenerateTilemapDataFromGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputInterfaceTilemap::HEU_InputDataTilemap* (HoudiniEngineUnity::HEU_InputInterfaceTilemap::*)(::UnityEngine::GameObject*)>(&HoudiniEngineUnity::HEU_InputInterfaceTilemap::GenerateTilemapDataFromGameObject)> {
  static const MethodInfo* get() {
    static auto* inputObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceTilemap*), "GenerateTilemapDataFromGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputObject});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceTilemap::CreateInputNodeWithDataUpload
// Il2CppName: CreateInputNodeWithDataUpload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputInterfaceTilemap::*)(::HoudiniEngineUnity::HEU_SessionBase*, int, ::UnityEngine::GameObject*, ByRef<int>)>(&HoudiniEngineUnity::HEU_InputInterfaceTilemap::CreateInputNodeWithDataUpload)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* connectNodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* inputNodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceTilemap*), "CreateInputNodeWithDataUpload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, connectNodeID, inputObject, inputNodeID});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceTilemap::IsThisInputObjectSupported
// Il2CppName: IsThisInputObjectSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputInterfaceTilemap::*)(::UnityEngine::GameObject*)>(&HoudiniEngineUnity::HEU_InputInterfaceTilemap::IsThisInputObjectSupported)> {
  static const MethodInfo* get() {
    static auto* inputObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceTilemap*), "IsThisInputObjectSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputObject});
  }
};
