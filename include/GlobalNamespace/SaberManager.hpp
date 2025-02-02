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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Saber
  class Saber;
  // Forward declaring type: SaberType
  struct SaberType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SaberManager
  class SaberManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SaberManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberManager*, "", "SaberManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: SaberManager
  // [TokenAttribute] Offset: FFFFFFFF
  class SaberManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::SaberManager::InitData
    class InitData;
    public:
    // private Saber _leftSaber
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::Saber* leftSaber;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Saber*) == 0x8);
    // private Saber _rightSaber
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::Saber* rightSaber;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Saber*) == 0x8);
    // [InjectAttribute] Offset: 0x1124D34
    // private readonly SaberManager/InitData _initData
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::SaberManager::InitData* initData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SaberManager::InitData*) == 0x8);
    // private System.Boolean _started
    // Size: 0x1
    // Offset: 0x30
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: started and: didUpdateSaberPositionsEvent
    char __padding3[0x7] = {};
    // private System.Action`2<Saber,Saber> didUpdateSaberPositionsEvent
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_2<::GlobalNamespace::Saber*, ::GlobalNamespace::Saber*>* didUpdateSaberPositionsEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::Saber*, ::GlobalNamespace::Saber*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Saber _leftSaber
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Saber*& dyn__leftSaber();
    // Get instance field reference: private Saber _rightSaber
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Saber*& dyn__rightSaber();
    // Get instance field reference: private readonly SaberManager/InitData _initData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SaberManager::InitData*& dyn__initData();
    // Get instance field reference: private System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // Get instance field reference: private System.Action`2<Saber,Saber> didUpdateSaberPositionsEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::GlobalNamespace::Saber*, ::GlobalNamespace::Saber*>*& dyn_didUpdateSaberPositionsEvent();
    // public Saber get_leftSaber()
    // Offset: 0x140DC24
    ::GlobalNamespace::Saber* get_leftSaber();
    // public Saber get_rightSaber()
    // Offset: 0x140DC2C
    ::GlobalNamespace::Saber* get_rightSaber();
    // public System.Void set_disableSabers(System.Boolean value)
    // Offset: 0x140DD7C
    void set_disableSabers(bool value);
    // public System.Void add_didUpdateSaberPositionsEvent(System.Action`2<Saber,Saber> value)
    // Offset: 0x140DC34
    void add_didUpdateSaberPositionsEvent(::System::Action_2<::GlobalNamespace::Saber*, ::GlobalNamespace::Saber*>* value);
    // public System.Void remove_didUpdateSaberPositionsEvent(System.Action`2<Saber,Saber> value)
    // Offset: 0x140DCD8
    void remove_didUpdateSaberPositionsEvent(::System::Action_2<::GlobalNamespace::Saber*, ::GlobalNamespace::Saber*>* value);
    // public System.Void .ctor()
    // Offset: 0x140E05C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SaberManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberManager*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x140DD8C
    void Start();
    // protected System.Void OnDisable()
    // Offset: 0x140DEF0
    void OnDisable();
    // protected System.Void OnEnable()
    // Offset: 0x140DEF4
    void OnEnable();
    // protected System.Void Update()
    // Offset: 0x140DF04
    void Update();
    // public Saber SaberForType(SaberType saberType)
    // Offset: 0x140DFEC
    ::GlobalNamespace::Saber* SaberForType(::GlobalNamespace::SaberType saberType);
    // private System.Void RefreshSabers()
    // Offset: 0x140DDB4
    void RefreshSabers();
  }; // SaberManager
  #pragma pack(pop)
  static check_size<sizeof(SaberManager), 56 + sizeof(::System::Action_2<::GlobalNamespace::Saber*, ::GlobalNamespace::Saber*>*)> __GlobalNamespace_SaberManagerSizeCheck;
  static_assert(sizeof(SaberManager) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SaberManager::get_leftSaber
// Il2CppName: get_leftSaber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::Saber* (GlobalNamespace::SaberManager::*)()>(&GlobalNamespace::SaberManager::get_leftSaber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberManager*), "get_leftSaber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberManager::get_rightSaber
// Il2CppName: get_rightSaber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::Saber* (GlobalNamespace::SaberManager::*)()>(&GlobalNamespace::SaberManager::get_rightSaber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberManager*), "get_rightSaber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberManager::set_disableSabers
// Il2CppName: set_disableSabers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberManager::*)(bool)>(&GlobalNamespace::SaberManager::set_disableSabers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberManager*), "set_disableSabers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberManager::add_didUpdateSaberPositionsEvent
// Il2CppName: add_didUpdateSaberPositionsEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberManager::*)(::System::Action_2<::GlobalNamespace::Saber*, ::GlobalNamespace::Saber*>*)>(&GlobalNamespace::SaberManager::add_didUpdateSaberPositionsEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "Saber"), ::il2cpp_utils::GetClassFromName("", "Saber")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberManager*), "add_didUpdateSaberPositionsEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberManager::remove_didUpdateSaberPositionsEvent
// Il2CppName: remove_didUpdateSaberPositionsEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberManager::*)(::System::Action_2<::GlobalNamespace::Saber*, ::GlobalNamespace::Saber*>*)>(&GlobalNamespace::SaberManager::remove_didUpdateSaberPositionsEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "Saber"), ::il2cpp_utils::GetClassFromName("", "Saber")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberManager*), "remove_didUpdateSaberPositionsEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SaberManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberManager::*)()>(&GlobalNamespace::SaberManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberManager::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberManager::*)()>(&GlobalNamespace::SaberManager::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberManager*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberManager::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberManager::*)()>(&GlobalNamespace::SaberManager::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberManager*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberManager::*)()>(&GlobalNamespace::SaberManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberManager::SaberForType
// Il2CppName: SaberForType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::Saber* (GlobalNamespace::SaberManager::*)(::GlobalNamespace::SaberType)>(&GlobalNamespace::SaberManager::SaberForType)> {
  static const MethodInfo* get() {
    static auto* saberType = &::il2cpp_utils::GetClassFromName("", "SaberType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberManager*), "SaberForType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saberType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberManager::RefreshSabers
// Il2CppName: RefreshSabers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberManager::*)()>(&GlobalNamespace::SaberManager::RefreshSabers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberManager*), "RefreshSabers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
