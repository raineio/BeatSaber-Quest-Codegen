// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: GuiRenderableManager
  class GuiRenderableManager;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Zenject::GuiRenderableManager);
DEFINE_IL2CPP_ARG_TYPE(Zenject::GuiRenderableManager*, "Zenject", "GuiRenderableManager");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.GuiRenderableManager
  // [TokenAttribute] Offset: FFFFFFFF
  class GuiRenderableManager : public ::Il2CppObject {
    public:
    // Nested type: Zenject::GuiRenderableManager::RenderableInfo
    class RenderableInfo;
    // Nested type: Zenject::GuiRenderableManager::$$c__DisplayClass1_0
    class $$c__DisplayClass1_0;
    // Nested type: Zenject::GuiRenderableManager::$$c
    class $$c;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Collections.Generic.List`1<Zenject.GuiRenderableManager/Zenject.RenderableInfo> _renderables
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<Zenject::GuiRenderableManager::RenderableInfo*>* renderables;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::GuiRenderableManager::RenderableInfo*>*) == 0x8);
    public:
    // Creating conversion operator: operator System::Collections::Generic::List_1<Zenject::GuiRenderableManager::RenderableInfo*>*
    constexpr operator System::Collections::Generic::List_1<Zenject::GuiRenderableManager::RenderableInfo*>*() const noexcept {
      return renderables;
    }
    // Get instance field reference: private System.Collections.Generic.List`1<Zenject.GuiRenderableManager/Zenject.RenderableInfo> _renderables
    System::Collections::Generic::List_1<Zenject::GuiRenderableManager::RenderableInfo*>*& dyn__renderables();
    // public System.Void .ctor(System.Collections.Generic.List`1<Zenject.IGuiRenderable> renderables, System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> priorities)
    // Offset: 0x1AB1108
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GuiRenderableManager* New_ctor(System::Collections::Generic::List_1<Zenject::IGuiRenderable*>* renderables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* priorities) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GuiRenderableManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GuiRenderableManager*, creationType>(renderables, priorities)));
    }
    // public System.Void OnGui()
    // Offset: 0x1AB1580
    void OnGui();
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1AB1864
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1AB197C
    static Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.GuiRenderableManager
  #pragma pack(pop)
  static check_size<sizeof(GuiRenderableManager), 16 + sizeof(System::Collections::Generic::List_1<Zenject::GuiRenderableManager::RenderableInfo*>*)> __Zenject_GuiRenderableManagerSizeCheck;
  static_assert(sizeof(GuiRenderableManager) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::GuiRenderableManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::GuiRenderableManager::OnGui
// Il2CppName: OnGui
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::GuiRenderableManager::*)()>(&Zenject::GuiRenderableManager::OnGui)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::GuiRenderableManager*), "OnGui", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::GuiRenderableManager::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::GuiRenderableManager::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::GuiRenderableManager*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::GuiRenderableManager::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo* (*)()>(&Zenject::GuiRenderableManager::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::GuiRenderableManager*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
