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
  // Forward declaring type: MatchmakingAdminSnapshot
  class MatchmakingAdminSnapshot;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithMatchmakingAdminSnapshot
  class MessageWithMatchmakingAdminSnapshot : public Oculus::Platform::Message_1<Oculus::Platform::Models::MatchmakingAdminSnapshot*> {
    public:
    // Creating value type constructor for type: MessageWithMatchmakingAdminSnapshot
    MessageWithMatchmakingAdminSnapshot() noexcept {}
    // protected Oculus.Platform.Models.MatchmakingAdminSnapshot GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14D10F4
    Oculus::Platform::Models::MatchmakingAdminSnapshot* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14CAAF8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithMatchmakingAdminSnapshot* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithMatchmakingAdminSnapshot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithMatchmakingAdminSnapshot*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.MatchmakingAdminSnapshot GetMatchmakingAdminSnapshot()
    // Offset: 0x14D10B0
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.MatchmakingAdminSnapshot Message::GetMatchmakingAdminSnapshot()
    Oculus::Platform::Models::MatchmakingAdminSnapshot* GetMatchmakingAdminSnapshot();
  }; // Oculus.Platform.MessageWithMatchmakingAdminSnapshot
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithMatchmakingAdminSnapshot*, "Oculus.Platform", "MessageWithMatchmakingAdminSnapshot");
// Writing MetadataGetter for method: Oculus::Platform::MessageWithMatchmakingAdminSnapshot::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::MatchmakingAdminSnapshot* (Oculus::Platform::MessageWithMatchmakingAdminSnapshot::*)(System::IntPtr)>(&Oculus::Platform::MessageWithMatchmakingAdminSnapshot::GetDataFromMessage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithMatchmakingAdminSnapshot*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithMatchmakingAdminSnapshot::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithMatchmakingAdminSnapshot::GetMatchmakingAdminSnapshot
// Il2CppName: GetMatchmakingAdminSnapshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::MatchmakingAdminSnapshot* (Oculus::Platform::MessageWithMatchmakingAdminSnapshot::*)()>(&Oculus::Platform::MessageWithMatchmakingAdminSnapshot::GetMatchmakingAdminSnapshot)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithMatchmakingAdminSnapshot*), "GetMatchmakingAdminSnapshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
