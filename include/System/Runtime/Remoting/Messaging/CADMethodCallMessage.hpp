// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.CADMessageBase
#include "System/Runtime/Remoting/Messaging/CADMessageBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMethodCallMessage
  class IMethodCallMessage;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.CADMethodCallMessage
  class CADMethodCallMessage : public System::Runtime::Remoting::Messaging::CADMessageBase {
    public:
    // private System.String _uri
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* uri;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: CADMethodCallMessage
    CADMethodCallMessage(::Il2CppString* uri_ = {}) noexcept : uri{uri_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return uri;
    }
    // System.String get_Uri()
    // Offset: 0x1A396DC
    ::Il2CppString* get_Uri();
    // static System.Runtime.Remoting.Messaging.CADMethodCallMessage Create(System.Runtime.Remoting.Messaging.IMessage callMsg)
    // Offset: 0x1A396E4
    static System::Runtime::Remoting::Messaging::CADMethodCallMessage* Create(System::Runtime::Remoting::Messaging::IMessage* callMsg);
    // System.Void .ctor(System.Runtime.Remoting.Messaging.IMethodCallMessage callMsg)
    // Offset: 0x1A39768
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CADMethodCallMessage* New_ctor(System::Runtime::Remoting::Messaging::IMethodCallMessage* callMsg) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::CADMethodCallMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CADMethodCallMessage*, creationType>(callMsg)));
    }
    // System.Collections.ArrayList GetArguments()
    // Offset: 0x1A39970
    System::Collections::ArrayList* GetArguments();
    // System.Object[] GetArgs(System.Collections.ArrayList args)
    // Offset: 0x1A39A50
    ::Array<::Il2CppObject*>* GetArgs(System::Collections::ArrayList* args);
    // System.Int32 get_PropertiesCount()
    // Offset: 0x1A39A60
    int get_PropertiesCount();
  }; // System.Runtime.Remoting.Messaging.CADMethodCallMessage
  #pragma pack(pop)
  static check_size<sizeof(CADMethodCallMessage), 56 + sizeof(::Il2CppString*)> __System_Runtime_Remoting_Messaging_CADMethodCallMessageSizeCheck;
  static_assert(sizeof(CADMethodCallMessage) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::CADMethodCallMessage*, "System.Runtime.Remoting.Messaging", "CADMethodCallMessage");
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMethodCallMessage::get_Uri
// Il2CppName: get_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::Messaging::CADMethodCallMessage::*)()>(&System::Runtime::Remoting::Messaging::CADMethodCallMessage::get_Uri)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMethodCallMessage*), "get_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMethodCallMessage::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::CADMethodCallMessage* (*)(System::Runtime::Remoting::Messaging::IMessage*)>(&System::Runtime::Remoting::Messaging::CADMethodCallMessage::Create)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMethodCallMessage*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Remoting::Messaging::IMessage*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMethodCallMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMethodCallMessage::GetArguments
// Il2CppName: GetArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ArrayList* (System::Runtime::Remoting::Messaging::CADMethodCallMessage::*)()>(&System::Runtime::Remoting::Messaging::CADMethodCallMessage::GetArguments)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMethodCallMessage*), "GetArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMethodCallMessage::GetArgs
// Il2CppName: GetArgs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Runtime::Remoting::Messaging::CADMethodCallMessage::*)(System::Collections::ArrayList*)>(&System::Runtime::Remoting::Messaging::CADMethodCallMessage::GetArgs)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMethodCallMessage*), "GetArgs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::ArrayList*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMethodCallMessage::get_PropertiesCount
// Il2CppName: get_PropertiesCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Remoting::Messaging::CADMethodCallMessage::*)()>(&System::Runtime::Remoting::Messaging::CADMethodCallMessage::get_PropertiesCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMethodCallMessage*), "get_PropertiesCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
