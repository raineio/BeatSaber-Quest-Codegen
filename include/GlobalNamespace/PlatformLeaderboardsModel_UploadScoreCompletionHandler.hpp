// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlatformLeaderboardsModel
#include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
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
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler*, "", "PlatformLeaderboardsModel/UploadScoreCompletionHandler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: PlatformLeaderboardsModel/UploadScoreCompletionHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformLeaderboardsModel::UploadScoreCompletionHandler : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11513FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformLeaderboardsModel::UploadScoreCompletionHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformLeaderboardsModel::UploadScoreCompletionHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(PlatformLeaderboardsModel/UploadScoreResult result)
    // Offset: 0x11507DC
    void Invoke(GlobalNamespace::PlatformLeaderboardsModel::UploadScoreResult result);
    // public System.IAsyncResult BeginInvoke(PlatformLeaderboardsModel/UploadScoreResult result, System.AsyncCallback callback, System.Object object)
    // Offset: 0x115140C
    System::IAsyncResult* BeginInvoke(GlobalNamespace::PlatformLeaderboardsModel::UploadScoreResult result, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1151498
    void EndInvoke(System::IAsyncResult* result);
  }; // PlatformLeaderboardsModel/UploadScoreCompletionHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler::*)(GlobalNamespace::PlatformLeaderboardsModel::UploadScoreResult)>(&GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/UploadScoreResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler::*)(GlobalNamespace::PlatformLeaderboardsModel::UploadScoreResult, System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/UploadScoreResult")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler::*)(System::IAsyncResult*)>(&GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
