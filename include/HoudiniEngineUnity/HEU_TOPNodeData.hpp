// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_WorkItemTally
  class HEU_WorkItemTally;
  // Forward declaring type: HEU_TOPWorkResult
  class HEU_TOPWorkResult;
  // Forward declaring type: TOPNodeTags
  class TOPNodeTags;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_TOPNodeData
  class HEU_TOPNodeData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_TOPNodeData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_TOPNodeData*, "HoudiniEngineUnity", "HEU_TOPNodeData");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_TOPNodeData
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_TOPNodeData : public ::Il2CppObject {
    public:
    // Nested type: ::HoudiniEngineUnity::HEU_TOPNodeData::PDGState
    struct PDGState;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState
    // [TokenAttribute] Offset: FFFFFFFF
    struct PDGState/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: PDGState
      constexpr PDGState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState NONE
      static constexpr const int NONE = 0;
      // Get static field: static public HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState NONE
      static ::HoudiniEngineUnity::HEU_TOPNodeData::PDGState _get_NONE();
      // Set static field: static public HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState NONE
      static void _set_NONE(::HoudiniEngineUnity::HEU_TOPNodeData::PDGState value);
      // static field const value: static public HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState DIRTIED
      static constexpr const int DIRTIED = 1;
      // Get static field: static public HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState DIRTIED
      static ::HoudiniEngineUnity::HEU_TOPNodeData::PDGState _get_DIRTIED();
      // Set static field: static public HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState DIRTIED
      static void _set_DIRTIED(::HoudiniEngineUnity::HEU_TOPNodeData::PDGState value);
      // static field const value: static public HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState DIRTYING
      static constexpr const int DIRTYING = 2;
      // Get static field: static public HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState DIRTYING
      static ::HoudiniEngineUnity::HEU_TOPNodeData::PDGState _get_DIRTYING();
      // Set static field: static public HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState DIRTYING
      static void _set_DIRTYING(::HoudiniEngineUnity::HEU_TOPNodeData::PDGState value);
      // static field const value: static public HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState COOKING
      static constexpr const int COOKING = 3;
      // Get static field: static public HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState COOKING
      static ::HoudiniEngineUnity::HEU_TOPNodeData::PDGState _get_COOKING();
      // Set static field: static public HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState COOKING
      static void _set_COOKING(::HoudiniEngineUnity::HEU_TOPNodeData::PDGState value);
      // static field const value: static public HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState COOK_COMPLETE
      static constexpr const int COOK_COMPLETE = 4;
      // Get static field: static public HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState COOK_COMPLETE
      static ::HoudiniEngineUnity::HEU_TOPNodeData::PDGState _get_COOK_COMPLETE();
      // Set static field: static public HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState COOK_COMPLETE
      static void _set_COOK_COMPLETE(::HoudiniEngineUnity::HEU_TOPNodeData::PDGState value);
      // static field const value: static public HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState COOK_FAILED
      static constexpr const int COOK_FAILED = 5;
      // Get static field: static public HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState COOK_FAILED
      static ::HoudiniEngineUnity::HEU_TOPNodeData::PDGState _get_COOK_FAILED();
      // Set static field: static public HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState COOK_FAILED
      static void _set_COOK_FAILED(::HoudiniEngineUnity::HEU_TOPNodeData::PDGState value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState
    #pragma pack(pop)
    static check_size<sizeof(HEU_TOPNodeData::PDGState), 0 + sizeof(int)> __HoudiniEngineUnity_HEU_TOPNodeData_PDGStateSizeCheck;
    static_assert(sizeof(HEU_TOPNodeData::PDGState) == 0x4);
    public:
    // public System.Int32 _nodeID
    // Size: 0x4
    // Offset: 0x10
    int nodeID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: nodeID and: nodeName
    char __padding0[0x4] = {};
    // public System.String _nodeName
    // Size: 0x8
    // Offset: 0x18
    ::StringW nodeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String _parentName
    // Size: 0x8
    // Offset: 0x20
    ::StringW parentName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.GameObject _workResultParentGO
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* workResultParentGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_TOPWorkResult> _workResults
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPWorkResult*>* workResults;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPWorkResult*>*) == 0x8);
    // public HoudiniEngineUnity.TOPNodeTags _tags
    // Size: 0x8
    // Offset: 0x38
    ::HoudiniEngineUnity::TOPNodeTags* tags;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::TOPNodeTags*) == 0x8);
    // public System.Boolean _showResults
    // Size: 0x1
    // Offset: 0x40
    bool showResults;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: showResults and: pdgState
    char __padding6[0x3] = {};
    // public HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState _pdgState
    // Size: 0x4
    // Offset: 0x44
    ::HoudiniEngineUnity::HEU_TOPNodeData::PDGState pdgState;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HEU_TOPNodeData::PDGState) == 0x4);
    // public HoudiniEngineUnity.HEU_WorkItemTally _workItemTally
    // Size: 0x8
    // Offset: 0x48
    ::HoudiniEngineUnity::HEU_WorkItemTally* workItemTally;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HEU_WorkItemTally*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 _nodeID
    [[deprecated("Use field access instead!")]] int& dyn__nodeID();
    // Get instance field reference: public System.String _nodeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__nodeName();
    // Get instance field reference: public System.String _parentName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__parentName();
    // Get instance field reference: public UnityEngine.GameObject _workResultParentGO
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__workResultParentGO();
    // Get instance field reference: public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_TOPWorkResult> _workResults
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPWorkResult*>*& dyn__workResults();
    // Get instance field reference: public HoudiniEngineUnity.TOPNodeTags _tags
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::TOPNodeTags*& dyn__tags();
    // Get instance field reference: public System.Boolean _showResults
    [[deprecated("Use field access instead!")]] bool& dyn__showResults();
    // Get instance field reference: public HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState _pdgState
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HEU_TOPNodeData::PDGState& dyn__pdgState();
    // Get instance field reference: public HoudiniEngineUnity.HEU_WorkItemTally _workItemTally
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HEU_WorkItemTally*& dyn__workItemTally();
    // public System.Void .ctor()
    // Offset: 0x1B5E878
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_TOPNodeData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_TOPNodeData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_TOPNodeData*, creationType>()));
    }
    // public System.Void Reset()
    // Offset: 0x1B5E800
    void Reset();
    // public System.Boolean AreAllWorkItemsComplete()
    // Offset: 0x1B5E824
    bool AreAllWorkItemsComplete();
    // public System.Boolean AnyWorkItemsFailed()
    // Offset: 0x1B5E840
    bool AnyWorkItemsFailed();
    // public System.Boolean AnyWorkItemsPending()
    // Offset: 0x1B5E85C
    bool AnyWorkItemsPending();
  }; // HoudiniEngineUnity.HEU_TOPNodeData
  #pragma pack(pop)
  static check_size<sizeof(HEU_TOPNodeData), 72 + sizeof(::HoudiniEngineUnity::HEU_WorkItemTally*)> __HoudiniEngineUnity_HEU_TOPNodeDataSizeCheck;
  static_assert(sizeof(HEU_TOPNodeData) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_TOPNodeData::PDGState, "HoudiniEngineUnity", "HEU_TOPNodeData/PDGState");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TOPNodeData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TOPNodeData::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_TOPNodeData::*)()>(&HoudiniEngineUnity::HEU_TOPNodeData::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TOPNodeData*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TOPNodeData::AreAllWorkItemsComplete
// Il2CppName: AreAllWorkItemsComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_TOPNodeData::*)()>(&HoudiniEngineUnity::HEU_TOPNodeData::AreAllWorkItemsComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TOPNodeData*), "AreAllWorkItemsComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TOPNodeData::AnyWorkItemsFailed
// Il2CppName: AnyWorkItemsFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_TOPNodeData::*)()>(&HoudiniEngineUnity::HEU_TOPNodeData::AnyWorkItemsFailed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TOPNodeData*), "AnyWorkItemsFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TOPNodeData::AnyWorkItemsPending
// Il2CppName: AnyWorkItemsPending
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_TOPNodeData::*)()>(&HoudiniEngineUnity::HEU_TOPNodeData::AnyWorkItemsPending)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TOPNodeData*), "AnyWorkItemsPending", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
