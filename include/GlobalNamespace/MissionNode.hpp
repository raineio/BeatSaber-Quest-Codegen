// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionDataSO
  class MissionDataSO;
  // Forward declaring type: MissionNodeVisualController
  class MissionNodeVisualController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MissionNode
  class MissionNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionNode);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNode*, "", "MissionNode");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MissionNode
  // [TokenAttribute] Offset: FFFFFFFF
  // [SelectionBaseAttribute] Offset: FFFFFFFF
  class MissionNode : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MissionDataSO _missionDataSO
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MissionDataSO* missionDataSO;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionDataSO*) == 0x8);
    // private System.String _letterPartName
    // Size: 0x8
    // Offset: 0x20
    ::StringW letterPartName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 _numberPartName
    // Size: 0x4
    // Offset: 0x28
    int numberPartName;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numberPartName and: rectTransform
    char __padding2[0x4] = {};
    // private UnityEngine.RectTransform _rectTransform
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::RectTransform* rectTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private MissionNodeVisualController _missionNodeVisualController
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::MissionNodeVisualController* missionNodeVisualController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionNodeVisualController*) == 0x8);
    // [SpaceAttribute] Offset: 0x1128C40
    // private MissionNode[] _childNodes
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::GlobalNamespace::MissionNode*> childNodes;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::MissionNode*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MissionDataSO _missionDataSO
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissionDataSO*& dyn__missionDataSO();
    // Get instance field reference: private System.String _letterPartName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__letterPartName();
    // Get instance field reference: private System.Int32 _numberPartName
    [[deprecated("Use field access instead!")]] int& dyn__numberPartName();
    // Get instance field reference: private UnityEngine.RectTransform _rectTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn__rectTransform();
    // Get instance field reference: private MissionNodeVisualController _missionNodeVisualController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissionNodeVisualController*& dyn__missionNodeVisualController();
    // Get instance field reference: private MissionNode[] _childNodes
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::MissionNode*>& dyn__childNodes();
    // public MissionDataSO get_missionData()
    // Offset: 0x1492940
    ::GlobalNamespace::MissionDataSO* get_missionData();
    // public MissionNode[] get_childNodes()
    // Offset: 0x1492948
    ::ArrayW<::GlobalNamespace::MissionNode*> get_childNodes();
    // public MissionNodeVisualController get_missionNodeVisualController()
    // Offset: 0x1492950
    ::GlobalNamespace::MissionNodeVisualController* get_missionNodeVisualController();
    // public System.String get_letterPartName()
    // Offset: 0x1492958
    ::StringW get_letterPartName();
    // public System.Int32 get_numberPartName()
    // Offset: 0x1492960
    int get_numberPartName();
    // public System.String get_missionId()
    // Offset: 0x1492968
    ::StringW get_missionId();
    // public System.String get_formattedMissionNodeName()
    // Offset: 0x1492998
    ::StringW get_formattedMissionNodeName();
    // public UnityEngine.Vector2 get_position()
    // Offset: 0x1491BFC
    ::UnityEngine::Vector2 get_position();
    // public System.Single get_radius()
    // Offset: 0x1492A1C
    float get_radius();
    // public System.Void .ctor()
    // Offset: 0x1492A60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionNode*, creationType>()));
    }
  }; // MissionNode
  #pragma pack(pop)
  static check_size<sizeof(MissionNode), 64 + sizeof(::ArrayW<::GlobalNamespace::MissionNode*>)> __GlobalNamespace_MissionNodeSizeCheck;
  static_assert(sizeof(MissionNode) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionNode::get_missionData
// Il2CppName: get_missionData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MissionDataSO* (GlobalNamespace::MissionNode::*)()>(&GlobalNamespace::MissionNode::get_missionData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNode*), "get_missionData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNode::get_childNodes
// Il2CppName: get_childNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::MissionNode*> (GlobalNamespace::MissionNode::*)()>(&GlobalNamespace::MissionNode::get_childNodes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNode*), "get_childNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNode::get_missionNodeVisualController
// Il2CppName: get_missionNodeVisualController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MissionNodeVisualController* (GlobalNamespace::MissionNode::*)()>(&GlobalNamespace::MissionNode::get_missionNodeVisualController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNode*), "get_missionNodeVisualController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNode::get_letterPartName
// Il2CppName: get_letterPartName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MissionNode::*)()>(&GlobalNamespace::MissionNode::get_letterPartName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNode*), "get_letterPartName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNode::get_numberPartName
// Il2CppName: get_numberPartName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MissionNode::*)()>(&GlobalNamespace::MissionNode::get_numberPartName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNode*), "get_numberPartName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNode::get_missionId
// Il2CppName: get_missionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MissionNode::*)()>(&GlobalNamespace::MissionNode::get_missionId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNode*), "get_missionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNode::get_formattedMissionNodeName
// Il2CppName: get_formattedMissionNodeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MissionNode::*)()>(&GlobalNamespace::MissionNode::get_formattedMissionNodeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNode*), "get_formattedMissionNodeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNode::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (GlobalNamespace::MissionNode::*)()>(&GlobalNamespace::MissionNode::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNode*), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNode::get_radius
// Il2CppName: get_radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MissionNode::*)()>(&GlobalNamespace::MissionNode::get_radius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNode*), "get_radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
