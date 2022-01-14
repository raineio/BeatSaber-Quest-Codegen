// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Application
#include "UnityEngine/Application.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LogType
  struct LogType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::Application::LogCallback);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Application::LogCallback*, "UnityEngine", "Application/LogCallback");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Application/UnityEngine.LogCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class Application::LogCallback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1CFEC18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Application::LogCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Application::LogCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Application::LogCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String condition, System.String stackTrace, UnityEngine.LogType type)
    // Offset: 0x1CFDACC
    void Invoke(::StringW condition, ::StringW stackTrace, UnityEngine::LogType type);
    // public System.IAsyncResult BeginInvoke(System.String condition, System.String stackTrace, UnityEngine.LogType type, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1CFEC28
    System::IAsyncResult* BeginInvoke(::StringW condition, ::StringW stackTrace, UnityEngine::LogType type, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1CFECC8
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.Application/UnityEngine.LogCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Application::LogCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Application::LogCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Application::LogCallback::*)(::StringW, ::StringW, UnityEngine::LogType)>(&UnityEngine::Application::LogCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* stackTrace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application::LogCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition, stackTrace, type});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::LogCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (UnityEngine::Application::LogCallback::*)(::StringW, ::StringW, UnityEngine::LogType, System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Application::LogCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* stackTrace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application::LogCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition, stackTrace, type, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::LogCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Application::LogCallback::*)(System::IAsyncResult*)>(&UnityEngine::Application::LogCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application::LogCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
