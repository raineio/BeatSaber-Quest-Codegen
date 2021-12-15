// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_SessionManager
#include "HoudiniEngineUnity/HEU_SessionManager.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_SessionBase
  class HEU_SessionBase;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HoudiniEngineUnity::HEU_SessionManager::CreateSessionFromTypeDelegate);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_SessionManager::CreateSessionFromTypeDelegate*, "HoudiniEngineUnity", "HEU_SessionManager/CreateSessionFromTypeDelegate");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_SessionManager/HoudiniEngineUnity.CreateSessionFromTypeDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_SessionManager::CreateSessionFromTypeDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1849328
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_SessionManager::CreateSessionFromTypeDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_SessionManager::CreateSessionFromTypeDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_SessionManager::CreateSessionFromTypeDelegate*, creationType>(object, method)));
    }
    // public HoudiniEngineUnity.HEU_SessionBase Invoke(System.Type type)
    // Offset: 0x1849338
    HoudiniEngineUnity::HEU_SessionBase* Invoke(System::Type* type);
    // public System.IAsyncResult BeginInvoke(System.Type type, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18496D4
    System::IAsyncResult* BeginInvoke(System::Type* type, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public HoudiniEngineUnity.HEU_SessionBase EndInvoke(System.IAsyncResult result)
    // Offset: 0x18496F8
    HoudiniEngineUnity::HEU_SessionBase* EndInvoke(System::IAsyncResult* result);
  }; // HoudiniEngineUnity.HEU_SessionManager/HoudiniEngineUnity.CreateSessionFromTypeDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_SessionManager::CreateSessionFromTypeDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_SessionManager::CreateSessionFromTypeDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_SessionBase* (HoudiniEngineUnity::HEU_SessionManager::CreateSessionFromTypeDelegate::*)(System::Type*)>(&HoudiniEngineUnity::HEU_SessionManager::CreateSessionFromTypeDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_SessionManager::CreateSessionFromTypeDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_SessionManager::CreateSessionFromTypeDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (HoudiniEngineUnity::HEU_SessionManager::CreateSessionFromTypeDelegate::*)(System::Type*, System::AsyncCallback*, ::Il2CppObject*)>(&HoudiniEngineUnity::HEU_SessionManager::CreateSessionFromTypeDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_SessionManager::CreateSessionFromTypeDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, callback, object});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_SessionManager::CreateSessionFromTypeDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_SessionBase* (HoudiniEngineUnity::HEU_SessionManager::CreateSessionFromTypeDelegate::*)(System::IAsyncResult*)>(&HoudiniEngineUnity::HEU_SessionManager::CreateSessionFromTypeDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_SessionManager::CreateSessionFromTypeDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
