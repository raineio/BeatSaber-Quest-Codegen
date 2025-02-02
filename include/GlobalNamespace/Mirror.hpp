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
  // Forward declaring type: MirrorRendererSO
  class MirrorRendererSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: Material
  class Material;
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
  // Forward declaring type: Mirror
  class Mirror;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::Mirror);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Mirror*, "", "Mirror");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Mirror
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  // [RequireComponent] Offset: 110FF14
  class Mirror : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MirrorRendererSO _mirrorRenderer
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MirrorRendererSO* mirrorRenderer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MirrorRendererSO*) == 0x8);
    // private UnityEngine.MeshRenderer _renderer
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::MeshRenderer* renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // private UnityEngine.Material _mirrorMaterial
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Material* mirrorMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _noMirrorMaterial
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Material* noMirrorMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private System.Boolean <isEnabled>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool isEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isEnabled and: mirrorDidChangeEnabledStateEvent
    char __padding4[0x7] = {};
    // private System.Action`1<System.Boolean> mirrorDidChangeEnabledStateEvent
    // Size: 0x8
    // Offset: 0x40
    ::System::Action_1<bool>* mirrorDidChangeEnabledStateEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1110910
    // Get static field: static private readonly System.Int32 _texturePropertyID
    static int _get__texturePropertyID();
    // Set static field: static private readonly System.Int32 _texturePropertyID
    static void _set__texturePropertyID(int value);
    // Get instance field reference: private MirrorRendererSO _mirrorRenderer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MirrorRendererSO*& dyn__mirrorRenderer();
    // Get instance field reference: private UnityEngine.MeshRenderer _renderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn__renderer();
    // Get instance field reference: private UnityEngine.Material _mirrorMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__mirrorMaterial();
    // Get instance field reference: private UnityEngine.Material _noMirrorMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__noMirrorMaterial();
    // Get instance field reference: private System.Boolean <isEnabled>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$isEnabled$k__BackingField();
    // Get instance field reference: private System.Action`1<System.Boolean> mirrorDidChangeEnabledStateEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<bool>*& dyn_mirrorDidChangeEnabledStateEvent();
    // public UnityEngine.Material get_mirrorMaterial()
    // Offset: 0x2AE9F24
    ::UnityEngine::Material* get_mirrorMaterial();
    // public UnityEngine.Material get_noMirrorMaterial()
    // Offset: 0x2AE9F2C
    ::UnityEngine::Material* get_noMirrorMaterial();
    // public System.Boolean get_isEnabled()
    // Offset: 0x2AE9F34
    bool get_isEnabled();
    // private System.Void set_isEnabled(System.Boolean value)
    // Offset: 0x2AE9F3C
    void set_isEnabled(bool value);
    // public System.Void add_mirrorDidChangeEnabledStateEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x2AE9F48
    void add_mirrorDidChangeEnabledStateEvent(::System::Action_1<bool>* value);
    // public System.Void remove_mirrorDidChangeEnabledStateEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x2AE9FEC
    void remove_mirrorDidChangeEnabledStateEvent(::System::Action_1<bool>* value);
    // public System.Void .ctor()
    // Offset: 0x2AEAD6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Mirror* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Mirror::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Mirror*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x2AEAD74
    static void _cctor();
    // protected System.Void Update()
    // Offset: 0x2AEA090
    void Update();
    // protected System.Void OnWillRenderObject()
    // Offset: 0x2AEA1C0
    void OnWillRenderObject();
    // private System.Void ChangeMirrorEnabledState(System.Boolean newIsEnabled)
    // Offset: 0x2AEA438
    void ChangeMirrorEnabledState(bool newIsEnabled);
  }; // Mirror
  #pragma pack(pop)
  static check_size<sizeof(Mirror), 64 + sizeof(::System::Action_1<bool>*)> __GlobalNamespace_MirrorSizeCheck;
  static_assert(sizeof(Mirror) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Mirror::get_mirrorMaterial
// Il2CppName: get_mirrorMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (GlobalNamespace::Mirror::*)()>(&GlobalNamespace::Mirror::get_mirrorMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Mirror*), "get_mirrorMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Mirror::get_noMirrorMaterial
// Il2CppName: get_noMirrorMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (GlobalNamespace::Mirror::*)()>(&GlobalNamespace::Mirror::get_noMirrorMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Mirror*), "get_noMirrorMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Mirror::get_isEnabled
// Il2CppName: get_isEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::Mirror::*)()>(&GlobalNamespace::Mirror::get_isEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Mirror*), "get_isEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Mirror::set_isEnabled
// Il2CppName: set_isEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mirror::*)(bool)>(&GlobalNamespace::Mirror::set_isEnabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Mirror*), "set_isEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Mirror::add_mirrorDidChangeEnabledStateEvent
// Il2CppName: add_mirrorDidChangeEnabledStateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mirror::*)(::System::Action_1<bool>*)>(&GlobalNamespace::Mirror::add_mirrorDidChangeEnabledStateEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Mirror*), "add_mirrorDidChangeEnabledStateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Mirror::remove_mirrorDidChangeEnabledStateEvent
// Il2CppName: remove_mirrorDidChangeEnabledStateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mirror::*)(::System::Action_1<bool>*)>(&GlobalNamespace::Mirror::remove_mirrorDidChangeEnabledStateEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Mirror*), "remove_mirrorDidChangeEnabledStateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Mirror::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::Mirror::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::Mirror::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Mirror*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Mirror::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mirror::*)()>(&GlobalNamespace::Mirror::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Mirror*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Mirror::OnWillRenderObject
// Il2CppName: OnWillRenderObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mirror::*)()>(&GlobalNamespace::Mirror::OnWillRenderObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Mirror*), "OnWillRenderObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Mirror::ChangeMirrorEnabledState
// Il2CppName: ChangeMirrorEnabledState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mirror::*)(bool)>(&GlobalNamespace::Mirror::ChangeMirrorEnabledState)> {
  static const MethodInfo* get() {
    static auto* newIsEnabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Mirror*), "ChangeMirrorEnabledState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newIsEnabled});
  }
};
