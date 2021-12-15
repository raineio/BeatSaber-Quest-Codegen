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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: ErrorEventArgs
  class ErrorEventArgs;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: ErrorEventHandler
  class ErrorEventHandler;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::IO::ErrorEventHandler);
DEFINE_IL2CPP_ARG_TYPE(System::IO::ErrorEventHandler*, "System.IO", "ErrorEventHandler");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.ErrorEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class ErrorEventHandler : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A36324
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ErrorEventHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::ErrorEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ErrorEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.IO.ErrorEventArgs e)
    // Offset: 0x1A36334
    void Invoke(::Il2CppObject* sender, System::IO::ErrorEventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.IO.ErrorEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A3671C
    System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, System::IO::ErrorEventArgs* e, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A3674C
    void EndInvoke(System::IAsyncResult* result);
  }; // System.IO.ErrorEventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::ErrorEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::ErrorEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::ErrorEventHandler::*)(::Il2CppObject*, System::IO::ErrorEventArgs*)>(&System::IO::ErrorEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.IO", "ErrorEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::ErrorEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: System::IO::ErrorEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::IO::ErrorEventHandler::*)(::Il2CppObject*, System::IO::ErrorEventArgs*, System::AsyncCallback*, ::Il2CppObject*)>(&System::IO::ErrorEventHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.IO", "ErrorEventArgs")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::ErrorEventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e, callback, object});
  }
};
// Writing MetadataGetter for method: System::IO::ErrorEventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::ErrorEventHandler::*)(System::IAsyncResult*)>(&System::IO::ErrorEventHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::ErrorEventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
