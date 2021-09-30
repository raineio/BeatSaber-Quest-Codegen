// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Messaging.CADMessageBase
#include "System/Runtime/Remoting/Messaging/CADMessageBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: CADArgHolder
  class CADArgHolder;
  // Forward declaring type: IMethodReturnMessage
  class IMethodReturnMessage;
  // Forward declaring type: IMessage
  class IMessage;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.CADMethodReturnMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class CADMethodReturnMessage : public System::Runtime::Remoting::Messaging::CADMessageBase {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Object _returnValue
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* returnValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Runtime.Remoting.Messaging.CADArgHolder _exception
    // Size: 0x8
    // Offset: 0x40
    System::Runtime::Remoting::Messaging::CADArgHolder* exception;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::CADArgHolder*) == 0x8);
    // private System.Type[] _sig
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<System::Type*> sig;
    // Field size check
    static_assert(sizeof(::ArrayW<System::Type*>) == 0x8);
    public:
    // Get instance field reference: private System.Object _returnValue
    ::Il2CppObject*& dyn__returnValue();
    // Get instance field reference: private System.Runtime.Remoting.Messaging.CADArgHolder _exception
    System::Runtime::Remoting::Messaging::CADArgHolder*& dyn__exception();
    // Get instance field reference: private System.Type[] _sig
    ::ArrayW<System::Type*>& dyn__sig();
    // System.Int32 get_PropertiesCount()
    // Offset: 0x1C14D14
    int get_PropertiesCount();
    // System.Void .ctor(System.Runtime.Remoting.Messaging.IMethodReturnMessage retMsg)
    // Offset: 0x1C147DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CADMethodReturnMessage* New_ctor(System::Runtime::Remoting::Messaging::IMethodReturnMessage* retMsg) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::CADMethodReturnMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CADMethodReturnMessage*, creationType>(retMsg)));
    }
    // static System.Runtime.Remoting.Messaging.CADMethodReturnMessage Create(System.Runtime.Remoting.Messaging.IMessage callMsg)
    // Offset: 0x1C14758
    static System::Runtime::Remoting::Messaging::CADMethodReturnMessage* Create(System::Runtime::Remoting::Messaging::IMessage* callMsg);
    // System.Collections.ArrayList GetArguments()
    // Offset: 0x1C14B60
    System::Collections::ArrayList* GetArguments();
    // System.Object[] GetArgs(System.Collections.ArrayList args)
    // Offset: 0x1C14C40
    ::ArrayW<::Il2CppObject*> GetArgs(System::Collections::ArrayList* args);
    // System.Object GetReturnValue(System.Collections.ArrayList args)
    // Offset: 0x1C14C50
    ::Il2CppObject* GetReturnValue(System::Collections::ArrayList* args);
    // System.Exception GetException(System.Collections.ArrayList args)
    // Offset: 0x1C14C60
    System::Exception* GetException(System::Collections::ArrayList* args);
  }; // System.Runtime.Remoting.Messaging.CADMethodReturnMessage
  #pragma pack(pop)
  static check_size<sizeof(CADMethodReturnMessage), 72 + sizeof(::ArrayW<System::Type*>)> __System_Runtime_Remoting_Messaging_CADMethodReturnMessageSizeCheck;
  static_assert(sizeof(CADMethodReturnMessage) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::CADMethodReturnMessage*, "System.Runtime.Remoting.Messaging", "CADMethodReturnMessage");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMethodReturnMessage::get_PropertiesCount
// Il2CppName: get_PropertiesCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)()>(&System::Runtime::Remoting::Messaging::CADMethodReturnMessage::get_PropertiesCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMethodReturnMessage*), "get_PropertiesCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMethodReturnMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMethodReturnMessage::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::CADMethodReturnMessage* (*)(System::Runtime::Remoting::Messaging::IMessage*)>(&System::Runtime::Remoting::Messaging::CADMethodReturnMessage::Create)> {
  static const MethodInfo* get() {
    static auto* callMsg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMethodReturnMessage*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callMsg});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetArguments
// Il2CppName: GetArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ArrayList* (System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)()>(&System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetArguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMethodReturnMessage*), "GetArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetArgs
// Il2CppName: GetArgs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)(System::Collections::ArrayList*)>(&System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetArgs)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMethodReturnMessage*), "GetArgs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetReturnValue
// Il2CppName: GetReturnValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)(System::Collections::ArrayList*)>(&System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetReturnValue)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMethodReturnMessage*), "GetReturnValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetException
// Il2CppName: GetException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)(System::Collections::ArrayList*)>(&System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetException)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMethodReturnMessage*), "GetException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
