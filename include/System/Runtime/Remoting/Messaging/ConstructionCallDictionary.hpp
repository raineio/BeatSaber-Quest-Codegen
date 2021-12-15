// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Messaging.MessageDictionary
#include "System/Runtime/Remoting/Messaging/MessageDictionary.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IConstructionCallMessage
  class IConstructionCallMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: ConstructionCallDictionary
  class ConstructionCallDictionary;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Runtime::Remoting::Messaging::ConstructionCallDictionary);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ConstructionCallDictionary*, "System.Runtime.Remoting.Messaging", "ConstructionCallDictionary");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.ConstructionCallDictionary
  // [TokenAttribute] Offset: FFFFFFFF
  class ConstructionCallDictionary : public System::Runtime::Remoting::Messaging::MessageDictionary {
    public:
    // Get static field: static public System.String[] InternalKeys
    static ::ArrayW<::Il2CppString*> _get_InternalKeys();
    // Set static field: static public System.String[] InternalKeys
    static void _set_InternalKeys(::ArrayW<::Il2CppString*> value);
    // public System.Void .ctor(System.Runtime.Remoting.Activation.IConstructionCallMessage message)
    // Offset: 0x1C51530
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstructionCallDictionary* New_ctor(System::Runtime::Remoting::Activation::IConstructionCallMessage* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::ConstructionCallDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstructionCallDictionary*, creationType>(message)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1C530E8
    static void _cctor();
    // protected override System.Object GetMethodProperty(System.String key)
    // Offset: 0x1C5228C
    // Implemented from: System.Runtime.Remoting.Messaging.MessageDictionary
    // Base method: System.Object MessageDictionary::GetMethodProperty(System.String key)
    ::Il2CppObject* GetMethodProperty(::Il2CppString* key);
    // protected override System.Void SetMethodProperty(System.String key, System.Object value)
    // Offset: 0x1C52C34
    // Implemented from: System.Runtime.Remoting.Messaging.MessageDictionary
    // Base method: System.Void MessageDictionary::SetMethodProperty(System.String key, System.Object value)
    void SetMethodProperty(::Il2CppString* key, ::Il2CppObject* value);
  }; // System.Runtime.Remoting.Messaging.ConstructionCallDictionary
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionCallDictionary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionCallDictionary::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Remoting::Messaging::ConstructionCallDictionary::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ConstructionCallDictionary*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionCallDictionary::GetMethodProperty
// Il2CppName: GetMethodProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::ConstructionCallDictionary::*)(::Il2CppString*)>(&System::Runtime::Remoting::Messaging::ConstructionCallDictionary::GetMethodProperty)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ConstructionCallDictionary*), "GetMethodProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionCallDictionary::SetMethodProperty
// Il2CppName: SetMethodProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::ConstructionCallDictionary::*)(::Il2CppString*, ::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::ConstructionCallDictionary::SetMethodProperty)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ConstructionCallDictionary*), "SetMethodProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
