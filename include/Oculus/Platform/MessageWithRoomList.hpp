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
  // Forward declaring type: RoomList
  class RoomList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithRoomList
  class MessageWithRoomList : public Oculus::Platform::Message_1<Oculus::Platform::Models::RoomList*> {
    public:
    // Creating value type constructor for type: MessageWithRoomList
    MessageWithRoomList() noexcept {}
    // protected Oculus.Platform.Models.RoomList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14D46D8
    Oculus::Platform::Models::RoomList* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14CB158
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithRoomList* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithRoomList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithRoomList*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.RoomList GetRoomList()
    // Offset: 0x14D4694
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.RoomList Message::GetRoomList()
    Oculus::Platform::Models::RoomList* GetRoomList();
  }; // Oculus.Platform.MessageWithRoomList
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithRoomList*, "Oculus.Platform", "MessageWithRoomList");
// Writing MetadataGetter for method: Oculus::Platform::MessageWithRoomList::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::RoomList* (Oculus::Platform::MessageWithRoomList::*)(System::IntPtr)>(&Oculus::Platform::MessageWithRoomList::GetDataFromMessage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithRoomList*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithRoomList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithRoomList::GetRoomList
// Il2CppName: GetRoomList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::RoomList* (Oculus::Platform::MessageWithRoomList::*)()>(&Oculus::Platform::MessageWithRoomList::GetRoomList)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithRoomList*), "GetRoomList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
