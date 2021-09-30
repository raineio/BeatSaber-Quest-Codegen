// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
// Including type: HoudiniEngineUnity.HAPI_ObjectInfo
#include "HoudiniEngineUnity/HAPI_ObjectInfo.hpp"
// Including type: HoudiniEngineUnity.HAPI_Transform
#include "HoudiniEngineUnity/HAPI_Transform.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_HoudiniAsset
  class HEU_HoudiniAsset;
  // Forward declaring type: HEU_GeoNode
  class HEU_GeoNode;
  // Forward declaring type: HEU_SessionBase
  class HEU_SessionBase;
  // Forward declaring type: HAPI_GeoInfo
  struct HAPI_GeoInfo;
  // Forward declaring type: HEU_MaterialData
  class HEU_MaterialData;
  // Forward declaring type: HEU_PartData
  class HEU_PartData;
  // Forward declaring type: HEU_GeneratedOutput
  class HEU_GeneratedOutput;
  // Forward declaring type: HEU_Curve
  class HEU_Curve;
  // Forward declaring type: HEU_ObjectInstanceInfo
  class HEU_ObjectInstanceInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x74
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_ObjectNode
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_ObjectNode : public UnityEngine::ScriptableObject/*, public HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_ObjectNode*>*/ {
    public:
    // private System.String _objName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* objName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private HoudiniEngineUnity.HEU_HoudiniAsset _parentAsset
    // Size: 0x8
    // Offset: 0x20
    HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset;
    // Field size check
    static_assert(sizeof(HoudiniEngineUnity::HEU_HoudiniAsset*) == 0x8);
    // private HoudiniEngineUnity.HAPI_ObjectInfo _objectInfo
    // Size: 0x1C
    // Offset: 0x28
    HoudiniEngineUnity::HAPI_ObjectInfo objectInfo;
    // Field size check
    static_assert(sizeof(HoudiniEngineUnity::HAPI_ObjectInfo) == 0x1C);
    // Padding between fields: objectInfo and: geoNodes
    char __padding2[0x4] = {};
    // private System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_GeoNode> _geoNodes
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoNode*>* geoNodes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoNode*>*) == 0x8);
    // public HoudiniEngineUnity.HAPI_Transform _objectTransform
    // Size: 0x24
    // Offset: 0x50
    HoudiniEngineUnity::HAPI_Transform objectTransform;
    // Field size check
    static_assert(sizeof(HoudiniEngineUnity::HAPI_Transform) == 0x24);
    // Creating interface conversion operator: operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_ObjectNode*>
    operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_ObjectNode*>() noexcept {
      return *reinterpret_cast<HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_ObjectNode*>*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _objName
    ::Il2CppString*& dyn__objName();
    // Get instance field reference: private HoudiniEngineUnity.HEU_HoudiniAsset _parentAsset
    HoudiniEngineUnity::HEU_HoudiniAsset*& dyn__parentAsset();
    // Get instance field reference: private HoudiniEngineUnity.HAPI_ObjectInfo _objectInfo
    HoudiniEngineUnity::HAPI_ObjectInfo& dyn__objectInfo();
    // Get instance field reference: private System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_GeoNode> _geoNodes
    System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoNode*>*& dyn__geoNodes();
    // Get instance field reference: public HoudiniEngineUnity.HAPI_Transform _objectTransform
    HoudiniEngineUnity::HAPI_Transform& dyn__objectTransform();
    // public System.Int32 get_ObjectID()
    // Offset: 0x152F90C
    int get_ObjectID();
    // public System.String get_ObjectName()
    // Offset: 0x152F914
    ::Il2CppString* get_ObjectName();
    // public HoudiniEngineUnity.HEU_HoudiniAsset get_ParentAsset()
    // Offset: 0x152F91C
    HoudiniEngineUnity::HEU_HoudiniAsset* get_ParentAsset();
    // public System.Boolean IsInstanced()
    // Offset: 0x152F924
    bool IsInstanced();
    // public System.Boolean IsVisible()
    // Offset: 0x152F92C
    bool IsVisible();
    // public System.Void Reset()
    // Offset: 0x152F95C
    void Reset();
    // private System.Void SyncWithObjectInfo(HoudiniEngineUnity.HEU_SessionBase session)
    // Offset: 0x152FA1C
    void SyncWithObjectInfo(HoudiniEngineUnity::HEU_SessionBase* session);
    // public System.Void Initialize(HoudiniEngineUnity.HEU_SessionBase session, HoudiniEngineUnity.HAPI_ObjectInfo objectInfo, HoudiniEngineUnity.HAPI_Transform objectTranform, HoudiniEngineUnity.HEU_HoudiniAsset parentAsset)
    // Offset: 0x152FB20
    void Initialize(HoudiniEngineUnity::HEU_SessionBase* session, HoudiniEngineUnity::HAPI_ObjectInfo objectInfo, HoudiniEngineUnity::HAPI_Transform objectTranform, HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset);
    // public System.Void DestroyAllData(System.Boolean bIsRebuild)
    // Offset: 0x152FEDC
    void DestroyAllData(bool bIsRebuild);
    // private HoudiniEngineUnity.HEU_GeoNode CreateGeoNode(HoudiniEngineUnity.HEU_SessionBase session, HoudiniEngineUnity.HAPI_GeoInfo geoInfo)
    // Offset: 0x152FE20
    HoudiniEngineUnity::HEU_GeoNode* CreateGeoNode(HoudiniEngineUnity::HEU_SessionBase* session, HoudiniEngineUnity::HAPI_GeoInfo geoInfo);
    // public System.Void GetDebugInfo(System.Text.StringBuilder sb)
    // Offset: 0x152FFE0
    void GetDebugInfo(System::Text::StringBuilder* sb);
    // public System.Void SetObjectInfo(HoudiniEngineUnity.HAPI_ObjectInfo newObjectInfo)
    // Offset: 0x1530230
    void SetObjectInfo(HoudiniEngineUnity::HAPI_ObjectInfo newObjectInfo);
    // public System.Void UpdateObject(HoudiniEngineUnity.HEU_SessionBase session, System.Boolean bForceUpdate)
    // Offset: 0x153024C
    void UpdateObject(HoudiniEngineUnity::HEU_SessionBase* session, bool bForceUpdate);
    // public System.Void GenerateGeometry(HoudiniEngineUnity.HEU_SessionBase session, System.Boolean bRebuild)
    // Offset: 0x15309EC
    void GenerateGeometry(HoudiniEngineUnity::HEU_SessionBase* session, bool bRebuild);
    // public System.Void GeneratePartInstances(HoudiniEngineUnity.HEU_SessionBase session)
    // Offset: 0x15310D0
    void GeneratePartInstances(HoudiniEngineUnity::HEU_SessionBase* session);
    // public System.Void GenerateAttributesStore(HoudiniEngineUnity.HEU_SessionBase session)
    // Offset: 0x15311D8
    void GenerateAttributesStore(HoudiniEngineUnity::HEU_SessionBase* session);
    // public System.Void ApplyObjectTransformToGeoNodes()
    // Offset: 0x1530FD0
    void ApplyObjectTransformToGeoNodes();
    // public System.Boolean IsUsingMaterial(HoudiniEngineUnity.HEU_MaterialData materialData)
    // Offset: 0x15312E0
    bool IsUsingMaterial(HoudiniEngineUnity::HEU_MaterialData* materialData);
    // public System.Void GetClonableParts(System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_PartData> clonableParts)
    // Offset: 0x15313F8
    void GetClonableParts(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_PartData*>* clonableParts);
    // public System.Void GetOutputGameObjects(System.Collections.Generic.List`1<UnityEngine.GameObject> outputObjects)
    // Offset: 0x1531518
    void GetOutputGameObjects(System::Collections::Generic::List_1<UnityEngine::GameObject*>* outputObjects);
    // public System.Void GetOutput(System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_GeneratedOutput> outputs)
    // Offset: 0x1531620
    void GetOutput(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeneratedOutput*>* outputs);
    // public HoudiniEngineUnity.HEU_PartData GetHDAPartWithGameObject(UnityEngine.GameObject outputGameObject)
    // Offset: 0x1531728
    HoudiniEngineUnity::HEU_PartData* GetHDAPartWithGameObject(UnityEngine::GameObject* outputGameObject);
    // public HoudiniEngineUnity.HEU_GeoNode GetGeoNode(System.String geoName)
    // Offset: 0x1531880
    HoudiniEngineUnity::HEU_GeoNode* GetGeoNode(::Il2CppString* geoName);
    // public System.Void GetCurves(System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_Curve> curves, System.Boolean bEditableOnly)
    // Offset: 0x15319AC
    void GetCurves(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Curve*>* curves, bool bEditableOnly);
    // public System.Void GetOutputGeoNodes(System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_GeoNode> outGeoNodes)
    // Offset: 0x1531AC0
    void GetOutputGeoNodes(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoNode*>* outGeoNodes);
    // public System.Void GenerateObjectInstances(HoudiniEngineUnity.HEU_SessionBase session)
    // Offset: 0x1531BF4
    void GenerateObjectInstances(HoudiniEngineUnity::HEU_SessionBase* session);
    // public System.Void ClearObjectInstances(HoudiniEngineUnity.HEU_SessionBase session)
    // Offset: 0x1532260
    void ClearObjectInstances(HoudiniEngineUnity::HEU_SessionBase* session);
    // public System.Void PopulateObjectInstanceInfos(System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_ObjectInstanceInfo> objInstanceInfos)
    // Offset: 0x153242C
    void PopulateObjectInstanceInfos(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ObjectInstanceInfo*>* objInstanceInfos);
    // public System.Void ProcessUnityScriptAttributes(HoudiniEngineUnity.HEU_SessionBase session)
    // Offset: 0x1532584
    void ProcessUnityScriptAttributes(HoudiniEngineUnity::HEU_SessionBase* session);
    // public System.Void HideAllGeometry()
    // Offset: 0x153268C
    void HideAllGeometry();
    // public System.Void CalculateVisibility()
    // Offset: 0x1532784
    void CalculateVisibility();
    // public System.Void CalculateColliderState()
    // Offset: 0x1532880
    void CalculateColliderState();
    // public System.Void DisableAllColliders()
    // Offset: 0x1532978
    void DisableAllColliders();
    // public System.Boolean IsInstancer()
    // Offset: 0x1532148
    bool IsInstancer();
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.HEU_ObjectNode other)
    // Offset: 0x1532AE8
    bool IsEquivalentTo(HoudiniEngineUnity::HEU_ObjectNode* other);
    // public System.Void .ctor()
    // Offset: 0x152F934
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_ObjectNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_ObjectNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_ObjectNode*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x1532A70
    // Implemented from: UnityEngine.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // HoudiniEngineUnity.HEU_ObjectNode
  #pragma pack(pop)
  static check_size<sizeof(HEU_ObjectNode), 80 + sizeof(HoudiniEngineUnity::HAPI_Transform)> __HoudiniEngineUnity_HEU_ObjectNodeSizeCheck;
  static_assert(sizeof(HEU_ObjectNode) == 0x74);
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_ObjectNode*, "HoudiniEngineUnity", "HEU_ObjectNode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::get_ObjectID
// Il2CppName: get_ObjectID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HoudiniEngineUnity::HEU_ObjectNode::*)()>(&HoudiniEngineUnity::HEU_ObjectNode::get_ObjectID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "get_ObjectID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::get_ObjectName
// Il2CppName: get_ObjectName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (HoudiniEngineUnity::HEU_ObjectNode::*)()>(&HoudiniEngineUnity::HEU_ObjectNode::get_ObjectName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "get_ObjectName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::get_ParentAsset
// Il2CppName: get_ParentAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_HoudiniAsset* (HoudiniEngineUnity::HEU_ObjectNode::*)()>(&HoudiniEngineUnity::HEU_ObjectNode::get_ParentAsset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "get_ParentAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::IsInstanced
// Il2CppName: IsInstanced
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_ObjectNode::*)()>(&HoudiniEngineUnity::HEU_ObjectNode::IsInstanced)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "IsInstanced", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::IsVisible
// Il2CppName: IsVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_ObjectNode::*)()>(&HoudiniEngineUnity::HEU_ObjectNode::IsVisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "IsVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)()>(&HoudiniEngineUnity::HEU_ObjectNode::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::SyncWithObjectInfo
// Il2CppName: SyncWithObjectInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)(HoudiniEngineUnity::HEU_SessionBase*)>(&HoudiniEngineUnity::HEU_ObjectNode::SyncWithObjectInfo)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "SyncWithObjectInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)(HoudiniEngineUnity::HEU_SessionBase*, HoudiniEngineUnity::HAPI_ObjectInfo, HoudiniEngineUnity::HAPI_Transform, HoudiniEngineUnity::HEU_HoudiniAsset*)>(&HoudiniEngineUnity::HEU_ObjectNode::Initialize)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* objectInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_ObjectInfo")->byval_arg;
    static auto* objectTranform = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_Transform")->byval_arg;
    static auto* parentAsset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, objectInfo, objectTranform, parentAsset});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::DestroyAllData
