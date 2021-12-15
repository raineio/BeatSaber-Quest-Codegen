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
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MaterialPropertyBlockController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyBlockController*, "", "MaterialPropertyBlockController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MaterialPropertyBlockController
  // [TokenAttribute] Offset: FFFFFFFF
  class MaterialPropertyBlockController : public UnityEngine::MonoBehaviour {
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
    // private UnityEngine.Renderer[] _renderers
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<UnityEngine::Renderer*> renderers;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::Renderer*>) == 0x8);
    // private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::MaterialPropertyBlock* materialPropertyBlock;
    // Field size check
    static_assert(sizeof(UnityEngine::MaterialPropertyBlock*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Renderer[] _renderers
    ::ArrayW<UnityEngine::Renderer*>& dyn__renderers();
    // Get instance field reference: private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    UnityEngine::MaterialPropertyBlock*& dyn__materialPropertyBlock();
    // public UnityEngine.Renderer[] get_renderers()
    // Offset: 0x1DB9BF4
    ::ArrayW<UnityEngine::Renderer*> get_renderers();
    // public UnityEngine.MaterialPropertyBlock get_materialPropertyBlock()
    // Offset: 0x1DB9974
    UnityEngine::MaterialPropertyBlock* get_materialPropertyBlock();
    // public System.Void ApplyChanges()
    // Offset: 0x1DB9810
    void ApplyChanges();
    // public System.Void .ctor()
    // Offset: 0x1DB9BFC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPropertyBlockController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MaterialPropertyBlockController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPropertyBlockController*, creationType>()));
    }
  }; // MaterialPropertyBlockController
  #pragma pack(pop)
  static check_size<sizeof(MaterialPropertyBlockController), 32 + sizeof(UnityEngine::MaterialPropertyBlock*)> __GlobalNamespace_MaterialPropertyBlockControllerSizeCheck;
  static_assert(sizeof(MaterialPropertyBlockController) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockController::get_renderers
// Il2CppName: get_renderers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Renderer*> (GlobalNamespace::MaterialPropertyBlockController::*)()>(&GlobalNamespace::MaterialPropertyBlockController::get_renderers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockController*), "get_renderers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockController::get_materialPropertyBlock
// Il2CppName: get_materialPropertyBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::MaterialPropertyBlock* (GlobalNamespace::MaterialPropertyBlockController::*)()>(&GlobalNamespace::MaterialPropertyBlockController::get_materialPropertyBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockController*), "get_materialPropertyBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockController::ApplyChanges
// Il2CppName: ApplyChanges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockController::*)()>(&GlobalNamespace::MaterialPropertyBlockController::ApplyChanges)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockController*), "ApplyChanges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
