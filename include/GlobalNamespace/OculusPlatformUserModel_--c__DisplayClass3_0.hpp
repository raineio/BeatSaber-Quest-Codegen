// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusPlatformUserModel
#include "GlobalNamespace/OculusPlatformUserModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserList
  class UserList;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: <>c__DisplayClass3_0
  class $$c__DisplayClass3_0;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass3_0*, "", "OculusPlatformUserModel/<>c__DisplayClass3_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OculusPlatformUserModel/<>c__DisplayClass3_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OculusPlatformUserModel::$$c__DisplayClass3_0 : public ::Il2CppObject {
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
    // public System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IReadOnlyList`1<System.String>> tcs
    // Size: 0x8
    // Offset: 0x10
    System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*>* tcs;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*>*) == 0x8);
    // public OculusPlatformUserModel <>4__this
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::OculusPlatformUserModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusPlatformUserModel*) == 0x8);
    public:
    // Get instance field reference: public System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IReadOnlyList`1<System.String>> tcs
    System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*>*& dyn_tcs();
    // Get instance field reference: public OculusPlatformUserModel <>4__this
    GlobalNamespace::OculusPlatformUserModel*& dyn_$$4__this();
    // System.Void <GetUserFriendsUserIds>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.UserList> message)
    // Offset: 0x136FF5C
    void $GetUserFriendsUserIds$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::UserList*>* message);
    // public System.Void .ctor()
    // Offset: 0x136FF54
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformUserModel::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformUserModel::$$c__DisplayClass3_0*, creationType>()));
    }
  }; // OculusPlatformUserModel/<>c__DisplayClass3_0
  #pragma pack(pop)
  static check_size<sizeof(OculusPlatformUserModel::$$c__DisplayClass3_0), 24 + sizeof(GlobalNamespace::OculusPlatformUserModel*)> __GlobalNamespace_OculusPlatformUserModel_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(OculusPlatformUserModel::$$c__DisplayClass3_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass3_0::$GetUserFriendsUserIds$b__0
// Il2CppName: <GetUserFriendsUserIds>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass3_0::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::UserList*>*)>(&GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass3_0::$GetUserFriendsUserIds$b__0)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "UserList")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass3_0*), "<GetUserFriendsUserIds>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass3_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