// Il2CppName: DestroyAllData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)(bool)>(&HoudiniEngineUnity::HEU_ObjectNode::DestroyAllData)> {
  static const MethodInfo* get() {
    static auto* bIsRebuild = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "DestroyAllData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bIsRebuild});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::CreateGeoNode
// Il2CppName: CreateGeoNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_GeoNode* (HoudiniEngineUnity::HEU_ObjectNode::*)(HoudiniEngineUnity::HEU_SessionBase*, HoudiniEngineUnity::HAPI_GeoInfo)>(&HoudiniEngineUnity::HEU_ObjectNode::CreateGeoNode)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_GeoInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "CreateGeoNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoInfo});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::GetDebugInfo
// Il2CppName: GetDebugInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)(System::Text::StringBuilder*)>(&HoudiniEngineUnity::HEU_ObjectNode::GetDebugInfo)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "GetDebugInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::SetObjectInfo
// Il2CppName: SetObjectInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)(HoudiniEngineUnity::HAPI_ObjectInfo)>(&HoudiniEngineUnity::HEU_ObjectNode::SetObjectInfo)> {
  static const MethodInfo* get() {
    static auto* newObjectInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_ObjectInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "SetObjectInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newObjectInfo});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::UpdateObject
// Il2CppName: UpdateObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)(HoudiniEngineUnity::HEU_SessionBase*, bool)>(&HoudiniEngineUnity::HEU_ObjectNode::UpdateObject)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* bForceUpdate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "UpdateObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, bForceUpdate});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::GenerateGeometry
// Il2CppName: GenerateGeometry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)(HoudiniEngineUnity::HEU_SessionBase*, bool)>(&HoudiniEngineUnity::HEU_ObjectNode::GenerateGeometry)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* bRebuild = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "GenerateGeometry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, bRebuild});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::GeneratePartInstances
// Il2CppName: GeneratePartInstances
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)(HoudiniEngineUnity::HEU_SessionBase*)>(&HoudiniEngineUnity::HEU_ObjectNode::GeneratePartInstances)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "GeneratePartInstances", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::GenerateAttributesStore
// Il2CppName: GenerateAttributesStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)(HoudiniEngineUnity::HEU_SessionBase*)>(&HoudiniEngineUnity::HEU_ObjectNode::GenerateAttributesStore)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "GenerateAttributesStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::ApplyObjectTransformToGeoNodes
// Il2CppName: ApplyObjectTransformToGeoNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)()>(&HoudiniEngineUnity::HEU_ObjectNode::ApplyObjectTransformToGeoNodes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "ApplyObjectTransformToGeoNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::IsUsingMaterial
// Il2CppName: IsUsingMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_ObjectNode::*)(HoudiniEngineUnity::HEU_MaterialData*)>(&HoudiniEngineUnity::HEU_ObjectNode::IsUsingMaterial)> {
  static const MethodInfo* get() {
    static auto* materialData = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_MaterialData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "IsUsingMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{materialData});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::GetClonableParts
// Il2CppName: GetClonableParts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_PartData*>*)>(&HoudiniEngineUnity::HEU_ObjectNode::GetClonableParts)> {
  static const MethodInfo* get() {
    static auto* clonableParts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_PartData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "GetClonableParts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clonableParts});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::GetOutputGameObjects
// Il2CppName: GetOutputGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)(System::Collections::Generic::List_1<UnityEngine::GameObject*>*)>(&HoudiniEngineUnity::HEU_ObjectNode::GetOutputGameObjects)> {
  static const MethodInfo* get() {
    static auto* outputObjects = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "GetOutputGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outputObjects});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::GetOutput
// Il2CppName: GetOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeneratedOutput*>*)>(&HoudiniEngineUnity::HEU_ObjectNode::GetOutput)> {
  static const MethodInfo* get() {
    static auto* outputs = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_GeneratedOutput")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "GetOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outputs});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::GetHDAPartWithGameObject
// Il2CppName: GetHDAPartWithGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_PartData* (HoudiniEngineUnity::HEU_ObjectNode::*)(UnityEngine::GameObject*)>(&HoudiniEngineUnity::HEU_ObjectNode::GetHDAPartWithGameObject)> {
  static const MethodInfo* get() {
    static auto* outputGameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "GetHDAPartWithGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outputGameObject});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::GetGeoNode
// Il2CppName: GetGeoNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_GeoNode* (HoudiniEngineUnity::HEU_ObjectNode::*)(::Il2CppString*)>(&HoudiniEngineUnity::HEU_ObjectNode::GetGeoNode)> {
  static const MethodInfo* get() {
    static auto* geoName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "GetGeoNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{geoName});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::GetCurves
// Il2CppName: GetCurves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Curve*>*, bool)>(&HoudiniEngineUnity::HEU_ObjectNode::GetCurves)> {
  static const MethodInfo* get() {
    static auto* curves = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_Curve")})->byval_arg;
    static auto* bEditableOnly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "GetCurves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curves, bEditableOnly});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::GetOutputGeoNodes
// Il2CppName: GetOutputGeoNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoNode*>*)>(&HoudiniEngineUnity::HEU_ObjectNode::GetOutputGeoNodes)> {
  static const MethodInfo* get() {
    static auto* outGeoNodes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_GeoNode")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "GetOutputGeoNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outGeoNodes});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::GenerateObjectInstances
// Il2CppName: GenerateObjectInstances
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)(HoudiniEngineUnity::HEU_SessionBase*)>(&HoudiniEngineUnity::HEU_ObjectNode::GenerateObjectInstances)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "GenerateObjectInstances", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::ClearObjectInstances
// Il2CppName: ClearObjectInstances
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)(HoudiniEngineUnity::HEU_SessionBase*)>(&HoudiniEngineUnity::HEU_ObjectNode::ClearObjectInstances)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "ClearObjectInstances", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::PopulateObjectInstanceInfos
// Il2CppName: PopulateObjectInstanceInfos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*)>(&HoudiniEngineUnity::HEU_ObjectNode::PopulateObjectInstanceInfos)> {
  static const MethodInfo* get() {
    static auto* objInstanceInfos = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_ObjectInstanceInfo")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "PopulateObjectInstanceInfos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objInstanceInfos});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::ProcessUnityScriptAttributes
// Il2CppName: ProcessUnityScriptAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)(HoudiniEngineUnity::HEU_SessionBase*)>(&HoudiniEngineUnity::HEU_ObjectNode::ProcessUnityScriptAttributes)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "ProcessUnityScriptAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::HideAllGeometry
// Il2CppName: HideAllGeometry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)()>(&HoudiniEngineUnity::HEU_ObjectNode::HideAllGeometry)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "HideAllGeometry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::CalculateVisibility
// Il2CppName: CalculateVisibility
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)()>(&HoudiniEngineUnity::HEU_ObjectNode::CalculateVisibility)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "CalculateVisibility", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::CalculateColliderState
// Il2CppName: CalculateColliderState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)()>(&HoudiniEngineUnity::HEU_ObjectNode::CalculateColliderState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "CalculateColliderState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::DisableAllColliders
// Il2CppName: DisableAllColliders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ObjectNode::*)()>(&HoudiniEngineUnity::HEU_ObjectNode::DisableAllColliders)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "DisableAllColliders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::IsInstancer
// Il2CppName: IsInstancer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_ObjectNode::*)()>(&HoudiniEngineUnity::HEU_ObjectNode::IsInstancer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "IsInstancer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_ObjectNode::*)(HoudiniEngineUnity::HEU_ObjectNode*)>(&HoudiniEngineUnity::HEU_ObjectNode::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_ObjectNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectNode::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (HoudiniEngineUnity::HEU_ObjectNode::*)()>(&HoudiniEngineUnity::HEU_ObjectNode::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectNode*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};