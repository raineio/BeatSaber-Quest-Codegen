// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BTSCharacterMaterialSwitcher
#include "GlobalNamespace/BTSCharacterMaterialSwitcher.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RendererMaterialsPairs
  class RendererMaterialsPairs;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::BTSCharacterMaterialSwitcher::RendererMaterialsPairs);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacterMaterialSwitcher::RendererMaterialsPairs*, "", "BTSCharacterMaterialSwitcher/RendererMaterialsPairs");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BTSCharacterMaterialSwitcher/RendererMaterialsPairs
  // [TokenAttribute] Offset: FFFFFFFF
  class BTSCharacterMaterialSwitcher::RendererMaterialsPairs : public ::Il2CppObject {
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
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(UnityEngine::Renderer*) == 0x8);
    // private System.Collections.Generic.List`1<BTSCharacterMaterialSwitcher/MaterialPairs> _materialPairs
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::BTSCharacterMaterialSwitcher::MaterialPairs*>* materialPairs;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BTSCharacterMaterialSwitcher::MaterialPairs*>*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Renderer _renderer
    UnityEngine::Renderer*& dyn__renderer();
    // Get instance field reference: private System.Collections.Generic.List`1<BTSCharacterMaterialSwitcher/MaterialPairs> _materialPairs
    System::Collections::Generic::List_1<GlobalNamespace::BTSCharacterMaterialSwitcher::MaterialPairs*>*& dyn__materialPairs();
    // public UnityEngine.Renderer get_renderer()
    // Offset: 0x12BE498
    UnityEngine::Renderer* get_renderer();
    // public System.Collections.Generic.List`1<BTSCharacterMaterialSwitcher/MaterialPairs> get_materialPairs()
    // Offset: 0x12BE4A0
    System::Collections::Generic::List_1<GlobalNamespace::BTSCharacterMaterialSwitcher::MaterialPairs*>* get_materialPairs();
    // public System.Void .ctor(UnityEngine.Renderer renderer)
    // Offset: 0x12BE4A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSCharacterMaterialSwitcher::RendererMaterialsPairs* New_ctor(UnityEngine::Renderer* renderer) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSCharacterMaterialSwitcher::RendererMaterialsPairs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSCharacterMaterialSwitcher::RendererMaterialsPairs*, creationType>(renderer)));
    }
  }; // BTSCharacterMaterialSwitcher/RendererMaterialsPairs
  #pragma pack(pop)
  static check_size<sizeof(BTSCharacterMaterialSwitcher::RendererMaterialsPairs), 24 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::BTSCharacterMaterialSwitcher::MaterialPairs*>*)> __GlobalNamespace_BTSCharacterMaterialSwitcher_RendererMaterialsPairsSizeCheck;
  static_assert(sizeof(BTSCharacterMaterialSwitcher::RendererMaterialsPairs) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterMaterialSwitcher::RendererMaterialsPairs::get_renderer
// Il2CppName: get_renderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Renderer* (GlobalNamespace::BTSCharacterMaterialSwitcher::RendererMaterialsPairs::*)()>(&GlobalNamespace::BTSCharacterMaterialSwitcher::RendererMaterialsPairs::get_renderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterMaterialSwitcher::RendererMaterialsPairs*), "get_renderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterMaterialSwitcher::RendererMaterialsPairs::get_materialPairs
// Il2CppName: get_materialPairs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::BTSCharacterMaterialSwitcher::MaterialPairs*>* (GlobalNamespace::BTSCharacterMaterialSwitcher::RendererMaterialsPairs::*)()>(&GlobalNamespace::BTSCharacterMaterialSwitcher::RendererMaterialsPairs::get_materialPairs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterMaterialSwitcher::RendererMaterialsPairs*), "get_materialPairs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterMaterialSwitcher::RendererMaterialsPairs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
