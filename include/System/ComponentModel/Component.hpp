// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.ComponentModel.IComponent
#include "System/ComponentModel/IComponent.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ISite
  class ISite;
  // Forward declaring type: EventHandlerList
  class EventHandlerList;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.Component
  // [TokenAttribute] Offset: FFFFFFFF
  // [DesignerCategoryAttribute] Offset: E69310
  // [ComVisibleAttribute] Offset: E69310
  // [ClassInterfaceAttribute] Offset: E69310
  class Component : public System::MarshalByRefObject/*, public System::ComponentModel::IComponent*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.ComponentModel.ISite site
    // Size: 0x8
    // Offset: 0x18
    System::ComponentModel::ISite* site;
    // Field size check
    static_assert(sizeof(System::ComponentModel::ISite*) == 0x8);
    // private System.ComponentModel.EventHandlerList events
    // Size: 0x8
    // Offset: 0x20
    System::ComponentModel::EventHandlerList* events;
    // Field size check
    static_assert(sizeof(System::ComponentModel::EventHandlerList*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::ComponentModel::IComponent
    operator System::ComponentModel::IComponent() noexcept {
      return *reinterpret_cast<System::ComponentModel::IComponent*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get static field: static private readonly System.Object EventDisposed
    static ::Il2CppObject* _get_EventDisposed();
    // Set static field: static private readonly System.Object EventDisposed
    static void _set_EventDisposed(::Il2CppObject* value);
    // Get instance field reference: private System.ComponentModel.ISite site
    System::ComponentModel::ISite*& dyn_site();
    // Get instance field reference: private System.ComponentModel.EventHandlerList events
    System::ComponentModel::EventHandlerList*& dyn_events();
    // protected System.Boolean get_CanRaiseEvents()
    // Offset: 0x1A218E4
    bool get_CanRaiseEvents();
    // System.Boolean get_CanRaiseEventsInternal()
    // Offset: 0x1A218EC
    bool get_CanRaiseEventsInternal();
    // public System.ComponentModel.ISite get_Site()
    // Offset: 0x1A218F8
    System::ComponentModel::ISite* get_Site();
    // protected System.Boolean get_DesignMode()
    // Offset: 0x1A21D6C
    bool get_DesignMode();
    // static private System.Void .cctor()
    // Offset: 0x1A21F5C
    static void _cctor();
    // public System.Void Dispose()
    // Offset: 0x1A21900
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1A2197C
    void Dispose(bool disposing);
    // protected System.Object GetService(System.Type service)
    // Offset: 0x1A21C9C
    ::Il2CppObject* GetService(System::Type* service);
    // public System.Void .ctor()
    // Offset: 0x1A21F54
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Component* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::Component::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Component*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x1A21870
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.String ToString()
    // Offset: 0x1A21E2C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.ComponentModel.Component
  #pragma pack(pop)
  static check_size<sizeof(Component), 32 + sizeof(System::ComponentModel::EventHandlerList*)> __System_ComponentModel_ComponentSizeCheck;
  static_assert(sizeof(Component) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::Component*, "System.ComponentModel", "Component");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::Component::get_CanRaiseEvents
// Il2CppName: get_CanRaiseEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::Component::*)()>(&System::ComponentModel::Component::get_CanRaiseEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Component*), "get_CanRaiseEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Component::get_CanRaiseEventsInternal
// Il2CppName: get_CanRaiseEventsInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::Component::*)()>(&System::ComponentModel::Component::get_CanRaiseEventsInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Component*), "get_CanRaiseEventsInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Component::get_Site
// Il2CppName: get_Site
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::ISite* (System::ComponentModel::Component::*)()>(&System::ComponentModel::Component::get_Site)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Component*), "get_Site", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Component::get_DesignMode
// Il2CppName: get_DesignMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::Component::*)()>(&System::ComponentModel::Component::get_DesignMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Component*), "get_DesignMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Component::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::Component::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Component*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Component::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::Component::*)()>(&System::ComponentModel::Component::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Component*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Component::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::Component::*)(bool)>(&System::ComponentModel::Component::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Component*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Component::GetService
// Il2CppName: GetService
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::Component::*)(System::Type*)>(&System::ComponentModel::Component::GetService)> {
  static const MethodInfo* get() {
    static auto* service = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Component*), "GetService", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{service});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Component::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::Component::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::Component::*)()>(&System::ComponentModel::Component::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Component*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Component::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::ComponentModel::Component::*)()>(&System::ComponentModel::Component::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Component*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
