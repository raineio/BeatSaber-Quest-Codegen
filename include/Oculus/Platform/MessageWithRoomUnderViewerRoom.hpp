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
  // Forward declaring type: Room
  class Room;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithRoomUnderViewerRoom
  class MessageWithRoomUnderViewerRoom : public Oculus::Platform::Message_1<Oculus::Platform::Models::Room*> {
    public:
    // Creating value type constructor for type: MessageWithRoomUnderViewerRoom
    MessageWithRoomUnderViewerRoom() noexcept {}
    // protected Oculus.Platform.Models.Room GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14D4A98
    Oculus::Platform::Models::Room* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14CB0F8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithRoomUnderViewerRoom* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithRoomUnderViewerRoom::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithRoomUnderViewerRoom*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.Room GetRoom()
    // Offset: 0x14D4A54
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.Room Message::GetRoom()
    Oculus::Platform::Models::Room* GetRoom();
  }; // Oculus.Platform.MessageWithRoomUnderViewerRoom
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithRoomUnderViewerRoom*, "Oculus.Platform", "MessageWithRoomUnderViewerRoom");
// Writing MetadataGetter for method: Oculus::Platform::MessageWithRoomUnderViewerRoom::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::Room* (Oculus::Platform::MessageWithRoomUnderViewerRoom::*)(System::IntPtr)>(&Oculus::Platform::MessageWithRoomUnderViewerRoom::GetDataFromMessage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithRoomUnderViewerRoom*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithRoomUnderViewerRoom::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithRoomUnderViewerRoom::GetRoom
// Il2CppName: GetRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::Room* (Oculus::Platform::MessageWithRoomUnderViewerRoom::*)()>(&Oculus::Platform::MessageWithRoomUnderViewerRoom::GetRoom)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithRoomUnderViewerRoom*), "GetRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
