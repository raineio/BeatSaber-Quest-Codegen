// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: ZenInjectMethod
  class ZenInjectMethod;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ZenInjectMethod);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenInjectMethod*, "Zenject", "ZenInjectMethod");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ZenInjectMethod
  // [TokenAttribute] Offset: FFFFFFFF
  class ZenInjectMethod : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2B87A40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenInjectMethod* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ZenInjectMethod::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenInjectMethod*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object obj, System.Object[] args)
    // Offset: 0x2B87A50
    void Invoke(::Il2CppObject* obj, ::ArrayW<::Il2CppObject*> args);
    // public System.IAsyncResult BeginInvoke(System.Object obj, System.Object[] args, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2B87E38
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* obj, ::ArrayW<::Il2CppObject*> args, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x2B87E68
    void EndInvoke(::System::IAsyncResult* result);
  }; // Zenject.ZenInjectMethod
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ZenInjectMethod::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ZenInjectMethod::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenInjectMethod::*)(::Il2CppObject*, ::ArrayW<::Il2CppObject*>)>(&Zenject::ZenInjectMethod::Invoke)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenInjectMethod*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, args});
  }
};
// Writing MetadataGetter for method: Zenject::ZenInjectMethod::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Zenject::ZenInjectMethod::*)(::Il2CppObject*, ::ArrayW<::Il2CppObject*>, ::System::AsyncCallback*, ::Il2CppObject*)>(&Zenject::ZenInjectMethod::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenInjectMethod*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, args, callback, object});
  }
};
// Writing MetadataGetter for method: Zenject::ZenInjectMethod::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenInjectMethod::*)(::System::IAsyncResult*)>(&Zenject::ZenInjectMethod::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenInjectMethod*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
