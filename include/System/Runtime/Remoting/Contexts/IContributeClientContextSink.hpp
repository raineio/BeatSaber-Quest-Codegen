// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: IContributeClientContextSink
  class IContributeClientContextSink;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Runtime::Remoting::Contexts::IContributeClientContextSink);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::IContributeClientContextSink*, "System.Runtime.Remoting.Contexts", "IContributeClientContextSink");
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Contexts.IContributeClientContextSink
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: EA12EC
  class IContributeClientContextSink {
    public:
    // public System.Runtime.Remoting.Messaging.IMessageSink GetClientContextSink(System.Runtime.Remoting.Messaging.IMessageSink nextSink)
    // Offset: 0xFFFFFFFF
    System::Runtime::Remoting::Messaging::IMessageSink* GetClientContextSink(System::Runtime::Remoting::Messaging::IMessageSink* nextSink);
  }; // System.Runtime.Remoting.Contexts.IContributeClientContextSink
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Contexts::IContributeClientContextSink::GetClientContextSink
// Il2CppName: GetClientContextSink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageSink* (System::Runtime::Remoting::Contexts::IContributeClientContextSink::*)(System::Runtime::Remoting::Messaging::IMessageSink*)>(&System::Runtime::Remoting::Contexts::IContributeClientContextSink::GetClientContextSink)> {
  static const MethodInfo* get() {
    static auto* nextSink = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessageSink")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Contexts::IContributeClientContextSink*), "GetClientContextSink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nextSink});
  }
};
