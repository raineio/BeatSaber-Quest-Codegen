// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Component
  class Component : public UnityEngine::Object {
    public:
    // public UnityEngine.Transform get_transform()
    // Offset: 0x178C690
    UnityEngine::Transform* get_transform();
    // public UnityEngine.GameObject get_gameObject()
    // Offset: 0x178C6D0
    UnityEngine::GameObject* get_gameObject();
    // public UnityEngine.Component GetComponent(System.Type type)
    // Offset: 0x178C710
    UnityEngine::Component* GetComponent(System::Type* type);
    // System.Void GetComponentFastPath(System.Type type, System.IntPtr oneFurtherThanResultValue)
    // Offset: 0x178C7E4
    void GetComponentFastPath(System::Type* type, System::IntPtr oneFurtherThanResultValue);
    // public T GetComponent()
    // Offset: 0xFFFFFFFF
    template<class T>
    T GetComponent() {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "GetComponent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // public System.Boolean TryGetComponent(out T component)
    // Offset: 0xFFFFFFFF
    template<class T>
    bool TryGetComponent(T& component) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<bool>(this, "TryGetComponent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, component)));
    }
    // public UnityEngine.Component GetComponentInChildren(System.Type t, System.Boolean includeInactive)
    // Offset: 0x178C83C
    UnityEngine::Component* GetComponentInChildren(System::Type* t, bool includeInactive);
    // public T GetComponentInChildren()
    // Offset: 0xFFFFFFFF
    template<class T>
    T GetComponentInChildren() {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "GetComponentInChildren", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // public UnityEngine.Component[] GetComponentsInChildren(System.Type t, System.Boolean includeInactive)
    // Offset: 0x178C920
    ::Array<UnityEngine::Component*>* GetComponentsInChildren(System::Type* t, bool includeInactive);
    // public T[] GetComponentsInChildren(System.Boolean includeInactive)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetComponentsInChildren(bool includeInactive) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<::Array<T>*>(this, "GetComponentsInChildren", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, includeInactive)));
    }
    // public System.Void GetComponentsInChildren(System.Boolean includeInactive, System.Collections.Generic.List`1<T> result)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetComponentsInChildren(bool includeInactive, System::Collections::Generic::List_1<T>* result) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "GetComponentsInChildren", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, includeInactive, result));
    }
    // public T[] GetComponentsInChildren()
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetComponentsInChildren() {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<::Array<T>*>(this, "GetComponentsInChildren", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // public System.Void GetComponentsInChildren(System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetComponentsInChildren(System::Collections::Generic::List_1<T>* results) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "GetComponentsInChildren", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, results));
    }
    // public UnityEngine.Component GetComponentInParent(System.Type t)
    // Offset: 0x178CA40
    UnityEngine::Component* GetComponentInParent(System::Type* t);
    // public T GetComponentInParent()
    // Offset: 0xFFFFFFFF
    template<class T>
    T GetComponentInParent() {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "GetComponentInParent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // public UnityEngine.Component[] GetComponentsInParent(System.Type t, System.Boolean includeInactive)
    // Offset: 0x178CB14
    ::Array<UnityEngine::Component*>* GetComponentsInParent(System::Type* t, bool includeInactive);
    // public T[] GetComponentsInParent(System.Boolean includeInactive)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetComponentsInParent(bool includeInactive) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<::Array<T>*>(this, "GetComponentsInParent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, includeInactive)));
    }
    // public System.Void GetComponentsInParent(System.Boolean includeInactive, System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetComponentsInParent(bool includeInactive, System::Collections::Generic::List_1<T>* results) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "GetComponentsInParent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, includeInactive, results));
    }
    // public T[] GetComponentsInParent()
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetComponentsInParent() {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<::Array<T>*>(this, "GetComponentsInParent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // public UnityEngine.Component[] GetComponents(System.Type type)
    // Offset: 0x178CC34
    ::Array<UnityEngine::Component*>* GetComponents(System::Type* type);
    // private System.Void GetComponentsForListInternal(System.Type searchType, System.Object resultList)
    // Offset: 0x178CD48
    void GetComponentsForListInternal(System::Type* searchType, ::Il2CppObject* resultList);
    // public System.Void GetComponents(System.Type type, System.Collections.Generic.List`1<UnityEngine.Component> results)
    // Offset: 0x178CDA0
    void GetComponents(System::Type* type, System::Collections::Generic::List_1<UnityEngine::Component*>* results);
    // public System.Void GetComponents(System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetComponents(System::Collections::Generic::List_1<T>* results) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "GetComponents", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, results));
    }
    // public System.String get_tag()
    // Offset: 0x178CDF8
    ::Il2CppString* get_tag();
    // public System.Void set_tag(System.String value)
    // Offset: 0x178CEAC
    void set_tag(::Il2CppString* value);
    // public T[] GetComponents()
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetComponents() {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<::Array<T>*>(this, "GetComponents", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // public System.Boolean CompareTag(System.String tag)
    // Offset: 0x178CF80
    bool CompareTag(::Il2CppString* tag);
    // public System.Void .ctor()
    // Offset: 0x1788014
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Component* New_ctor();
  }; // UnityEngine.Component
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Component*, "UnityEngine", "Component");
#pragma pack(pop)
