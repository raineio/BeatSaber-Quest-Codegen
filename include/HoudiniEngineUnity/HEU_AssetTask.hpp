// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_Task
#include "HoudiniEngineUnity/HEU_Task.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_HoudiniAsset
  class HEU_HoudiniAsset;
  // Forward declaring type: HEU_SessionBase
  class HEU_SessionBase;
  // Forward declaring type: HEU_CookedEventData
  class HEU_CookedEventData;
  // Forward declaring type: HEU_ReloadEventData
  class HEU_ReloadEventData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_AssetTask
  class HEU_AssetTask;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetTask);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetTask*, "HoudiniEngineUnity", "HEU_AssetTask");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_AssetTask
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_AssetTask : public ::HoudiniEngineUnity::HEU_Task {
    public:
    // Nested type: ::HoudiniEngineUnity::HEU_AssetTask::BuildType
    struct BuildType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HoudiniEngineUnity.HEU_AssetTask/HoudiniEngineUnity.BuildType
    // [TokenAttribute] Offset: FFFFFFFF
    struct BuildType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: BuildType
      constexpr BuildType(int value_ = {}) noexcept : value{value_} {}
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
      // static field const value: static public HoudiniEngineUnity.HEU_AssetTask/HoudiniEngineUnity.BuildType NONE
      static constexpr const int NONE = 0;
      // Get static field: static public HoudiniEngineUnity.HEU_AssetTask/HoudiniEngineUnity.BuildType NONE
      static ::HoudiniEngineUnity::HEU_AssetTask::BuildType _get_NONE();
      // Set static field: static public HoudiniEngineUnity.HEU_AssetTask/HoudiniEngineUnity.BuildType NONE
      static void _set_NONE(::HoudiniEngineUnity::HEU_AssetTask::BuildType value);
      // static field const value: static public HoudiniEngineUnity.HEU_AssetTask/HoudiniEngineUnity.BuildType LOAD
      static constexpr const int LOAD = 1;
      // Get static field: static public HoudiniEngineUnity.HEU_AssetTask/HoudiniEngineUnity.BuildType LOAD
      static ::HoudiniEngineUnity::HEU_AssetTask::BuildType _get_LOAD();
      // Set static field: static public HoudiniEngineUnity.HEU_AssetTask/HoudiniEngineUnity.BuildType LOAD
      static void _set_LOAD(::HoudiniEngineUnity::HEU_AssetTask::BuildType value);
      // static field const value: static public HoudiniEngineUnity.HEU_AssetTask/HoudiniEngineUnity.BuildType COOK
      static constexpr const int COOK = 2;
      // Get static field: static public HoudiniEngineUnity.HEU_AssetTask/HoudiniEngineUnity.BuildType COOK
      static ::HoudiniEngineUnity::HEU_AssetTask::BuildType _get_COOK();
      // Set static field: static public HoudiniEngineUnity.HEU_AssetTask/HoudiniEngineUnity.BuildType COOK
      static void _set_COOK(::HoudiniEngineUnity::HEU_AssetTask::BuildType value);
      // static field const value: static public HoudiniEngineUnity.HEU_AssetTask/HoudiniEngineUnity.BuildType RELOAD
      static constexpr const int RELOAD = 3;
      // Get static field: static public HoudiniEngineUnity.HEU_AssetTask/HoudiniEngineUnity.BuildType RELOAD
      static ::HoudiniEngineUnity::HEU_AssetTask::BuildType _get_RELOAD();
      // Set static field: static public HoudiniEngineUnity.HEU_AssetTask/HoudiniEngineUnity.BuildType RELOAD
      static void _set_RELOAD(::HoudiniEngineUnity::HEU_AssetTask::BuildType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // HoudiniEngineUnity.HEU_AssetTask/HoudiniEngineUnity.BuildType
    #pragma pack(pop)
    static check_size<sizeof(HEU_AssetTask::BuildType), 0 + sizeof(int)> __HoudiniEngineUnity_HEU_AssetTask_BuildTypeSizeCheck;
    static_assert(sizeof(HEU_AssetTask::BuildType) == 0x4);
    public:
    // public HoudiniEngineUnity.HEU_AssetTask/HoudiniEngineUnity.BuildType _buildType
    // Size: 0x4
    // Offset: 0x30
    ::HoudiniEngineUnity::HEU_AssetTask::BuildType buildType;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HEU_AssetTask::BuildType) == 0x4);
    // Padding between fields: buildType and: asset
    char __padding0[0x4] = {};
    // public HoudiniEngineUnity.HEU_HoudiniAsset _asset
    // Size: 0x8
    // Offset: 0x38
    ::HoudiniEngineUnity::HEU_HoudiniAsset* asset;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HEU_HoudiniAsset*) == 0x8);
    // public System.String _assetPath
    // Size: 0x8
    // Offset: 0x40
    ::StringW assetPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.Vector3 _position
    // Size: 0xC
    // Offset: 0x48
    ::UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Boolean _buildResult
    // Size: 0x1
    // Offset: 0x54
    bool buildResult;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: buildResult and: forceSessionID
    char __padding4[0x3] = {};
    // public System.Int64 _forceSessionID
    // Size: 0x8
    // Offset: 0x58
    int64_t forceSessionID;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Get instance field reference: public HoudiniEngineUnity.HEU_AssetTask/HoudiniEngineUnity.BuildType _buildType
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HEU_AssetTask::BuildType& dyn__buildType();
    // Get instance field reference: public HoudiniEngineUnity.HEU_HoudiniAsset _asset
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HEU_HoudiniAsset*& dyn__asset();
    // Get instance field reference: public System.String _assetPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn__assetPath();
    // Get instance field reference: public UnityEngine.Vector3 _position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__position();
    // Get instance field reference: public System.Boolean _buildResult
    [[deprecated("Use field access instead!")]] bool& dyn__buildResult();
    // Get instance field reference: public System.Int64 _forceSessionID
    [[deprecated("Use field access instead!")]] int64_t& dyn__forceSessionID();
    // public HoudiniEngineUnity.HEU_SessionBase GetTaskSession()
    // Offset: 0x1737950
    ::HoudiniEngineUnity::HEU_SessionBase* GetTaskSession();
    // private System.Void CookCompletedCallback(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.Boolean bSuccess, System.Collections.Generic.List`1<UnityEngine.GameObject> outputs)
    // Offset: 0x173838C
    void CookCompletedCallback(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool bSuccess, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputs);
    // private System.Void CookCompletedCallback(HoudiniEngineUnity.HEU_CookedEventData cookedEventData)
    // Offset: 0x173842C
    void CookCompletedCallback(::HoudiniEngineUnity::HEU_CookedEventData* cookedEventData);
    // private System.Void CookCompletedCallback(HoudiniEngineUnity.HEU_ReloadEventData reloadEventData)
    // Offset: 0x173843C
    void CookCompletedCallback(::HoudiniEngineUnity::HEU_ReloadEventData* reloadEventData);
    // public System.Void .ctor()
    // Offset: 0x173844C
    // Implemented from: HoudiniEngineUnity.HEU_Task
    // Base method: System.Void HEU_Task::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_AssetTask* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_AssetTask::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_AssetTask*, creationType>()));
    }
    // public override System.Void DoTask()
    // Offset: 0x1737A34
    // Implemented from: HoudiniEngineUnity.HEU_Task
    // Base method: System.Void HEU_Task::DoTask()
    void DoTask();
    // public override System.Void KillTask()
    // Offset: 0x1737F9C
    // Implemented from: HoudiniEngineUnity.HEU_Task
    // Base method: System.Void HEU_Task::KillTask()
    void KillTask();
    // public override System.Void CompleteTask(HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskResult result)
    // Offset: 0x1738194
    // Implemented from: HoudiniEngineUnity.HEU_Task
    // Base method: System.Void HEU_Task::CompleteTask(HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskResult result)
    void CompleteTask(::HoudiniEngineUnity::HEU_Task::TaskResult result);
  }; // HoudiniEngineUnity.HEU_AssetTask
  #pragma pack(pop)
  static check_size<sizeof(HEU_AssetTask), 88 + sizeof(int64_t)> __HoudiniEngineUnity_HEU_AssetTaskSizeCheck;
  static_assert(sizeof(HEU_AssetTask) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetTask::BuildType, "HoudiniEngineUnity", "HEU_AssetTask/BuildType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetTask::GetTaskSession
// Il2CppName: GetTaskSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_SessionBase* (HoudiniEngineUnity::HEU_AssetTask::*)()>(&HoudiniEngineUnity::HEU_AssetTask::GetTaskSession)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetTask*), "GetTaskSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback
// Il2CppName: CookCompletedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_AssetTask::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)>(&HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* bSuccess = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* outputs = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetTask*), "CookCompletedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, bSuccess, outputs});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback
// Il2CppName: CookCompletedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_AssetTask::*)(::HoudiniEngineUnity::HEU_CookedEventData*)>(&HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback)> {
  static const MethodInfo* get() {
    static auto* cookedEventData = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_CookedEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetTask*), "CookCompletedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cookedEventData});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback
// Il2CppName: CookCompletedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_AssetTask::*)(::HoudiniEngineUnity::HEU_ReloadEventData*)>(&HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback)> {
  static const MethodInfo* get() {
    static auto* reloadEventData = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_ReloadEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetTask*), "CookCompletedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reloadEventData});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetTask::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetTask::DoTask
// Il2CppName: DoTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_AssetTask::*)()>(&HoudiniEngineUnity::HEU_AssetTask::DoTask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetTask*), "DoTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetTask::KillTask
// Il2CppName: KillTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_AssetTask::*)()>(&HoudiniEngineUnity::HEU_AssetTask::KillTask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetTask*), "KillTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetTask::CompleteTask
// Il2CppName: CompleteTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_AssetTask::*)(::HoudiniEngineUnity::HEU_Task::TaskResult)>(&HoudiniEngineUnity::HEU_AssetTask::CompleteTask)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_Task/TaskResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetTask*), "CompleteTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
