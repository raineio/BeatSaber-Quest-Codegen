// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HeaderVariantInfo
  struct HeaderVariantInfo;
  // Forward declaring type: PathList
  class PathList;
  // Forward declaring type: Cookie
  class Cookie;
  // Forward declaring type: CookieCollection
  class CookieCollection;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.CookieContainer
  class CookieContainer : public ::Il2CppObject {
    public:
    // private System.Collections.Hashtable m_domainTable
    // Offset: 0x10
    System::Collections::Hashtable* m_domainTable;
    // private System.Int32 m_maxCookieSize
    // Offset: 0x18
    int m_maxCookieSize;
    // private System.Int32 m_maxCookies
    // Offset: 0x1C
    int m_maxCookies;
    // private System.Int32 m_maxCookiesPerDomain
    // Offset: 0x20
    int m_maxCookiesPerDomain;
    // private System.Int32 m_count
    // Offset: 0x24
    int m_count;
    // private System.String m_fqdnMyDomain
    // Offset: 0x28
    ::Il2CppString* m_fqdnMyDomain;
    // Get static field: static private readonly System.Net.HeaderVariantInfo[] HeaderInfo
    static ::Array<System::Net::HeaderVariantInfo>* _get_HeaderInfo();
    // Set static field: static private readonly System.Net.HeaderVariantInfo[] HeaderInfo
    static void _set_HeaderInfo(::Array<System::Net::HeaderVariantInfo>* value);
    // private System.Void AddRemoveDomain(System.String key, System.Net.PathList value)
    // Offset: 0x12B0FAC
    void AddRemoveDomain(::Il2CppString* key, System::Net::PathList* value);
    // System.Void Add(System.Net.Cookie cookie, System.Boolean throwOnError)
    // Offset: 0x12B10D4
    void Add(System::Net::Cookie* cookie, bool throwOnError);
    // private System.Boolean AgeCookies(System.String domain)
    // Offset: 0x12B1844
    bool AgeCookies(::Il2CppString* domain);
    // private System.Int32 ExpireCollection(System.Net.CookieCollection cc)
    // Offset: 0x12B2C58
    int ExpireCollection(System::Net::CookieCollection* cc);
    // System.Boolean IsLocalDomain(System.String host)
    // Offset: 0x12B2DA8
    bool IsLocalDomain(::Il2CppString* host);
    // System.Net.CookieCollection CookieCutter(System.Uri uri, System.String headerName, System.String setCookieHeader, System.Boolean isThrow)
    // Offset: 0x12B3070
    System::Net::CookieCollection* CookieCutter(System::Uri* uri, ::Il2CppString* headerName, ::Il2CppString* setCookieHeader, bool isThrow);
    // System.Net.CookieCollection InternalGetCookies(System.Uri uri)
    // Offset: 0x12B3CD4
    System::Net::CookieCollection* InternalGetCookies(System::Uri* uri);
    // private System.Void BuildCookieCollectionFromDomainMatches(System.Uri uri, System.Boolean isSecure, System.Int32 port, System.Net.CookieCollection cookies, System.Collections.Generic.List`1<System.String> domainAttribute, System.Boolean matchOnlyPlainCookie)
    // Offset: 0x12B3FBC
    void BuildCookieCollectionFromDomainMatches(System::Uri* uri, bool isSecure, int port, System::Net::CookieCollection* cookies, System::Collections::Generic::List_1<::Il2CppString*>* domainAttribute, bool matchOnlyPlainCookie);
    // private System.Void MergeUpdateCollections(System.Net.CookieCollection destination, System.Net.CookieCollection source, System.Int32 port, System.Boolean isSecure, System.Boolean isPlainOnly)
    // Offset: 0x12B472C
    void MergeUpdateCollections(System::Net::CookieCollection* destination, System::Net::CookieCollection* source, int port, bool isSecure, bool isPlainOnly);
    // public System.String GetCookieHeader(System.Uri uri)
    // Offset: 0x12B4924
    ::Il2CppString* GetCookieHeader(System::Uri* uri);
    // System.String GetCookieHeader(System.Uri uri, out System.String optCookie2)
    // Offset: 0x12B49F4
    ::Il2CppString* GetCookieHeader(System::Uri* uri, ::Il2CppString*& optCookie2);
    // static private System.Void .cctor()
    // Offset: 0x12B4D00
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x12B0EA0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CookieContainer* New_ctor();
  }; // System.Net.CookieContainer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::CookieContainer*, "System.Net", "CookieContainer");
#pragma pack(pop)
