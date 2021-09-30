// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: INoteControllerDidInitEvent
#include "GlobalNamespace/INoteControllerDidInitEvent.hpp"
// Including type: INoteControllerNoteDidStartDissolvingEvent
#include "GlobalNamespace/INoteControllerNoteDidStartDissolvingEvent.hpp"
// Including type: INoteControllerNoteDidPassJumpThreeQuartersEvent
#include "GlobalNamespace/INoteControllerNoteDidPassJumpThreeQuartersEvent.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteControllerBase
  class NoteControllerBase;
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
  // Forward declaring type: ColorManager
  class ColorManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
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
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: ColorNoteVisuals
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorNoteVisuals : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::INoteControllerDidInitEvent, public GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent, public GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private NoteControllerBase _noteController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::NoteControllerBase* noteController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteControllerBase*) == 0x8);
    // [SpaceAttribute] Offset: 0xF04830
    // private MaterialPropertyBlockController[] _materialPropertyBlockControllers
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<GlobalNamespace::MaterialPropertyBlockController*> materialPropertyBlockControllers;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::MaterialPropertyBlockController*>) == 0x8);
    // private UnityEngine.MeshRenderer[] _arrowMeshRenderers
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<UnityEngine::MeshRenderer*> arrowMeshRenderers;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::MeshRenderer*>) == 0x8);
    // private UnityEngine.MeshRenderer[] _circleMeshRenderers
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<UnityEngine::MeshRenderer*> circleMeshRenderers;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::MeshRenderer*>) == 0x8);
    // [InjectAttribute] Offset: 0xF04888
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // private System.Action`2<ColorNoteVisuals,NoteControllerBase> didInitEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_2<GlobalNamespace::ColorNoteVisuals*, GlobalNamespace::NoteControllerBase*>* didInitEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::ColorNoteVisuals*, GlobalNamespace::NoteControllerBase*>*) == 0x8);
    // private UnityEngine.Color _noteColor
    // Size: 0x10
    // Offset: 0x48
    UnityEngine::Color noteColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    public:
    // Creating interface conversion operator: operator GlobalNamespace::INoteControllerDidInitEvent
    operator GlobalNamespace::INoteControllerDidInitEvent() noexcept {
      return *reinterpret_cast<GlobalNamespace::INoteControllerDidInitEvent*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent
    operator GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent() noexcept {
      return *reinterpret_cast<GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent
    operator GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent() noexcept {
      return *reinterpret_cast<GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF048A8
    // Get static field: static private readonly System.Int32 _colorId
    static int _get__colorId();
    // Set static field: static private readonly System.Int32 _colorId
    static void _set__colorId(int value);
    // Get instance field reference: private NoteControllerBase _noteController
    GlobalNamespace::NoteControllerBase*& dyn__noteController();
    // Get instance field reference: private MaterialPropertyBlockController[] _materialPropertyBlockControllers
    ::ArrayW<GlobalNamespace::MaterialPropertyBlockController*>& dyn__materialPropertyBlockControllers();
    // Get instance field reference: private UnityEngine.MeshRenderer[] _arrowMeshRenderers
    ::ArrayW<UnityEngine::MeshRenderer*>& dyn__arrowMeshRenderers();
    // Get instance field reference: private UnityEngine.MeshRenderer[] _circleMeshRenderers
    ::ArrayW<UnityEngine::MeshRenderer*>& dyn__circleMeshRenderers();
    // Get instance field reference: private readonly ColorManager _colorManager
    GlobalNamespace::ColorManager*& dyn__colorManager();
    // Get instance field reference: private System.Action`2<ColorNoteVisuals,NoteControllerBase> didInitEvent
    System::Action_2<GlobalNamespace::ColorNoteVisuals*, GlobalNamespace::NoteControllerBase*>*& dyn_didInitEvent();
    // Get instance field reference: private UnityEngine.Color _noteColor
    UnityEngine::Color& dyn__noteColor();
    // private System.Void set_showArrow(System.Boolean value)
    // Offset: 0x1199440
    void set_showArrow(bool value);
    // private System.Void set_showCircle(System.Boolean value)
    // Offset: 0x11994BC
    void set_showCircle(bool value);
    // public System.Void add_didInitEvent(System.Action`2<ColorNoteVisuals,NoteControllerBase> value)
    // Offset: 0x11992F8
    void add_didInitEvent(System::Action_2<GlobalNamespace::ColorNoteVisuals*, GlobalNamespace::NoteControllerBase*>* value);
    // public System.Void remove_didInitEvent(System.Action`2<ColorNoteVisuals,NoteControllerBase> value)
    // Offset: 0x119939C
    void remove_didInitEvent(System::Action_2<GlobalNamespace::ColorNoteVisuals*, GlobalNamespace::NoteControllerBase*>* value);
    // protected System.Void Awake()
    // Offset: 0x1199538
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1199710
    void OnDestroy();
    // public System.Void HandleNoteControllerDidInit(NoteControllerBase noteController)
    // Offset: 0x1199934
    void HandleNoteControllerDidInit(GlobalNamespace::NoteControllerBase* noteController);
    // public System.Void HandleNoteControllerNoteDidPassJumpThreeQuarters(NoteControllerBase noteController)
    // Offset: 0x1199B00
    void HandleNoteControllerNoteDidPassJumpThreeQuarters(GlobalNamespace::NoteControllerBase* noteController);
    // public System.Void HandleNoteControllerNoteDidStartDissolving(NoteControllerBase noteController, System.Single duration)
    // Offset: 0x1199B2C
    void HandleNoteControllerNoteDidStartDissolving(GlobalNamespace::NoteControllerBase* noteController, float duration);
    // public System.Void .ctor()
    // Offset: 0x1199B58
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorNoteVisuals* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorNoteVisuals::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorNoteVisuals*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1199B60
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // ColorNoteVisuals
  #pragma pack(pop)
  static check_size<sizeof(ColorNoteVisuals), 72 + sizeof(UnityEngine::Color)> __GlobalNamespace_ColorNoteVisualsSizeCheck;
  static_assert(sizeof(ColorNoteVisuals) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorNoteVisuals*, "", "ColorNoteVisuals");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorNoteVisuals::set_showArrow
// Il2CppName: set_showArrow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorNoteVisuals::*)(bool)>(&GlobalNamespace::ColorNoteVisuals::set_showArrow)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoteVisuals*), "set_showArrow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoteVisuals::set_showCircle
// Il2CppName: set_showCircle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorNoteVisuals::*)(bool)>(&GlobalNamespace::ColorNoteVisuals::set_showCircle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoteVisuals*), "set_showCircle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoteVisuals::add_didInitEvent
// Il2CppName: add_didInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorNoteVisuals::*)(System::Action_2<GlobalNamespace::ColorNoteVisuals*, GlobalNamespace::NoteControllerBase*>*)>(&GlobalNamespace::ColorNoteVisuals::add_didInitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ColorNoteVisuals"), ::il2cpp_utils::GetClassFromName("", "NoteControllerBase")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoteVisuals*), "add_didInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoteVisuals::remove_didInitEvent
// Il2CppName: remove_didInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorNoteVisuals::*)(System::Action_2<GlobalNamespace::ColorNoteVisuals*, GlobalNamespace::NoteControllerBase*>*)>(&GlobalNamespace::ColorNoteVisuals::remove_didInitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ColorNoteVisuals"), ::il2cpp_utils::GetClassFromName("", "NoteControllerBase")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoteVisuals*), "remove_didInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoteVisuals::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorNoteVisuals::*)()>(&GlobalNamespace::ColorNoteVisuals::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoteVisuals*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoteVisuals::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorNoteVisuals::*)()>(&GlobalNamespace::ColorNoteVisuals::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoteVisuals*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoteVisuals::HandleNoteControllerDidInit
// Il2CppName: HandleNoteControllerDidInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorNoteVisuals::*)(GlobalNamespace::NoteControllerBase*)>(&GlobalNamespace::ColorNoteVisuals::HandleNoteControllerDidInit)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteControllerBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoteVisuals*), "HandleNoteControllerDidInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoteVisuals::HandleNoteControllerNoteDidPassJumpThreeQuarters
// Il2CppName: HandleNoteControllerNoteDidPassJumpThreeQuarters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorNoteVisuals::*)(GlobalNamespace::NoteControllerBase*)>(&GlobalNamespace::ColorNoteVisuals::HandleNoteControllerNoteDidPassJumpThreeQuarters)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteControllerBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoteVisuals*), "HandleNoteControllerNoteDidPassJumpThreeQuarters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoteVisuals::HandleNoteControllerNoteDidStartDissolving
// Il2CppName: HandleNoteControllerNoteDidStartDissolving
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorNoteVisuals::*)(GlobalNamespace::NoteControllerBase*, float)>(&GlobalNamespace::ColorNoteVisuals::HandleNoteControllerNoteDidStartDissolving)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteControllerBase")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoteVisuals*), "HandleNoteControllerNoteDidStartDissolving", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController, duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoteVisuals::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ColorNoteVisuals::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ColorNoteVisuals::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoteVisuals*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
