// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: UnhandledExceptionEventArgs
  class UnhandledExceptionEventArgs;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.UnhandledExceptionEventHandler
  // [ComVisibleAttribute] Offset: D7B104
  class UnhandledExceptionEventHandler : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: UnhandledExceptionEventHandler
    UnhandledExceptionEventHandler() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x23302B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnhandledExceptionEventHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::UnhandledExceptionEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnhandledExceptionEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.UnhandledExceptionEventArgs e)
    // Offset: 0x23302C8
    void Invoke(::Il2CppObject* sender, System::UnhandledExceptionEventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.UnhandledExceptionEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0x23306B0
    System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, System::UnhandledExceptionEventArgs* e, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x23306E0
    void EndInvoke(System::IAsyncResult* result);
  }; // System.UnhandledExceptionEventHandler
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::UnhandledExceptionEventHandler*, "System", "UnhandledExceptionEventHandler");
// Writing MetadataGetter for method: System::UnhandledExceptionEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::UnhandledExceptionEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::UnhandledExceptionEventHandler::*)(::Il2CppObject*, System::UnhandledExceptionEventArgs*)>(&System::UnhandledExceptionEventHandler::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UnhandledExceptionEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::UnhandledExceptionEventArgs*>()});
  }
};
// Writing MetadataGetter for method: System::UnhandledExceptionEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::UnhandledExceptionEventHandler::*)(::Il2CppObject*, System::UnhandledExceptionEventArgs*, System::AsyncCallback*, ::Il2CppObject*)>(&System::UnhandledExceptionEventHandler::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UnhandledExceptionEventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::UnhandledExceptionEventArgs*>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::UnhandledExceptionEventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::UnhandledExceptionEventHandler::*)(System::IAsyncResult*)>(&System::UnhandledExceptionEventHandler::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UnhandledExceptionEventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
