// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.IllogicalCallContext
  // [TokenAttribute] Offset: FFFFFFFF
  class IllogicalCallContext : public ::Il2CppObject {
    public:
    // Nested type: System::Runtime::Remoting::Messaging::IllogicalCallContext::Reader
    struct Reader;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Collections.Hashtable m_Datastore
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Hashtable* m_Datastore;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // private System.Object m_HostContext
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* m_HostContext;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: private System.Collections.Hashtable m_Datastore
    System::Collections::Hashtable*& dyn_m_Datastore();
    // Get instance field reference: private System.Object m_HostContext
    ::Il2CppObject*& dyn_m_HostContext();
    // private System.Collections.Hashtable get_Datastore()
    // Offset: 0x1C18328
    System::Collections::Hashtable* get_Datastore();
    // System.Object get_HostContext()
    // Offset: 0x1C18394
    ::Il2CppObject* get_HostContext();
    // System.Void set_HostContext(System.Object value)
    // Offset: 0x1C1839C
    void set_HostContext(::Il2CppObject* value);
    // System.Boolean get_HasUserData()
    // Offset: 0x1C183A4
    bool get_HasUserData();
    // public System.Void FreeNamedDataSlot(System.String name)
    // Offset: 0x1C150C0
    void FreeNamedDataSlot(::Il2CppString* name);
    // public System.Object GetData(System.String name)
    // Offset: 0x1C183D4
    ::Il2CppObject* GetData(::Il2CppString* name);
    // public System.Void SetData(System.String name, System.Object data)
    // Offset: 0x1C15080
    void SetData(::Il2CppString* name, ::Il2CppObject* data);
    // public System.Runtime.Remoting.Messaging.IllogicalCallContext CreateCopy()
    // Offset: 0x1C1840C
    System::Runtime::Remoting::Messaging::IllogicalCallContext* CreateCopy();
    // public System.Void .ctor()
    // Offset: 0x1C18664
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IllogicalCallContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::IllogicalCallContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IllogicalCallContext*, creationType>()));
    }
  }; // System.Runtime.Remoting.Messaging.IllogicalCallContext
  #pragma pack(pop)
  static check_size<sizeof(IllogicalCallContext), 24 + sizeof(::Il2CppObject*)> __System_Runtime_Remoting_Messaging_IllogicalCallContextSizeCheck;
  static_assert(sizeof(IllogicalCallContext) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::IllogicalCallContext*, "System.Runtime.Remoting.Messaging", "IllogicalCallContext");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IllogicalCallContext::get_Datastore
// Il2CppName: get_Datastore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Hashtable* (System::Runtime::Remoting::Messaging::IllogicalCallContext::*)()>(&System::Runtime::Remoting::Messaging::IllogicalCallContext::get_Datastore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IllogicalCallContext*), "get_Datastore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IllogicalCallContext::get_HostContext
// Il2CppName: get_HostContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::IllogicalCallContext::*)()>(&System::Runtime::Remoting::Messaging::IllogicalCallContext::get_HostContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IllogicalCallContext*), "get_HostContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IllogicalCallContext::set_HostContext
// Il2CppName: set_HostContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::IllogicalCallContext::*)(::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::IllogicalCallContext::set_HostContext)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IllogicalCallContext*), "set_HostContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IllogicalCallContext::get_HasUserData
// Il2CppName: get_HasUserData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::IllogicalCallContext::*)()>(&System::Runtime::Remoting::Messaging::IllogicalCallContext::get_HasUserData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IllogicalCallContext*), "get_HasUserData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IllogicalCallContext::FreeNamedDataSlot
// Il2CppName: FreeNamedDataSlot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::IllogicalCallContext::*)(::Il2CppString*)>(&System::Runtime::Remoting::Messaging::IllogicalCallContext::FreeNamedDataSlot)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IllogicalCallContext*), "FreeNamedDataSlot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IllogicalCallContext::GetData
// Il2CppName: GetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::IllogicalCallContext::*)(::Il2CppString*)>(&System::Runtime::Remoting::Messaging::IllogicalCallContext::GetData)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IllogicalCallContext*), "GetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IllogicalCallContext::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::IllogicalCallContext::*)(::Il2CppString*, ::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::IllogicalCallContext::SetData)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IllogicalCallContext*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, data});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IllogicalCallContext::CreateCopy
// Il2CppName: CreateCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IllogicalCallContext* (System::Runtime::Remoting::Messaging::IllogicalCallContext::*)()>(&System::Runtime::Remoting::Messaging::IllogicalCallContext::CreateCopy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IllogicalCallContext*), "CreateCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IllogicalCallContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
