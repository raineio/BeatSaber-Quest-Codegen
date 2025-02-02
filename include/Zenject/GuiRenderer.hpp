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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: GuiRenderableManager
  class GuiRenderableManager;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: GuiRenderer
  class GuiRenderer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::GuiRenderer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::GuiRenderer*, "Zenject", "GuiRenderer");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.GuiRenderer
  // [TokenAttribute] Offset: FFFFFFFF
  class GuiRenderer : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private Zenject.GuiRenderableManager _renderableManager
    // Size: 0x8
    // Offset: 0x18
    ::Zenject::GuiRenderableManager* renderableManager;
    // Field size check
    static_assert(sizeof(::Zenject::GuiRenderableManager*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Zenject.GuiRenderableManager _renderableManager
    [[deprecated("Use field access instead!")]] ::Zenject::GuiRenderableManager*& dyn__renderableManager();
    // public System.Void .ctor()
    // Offset: 0x1EAC7D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GuiRenderer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::GuiRenderer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GuiRenderer*, creationType>()));
    }
    // private System.Void Construct(Zenject.GuiRenderableManager renderableManager)
    // Offset: 0x1EAC7B8
    void Construct(::Zenject::GuiRenderableManager* renderableManager);
    // public System.Void OnGUI()
    // Offset: 0x1EAC7C0
    void OnGUI();
    // static private System.Void __zenInjectMethod0(System.Object P_0, System.Object[] P_1)
    // Offset: 0x1EAC7E0
    static void __zenInjectMethod0(::Il2CppObject* P_0, ::ArrayW<::Il2CppObject*> P_1);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1EAC8CC
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.GuiRenderer
  #pragma pack(pop)
  static check_size<sizeof(GuiRenderer), 24 + sizeof(::Zenject::GuiRenderableManager*)> __Zenject_GuiRendererSizeCheck;
  static_assert(sizeof(GuiRenderer) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::GuiRenderer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::GuiRenderer::Construct
// Il2CppName: Construct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::GuiRenderer::*)(::Zenject::GuiRenderableManager*)>(&Zenject::GuiRenderer::Construct)> {
  static const MethodInfo* get() {
    static auto* renderableManager = &::il2cpp_utils::GetClassFromName("Zenject", "GuiRenderableManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::GuiRenderer*), "Construct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderableManager});
  }
};
// Writing MetadataGetter for method: Zenject::GuiRenderer::OnGUI
// Il2CppName: OnGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::GuiRenderer::*)()>(&Zenject::GuiRenderer::OnGUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::GuiRenderer*), "OnGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::GuiRenderer::__zenInjectMethod0
// Il2CppName: __zenInjectMethod0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::ArrayW<::Il2CppObject*>)>(&Zenject::GuiRenderer::__zenInjectMethod0)> {
  static const MethodInfo* get() {
    static auto* P_0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* P_1 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::GuiRenderer*), "__zenInjectMethod0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0, P_1});
  }
};
// Writing MetadataGetter for method: Zenject::GuiRenderer::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::GuiRenderer::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::GuiRenderer*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
