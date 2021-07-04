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
  // Forward declaring type: CalApplicationProposed
  class CalApplicationProposed;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithCalApplicationProposed
  class MessageWithCalApplicationProposed : public Oculus::Platform::Message_1<Oculus::Platform::Models::CalApplicationProposed*> {
    public:
    // Creating value type constructor for type: MessageWithCalApplicationProposed
    MessageWithCalApplicationProposed() noexcept {}
    // protected Oculus.Platform.Models.CalApplicationProposed GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14CD38C
    Oculus::Platform::Models::CalApplicationProposed* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14CA3D8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithCalApplicationProposed* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithCalApplicationProposed::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithCalApplicationProposed*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.CalApplicationProposed GetCalApplicationProposed()
    // Offset: 0x14CD348
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.CalApplicationProposed Message::GetCalApplicationProposed()
    Oculus::Platform::Models::CalApplicationProposed* GetCalApplicationProposed();
  }; // Oculus.Platform.MessageWithCalApplicationProposed
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithCalApplicationProposed*, "Oculus.Platform", "MessageWithCalApplicationProposed");
// Writing MetadataGetter for method: Oculus::Platform::MessageWithCalApplicationProposed::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::CalApplicationProposed* (Oculus::Platform::MessageWithCalApplicationProposed::*)(System::IntPtr)>(&Oculus::Platform::MessageWithCalApplicationProposed::GetDataFromMessage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithCalApplicationProposed*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithCalApplicationProposed::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithCalApplicationProposed::GetCalApplicationProposed
// Il2CppName: GetCalApplicationProposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::CalApplicationProposed* (Oculus::Platform::MessageWithCalApplicationProposed::*)()>(&Oculus::Platform::MessageWithCalApplicationProposed::GetCalApplicationProposed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithCalApplicationProposed*), "GetCalApplicationProposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
