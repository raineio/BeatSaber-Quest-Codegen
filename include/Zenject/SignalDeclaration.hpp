// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Zenject.ITickable
#include "Zenject/ITickable.hpp"
// Including type: Zenject.BindingId
#include "Zenject/BindingId.hpp"
// Including type: Zenject.SignalMissingHandlerResponses
#include "Zenject/SignalMissingHandlerResponses.hpp"
// Including type: Zenject.ZenjectSettings
#include "Zenject/ZenjectSettings.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SignalSubscription
  class SignalSubscription;
  // Forward declaring type: SignalDeclarationBindInfo
  class SignalDeclarationBindInfo;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: SignalDeclaration
  class SignalDeclaration;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SignalDeclaration);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalDeclaration*, "Zenject", "SignalDeclaration");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SignalDeclaration
  // [TokenAttribute] Offset: FFFFFFFF
  class SignalDeclaration : public ::Il2CppObject/*, public ::System::IDisposable, public ::Zenject::ITickable*/ {
    public:
    // Nested type: ::Zenject::SignalDeclaration::Factory
    class Factory;
    public:
    // private readonly System.Collections.Generic.List`1<Zenject.SignalSubscription> _subscriptions
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>* subscriptions;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<System.Object> _asyncQueue
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::Il2CppObject*>* asyncQueue;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Il2CppObject*>*) == 0x8);
    // private readonly Zenject.BindingId _bindingId
    // Size: 0x10
    // Offset: 0x20
    ::Zenject::BindingId bindingId;
    // Field size check
    static_assert(sizeof(::Zenject::BindingId) == 0x10);
    // private readonly Zenject.SignalMissingHandlerResponses _missingHandlerResponses
    // Size: 0x4
    // Offset: 0x30
    ::Zenject::SignalMissingHandlerResponses missingHandlerResponses;
    // Field size check
    static_assert(sizeof(::Zenject::SignalMissingHandlerResponses) == 0x4);
    // private readonly System.Boolean _isAsync
    // Size: 0x1
    // Offset: 0x34
    bool isAsync;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isAsync and: settings
    char __padding4[0x3] = {};
    // private readonly Zenject.ZenjectSettings/Zenject.SignalSettings _settings
    // Size: 0x8
    // Offset: 0x38
    ::Zenject::ZenjectSettings::SignalSettings* settings;
    // Field size check
    static_assert(sizeof(::Zenject::ZenjectSettings::SignalSettings*) == 0x8);
    // private System.Int32 <TickPriority>k__BackingField
    // Size: 0x4
    // Offset: 0x40
    int TickPriority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: operator ::Zenject::ITickable
    operator ::Zenject::ITickable() noexcept {
      return *reinterpret_cast<::Zenject::ITickable*>(this);
    }
    // Creating interface conversion operator: i_ITickable
    inline ::Zenject::ITickable* i_ITickable() noexcept {
      return reinterpret_cast<::Zenject::ITickable*>(this);
    }
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Zenject.SignalSubscription> _subscriptions
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>*& dyn__subscriptions();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<System.Object> _asyncQueue
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Il2CppObject*>*& dyn__asyncQueue();
    // Get instance field reference: private readonly Zenject.BindingId _bindingId
    [[deprecated("Use field access instead!")]] ::Zenject::BindingId& dyn__bindingId();
    // Get instance field reference: private readonly Zenject.SignalMissingHandlerResponses _missingHandlerResponses
    [[deprecated("Use field access instead!")]] ::Zenject::SignalMissingHandlerResponses& dyn__missingHandlerResponses();
    // Get instance field reference: private readonly System.Boolean _isAsync
    [[deprecated("Use field access instead!")]] bool& dyn__isAsync();
    // Get instance field reference: private readonly Zenject.ZenjectSettings/Zenject.SignalSettings _settings
    [[deprecated("Use field access instead!")]] ::Zenject::ZenjectSettings::SignalSettings*& dyn__settings();
    // Get instance field reference: private System.Int32 <TickPriority>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$TickPriority$k__BackingField();
    // public System.Int32 get_TickPriority()
    // Offset: 0x1DD5454
    int get_TickPriority();
    // private System.Void set_TickPriority(System.Int32 value)
    // Offset: 0x1DD545C
    void set_TickPriority(int value);
    // public System.Boolean get_IsAsync()
    // Offset: 0x1DD5464
    bool get_IsAsync();
    // public Zenject.BindingId get_BindingId()
    // Offset: 0x1DD546C
    ::Zenject::BindingId get_BindingId();
    // public System.Void .ctor(Zenject.SignalDeclarationBindInfo bindInfo, Zenject.ZenjectSettings zenjectSettings)
    // Offset: 0x1DD52F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalDeclaration* New_ctor(::Zenject::SignalDeclarationBindInfo* bindInfo, ::Zenject::ZenjectSettings* zenjectSettings) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SignalDeclaration::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalDeclaration*, creationType>(bindInfo, zenjectSettings)));
    }
    // public System.Void Dispose()
    // Offset: 0x1DD28B4
    void Dispose();
    // public System.Void Fire(System.Object signal)
    // Offset: 0x1DD2A84
    void Fire(::Il2CppObject* signal);
    // private System.Void FireInternal(System.Collections.Generic.List`1<Zenject.SignalSubscription> subscriptions, System.Object signal)
    // Offset: 0x1DD5480
    void FireInternal(::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>* subscriptions, ::Il2CppObject* signal);
    // public System.Void Tick()
    // Offset: 0x1DD56E0
    void Tick();
    // public System.Void Add(Zenject.SignalSubscription subscription)
    // Offset: 0x1DD591C
    void Add(::Zenject::SignalSubscription* subscription);
    // public System.Void Remove(Zenject.SignalSubscription subscription)
    // Offset: 0x1DD59B0
    void Remove(::Zenject::SignalSubscription* subscription);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1DD5A10
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1DD5B28
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.SignalDeclaration
  #pragma pack(pop)
  static check_size<sizeof(SignalDeclaration), 64 + sizeof(int)> __Zenject_SignalDeclarationSizeCheck;
  static_assert(sizeof(SignalDeclaration) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SignalDeclaration::get_TickPriority
// Il2CppName: get_TickPriority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::SignalDeclaration::*)()>(&Zenject::SignalDeclaration::get_TickPriority)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclaration*), "get_TickPriority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclaration::set_TickPriority
// Il2CppName: set_TickPriority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalDeclaration::*)(int)>(&Zenject::SignalDeclaration::set_TickPriority)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclaration*), "set_TickPriority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclaration::get_IsAsync
// Il2CppName: get_IsAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::SignalDeclaration::*)()>(&Zenject::SignalDeclaration::get_IsAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclaration*), "get_IsAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclaration::get_BindingId
// Il2CppName: get_BindingId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::BindingId (Zenject::SignalDeclaration::*)()>(&Zenject::SignalDeclaration::get_BindingId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclaration*), "get_BindingId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclaration::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SignalDeclaration::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalDeclaration::*)()>(&Zenject::SignalDeclaration::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclaration*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclaration::Fire
// Il2CppName: Fire
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalDeclaration::*)(::Il2CppObject*)>(&Zenject::SignalDeclaration::Fire)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclaration*), "Fire", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclaration::FireInternal
// Il2CppName: FireInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalDeclaration::*)(::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>*, ::Il2CppObject*)>(&Zenject::SignalDeclaration::FireInternal)> {
  static const MethodInfo* get() {
    static auto* subscriptions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "SignalSubscription")})->byval_arg;
    static auto* signal = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclaration*), "FireInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{subscriptions, signal});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclaration::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalDeclaration::*)()>(&Zenject::SignalDeclaration::Tick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclaration*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclaration::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalDeclaration::*)(::Zenject::SignalSubscription*)>(&Zenject::SignalDeclaration::Add)> {
  static const MethodInfo* get() {
    static auto* subscription = &::il2cpp_utils::GetClassFromName("Zenject", "SignalSubscription")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclaration*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{subscription});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclaration::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalDeclaration::*)(::Zenject::SignalSubscription*)>(&Zenject::SignalDeclaration::Remove)> {
  static const MethodInfo* get() {
    static auto* subscription = &::il2cpp_utils::GetClassFromName("Zenject", "SignalSubscription")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclaration*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{subscription});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclaration::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::SignalDeclaration::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclaration*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclaration::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::SignalDeclaration::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclaration*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
