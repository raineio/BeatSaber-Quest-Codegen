// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMethodCallMessage
  class IMethodCallMessage;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: MemoryStream
  class MemoryStream;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Forward declaring type: CADSerializer
  class CADSerializer;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Runtime::Remoting::Channels::CADSerializer);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::CADSerializer*, "System.Runtime.Remoting.Channels", "CADSerializer");
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Channels.CADSerializer
  // [TokenAttribute] Offset: FFFFFFFF
  class CADSerializer : public ::Il2CppObject {
    public:
    // static System.Runtime.Remoting.Messaging.IMessage DeserializeMessage(System.IO.MemoryStream mem, System.Runtime.Remoting.Messaging.IMethodCallMessage msg)
    // Offset: 0x16283C0
    static System::Runtime::Remoting::Messaging::IMessage* DeserializeMessage(System::IO::MemoryStream* mem, System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);
    // static System.IO.MemoryStream SerializeMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x1628420
    static System::IO::MemoryStream* SerializeMessage(System::Runtime::Remoting::Messaging::IMessage* msg);
    // static System.Object DeserializeObjectSafe(System.Byte[] mem)
    // Offset: 0x16284F8
    static ::Il2CppObject* DeserializeObjectSafe(::ArrayW<uint8_t> mem);
    // static System.IO.MemoryStream SerializeObject(System.Object obj)
    // Offset: 0x162861C
    static System::IO::MemoryStream* SerializeObject(::Il2CppObject* obj);
    // static System.Object DeserializeObject(System.IO.MemoryStream mem)
    // Offset: 0x1628590
    static ::Il2CppObject* DeserializeObject(System::IO::MemoryStream* mem);
  }; // System.Runtime.Remoting.Channels.CADSerializer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::CADSerializer::DeserializeMessage
// Il2CppName: DeserializeMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessage* (*)(System::IO::MemoryStream*, System::Runtime::Remoting::Messaging::IMethodCallMessage*)>(&System::Runtime::Remoting::Channels::CADSerializer::DeserializeMessage)> {
  static const MethodInfo* get() {
    static auto* mem = &::il2cpp_utils::GetClassFromName("System.IO", "MemoryStream")->byval_arg;
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMethodCallMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::CADSerializer*), "DeserializeMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mem, msg});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::CADSerializer::SerializeMessage
// Il2CppName: SerializeMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::MemoryStream* (*)(System::Runtime::Remoting::Messaging::IMessage*)>(&System::Runtime::Remoting::Channels::CADSerializer::SerializeMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::CADSerializer*), "SerializeMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::CADSerializer::DeserializeObjectSafe
// Il2CppName: DeserializeObjectSafe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<uint8_t>)>(&System::Runtime::Remoting::Channels::CADSerializer::DeserializeObjectSafe)> {
  static const MethodInfo* get() {
    static auto* mem = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::CADSerializer*), "DeserializeObjectSafe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mem});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::CADSerializer::SerializeObject
// Il2CppName: SerializeObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::MemoryStream* (*)(::Il2CppObject*)>(&System::Runtime::Remoting::Channels::CADSerializer::SerializeObject)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::CADSerializer*), "SerializeObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::CADSerializer::DeserializeObject
// Il2CppName: DeserializeObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(System::IO::MemoryStream*)>(&System::Runtime::Remoting::Channels::CADSerializer::DeserializeObject)> {
  static const MethodInfo* get() {
    static auto* mem = &::il2cpp_utils::GetClassFromName("System.IO", "MemoryStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::CADSerializer*), "DeserializeObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mem});
  }
};
