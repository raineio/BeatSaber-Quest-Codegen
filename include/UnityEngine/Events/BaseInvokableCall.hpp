// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Events.BaseInvokableCall
  class BaseInvokableCall : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: BaseInvokableCall
    BaseInvokableCall() noexcept {}
    // protected System.Void .ctor(System.Object target, System.Reflection.MethodInfo function)
    // Offset: 0x1B953BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseInvokableCall* New_ctor(::Il2CppObject* target, System::Reflection::MethodInfo* function) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::BaseInvokableCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseInvokableCall*, creationType>(target, function)));
    }
    // public System.Void Invoke(System.Object[] args)
    // Offset: 0xFFFFFFFF
    void Invoke(::Array<::Il2CppObject*>* args);
    // static protected System.Void ThrowOnInvalidArg(System.Object arg)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void ThrowOnInvalidArg(::Il2CppObject* arg) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::BaseInvokableCall::ThrowOnInvalidArg");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.Events", "BaseInvokableCall", "ThrowOnInvalidArg", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arg)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, arg);
    }
    // static protected System.Boolean AllowInvoke(System.Delegate delegate)
    // Offset: 0x1B95478
    static bool AllowInvoke(System::Delegate* delegate);
    // public System.Boolean Find(System.Object targetObj, System.Reflection.MethodInfo method)
    // Offset: 0xFFFFFFFF
    bool Find(::Il2CppObject* targetObj, System::Reflection::MethodInfo* method);
    // protected System.Void .ctor()
    // Offset: 0x1B953B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseInvokableCall* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::BaseInvokableCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseInvokableCall*, creationType>()));
    }
  }; // UnityEngine.Events.BaseInvokableCall
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::BaseInvokableCall*, "UnityEngine.Events", "BaseInvokableCall");
// Writing MetadataGetter for method: UnityEngine::Events::BaseInvokableCall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Events::BaseInvokableCall::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::BaseInvokableCall::*)(::Array<::Il2CppObject*>*)>(&UnityEngine::Events::BaseInvokableCall::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::BaseInvokableCall*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppObject*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::BaseInvokableCall::ThrowOnInvalidArg
// Il2CppName: ThrowOnInvalidArg
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Events::BaseInvokableCall::AllowInvoke
// Il2CppName: AllowInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Delegate*)>(&UnityEngine::Events::BaseInvokableCall::AllowInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::BaseInvokableCall*), "AllowInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Delegate*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::BaseInvokableCall::Find
// Il2CppName: Find
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Events::BaseInvokableCall::*)(::Il2CppObject*, System::Reflection::MethodInfo*)>(&UnityEngine::Events::BaseInvokableCall::Find)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::BaseInvokableCall*), "Find", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Reflection::MethodInfo*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::BaseInvokableCall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
