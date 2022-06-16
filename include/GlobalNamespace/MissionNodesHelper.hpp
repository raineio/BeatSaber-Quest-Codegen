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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MissionNodesHelper
  class MissionNodesHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionNodesHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNodesHelper*, "", "MissionNodesHelper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MissionNodesHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionNodesHelper : public ::Il2CppObject {
    public:
    // public System.Void .ctor()
    // Offset: 0x1308B88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionNodesHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionNodesHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionNodesHelper*, creationType>()));
    }
    // static public System.Collections.Generic.HashSet`1<MissionNode> GetAllNodesFromRoot(MissionNode root)
    // Offset: 0x13086E4
    static ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MissionNode*>* GetAllNodesFromRoot(::GlobalNamespace::MissionNode* root);
    // static private System.Void VisitAllTree(MissionNode node, System.Collections.Generic.HashSet`1<MissionNode> visitedNodes)
    // Offset: 0x1308758
    static void VisitAllTree(::GlobalNamespace::MissionNode* node, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MissionNode*>* visitedNodes);
    // static public System.Boolean CycleDetection(MissionNode node)
    // Offset: 0x1308834
    static bool CycleDetection(::GlobalNamespace::MissionNode* node);
    // static private System.Boolean CycleDetection(MissionNode node, System.Int32 layer, System.Collections.Generic.Dictionary`2<MissionNode,System.Int32> layers)
    // Offset: 0x13088A4
    static bool CycleDetection(::GlobalNamespace::MissionNode* node, int layer, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MissionNode*, int>* layers);
    // static public System.Boolean FinalNodeIsFinal(MissionNode finalNode, MissionNode rootNode)
    // Offset: 0x13089E4
    static bool FinalNodeIsFinal(::GlobalNamespace::MissionNode* finalNode, ::GlobalNamespace::MissionNode* rootNode);
    // static private System.Boolean FinalNodeIsFinal(MissionNode finalNode, MissionNode node, System.Collections.Generic.HashSet`1<MissionNode> visitedNodes)
    // Offset: 0x1308A60
    static bool FinalNodeIsFinal(::GlobalNamespace::MissionNode* finalNode, ::GlobalNamespace::MissionNode* node, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MissionNode*>* visitedNodes);
  }; // MissionNodesHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesHelper::GetAllNodesFromRoot
// Il2CppName: GetAllNodesFromRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::GlobalNamespace::MissionNode*>* (*)(::GlobalNamespace::MissionNode*)>(&GlobalNamespace::MissionNodesHelper::GetAllNodesFromRoot)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("", "MissionNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesHelper*), "GetAllNodesFromRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesHelper::VisitAllTree
// Il2CppName: VisitAllTree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::MissionNode*, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MissionNode*>*)>(&GlobalNamespace::MissionNodesHelper::VisitAllTree)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("", "MissionNode")->byval_arg;
    static auto* visitedNodes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionNode")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesHelper*), "VisitAllTree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, visitedNodes});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesHelper::CycleDetection
// Il2CppName: CycleDetection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::MissionNode*)>(&GlobalNamespace::MissionNodesHelper::CycleDetection)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("", "MissionNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesHelper*), "CycleDetection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesHelper::CycleDetection
// Il2CppName: CycleDetection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::MissionNode*, int, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MissionNode*, int>*)>(&GlobalNamespace::MissionNodesHelper::CycleDetection)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("", "MissionNode")->byval_arg;
    static auto* layer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* layers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionNode"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesHelper*), "CycleDetection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, layer, layers});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesHelper::FinalNodeIsFinal
// Il2CppName: FinalNodeIsFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::MissionNode*, ::GlobalNamespace::MissionNode*)>(&GlobalNamespace::MissionNodesHelper::FinalNodeIsFinal)> {
  static const MethodInfo* get() {
    static auto* finalNode = &::il2cpp_utils::GetClassFromName("", "MissionNode")->byval_arg;
    static auto* rootNode = &::il2cpp_utils::GetClassFromName("", "MissionNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesHelper*), "FinalNodeIsFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finalNode, rootNode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesHelper::FinalNodeIsFinal
// Il2CppName: FinalNodeIsFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::MissionNode*, ::GlobalNamespace::MissionNode*, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MissionNode*>*)>(&GlobalNamespace::MissionNodesHelper::FinalNodeIsFinal)> {
  static const MethodInfo* get() {
    static auto* finalNode = &::il2cpp_utils::GetClassFromName("", "MissionNode")->byval_arg;
    static auto* node = &::il2cpp_utils::GetClassFromName("", "MissionNode")->byval_arg;
    static auto* visitedNodes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionNode")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesHelper*), "FinalNodeIsFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finalNode, node, visitedNodes});
  }
};
