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
  // Forward declaring type: CalApplicationFinalized
  class CalApplicationFinalized;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithCalApplicationFinalized
  class MessageWithCalApplicationFinalized : public Oculus::Platform::Message_1<Oculus::Platform::Models::CalApplicationFinalized*> {
    public:
    // Creating value type constructor for type: MessageWithCalApplicationFinalized
    MessageWithCalApplicationFinalized() noexcept {}
    // protected Oculus.Platform.Models.CalApplicationFinalized GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14CD204
    Oculus::Platform::Models::CalApplicationFinalized* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14CA378
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithCalApplicationFinalized* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithCalApplicationFinalized::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithCalApplicationFinalized*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.CalApplicationFinalized GetCalApplicationFinalized()
    // Offset: 0x14CD1C0
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.CalApplicationFinalized Message::GetCalApplicationFinalized()
    Oculus::Platform::Models::CalApplicationFinalized* GetCalApplicationFinalized();
  }; // Oculus.Platform.MessageWithCalApplicationFinalized
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithCalApplicationFinalized*, "Oculus.Platform", "MessageWithCalApplicationFinalized");
// Writing MetadataGetter for method: Oculus::Platform::MessageWithCalApplicationFinalized::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::CalApplicationFinalized* (Oculus::Platform::MessageWithCalApplicationFinalized::*)(System::IntPtr)>(&Oculus::Platform::MessageWithCalApplicationFinalized::GetDataFromMessage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithCalApplicationFinalized*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithCalApplicationFinalized::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithCalApplicationFinalized::GetCalApplicationFinalized
// Il2CppName: GetCalApplicationFinalized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::CalApplicationFinalized* (Oculus::Platform::MessageWithCalApplicationFinalized::*)()>(&Oculus::Platform::MessageWithCalApplicationFinalized::GetCalApplicationFinalized)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithCalApplicationFinalized*), "GetCalApplicationFinalized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
