// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: EnterPlayerGuestNameViewController
#include "GlobalNamespace/EnterPlayerGuestNameViewController.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
NEED_NO_BOX(::GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate*, "", "EnterPlayerGuestNameViewController/FinishDelegate");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: EnterPlayerGuestNameViewController/FinishDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class EnterPlayerGuestNameViewController::FinishDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x136AF3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnterPlayerGuestNameViewController::FinishDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnterPlayerGuestNameViewController::FinishDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(EnterPlayerGuestNameViewController viewController, System.String playerName)
    // Offset: 0x136AA14
    void Invoke(::GlobalNamespace::EnterPlayerGuestNameViewController* viewController, ::StringW playerName);
    // public System.IAsyncResult BeginInvoke(EnterPlayerGuestNameViewController viewController, System.String playerName, System.AsyncCallback callback, System.Object object)
    // Offset: 0x136AF4C
    ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::EnterPlayerGuestNameViewController* viewController, ::StringW playerName, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x136AF7C
    void EndInvoke(::System::IAsyncResult* result);
  }; // EnterPlayerGuestNameViewController/FinishDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate::*)(::GlobalNamespace::EnterPlayerGuestNameViewController*, ::StringW)>(&GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* viewController = &::il2cpp_utils::GetClassFromName("", "EnterPlayerGuestNameViewController")->byval_arg;
    static auto* playerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewController, playerName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate::*)(::GlobalNamespace::EnterPlayerGuestNameViewController*, ::StringW, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* viewController = &::il2cpp_utils::GetClassFromName("", "EnterPlayerGuestNameViewController")->byval_arg;
    static auto* playerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewController, playerName, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate::*)(::System::IAsyncResult*)>(&GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
