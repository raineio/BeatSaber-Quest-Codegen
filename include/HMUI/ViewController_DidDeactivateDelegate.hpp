// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
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
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ViewController/DidDeactivateDelegate
  class ViewController::DidDeactivateDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: DidDeactivateDelegate
    DidDeactivateDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x238723C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ViewController::DidDeactivateDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ViewController::DidDeactivateDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ViewController::DidDeactivateDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x238724C
    void Invoke(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.IAsyncResult BeginInvoke(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling, System.AsyncCallback callback, System.Object object)
    // Offset: 0x23874DC
    System::IAsyncResult* BeginInvoke(bool removedFromHierarchy, bool screenSystemDisabling, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x2387588
    void EndInvoke(System::IAsyncResult* result);
  }; // HMUI.ViewController/DidDeactivateDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ViewController::DidDeactivateDelegate*, "HMUI", "ViewController/DidDeactivateDelegate");
// Writing MetadataGetter for method: HMUI::ViewController::DidDeactivateDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ViewController::DidDeactivateDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ViewController::DidDeactivateDelegate::*)(bool, bool)>(&HMUI::ViewController::DidDeactivateDelegate::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewController::DidDeactivateDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: HMUI::ViewController::DidDeactivateDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (HMUI::ViewController::DidDeactivateDelegate::*)(bool, bool, System::AsyncCallback*, ::Il2CppObject*)>(&HMUI::ViewController::DidDeactivateDelegate::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewController::DidDeactivateDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: HMUI::ViewController::DidDeactivateDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ViewController::DidDeactivateDelegate::*)(System::IAsyncResult*)>(&HMUI::ViewController::DidDeactivateDelegate::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewController::DidDeactivateDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
