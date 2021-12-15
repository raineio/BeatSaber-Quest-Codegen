// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
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
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: DidDeactivateDelegate
  class DidDeactivateDelegate;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HMUI::ViewController::DidDeactivateDelegate);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ViewController::DidDeactivateDelegate*, "HMUI", "ViewController/DidDeactivateDelegate");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ViewController/HMUI.DidDeactivateDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class ViewController::DidDeactivateDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x264D530
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ViewController::DidDeactivateDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ViewController::DidDeactivateDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ViewController::DidDeactivateDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x264C5A8
    void Invoke(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.IAsyncResult BeginInvoke(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling, System.AsyncCallback callback, System.Object object)
    // Offset: 0x264D540
    System::IAsyncResult* BeginInvoke(bool removedFromHierarchy, bool screenSystemDisabling, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x264D5EC
    void EndInvoke(System::IAsyncResult* result);
  }; // HMUI.ViewController/HMUI.DidDeactivateDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ViewController::DidDeactivateDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ViewController::DidDeactivateDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ViewController::DidDeactivateDelegate::*)(bool, bool)>(&HMUI::ViewController::DidDeactivateDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewController::DidDeactivateDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: HMUI::ViewController::DidDeactivateDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (HMUI::ViewController::DidDeactivateDelegate::*)(bool, bool, System::AsyncCallback*, ::Il2CppObject*)>(&HMUI::ViewController::DidDeactivateDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewController::DidDeactivateDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling, callback, object});
  }
};
// Writing MetadataGetter for method: HMUI::ViewController::DidDeactivateDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ViewController::DidDeactivateDelegate::*)(System::IAsyncResult*)>(&HMUI::ViewController::DidDeactivateDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewController::DidDeactivateDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
