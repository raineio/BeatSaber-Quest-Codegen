// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlResolver
#include "System/Xml/XmlResolver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlDownloadManager
  class XmlDownloadManager;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ICredentials
  class ICredentials;
  // Forward declaring type: IWebProxy
  class IWebProxy;
}
// Forward declaring namespace: System::Net::Cache
namespace System::Net::Cache {
  // Forward declaring type: RequestCachePolicy
  class RequestCachePolicy;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlUrlResolver
  class XmlUrlResolver;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlUrlResolver);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlUrlResolver*, "System.Xml", "XmlUrlResolver");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlUrlResolver
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlUrlResolver : public ::System::Xml::XmlResolver {
    public:
    // Nested type: ::System::Xml::XmlUrlResolver::$GetEntityAsync$d__15
    struct $GetEntityAsync$d__15;
    public:
    // private System.Net.ICredentials _credentials
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::ICredentials* credentials;
    // Field size check
    static_assert(sizeof(::System::Net::ICredentials*) == 0x8);
    // private System.Net.IWebProxy _proxy
    // Size: 0x8
    // Offset: 0x18
    ::System::Net::IWebProxy* proxy;
    // Field size check
    static_assert(sizeof(::System::Net::IWebProxy*) == 0x8);
    // private System.Net.Cache.RequestCachePolicy _cachePolicy
    // Size: 0x8
    // Offset: 0x20
    ::System::Net::Cache::RequestCachePolicy* cachePolicy;
    // Field size check
    static_assert(sizeof(::System::Net::Cache::RequestCachePolicy*) == 0x8);
    public:
    // Get static field: static private System.Object s_DownloadManager
    static ::Il2CppObject* _get_s_DownloadManager();
    // Set static field: static private System.Object s_DownloadManager
    static void _set_s_DownloadManager(::Il2CppObject* value);
    // Get instance field reference: private System.Net.ICredentials _credentials
    [[deprecated("Use field access instead!")]] ::System::Net::ICredentials*& dyn__credentials();
    // Get instance field reference: private System.Net.IWebProxy _proxy
    [[deprecated("Use field access instead!")]] ::System::Net::IWebProxy*& dyn__proxy();
    // Get instance field reference: private System.Net.Cache.RequestCachePolicy _cachePolicy
    [[deprecated("Use field access instead!")]] ::System::Net::Cache::RequestCachePolicy*& dyn__cachePolicy();
    // static private System.Xml.XmlDownloadManager get_DownloadManager()
    // Offset: 0x270BC34
    static ::System::Xml::XmlDownloadManager* get_DownloadManager();
    // public System.Void .ctor()
    // Offset: 0x270BD04
    // Implemented from: System.Xml.XmlResolver
    // Base method: System.Void XmlResolver::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlUrlResolver* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlUrlResolver::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlUrlResolver*, creationType>()));
    }
    // public override System.Object GetEntity(System.Uri absoluteUri, System.String role, System.Type ofObjectToReturn)
    // Offset: 0x270BD0C
    // Implemented from: System.Xml.XmlResolver
    // Base method: System.Object XmlResolver::GetEntity(System.Uri absoluteUri, System.String role, System.Type ofObjectToReturn)
    ::Il2CppObject* GetEntity(::System::Uri* absoluteUri, ::StringW role, ::System::Type* ofObjectToReturn);
    // public override System.Uri ResolveUri(System.Uri baseUri, System.String relativeUri)
    // Offset: 0x270BE90
    // Implemented from: System.Xml.XmlResolver
    // Base method: System.Uri XmlResolver::ResolveUri(System.Uri baseUri, System.String relativeUri)
    ::System::Uri* ResolveUri(::System::Uri* baseUri, ::StringW relativeUri);
    // public override System.Threading.Tasks.Task`1<System.Object> GetEntityAsync(System.Uri absoluteUri, System.String role, System.Type ofObjectToReturn)
    // Offset: 0x270BE98
    // Implemented from: System.Xml.XmlResolver
    // Base method: System.Threading.Tasks.Task`1<System.Object> XmlResolver::GetEntityAsync(System.Uri absoluteUri, System.String role, System.Type ofObjectToReturn)
    ::System::Threading::Tasks::Task_1<::Il2CppObject*>* GetEntityAsync(::System::Uri* absoluteUri, ::StringW role, ::System::Type* ofObjectToReturn);
  }; // System.Xml.XmlUrlResolver
  #pragma pack(pop)
  static check_size<sizeof(XmlUrlResolver), 32 + sizeof(::System::Net::Cache::RequestCachePolicy*)> __System_Xml_XmlUrlResolverSizeCheck;
  static_assert(sizeof(XmlUrlResolver) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlUrlResolver::get_DownloadManager
// Il2CppName: get_DownloadManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDownloadManager* (*)()>(&System::Xml::XmlUrlResolver::get_DownloadManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUrlResolver*), "get_DownloadManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUrlResolver::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlUrlResolver::GetEntity
// Il2CppName: GetEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::XmlUrlResolver::*)(::System::Uri*, ::StringW, ::System::Type*)>(&System::Xml::XmlUrlResolver::GetEntity)> {
  static const MethodInfo* get() {
    static auto* absoluteUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* role = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ofObjectToReturn = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUrlResolver*), "GetEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{absoluteUri, role, ofObjectToReturn});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUrlResolver::ResolveUri
// Il2CppName: ResolveUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (System::Xml::XmlUrlResolver::*)(::System::Uri*, ::StringW)>(&System::Xml::XmlUrlResolver::ResolveUri)> {
  static const MethodInfo* get() {
    static auto* baseUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* relativeUri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUrlResolver*), "ResolveUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseUri, relativeUri});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUrlResolver::GetEntityAsync
// Il2CppName: GetEntityAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Il2CppObject*>* (System::Xml::XmlUrlResolver::*)(::System::Uri*, ::StringW, ::System::Type*)>(&System::Xml::XmlUrlResolver::GetEntityAsync)> {
  static const MethodInfo* get() {
    static auto* absoluteUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* role = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ofObjectToReturn = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUrlResolver*), "GetEntityAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{absoluteUri, role, ofObjectToReturn});
  }
};
