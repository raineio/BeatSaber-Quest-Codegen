// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserReportID
  class UserReportID;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithUserReportID
  class MessageWithUserReportID : public Oculus::Platform::Message_1<Oculus::Platform::Models::UserReportID*> {
    public:
    // Creating value type constructor for type: MessageWithUserReportID
    MessageWithUserReportID() noexcept {}
    // protected Oculus.Platform.Models.UserReportID GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14D5E7C
    Oculus::Platform::Models::UserReportID* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14D5DD8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithUserReportID* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithUserReportID::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithUserReportID*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.UserReportID GetUserReportID()
    // Offset: 0x14D5E38
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.UserReportID Message::GetUserReportID()
    Oculus::Platform::Models::UserReportID* GetUserReportID();
  }; // Oculus.Platform.MessageWithUserReportID
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithUserReportID*, "Oculus.Platform", "MessageWithUserReportID");
// Writing MetadataGetter for method: Oculus::Platform::MessageWithUserReportID::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::UserReportID* (Oculus::Platform::MessageWithUserReportID::*)(System::IntPtr)>(&Oculus::Platform::MessageWithUserReportID::GetDataFromMessage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithUserReportID*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithUserReportID::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithUserReportID::GetUserReportID
// Il2CppName: GetUserReportID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::UserReportID* (Oculus::Platform::MessageWithUserReportID::*)()>(&Oculus::Platform::MessageWithUserReportID::GetUserReportID)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithUserReportID*), "GetUserReportID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
