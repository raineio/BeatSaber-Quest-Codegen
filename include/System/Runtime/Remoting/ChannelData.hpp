// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ChannelData
  class ChannelData;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Runtime::Remoting::ChannelData);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ChannelData*, "System.Runtime.Remoting", "ChannelData");
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.ChannelData
  // [TokenAttribute] Offset: FFFFFFFF
  class ChannelData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // System.String Ref
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Ref;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String Type
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Type;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String Id
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* Id;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String DelayLoadAsClientChannel
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* DelayLoadAsClientChannel;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.ArrayList _serverProviders
    // Size: 0x8
    // Offset: 0x30
    System::Collections::ArrayList* serverProviders;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Collections.ArrayList _clientProviders
    // Size: 0x8
    // Offset: 0x38
    System::Collections::ArrayList* clientProviders;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Collections.Hashtable _customProperties
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Hashtable* customProperties;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    public:
    // Get instance field reference: System.String Ref
    ::Il2CppString*& dyn_Ref();
    // Get instance field reference: System.String Type
    ::Il2CppString*& dyn_Type();
    // Get instance field reference: System.String Id
    ::Il2CppString*& dyn_Id();
    // Get instance field reference: System.String DelayLoadAsClientChannel
    ::Il2CppString*& dyn_DelayLoadAsClientChannel();
    // Get instance field reference: private System.Collections.ArrayList _serverProviders
    System::Collections::ArrayList*& dyn__serverProviders();
    // Get instance field reference: private System.Collections.ArrayList _clientProviders
    System::Collections::ArrayList*& dyn__clientProviders();
    // Get instance field reference: private System.Collections.Hashtable _customProperties
    System::Collections::Hashtable*& dyn__customProperties();
    // System.Collections.ArrayList get_ServerProviders()
    // Offset: 0x1627458
    System::Collections::ArrayList* get_ServerProviders();
    // public System.Collections.ArrayList get_ClientProviders()
    // Offset: 0x16274C4
    System::Collections::ArrayList* get_ClientProviders();
    // public System.Collections.Hashtable get_CustomProperties()
    // Offset: 0x1627530
    System::Collections::Hashtable* get_CustomProperties();
    // public System.Void CopyFrom(System.Runtime.Remoting.ChannelData other)
    // Offset: 0x162759C
    void CopyFrom(System::Runtime::Remoting::ChannelData* other);
    // public System.Void .ctor()
    // Offset: 0x1627DF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChannelData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::ChannelData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChannelData*, creationType>()));
    }
  }; // System.Runtime.Remoting.ChannelData
  #pragma pack(pop)
  static check_size<sizeof(ChannelData), 64 + sizeof(System::Collections::Hashtable*)> __System_Runtime_Remoting_ChannelDataSizeCheck;
  static_assert(sizeof(ChannelData) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::ChannelData::get_ServerProviders
// Il2CppName: get_ServerProviders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ArrayList* (System::Runtime::Remoting::ChannelData::*)()>(&System::Runtime::Remoting::ChannelData::get_ServerProviders)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ChannelData*), "get_ServerProviders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ChannelData::get_ClientProviders
// Il2CppName: get_ClientProviders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ArrayList* (System::Runtime::Remoting::ChannelData::*)()>(&System::Runtime::Remoting::ChannelData::get_ClientProviders)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ChannelData*), "get_ClientProviders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ChannelData::get_CustomProperties
// Il2CppName: get_CustomProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Hashtable* (System::Runtime::Remoting::ChannelData::*)()>(&System::Runtime::Remoting::ChannelData::get_CustomProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ChannelData*), "get_CustomProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ChannelData::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ChannelData::*)(System::Runtime::Remoting::ChannelData*)>(&System::Runtime::Remoting::ChannelData::CopyFrom)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "ChannelData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ChannelData*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ChannelData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
