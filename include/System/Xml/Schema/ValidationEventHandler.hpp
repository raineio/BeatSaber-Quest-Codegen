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
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: ValidationEventArgs
  class ValidationEventArgs;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: ValidationEventHandler
  class ValidationEventHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::ValidationEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ValidationEventHandler*, "System.Xml.Schema", "ValidationEventHandler");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.ValidationEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class ValidationEventHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C58490
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValidationEventHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::ValidationEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValidationEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.Xml.Schema.ValidationEventArgs e)
    // Offset: 0x1C584A0
    void Invoke(::Il2CppObject* sender, ::System::Xml::Schema::ValidationEventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.Xml.Schema.ValidationEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C58888
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, ::System::Xml::Schema::ValidationEventArgs* e, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C588B8
    void EndInvoke(::System::IAsyncResult* result);
  }; // System.Xml.Schema.ValidationEventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::ValidationEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::ValidationEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::ValidationEventHandler::*)(::Il2CppObject*, ::System::Xml::Schema::ValidationEventArgs*)>(&System::Xml::Schema::ValidationEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "ValidationEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ValidationEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ValidationEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Xml::Schema::ValidationEventHandler::*)(::Il2CppObject*, ::System::Xml::Schema::ValidationEventArgs*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Xml::Schema::ValidationEventHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "ValidationEventArgs")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ValidationEventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e, callback, object});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ValidationEventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::ValidationEventHandler::*)(::System::IAsyncResult*)>(&System::Xml::Schema::ValidationEventHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ValidationEventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
