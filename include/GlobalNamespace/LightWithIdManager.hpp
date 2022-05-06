// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ILightWithId
  class ILightWithId;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightWithIdManager
  class LightWithIdManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightWithIdManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightWithIdManager*, "", "LightWithIdManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: LightWithIdManager
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class LightWithIdManager : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Action didChangeSomeColorsThisFrameEvent
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* didChangeSomeColorsThisFrameEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private readonly System.Collections.Generic.List`1<ILightWithId>[] _lights
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>*> lights;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>*>) == 0x8);
    // private readonly System.Nullable`1<UnityEngine.Color>[] _colors
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::System::Nullable_1<::UnityEngine::Color>> colors;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Nullable_1<::UnityEngine::Color>>) == 0x8);
    // private readonly System.Collections.Generic.List`1<ILightWithId> _lightsToUnregister
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>* lightsToUnregister;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>*) == 0x8);
    // private System.Boolean _didChangeSomeColorsThisFrame
    // Size: 0x1
    // Offset: 0x38
    bool didChangeSomeColorsThisFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static public System.Int32 kMaxLightId
    static constexpr const int kMaxLightId = 250;
    // Get static field: static public System.Int32 kMaxLightId
    static int _get_kMaxLightId();
    // Set static field: static public System.Int32 kMaxLightId
    static void _set_kMaxLightId(int value);
    // Get instance field reference: private System.Action didChangeSomeColorsThisFrameEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_didChangeSomeColorsThisFrameEvent();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<ILightWithId>[] _lights
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>*>& dyn__lights();
    // Get instance field reference: private readonly System.Nullable`1<UnityEngine.Color>[] _colors
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Nullable_1<::UnityEngine::Color>>& dyn__colors();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<ILightWithId> _lightsToUnregister
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>*& dyn__lightsToUnregister();
    // Get instance field reference: private System.Boolean _didChangeSomeColorsThisFrame
    [[deprecated("Use field access instead!")]] bool& dyn__didChangeSomeColorsThisFrame();
    // public System.Void add_didChangeSomeColorsThisFrameEvent(System.Action value)
    // Offset: 0x1E7B9C0
    void add_didChangeSomeColorsThisFrameEvent(::System::Action* value);
    // public System.Void remove_didChangeSomeColorsThisFrameEvent(System.Action value)
    // Offset: 0x1E7BA64
    void remove_didChangeSomeColorsThisFrameEvent(::System::Action* value);
    // public System.Void .ctor()
    // Offset: 0x1E7C640
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightWithIdManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightWithIdManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightWithIdManager*, creationType>()));
    }
    // protected System.Void LateUpdate()
    // Offset: 0x1E7BB08
    void LateUpdate();
    // public System.Void RegisterLight(ILightWithId lightWithId)
    // Offset: 0x1E7BD10
    void RegisterLight(::GlobalNamespace::ILightWithId* lightWithId);
    // public System.Void UnregisterLight(ILightWithId lightWithId)
    // Offset: 0x1E7C0D4
    void UnregisterLight(::GlobalNamespace::ILightWithId* lightWithId);
    // public System.Void SetColorForId(System.Int32 lightId, UnityEngine.Color color)
    // Offset: 0x1E7C2B8
    void SetColorForId(int lightId, ::UnityEngine::Color color);
    // public UnityEngine.Color GetColorForId(System.Int32 lightId, System.Boolean initializeIfNull)
    // Offset: 0x1E7C4F0
    ::UnityEngine::Color GetColorForId(int lightId, bool initializeIfNull);
    // public System.Boolean IsColorSetForId(System.Int32 lightId)
    // Offset: 0x1E7C5BC
    bool IsColorSetForId(int lightId);
    // public System.Collections.Generic.List`1<ILightWithId>[] GetLightsArray()
    // Offset: 0x1E7C638
    ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>*> GetLightsArray();
  }; // LightWithIdManager
  #pragma pack(pop)
  static check_size<sizeof(LightWithIdManager), 56 + sizeof(bool)> __GlobalNamespace_LightWithIdManagerSizeCheck;
  static_assert(sizeof(LightWithIdManager) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightWithIdManager::add_didChangeSomeColorsThisFrameEvent
// Il2CppName: add_didChangeSomeColorsThisFrameEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIdManager::*)(::System::Action*)>(&GlobalNamespace::LightWithIdManager::add_didChangeSomeColorsThisFrameEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIdManager*), "add_didChangeSomeColorsThisFrameEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIdManager::remove_didChangeSomeColorsThisFrameEvent
// Il2CppName: remove_didChangeSomeColorsThisFrameEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIdManager::*)(::System::Action*)>(&GlobalNamespace::LightWithIdManager::remove_didChangeSomeColorsThisFrameEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIdManager*), "remove_didChangeSomeColorsThisFrameEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIdManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LightWithIdManager::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIdManager::*)()>(&GlobalNamespace::LightWithIdManager::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIdManager*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIdManager::RegisterLight
// Il2CppName: RegisterLight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIdManager::*)(::GlobalNamespace::ILightWithId*)>(&GlobalNamespace::LightWithIdManager::RegisterLight)> {
  static const MethodInfo* get() {
    static auto* lightWithId = &::il2cpp_utils::GetClassFromName("", "ILightWithId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIdManager*), "RegisterLight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightWithId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIdManager::UnregisterLight
// Il2CppName: UnregisterLight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIdManager::*)(::GlobalNamespace::ILightWithId*)>(&GlobalNamespace::LightWithIdManager::UnregisterLight)> {
  static const MethodInfo* get() {
    static auto* lightWithId = &::il2cpp_utils::GetClassFromName("", "ILightWithId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIdManager*), "UnregisterLight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightWithId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIdManager::SetColorForId
// Il2CppName: SetColorForId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIdManager::*)(int, ::UnityEngine::Color)>(&GlobalNamespace::LightWithIdManager::SetColorForId)> {
  static const MethodInfo* get() {
    static auto* lightId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIdManager*), "SetColorForId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightId, color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIdManager::GetColorForId
// Il2CppName: GetColorForId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::LightWithIdManager::*)(int, bool)>(&GlobalNamespace::LightWithIdManager::GetColorForId)> {
  static const MethodInfo* get() {
    static auto* lightId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* initializeIfNull = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIdManager*), "GetColorForId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightId, initializeIfNull});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIdManager::IsColorSetForId
// Il2CppName: IsColorSetForId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LightWithIdManager::*)(int)>(&GlobalNamespace::LightWithIdManager::IsColorSetForId)> {
  static const MethodInfo* get() {
    static auto* lightId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIdManager*), "IsColorSetForId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIdManager::GetLightsArray
// Il2CppName: GetLightsArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>*> (GlobalNamespace::LightWithIdManager::*)()>(&GlobalNamespace::LightWithIdManager::GetLightsArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIdManager*), "GetLightsArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
