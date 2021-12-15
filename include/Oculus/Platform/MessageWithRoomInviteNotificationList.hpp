// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: RoomInviteNotificationList
  class RoomInviteNotificationList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithRoomInviteNotificationList
  class MessageWithRoomInviteNotificationList;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Oculus::Platform::MessageWithRoomInviteNotificationList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithRoomInviteNotificationList*, "Oculus.Platform", "MessageWithRoomInviteNotificationList");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithRoomInviteNotificationList
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithRoomInviteNotificationList : public Oculus::Platform::Message_1<Oculus::Platform::Models::RoomInviteNotificationList*> {
    public:
    // protected Oculus.Platform.Models.RoomInviteNotificationList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x175F03C
    Oculus::Platform::Models::RoomInviteNotificationList* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x1755B9C
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithRoomInviteNotificationList* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithRoomInviteNotificationList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithRoomInviteNotificationList*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.RoomInviteNotificationList GetRoomInviteNotificationList()
    // Offset: 0x175EFF8
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.RoomInviteNotificationList Message::GetRoomInviteNotificationList()
    Oculus::Platform::Models::RoomInviteNotificationList* GetRoomInviteNotificationList();
  }; // Oculus.Platform.MessageWithRoomInviteNotificationList
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithRoomInviteNotificationList::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::RoomInviteNotificationList* (Oculus::Platform::MessageWithRoomInviteNotificationList::*)(System::IntPtr)>(&Oculus::Platform::MessageWithRoomInviteNotificationList::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithRoomInviteNotificationList*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithRoomInviteNotificationList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithRoomInviteNotificationList::GetRoomInviteNotificationList
// Il2CppName: GetRoomInviteNotificationList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::RoomInviteNotificationList* (Oculus::Platform::MessageWithRoomInviteNotificationList::*)()>(&Oculus::Platform::MessageWithRoomInviteNotificationList::GetRoomInviteNotificationList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithRoomInviteNotificationList*), "GetRoomInviteNotificationList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
