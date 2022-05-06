// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message
#include "Oculus/Platform/Message.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Message::ExtraMessageTypesHandler);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Message::ExtraMessageTypesHandler*, "Oculus.Platform", "Message/ExtraMessageTypesHandler");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Message/Oculus.Platform.ExtraMessageTypesHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class Message::ExtraMessageTypesHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x19E2DD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Message::ExtraMessageTypesHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Message::ExtraMessageTypesHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Message::ExtraMessageTypesHandler*, creationType>(object, method)));
    }
    // public Oculus.Platform.Message Invoke(System.IntPtr messageHandle, Oculus.Platform.Message/Oculus.Platform.MessageType message_type)
    // Offset: 0x19E2DE0
    ::Oculus::Platform::Message* Invoke(::System::IntPtr messageHandle, ::Oculus::Platform::Message::MessageType message_type);
    // public System.IAsyncResult BeginInvoke(System.IntPtr messageHandle, Oculus.Platform.Message/Oculus.Platform.MessageType message_type, System.AsyncCallback callback, System.Object object)
    // Offset: 0x19E3064
    ::System::IAsyncResult* BeginInvoke(::System::IntPtr messageHandle, ::Oculus::Platform::Message::MessageType message_type, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Oculus.Platform.Message EndInvoke(System.IAsyncResult result)
    // Offset: 0x19E3110
    ::Oculus::Platform::Message* EndInvoke(::System::IAsyncResult* result);
  }; // Oculus.Platform.Message/Oculus.Platform.ExtraMessageTypesHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Message::ExtraMessageTypesHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::Message::ExtraMessageTypesHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Message* (Oculus::Platform::Message::ExtraMessageTypesHandler::*)(::System::IntPtr, ::Oculus::Platform::Message::MessageType)>(&Oculus::Platform::Message::ExtraMessageTypesHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* messageHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* message_type = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message/MessageType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Message::ExtraMessageTypesHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{messageHandle, message_type});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Message::ExtraMessageTypesHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Oculus::Platform::Message::ExtraMessageTypesHandler::*)(::System::IntPtr, ::Oculus::Platform::Message::MessageType, ::System::AsyncCallback*, ::Il2CppObject*)>(&Oculus::Platform::Message::ExtraMessageTypesHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* messageHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* message_type = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message/MessageType")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Message::ExtraMessageTypesHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{messageHandle, message_type, callback, object});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Message::ExtraMessageTypesHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Message* (Oculus::Platform::Message::ExtraMessageTypesHandler::*)(::System::IAsyncResult*)>(&Oculus::Platform::Message::ExtraMessageTypesHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Message::ExtraMessageTypesHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
