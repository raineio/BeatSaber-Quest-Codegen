// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.ReadState
#include "System/Net/ReadState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: WebConnectionData
  class WebConnectionData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Net::WebConnectionData);
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebConnectionData*, "System.Net", "WebConnectionData");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebConnectionData
  // [TokenAttribute] Offset: FFFFFFFF
  class WebConnectionData : public ::Il2CppObject {
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
    // private System.Net.HttpWebRequest _request
    // Size: 0x8
    // Offset: 0x10
    System::Net::HttpWebRequest* request;
    // Field size check
    static_assert(sizeof(System::Net::HttpWebRequest*) == 0x8);
    // public System.Int32 StatusCode
    // Size: 0x4
    // Offset: 0x18
    int StatusCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: StatusCode and: StatusDescription
    char __padding1[0x4] = {};
    // public System.String StatusDescription
    // Size: 0x8
    // Offset: 0x20
    ::StringW StatusDescription;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Net.WebHeaderCollection Headers
    // Size: 0x8
    // Offset: 0x28
    System::Net::WebHeaderCollection* Headers;
    // Field size check
    static_assert(sizeof(System::Net::WebHeaderCollection*) == 0x8);
    // public System.Version Version
    // Size: 0x8
    // Offset: 0x30
    System::Version* Version;
    // Field size check
    static_assert(sizeof(System::Version*) == 0x8);
    // public System.Version ProxyVersion
    // Size: 0x8
    // Offset: 0x38
    System::Version* ProxyVersion;
    // Field size check
    static_assert(sizeof(System::Version*) == 0x8);
    // public System.IO.Stream stream
    // Size: 0x8
    // Offset: 0x40
    System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // public System.String[] Challenge
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::StringW> Challenge;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.Net.ReadState _readState
    // Size: 0x4
    // Offset: 0x50
    System::Net::ReadState readState;
    // Field size check
    static_assert(sizeof(System::Net::ReadState) == 0x4);
    public:
    // Get instance field reference: private System.Net.HttpWebRequest _request
    System::Net::HttpWebRequest*& dyn__request();
    // Get instance field reference: public System.Int32 StatusCode
    int& dyn_StatusCode();
    // Get instance field reference: public System.String StatusDescription
    ::StringW& dyn_StatusDescription();
    // Get instance field reference: public System.Net.WebHeaderCollection Headers
    System::Net::WebHeaderCollection*& dyn_Headers();
    // Get instance field reference: public System.Version Version
    System::Version*& dyn_Version();
    // Get instance field reference: public System.Version ProxyVersion
    System::Version*& dyn_ProxyVersion();
    // Get instance field reference: public System.IO.Stream stream
    System::IO::Stream*& dyn_stream();
    // Get instance field reference: public System.String[] Challenge
    ::ArrayW<::StringW>& dyn_Challenge();
    // Get instance field reference: private System.Net.ReadState _readState
    System::Net::ReadState& dyn__readState();
    // public System.Net.HttpWebRequest get_request()
    // Offset: 0x17EF034
    System::Net::HttpWebRequest* get_request();
    // public System.Void set_request(System.Net.HttpWebRequest value)
    // Offset: 0x17EF03C
    void set_request(System::Net::HttpWebRequest* value);
    // public System.Net.ReadState get_ReadState()
    // Offset: 0x17EF044
    System::Net::ReadState get_ReadState();
    // public System.Void set_ReadState(System.Net.ReadState value)
    // Offset: 0x17EBC50
    void set_ReadState(System::Net::ReadState value);
    // public System.Void .ctor(System.Net.HttpWebRequest request)
    // Offset: 0x17EC86C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebConnectionData* New_ctor(System::Net::HttpWebRequest* request) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebConnectionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebConnectionData*, creationType>(request)));
    }
    // public System.Void .ctor()
    // Offset: 0x17E8BC4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebConnectionData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebConnectionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebConnectionData*, creationType>()));
    }
  }; // System.Net.WebConnectionData
  #pragma pack(pop)
  static check_size<sizeof(WebConnectionData), 80 + sizeof(System::Net::ReadState)> __System_Net_WebConnectionDataSizeCheck;
  static_assert(sizeof(WebConnectionData) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebConnectionData::get_request
// Il2CppName: get_request
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpWebRequest* (System::Net::WebConnectionData::*)()>(&System::Net::WebConnectionData::get_request)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionData*), "get_request", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionData::set_request
// Il2CppName: set_request
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionData::*)(System::Net::HttpWebRequest*)>(&System::Net::WebConnectionData::set_request)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "HttpWebRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionData*), "set_request", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionData::get_ReadState
// Il2CppName: get_ReadState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ReadState (System::Net::WebConnectionData::*)()>(&System::Net::WebConnectionData::get_ReadState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionData*), "get_ReadState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionData::set_ReadState
// Il2CppName: set_ReadState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionData::*)(System::Net::ReadState)>(&System::Net::WebConnectionData::set_ReadState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "ReadState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionData*), "set_ReadState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebConnectionData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
