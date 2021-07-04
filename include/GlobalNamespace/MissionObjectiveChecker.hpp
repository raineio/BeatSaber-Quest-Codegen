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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjective
  class MissionObjective;
  // Forward declaring type: MissionObjectiveTypeSO
  class MissionObjectiveTypeSO;
  // Skipping declaration: Status because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: MissionObjectiveChecker
  class MissionObjectiveChecker : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MissionObjectiveChecker::Status
    struct Status;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MissionObjectiveChecker/Status
    struct Status/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Status
      constexpr Status(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MissionObjectiveChecker/Status None
      static constexpr const int None = 0;
      // Get static field: static public MissionObjectiveChecker/Status None
      static GlobalNamespace::MissionObjectiveChecker::Status _get_None();
      // Set static field: static public MissionObjectiveChecker/Status None
      static void _set_None(GlobalNamespace::MissionObjectiveChecker::Status value);
      // static field const value: static public MissionObjectiveChecker/Status NotClearedYet
      static constexpr const int NotClearedYet = 1;
      // Get static field: static public MissionObjectiveChecker/Status NotClearedYet
      static GlobalNamespace::MissionObjectiveChecker::Status _get_NotClearedYet();
      // Set static field: static public MissionObjectiveChecker/Status NotClearedYet
      static void _set_NotClearedYet(GlobalNamespace::MissionObjectiveChecker::Status value);
      // static field const value: static public MissionObjectiveChecker/Status NotFailedYet
      static constexpr const int NotFailedYet = 2;
      // Get static field: static public MissionObjectiveChecker/Status NotFailedYet
      static GlobalNamespace::MissionObjectiveChecker::Status _get_NotFailedYet();
      // Set static field: static public MissionObjectiveChecker/Status NotFailedYet
      static void _set_NotFailedYet(GlobalNamespace::MissionObjectiveChecker::Status value);
      // static field const value: static public MissionObjectiveChecker/Status Cleared
      static constexpr const int Cleared = 3;
      // Get static field: static public MissionObjectiveChecker/Status Cleared
      static GlobalNamespace::MissionObjectiveChecker::Status _get_Cleared();
      // Set static field: static public MissionObjectiveChecker/Status Cleared
      static void _set_Cleared(GlobalNamespace::MissionObjectiveChecker::Status value);
      // static field const value: static public MissionObjectiveChecker/Status Failed
      static constexpr const int Failed = 4;
      // Get static field: static public MissionObjectiveChecker/Status Failed
      static GlobalNamespace::MissionObjectiveChecker::Status _get_Failed();
      // Set static field: static public MissionObjectiveChecker/Status Failed
      static void _set_Failed(GlobalNamespace::MissionObjectiveChecker::Status value);
    }; // MissionObjectiveChecker/Status
    #pragma pack(pop)
    static check_size<sizeof(MissionObjectiveChecker::Status), 0 + sizeof(int)> __GlobalNamespace_MissionObjectiveChecker_StatusSizeCheck;
    static_assert(sizeof(MissionObjectiveChecker::Status) == 0x4);
    // private MissionObjectiveTypeSO _missionObjectiveType
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MissionObjectiveTypeSO* missionObjectiveType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionObjectiveTypeSO*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1C93C
    // private System.Action`1<MissionObjectiveChecker> statusDidChangeEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action_1<GlobalNamespace::MissionObjectiveChecker*>* statusDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MissionObjectiveChecker*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1C94C
    // private System.Action`1<MissionObjectiveChecker> checkedValueDidChangeEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<GlobalNamespace::MissionObjectiveChecker*>* checkedValueDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MissionObjectiveChecker*>*) == 0x8);
    // private MissionObjectiveChecker/Status _status
    // Size: 0x4
    // Offset: 0x30
    GlobalNamespace::MissionObjectiveChecker::Status status;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionObjectiveChecker::Status) == 0x4);
    // private System.Int32 _checkedValue
    // Size: 0x4
    // Offset: 0x34
    int checkedValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected MissionObjective _missionObjective
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MissionObjective* missionObjective;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionObjective*) == 0x8);
    // private System.Boolean _disableChecking
    // Size: 0x1
    // Offset: 0x40
    bool disableChecking;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MissionObjectiveChecker
    MissionObjectiveChecker(GlobalNamespace::MissionObjectiveTypeSO* missionObjectiveType_ = {}, System::Action_1<GlobalNamespace::MissionObjectiveChecker*>* statusDidChangeEvent_ = {}, System::Action_1<GlobalNamespace::MissionObjectiveChecker*>* checkedValueDidChangeEvent_ = {}, GlobalNamespace::MissionObjectiveChecker::Status status_ = {}, int checkedValue_ = {}, GlobalNamespace::MissionObjective* missionObjective_ = {}, bool disableChecking_ = {}) noexcept : missionObjectiveType{missionObjectiveType_}, statusDidChangeEvent{statusDidChangeEvent_}, checkedValueDidChangeEvent{checkedValueDidChangeEvent_}, status{status_}, checkedValue{checkedValue_}, missionObjective{missionObjective_}, disableChecking{disableChecking_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_statusDidChangeEvent(System.Action`1<MissionObjectiveChecker> value)
    // Offset: 0x109A0D8
    void add_statusDidChangeEvent(System::Action_1<GlobalNamespace::MissionObjectiveChecker*>* value);
    // public System.Void remove_statusDidChangeEvent(System.Action`1<MissionObjectiveChecker> value)
    // Offset: 0x109A17C
    void remove_statusDidChangeEvent(System::Action_1<GlobalNamespace::MissionObjectiveChecker*>* value);
    // public System.Void add_checkedValueDidChangeEvent(System.Action`1<MissionObjectiveChecker> value)
    // Offset: 0x109A220
    void add_checkedValueDidChangeEvent(System::Action_1<GlobalNamespace::MissionObjectiveChecker*>* value);
    // public System.Void remove_checkedValueDidChangeEvent(System.Action`1<MissionObjectiveChecker> value)
    // Offset: 0x109A2C4
    void remove_checkedValueDidChangeEvent(System::Action_1<GlobalNamespace::MissionObjectiveChecker*>* value);
    // public MissionObjectiveTypeSO get_missionObjectiveType()
    // Offset: 0x109A368
    GlobalNamespace::MissionObjectiveTypeSO* get_missionObjectiveType();
    // public MissionObjective get_missionObjective()
    // Offset: 0x109A370
    GlobalNamespace::MissionObjective* get_missionObjective();
    // public System.Boolean get_disableChecking()
    // Offset: 0x109A378
    bool get_disableChecking();
    // public System.Void set_disableChecking(System.Boolean value)
    // Offset: 0x109A380
    void set_disableChecking(bool value);
    // public MissionObjectiveChecker/Status get_status()
    // Offset: 0x109A38C
    GlobalNamespace::MissionObjectiveChecker::Status get_status();
    // protected System.Void set_status(MissionObjectiveChecker/Status value)
    // Offset: 0x10926B8
    void set_status(GlobalNamespace::MissionObjectiveChecker::Status value);
    // public System.Int32 get_checkedValue()
    // Offset: 0x109A394
    int get_checkedValue();
    // protected System.Void set_checkedValue(System.Int32 value)
    // Offset: 0x1092844
    void set_checkedValue(int value);
    // public System.Void SetCheckedMissionObjective(MissionObjective missionObjective)
    // Offset: 0x109A39C
    void SetCheckedMissionObjective(GlobalNamespace::MissionObjective* missionObjective);
    // protected System.Void Init()
    // Offset: 0xFFFFFFFF
    void Init();
    // protected System.Void .ctor()
    // Offset: 0x109A3AC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionObjectiveChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionObjectiveChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionObjectiveChecker*, creationType>()));
    }
  }; // MissionObjectiveChecker
  #pragma pack(pop)
  static check_size<sizeof(MissionObjectiveChecker), 64 + sizeof(bool)> __GlobalNamespace_MissionObjectiveCheckerSizeCheck;
  static_assert(sizeof(MissionObjectiveChecker) == 0x41);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjectiveChecker*, "", "MissionObjectiveChecker");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjectiveChecker::Status, "", "MissionObjectiveChecker/Status");
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveChecker::add_statusDidChangeEvent
// Il2CppName: add_statusDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveChecker::*)(System::Action_1<GlobalNamespace::MissionObjectiveChecker*>*)>(&GlobalNamespace::MissionObjectiveChecker::add_statusDidChangeEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveChecker*), "add_statusDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::MissionObjectiveChecker*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveChecker::remove_statusDidChangeEvent
// Il2CppName: remove_statusDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveChecker::*)(System::Action_1<GlobalNamespace::MissionObjectiveChecker*>*)>(&GlobalNamespace::MissionObjectiveChecker::remove_statusDidChangeEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveChecker*), "remove_statusDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::MissionObjectiveChecker*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveChecker::add_checkedValueDidChangeEvent
// Il2CppName: add_checkedValueDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveChecker::*)(System::Action_1<GlobalNamespace::MissionObjectiveChecker*>*)>(&GlobalNamespace::MissionObjectiveChecker::add_checkedValueDidChangeEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveChecker*), "add_checkedValueDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::MissionObjectiveChecker*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveChecker::remove_checkedValueDidChangeEvent
// Il2CppName: remove_checkedValueDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveChecker::*)(System::Action_1<GlobalNamespace::MissionObjectiveChecker*>*)>(&GlobalNamespace::MissionObjectiveChecker::remove_checkedValueDidChangeEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveChecker*), "remove_checkedValueDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::MissionObjectiveChecker*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveChecker::get_missionObjectiveType
// Il2CppName: get_missionObjectiveType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionObjectiveTypeSO* (GlobalNamespace::MissionObjectiveChecker::*)()>(&GlobalNamespace::MissionObjectiveChecker::get_missionObjectiveType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveChecker*), "get_missionObjectiveType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveChecker::get_missionObjective
// Il2CppName: get_missionObjective
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionObjective* (GlobalNamespace::MissionObjectiveChecker::*)()>(&GlobalNamespace::MissionObjectiveChecker::get_missionObjective)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveChecker*), "get_missionObjective", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveChecker::get_disableChecking
// Il2CppName: get_disableChecking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionObjectiveChecker::*)()>(&GlobalNamespace::MissionObjectiveChecker::get_disableChecking)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveChecker*), "get_disableChecking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveChecker::set_disableChecking
// Il2CppName: set_disableChecking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveChecker::*)(bool)>(&GlobalNamespace::MissionObjectiveChecker::set_disableChecking)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveChecker*), "set_disableChecking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveChecker::get_status
// Il2CppName: get_status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionObjectiveChecker::Status (GlobalNamespace::MissionObjectiveChecker::*)()>(&GlobalNamespace::MissionObjectiveChecker::get_status)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveChecker*), "get_status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveChecker::set_status
// Il2CppName: set_status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveChecker::*)(GlobalNamespace::MissionObjectiveChecker::Status)>(&GlobalNamespace::MissionObjectiveChecker::set_status)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveChecker*), "set_status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MissionObjectiveChecker::Status>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveChecker::get_checkedValue
// Il2CppName: get_checkedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MissionObjectiveChecker::*)()>(&GlobalNamespace::MissionObjectiveChecker::get_checkedValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveChecker*), "get_checkedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveChecker::set_checkedValue
// Il2CppName: set_checkedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveChecker::*)(int)>(&GlobalNamespace::MissionObjectiveChecker::set_checkedValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveChecker*), "set_checkedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveChecker::SetCheckedMissionObjective
// Il2CppName: SetCheckedMissionObjective
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveChecker::*)(GlobalNamespace::MissionObjective*)>(&GlobalNamespace::MissionObjectiveChecker::SetCheckedMissionObjective)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveChecker*), "SetCheckedMissionObjective", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MissionObjective*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveChecker::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveChecker::*)()>(&GlobalNamespace::MissionObjectiveChecker::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveChecker*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveChecker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
