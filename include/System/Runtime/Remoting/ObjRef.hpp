// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.IObjectReference
#include "System/Runtime/Serialization/IObjectReference.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: IChannelInfo
  class IChannelInfo;
  // Forward declaring type: IRemotingTypeInfo
  class IRemotingTypeInfo;
  // Forward declaring type: IEnvoyInfo
  class IEnvoyInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.ObjRef
  // [ComVisibleAttribute] Offset: D7E0CC
  class ObjRef : public ::Il2CppObject/*, public System::Runtime::Serialization::IObjectReference, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // private System.Runtime.Remoting.IChannelInfo channel_info
    // Size: 0x8
    // Offset: 0x10
    System::Runtime::Remoting::IChannelInfo* channel_info;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::IChannelInfo*) == 0x8);
    // private System.String uri
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* uri;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Runtime.Remoting.IRemotingTypeInfo typeInfo
    // Size: 0x8
    // Offset: 0x20
    System::Runtime::Remoting::IRemotingTypeInfo* typeInfo;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::IRemotingTypeInfo*) == 0x8);
    // private System.Runtime.Remoting.IEnvoyInfo envoyInfo
    // Size: 0x8
    // Offset: 0x28
    System::Runtime::Remoting::IEnvoyInfo* envoyInfo;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::IEnvoyInfo*) == 0x8);
    // private System.Int32 flags
    // Size: 0x4
    // Offset: 0x30
    int flags;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: flags and: serverType
    char __padding4[0x4] = {};
    // private System.Type _serverType
    // Size: 0x8
    // Offset: 0x38
    System::Type* serverType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: ObjRef
    ObjRef(System::Runtime::Remoting::IChannelInfo* channel_info_ = {}, ::Il2CppString* uri_ = {}, System::Runtime::Remoting::IRemotingTypeInfo* typeInfo_ = {}, System::Runtime::Remoting::IEnvoyInfo* envoyInfo_ = {}, int flags_ = {}, System::Type* serverType_ = {}) noexcept : channel_info{channel_info_}, uri{uri_}, typeInfo{typeInfo_}, envoyInfo{envoyInfo_}, flags{flags_}, serverType{serverType_} {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::IObjectReference
    operator System::Runtime::Serialization::IObjectReference() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::IObjectReference*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Get static field: static private System.Int32 MarshalledObjectRef
    static int _get_MarshalledObjectRef();
    // Set static field: static private System.Int32 MarshalledObjectRef
    static void _set_MarshalledObjectRef(int value);
    // Get static field: static private System.Int32 WellKnowObjectRef
    static int _get_WellKnowObjectRef();
    // Set static field: static private System.Int32 WellKnowObjectRef
    static void _set_WellKnowObjectRef(int value);
    // System.Void .ctor(System.String uri, System.Runtime.Remoting.IChannelInfo cinfo)
    // Offset: 0x1A46504
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjRef* New_ctor(::Il2CppString* uri, System::Runtime::Remoting::IChannelInfo* cinfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::ObjRef::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjRef*, creationType>(uri, cinfo)));
    }
    // System.Runtime.Remoting.ObjRef DeserializeInTheCurrentDomain(System.Int32 domainId, System.Byte[] tInfo)
    // Offset: 0x1A39004
    System::Runtime::Remoting::ObjRef* DeserializeInTheCurrentDomain(int domainId, ::Array<uint8_t>* tInfo);
    // System.Byte[] SerializeType()
    // Offset: 0x1A3A188
    ::Array<uint8_t>* SerializeType();
    // System.Void .ctor(System.Type type, System.String url, System.Object remoteChannelData)
    // Offset: 0x1A4653C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjRef* New_ctor(System::Type* type, ::Il2CppString* url, ::Il2CppObject* remoteChannelData) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::ObjRef::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjRef*, creationType>(type, url, remoteChannelData)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1A4662C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjRef* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::ObjRef::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjRef*, creationType>(info, context)));
    }
    // System.Boolean get_IsReferenceToWellKnow()
    // Offset: 0x1A46A3C
    bool get_IsReferenceToWellKnow();
    // public System.Runtime.Remoting.IChannelInfo get_ChannelInfo()
    // Offset: 0x1A46AB4
    System::Runtime::Remoting::IChannelInfo* get_ChannelInfo();
    // public System.Runtime.Remoting.IEnvoyInfo get_EnvoyInfo()
    // Offset: 0x1A46ABC
    System::Runtime::Remoting::IEnvoyInfo* get_EnvoyInfo();
    // public System.Void set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo value)
    // Offset: 0x1A46AC4
    void set_EnvoyInfo(System::Runtime::Remoting::IEnvoyInfo* value);
    // public System.Runtime.Remoting.IRemotingTypeInfo get_TypeInfo()
    // Offset: 0x1A46ACC
    System::Runtime::Remoting::IRemotingTypeInfo* get_TypeInfo();
    // public System.Void set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo value)
    // Offset: 0x1A46AD4
    void set_TypeInfo(System::Runtime::Remoting::IRemotingTypeInfo* value);
    // public System.String get_URI()
    // Offset: 0x1A46ADC
    ::Il2CppString* get_URI();
    // public System.Void set_URI(System.String value)
    // Offset: 0x1A46AE4
    void set_URI(::Il2CppString* value);
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1A46AEC
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Object GetRealObject(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1A46C5C
    ::Il2CppObject* GetRealObject(System::Runtime::Serialization::StreamingContext context);
    // System.Void UpdateChannelInfo()
    // Offset: 0x1A464A4
    void UpdateChannelInfo();
    // System.Type get_ServerType()
    // Offset: 0x1A46D18
    System::Type* get_ServerType();
    // static private System.Void .cctor()
    // Offset: 0x1A46E60
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1A4647C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjRef* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::ObjRef::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjRef*, creationType>()));
    }
  }; // System.Runtime.Remoting.ObjRef
  #pragma pack(pop)
  static check_size<sizeof(ObjRef), 56 + sizeof(System::Type*)> __System_Runtime_Remoting_ObjRefSizeCheck;
  static_assert(sizeof(ObjRef) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ObjRef*, "System.Runtime.Remoting", "ObjRef");
// Writing MetadataGetter for method: System::Runtime::Remoting::ObjRef::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::ObjRef::DeserializeInTheCurrentDomain
// Il2CppName: DeserializeInTheCurrentDomain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::ObjRef* (System::Runtime::Remoting::ObjRef::*)(int, ::Array<uint8_t>*)>(&System::Runtime::Remoting::ObjRef::DeserializeInTheCurrentDomain)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ObjRef*), "DeserializeInTheCurrentDomain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ObjRef::SerializeType
// Il2CppName: SerializeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Runtime::Remoting::ObjRef::*)()>(&System::Runtime::Remoting::ObjRef::SerializeType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ObjRef*), "SerializeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ObjRef::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::ObjRef::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::ObjRef::get_IsReferenceToWellKnow
// Il2CppName: get_IsReferenceToWellKnow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::ObjRef::*)()>(&System::Runtime::Remoting::ObjRef::get_IsReferenceToWellKnow)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ObjRef*), "get_IsReferenceToWellKnow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ObjRef::get_ChannelInfo
// Il2CppName: get_ChannelInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::IChannelInfo* (System::Runtime::Remoting::ObjRef::*)()>(&System::Runtime::Remoting::ObjRef::get_ChannelInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ObjRef*), "get_ChannelInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ObjRef::get_EnvoyInfo
// Il2CppName: get_EnvoyInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::IEnvoyInfo* (System::Runtime::Remoting::ObjRef::*)()>(&System::Runtime::Remoting::ObjRef::get_EnvoyInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ObjRef*), "get_EnvoyInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ObjRef::set_EnvoyInfo
// Il2CppName: set_EnvoyInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ObjRef::*)(System::Runtime::Remoting::IEnvoyInfo*)>(&System::Runtime::Remoting::ObjRef::set_EnvoyInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ObjRef*), "set_EnvoyInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Remoting::IEnvoyInfo*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ObjRef::get_TypeInfo
// Il2CppName: get_TypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::IRemotingTypeInfo* (System::Runtime::Remoting::ObjRef::*)()>(&System::Runtime::Remoting::ObjRef::get_TypeInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ObjRef*), "get_TypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ObjRef::set_TypeInfo
// Il2CppName: set_TypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ObjRef::*)(System::Runtime::Remoting::IRemotingTypeInfo*)>(&System::Runtime::Remoting::ObjRef::set_TypeInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ObjRef*), "set_TypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Remoting::IRemotingTypeInfo*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ObjRef::get_URI
// Il2CppName: get_URI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::ObjRef::*)()>(&System::Runtime::Remoting::ObjRef::get_URI)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ObjRef*), "get_URI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ObjRef::set_URI
// Il2CppName: set_URI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ObjRef::*)(::Il2CppString*)>(&System::Runtime::Remoting::ObjRef::set_URI)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ObjRef*), "set_URI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ObjRef::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ObjRef::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Remoting::ObjRef::GetObjectData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ObjRef*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ObjRef::GetRealObject
// Il2CppName: GetRealObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::ObjRef::*)(System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Remoting::ObjRef::GetRealObject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ObjRef*), "GetRealObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ObjRef::UpdateChannelInfo
// Il2CppName: UpdateChannelInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ObjRef::*)()>(&System::Runtime::Remoting::ObjRef::UpdateChannelInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ObjRef*), "UpdateChannelInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ObjRef::get_ServerType
// Il2CppName: get_ServerType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Runtime::Remoting::ObjRef::*)()>(&System::Runtime::Remoting::ObjRef::get_ServerType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ObjRef*), "get_ServerType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ObjRef::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Remoting::ObjRef::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ObjRef*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ObjRef::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
