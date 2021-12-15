// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ParametricBoxController
  class ParametricBoxController;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::ParametricBoxController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ParametricBoxController*, "", "ParametricBoxController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: ParametricBoxController
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: F21884
  // [RequireComponent] Offset: F21884
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class ParametricBoxController : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Single width
    // Size: 0x4
    // Offset: 0x18
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single height
    // Size: 0x4
    // Offset: 0x1C
    float height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single length
    // Size: 0x4
    // Offset: 0x20
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xF22284
    // public System.Single heightCenter
    // Size: 0x4
    // Offset: 0x24
    float heightCenter;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x28
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public System.Single alphaMultiplier
    // Size: 0x4
    // Offset: 0x38
    float alphaMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single minAlpha
    // Size: 0x4
    // Offset: 0x3C
    float minAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xF2229C
    // [RangeAttribute] Offset: 0xF2229C
    // public System.Single alphaStart
    // Size: 0x4
    // Offset: 0x40
    float alphaStart;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xF222DC
    // public System.Single alphaEnd
    // Size: 0x4
    // Offset: 0x44
    float alphaEnd;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single widthStart
    // Size: 0x4
    // Offset: 0x48
    float widthStart;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single widthEnd
    // Size: 0x4
    // Offset: 0x4C
    float widthEnd;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xF222F4
    // private UnityEngine.MeshRenderer _meshRenderer
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::MeshRenderer* meshRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshRenderer*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static UnityEngine::MaterialPropertyBlock* _get__materialPropertyBlock();
    // Set static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static void _set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF2232C
    // Get static field: static private readonly System.Int32 _colorID
    static int _get__colorID();
    // Set static field: static private readonly System.Int32 _colorID
    static void _set__colorID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF2233C
    // Get static field: static private readonly System.Int32 _alphaStartID
    static int _get__alphaStartID();
    // Set static field: static private readonly System.Int32 _alphaStartID
    static void _set__alphaStartID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF2234C
    // Get static field: static private readonly System.Int32 _alphaEndID
    static int _get__alphaEndID();
    // Set static field: static private readonly System.Int32 _alphaEndID
    static void _set__alphaEndID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF2235C
    // Get static field: static private readonly System.Int32 _widthStartID
    static int _get__widthStartID();
    // Set static field: static private readonly System.Int32 _widthStartID
    static void _set__widthStartID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF2236C
    // Get static field: static private readonly System.Int32 _widthEndID
    static int _get__widthEndID();
    // Set static field: static private readonly System.Int32 _widthEndID
    static void _set__widthEndID(int value);
    // Get instance field reference: public System.Single width
    float& dyn_width();
    // Get instance field reference: public System.Single height
    float& dyn_height();
    // Get instance field reference: public System.Single length
    float& dyn_length();
    // Get instance field reference: public System.Single heightCenter
    float& dyn_heightCenter();
    // Get instance field reference: public UnityEngine.Color color
    UnityEngine::Color& dyn_color();
    // Get instance field reference: public System.Single alphaMultiplier
    float& dyn_alphaMultiplier();
    // Get instance field reference: public System.Single minAlpha
    float& dyn_minAlpha();
    // Get instance field reference: public System.Single alphaStart
    float& dyn_alphaStart();
    // Get instance field reference: public System.Single alphaEnd
    float& dyn_alphaEnd();
    // Get instance field reference: public System.Single widthStart
    float& dyn_widthStart();
    // Get instance field reference: public System.Single widthEnd
    float& dyn_widthEnd();
    // Get instance field reference: private UnityEngine.MeshRenderer _meshRenderer
    UnityEngine::MeshRenderer*& dyn__meshRenderer();
    // protected System.Void Awake()
    // Offset: 0x1DBB4C4
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x1DBB4E4
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1DBB7C4
    void OnDisable();
    // public System.Void Refresh()
    // Offset: 0x1DBB518
    void Refresh();
    // public System.Void .ctor()
    // Offset: 0x1DBB7E4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParametricBoxController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ParametricBoxController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParametricBoxController*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1DBB808
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // ParametricBoxController
  #pragma pack(pop)
  static check_size<sizeof(ParametricBoxController), 80 + sizeof(UnityEngine::MeshRenderer*)> __GlobalNamespace_ParametricBoxControllerSizeCheck;
  static_assert(sizeof(ParametricBoxController) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ParametricBoxController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParametricBoxController::*)()>(&GlobalNamespace::ParametricBoxController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParametricBoxController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParametricBoxController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParametricBoxController::*)()>(&GlobalNamespace::ParametricBoxController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParametricBoxController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParametricBoxController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParametricBoxController::*)()>(&GlobalNamespace::ParametricBoxController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParametricBoxController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParametricBoxController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParametricBoxController::*)()>(&GlobalNamespace::ParametricBoxController::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParametricBoxController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParametricBoxController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ParametricBoxController::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ParametricBoxController::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParametricBoxController*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
