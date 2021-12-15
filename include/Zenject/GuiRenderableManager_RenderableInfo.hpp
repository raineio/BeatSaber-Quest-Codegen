// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.GuiRenderableManager
#include "Zenject/GuiRenderableManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IGuiRenderable
  class IGuiRenderable;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: RenderableInfo
  class RenderableInfo;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Zenject::GuiRenderableManager::RenderableInfo);
DEFINE_IL2CPP_ARG_TYPE(Zenject::GuiRenderableManager::RenderableInfo*, "Zenject", "GuiRenderableManager/RenderableInfo");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.GuiRenderableManager/Zenject.RenderableInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class GuiRenderableManager::RenderableInfo : public ::Il2CppObject {
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
    // public Zenject.IGuiRenderable Renderable
    // Size: 0x8
    // Offset: 0x10
    Zenject::IGuiRenderable* Renderable;
    // Field size check
    static_assert(sizeof(Zenject::IGuiRenderable*) == 0x8);
    // public System.Int32 Priority
    // Size: 0x4
    // Offset: 0x18
    int Priority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public Zenject.IGuiRenderable Renderable
    Zenject::IGuiRenderable*& dyn_Renderable();
    // Get instance field reference: public System.Int32 Priority
    int& dyn_Priority();
    // public System.Void .ctor(Zenject.IGuiRenderable renderable, System.Int32 priority)
    // Offset: 0x1AB1544
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GuiRenderableManager::RenderableInfo* New_ctor(Zenject::IGuiRenderable* renderable, int priority) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GuiRenderableManager::RenderableInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GuiRenderableManager::RenderableInfo*, creationType>(renderable, priority)));
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1AB209C
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1AB21A8
    static Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.GuiRenderableManager/Zenject.RenderableInfo
  #pragma pack(pop)
  static check_size<sizeof(GuiRenderableManager::RenderableInfo), 24 + sizeof(int)> __Zenject_GuiRenderableManager_RenderableInfoSizeCheck;
  static_assert(sizeof(GuiRenderableManager::RenderableInfo) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::GuiRenderableManager::RenderableInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::GuiRenderableManager::RenderableInfo::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::GuiRenderableManager::RenderableInfo::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::GuiRenderableManager::RenderableInfo*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::GuiRenderableManager::RenderableInfo::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo* (*)()>(&Zenject::GuiRenderableManager::RenderableInfo::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::GuiRenderableManager::RenderableInfo*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
