// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusPlatformLeaderboardsHandler
#include "GlobalNamespace/OculusPlatformLeaderboardsHandler.hpp"
// Including type: PlatformLeaderboardsModel
#include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LeaderboardEntryList
  class LeaderboardEntryList;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass5_0*, "", "OculusPlatformLeaderboardsHandler/<>c__DisplayClass5_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OculusPlatformLeaderboardsHandler/<>c__DisplayClass5_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OculusPlatformLeaderboardsHandler::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public OculusPlatformLeaderboardsHandler <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::OculusPlatformLeaderboardsHandler* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusPlatformLeaderboardsHandler*) == 0x8);
    // public PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler*) == 0x8);
    // public System.String referencePlayerId
    // Size: 0x8
    // Offset: 0x20
    ::StringW referencePlayerId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public OculusPlatformLeaderboardsHandler <>4__this
    GlobalNamespace::OculusPlatformLeaderboardsHandler*& dyn_$$4__this();
    // Get instance field reference: public PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler
    GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler*& dyn_completionHandler();
    // Get instance field reference: public System.String referencePlayerId
    ::StringW& dyn_referencePlayerId();
    // System.Void <GetScores>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.LeaderboardEntryList> message)
    // Offset: 0x136F694
    void $GetScores$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::LeaderboardEntryList*>* message);
    // public System.Void .ctor()
    // Offset: 0x136F47C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformLeaderboardsHandler::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformLeaderboardsHandler::$$c__DisplayClass5_0*, creationType>()));
    }
  }; // OculusPlatformLeaderboardsHandler/<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(OculusPlatformLeaderboardsHandler::$$c__DisplayClass5_0), 32 + sizeof(::StringW)> __GlobalNamespace_OculusPlatformLeaderboardsHandler_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(OculusPlatformLeaderboardsHandler::$$c__DisplayClass5_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass5_0::$GetScores$b__0
// Il2CppName: <GetScores>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass5_0::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::LeaderboardEntryList*>*)>(&GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass5_0::$GetScores$b__0)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "LeaderboardEntryList")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass5_0*), "<GetScores>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
