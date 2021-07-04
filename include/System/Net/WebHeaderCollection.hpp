// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Specialized.NameValueCollection
#include "System/Collections/Specialized/NameValueCollection.hpp"
// Including type: System.Net.WebHeaderCollectionType
#include "System/Net/WebHeaderCollectionType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpRequestHeader
  struct HttpRequestHeader;
  // Forward declaring type: HeaderInfoTable
  class HeaderInfoTable;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x72
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebHeaderCollection
  // [ComVisibleAttribute] Offset: D87F9C
  // [DefaultMemberAttribute] Offset: D87F9C
  class WebHeaderCollection : public System::Collections::Specialized::NameValueCollection {
    public:
    // Nested type: System::Net::WebHeaderCollection::RfcChar
    struct RfcChar;
    // Size: 0x1
    #pragma pack(push, 1)
    // Autogenerated type: System.Net.WebHeaderCollection/RfcChar
    struct RfcChar/*, public System::Enum*/ {
      public:
      // public System.Byte value__
      // Size: 0x1
      // Offset: 0x0
      uint8_t value;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      // Creating value type constructor for type: RfcChar
      constexpr RfcChar(uint8_t value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return value;
      }
      // static field const value: static public System.Net.WebHeaderCollection/RfcChar High
      static constexpr const uint8_t High = 0u;
      // Get static field: static public System.Net.WebHeaderCollection/RfcChar High
      static System::Net::WebHeaderCollection::RfcChar _get_High();
      // Set static field: static public System.Net.WebHeaderCollection/RfcChar High
      static void _set_High(System::Net::WebHeaderCollection::RfcChar value);
      // static field const value: static public System.Net.WebHeaderCollection/RfcChar Reg
      static constexpr const uint8_t Reg = 1u;
      // Get static field: static public System.Net.WebHeaderCollection/RfcChar Reg
      static System::Net::WebHeaderCollection::RfcChar _get_Reg();
      // Set static field: static public System.Net.WebHeaderCollection/RfcChar Reg
      static void _set_Reg(System::Net::WebHeaderCollection::RfcChar value);
      // static field const value: static public System.Net.WebHeaderCollection/RfcChar Ctl
      static constexpr const uint8_t Ctl = 2u;
      // Get static field: static public System.Net.WebHeaderCollection/RfcChar Ctl
      static System::Net::WebHeaderCollection::RfcChar _get_Ctl();
      // Set static field: static public System.Net.WebHeaderCollection/RfcChar Ctl
      static void _set_Ctl(System::Net::WebHeaderCollection::RfcChar value);
      // static field const value: static public System.Net.WebHeaderCollection/RfcChar CR
      static constexpr const uint8_t CR = 3u;
      // Get static field: static public System.Net.WebHeaderCollection/RfcChar CR
      static System::Net::WebHeaderCollection::RfcChar _get_CR();
      // Set static field: static public System.Net.WebHeaderCollection/RfcChar CR
      static void _set_CR(System::Net::WebHeaderCollection::RfcChar value);
      // static field const value: static public System.Net.WebHeaderCollection/RfcChar LF
      static constexpr const uint8_t LF = 4u;
      // Get static field: static public System.Net.WebHeaderCollection/RfcChar LF
      static System::Net::WebHeaderCollection::RfcChar _get_LF();
      // Set static field: static public System.Net.WebHeaderCollection/RfcChar LF
      static void _set_LF(System::Net::WebHeaderCollection::RfcChar value);
      // static field const value: static public System.Net.WebHeaderCollection/RfcChar WS
      static constexpr const uint8_t WS = 5u;
      // Get static field: static public System.Net.WebHeaderCollection/RfcChar WS
      static System::Net::WebHeaderCollection::RfcChar _get_WS();
      // Set static field: static public System.Net.WebHeaderCollection/RfcChar WS
      static void _set_WS(System::Net::WebHeaderCollection::RfcChar value);
      // static field const value: static public System.Net.WebHeaderCollection/RfcChar Colon
      static constexpr const uint8_t Colon = 6u;
      // Get static field: static public System.Net.WebHeaderCollection/RfcChar Colon
      static System::Net::WebHeaderCollection::RfcChar _get_Colon();
      // Set static field: static public System.Net.WebHeaderCollection/RfcChar Colon
      static void _set_Colon(System::Net::WebHeaderCollection::RfcChar value);
      // static field const value: static public System.Net.WebHeaderCollection/RfcChar Delim
      static constexpr const uint8_t Delim = 7u;
      // Get static field: static public System.Net.WebHeaderCollection/RfcChar Delim
      static System::Net::WebHeaderCollection::RfcChar _get_Delim();
      // Set static field: static public System.Net.WebHeaderCollection/RfcChar Delim
      static void _set_Delim(System::Net::WebHeaderCollection::RfcChar value);
    }; // System.Net.WebHeaderCollection/RfcChar
    #pragma pack(pop)
    static check_size<sizeof(WebHeaderCollection::RfcChar), 0 + sizeof(uint8_t)> __System_Net_WebHeaderCollection_RfcCharSizeCheck;
    static_assert(sizeof(WebHeaderCollection::RfcChar) == 0x1);
    // private System.String[] m_CommonHeaders
    // Size: 0x8
    // Offset: 0x58
    ::Array<::Il2CppString*>* m_CommonHeaders;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.Int32 m_NumCommonHeaders
    // Size: 0x4
    // Offset: 0x60
    int m_NumCommonHeaders;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_NumCommonHeaders and: m_InnerCollection
    char __padding1[0x4] = {};
    // private System.Collections.Specialized.NameValueCollection m_InnerCollection
    // Size: 0x8
    // Offset: 0x68
    System::Collections::Specialized::NameValueCollection* m_InnerCollection;
    // Field size check
    static_assert(sizeof(System::Collections::Specialized::NameValueCollection*) == 0x8);
    // private System.Net.WebHeaderCollectionType m_Type
    // Size: 0x2
    // Offset: 0x70
    System::Net::WebHeaderCollectionType m_Type;
    // Field size check
    static_assert(sizeof(System::Net::WebHeaderCollectionType) == 0x2);
    // Creating value type constructor for type: WebHeaderCollection
    WebHeaderCollection(::Array<::Il2CppString*>* m_CommonHeaders_ = {}, int m_NumCommonHeaders_ = {}, System::Collections::Specialized::NameValueCollection* m_InnerCollection_ = {}, System::Net::WebHeaderCollectionType m_Type_ = {}) noexcept : m_CommonHeaders{m_CommonHeaders_}, m_NumCommonHeaders{m_NumCommonHeaders_}, m_InnerCollection{m_InnerCollection_}, m_Type{m_Type_} {}
    // Get static field: static private readonly System.Net.HeaderInfoTable HInfo
    static System::Net::HeaderInfoTable* _get_HInfo();
    // Set static field: static private readonly System.Net.HeaderInfoTable HInfo
    static void _set_HInfo(System::Net::HeaderInfoTable* value);
    // Get static field: static private readonly System.String[] s_CommonHeaderNames
    static ::Array<::Il2CppString*>* _get_s_CommonHeaderNames();
    // Set static field: static private readonly System.String[] s_CommonHeaderNames
    static void _set_s_CommonHeaderNames(::Array<::Il2CppString*>* value);
    // Get static field: static private readonly System.SByte[] s_CommonHeaderHints
    static ::Array<int8_t>* _get_s_CommonHeaderHints();
    // Set static field: static private readonly System.SByte[] s_CommonHeaderHints
    static void _set_s_CommonHeaderHints(::Array<int8_t>* value);
    // Get static field: static private readonly System.Char[] HttpTrimCharacters
    static ::Array<::Il2CppChar>* _get_HttpTrimCharacters();
    // Set static field: static private readonly System.Char[] HttpTrimCharacters
    static void _set_HttpTrimCharacters(::Array<::Il2CppChar>* value);
    // Get static field: static private System.Net.WebHeaderCollection/RfcChar[] RfcCharMap
    static ::Array<System::Net::WebHeaderCollection::RfcChar>* _get_RfcCharMap();
    // Set static field: static private System.Net.WebHeaderCollection/RfcChar[] RfcCharMap
    static void _set_RfcCharMap(::Array<System::Net::WebHeaderCollection::RfcChar>* value);
    // private System.Void NormalizeCommonHeaders()
    // Offset: 0x15C728C
    void NormalizeCommonHeaders();
    // private System.Collections.Specialized.NameValueCollection get_InnerCollection()
    // Offset: 0x15C73AC
    System::Collections::Specialized::NameValueCollection* get_InnerCollection();
    // static System.Boolean AllowMultiValues(System.String name)
    // Offset: 0x15BFCAC
    static bool AllowMultiValues(::Il2CppString* name);
    // private System.Boolean get_AllowHttpRequestHeader()
    // Offset: 0x15C7454
    bool get_AllowHttpRequestHeader();
    // public System.Void Remove(System.Net.HttpRequestHeader header)
    // Offset: 0x15C748C
    void Remove(System::Net::HttpRequestHeader header);
    // System.Void AddInternal(System.String name, System.String value)
    // Offset: 0x15BFD5C
    void AddInternal(::Il2CppString* name, ::Il2CppString* value);
    // System.Void ChangeInternal(System.String name, System.String value)
    // Offset: 0x15C758C
    void ChangeInternal(::Il2CppString* name, ::Il2CppString* value);
    // System.Void RemoveInternal(System.String name)
    // Offset: 0x15C75EC
    void RemoveInternal(::Il2CppString* name);
    // static System.String CheckBadChars(System.String name, System.Boolean isHeaderValue)
    // Offset: 0x15C764C
    static ::Il2CppString* CheckBadChars(::Il2CppString* name, bool isHeaderValue);
    // static System.Boolean ContainsNonAsciiChars(System.String token)
    // Offset: 0x15C79C8
    static bool ContainsNonAsciiChars(::Il2CppString* token);
    // System.Void ThrowOnRestrictedHeader(System.String headerName)
    // Offset: 0x15C7A50
    void ThrowOnRestrictedHeader(::Il2CppString* headerName);
    // public System.Void Add(System.String header)
    // Offset: 0x15BDD70
    void Add(::Il2CppString* header);
    // System.Void SetInternal(System.String name, System.String value)
    // Offset: 0x15BFDBC
    void SetInternal(::Il2CppString* name, ::Il2CppString* value);
    // static System.String GetAsString(System.Collections.Specialized.NameValueCollection cc, System.Boolean winInetCompat, System.Boolean forTrace)
    // Offset: 0x15C835C
    static ::Il2CppString* GetAsString(System::Collections::Specialized::NameValueCollection* cc, bool winInetCompat, bool forTrace);
    // System.Void .ctor(System.Net.WebHeaderCollectionType type)
    // Offset: 0x15C85FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebHeaderCollection* New_ctor(System::Net::WebHeaderCollectionType type) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebHeaderCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebHeaderCollection*, creationType>(type)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x15C8A10
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // public override System.Void Add(System.String name, System.String value)
    // Offset: 0x15C7BDC
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.Void NameValueCollection::Add(System.String name, System.String value)
    void Add(::Il2CppString* name, ::Il2CppString* value);
    // public override System.Void Set(System.String name, System.String value)
    // Offset: 0x15C7D94
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.Void NameValueCollection::Set(System.String name, System.String value)
    void Set(::Il2CppString* name, ::Il2CppString* value);
    // public override System.Void Remove(System.String name)
    // Offset: 0x15C7FB4
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.Void NameValueCollection::Remove(System.String name)
    void Remove(::Il2CppString* name);
    // public override System.String[] GetValues(System.String header)
    // Offset: 0x15C80EC
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.String[] NameValueCollection::GetValues(System.String header)
    ::Array<::Il2CppString*>* GetValues(::Il2CppString* header);
    // public override System.String ToString()
    // Offset: 0x15C82F0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void .ctor()
    // Offset: 0x15BDC58
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.Void NameValueCollection::.ctor()
    // Base method: System.Void NameObjectCollectionBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebHeaderCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebHeaderCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebHeaderCollection*, creationType>()));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x15C86E0
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.Void NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Base method: System.Void NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebHeaderCollection* New_ctor(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebHeaderCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebHeaderCollection*, creationType>(serializationInfo, streamingContext)));
    }
    // public override System.Void OnDeserialization(System.Object sender)
    // Offset: 0x15C8894
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Void NameObjectCollectionBase::OnDeserialization(System.Object sender)
    void OnDeserialization(::Il2CppObject* sender);
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x15C8898
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Void NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // public override System.String Get(System.String name)
    // Offset: 0x15C8A1C
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.String NameValueCollection::Get(System.String name)
    ::Il2CppString* Get(::Il2CppString* name);
    // public override System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x15C8D80
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Collections.IEnumerator NameObjectCollectionBase::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // public override System.Int32 get_Count()
    // Offset: 0x15C8DFC
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Int32 NameObjectCollectionBase::get_Count()
    int get_Count();
    // public override System.String Get(System.Int32 index)
    // Offset: 0x15C8E34
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.String NameValueCollection::Get(System.Int32 index)
    ::Il2CppString* Get(int index);
    // public override System.String[] GetValues(System.Int32 index)
    // Offset: 0x15C8E78
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.String[] NameValueCollection::GetValues(System.Int32 index)
    ::Array<::Il2CppString*>* GetValues(int index);
    // public override System.String GetKey(System.Int32 index)
    // Offset: 0x15C8EBC
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.String NameValueCollection::GetKey(System.Int32 index)
    ::Il2CppString* GetKey(int index);
    // static private System.Void .cctor()
    // Offset: 0x15C8F00
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Void NameObjectCollectionBase::.cctor()
    static void _cctor();
  }; // System.Net.WebHeaderCollection
  #pragma pack(pop)
  static check_size<sizeof(WebHeaderCollection), 112 + sizeof(System::Net::WebHeaderCollectionType)> __System_Net_WebHeaderCollectionSizeCheck;
  static_assert(sizeof(WebHeaderCollection) == 0x72);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebHeaderCollection*, "System.Net", "WebHeaderCollection");
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebHeaderCollection::RfcChar, "System.Net", "WebHeaderCollection/RfcChar");
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::NormalizeCommonHeaders
// Il2CppName: NormalizeCommonHeaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)()>(&System::Net::WebHeaderCollection::NormalizeCommonHeaders)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "NormalizeCommonHeaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::get_InnerCollection
// Il2CppName: get_InnerCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Specialized::NameValueCollection* (System::Net::WebHeaderCollection::*)()>(&System::Net::WebHeaderCollection::get_InnerCollection)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "get_InnerCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::AllowMultiValues
// Il2CppName: AllowMultiValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&System::Net::WebHeaderCollection::AllowMultiValues)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "AllowMultiValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::get_AllowHttpRequestHeader
// Il2CppName: get_AllowHttpRequestHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebHeaderCollection::*)()>(&System::Net::WebHeaderCollection::get_AllowHttpRequestHeader)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "get_AllowHttpRequestHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(System::Net::HttpRequestHeader)>(&System::Net::WebHeaderCollection::Remove)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Net::HttpRequestHeader>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::AddInternal
// Il2CppName: AddInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(::Il2CppString*, ::Il2CppString*)>(&System::Net::WebHeaderCollection::AddInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "AddInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::ChangeInternal
// Il2CppName: ChangeInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(::Il2CppString*, ::Il2CppString*)>(&System::Net::WebHeaderCollection::ChangeInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "ChangeInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::RemoveInternal
// Il2CppName: RemoveInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(::Il2CppString*)>(&System::Net::WebHeaderCollection::RemoveInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "RemoveInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::CheckBadChars
// Il2CppName: CheckBadChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, bool)>(&System::Net::WebHeaderCollection::CheckBadChars)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "CheckBadChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::ContainsNonAsciiChars
// Il2CppName: ContainsNonAsciiChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&System::Net::WebHeaderCollection::ContainsNonAsciiChars)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "ContainsNonAsciiChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::ThrowOnRestrictedHeader
// Il2CppName: ThrowOnRestrictedHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(::Il2CppString*)>(&System::Net::WebHeaderCollection::ThrowOnRestrictedHeader)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "ThrowOnRestrictedHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(::Il2CppString*)>(&System::Net::WebHeaderCollection::Add)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::SetInternal
// Il2CppName: SetInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(::Il2CppString*, ::Il2CppString*)>(&System::Net::WebHeaderCollection::SetInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "SetInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::GetAsString
// Il2CppName: GetAsString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Collections::Specialized::NameValueCollection*, bool, bool)>(&System::Net::WebHeaderCollection::GetAsString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "GetAsString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Specialized::NameValueCollection*>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Net::WebHeaderCollection::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(::Il2CppString*, ::Il2CppString*)>(&System::Net::WebHeaderCollection::Add)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(::Il2CppString*, ::Il2CppString*)>(&System::Net::WebHeaderCollection::Set)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(::Il2CppString*)>(&System::Net::WebHeaderCollection::Remove)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::GetValues
// Il2CppName: GetValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (System::Net::WebHeaderCollection::*)(::Il2CppString*)>(&System::Net::WebHeaderCollection::GetValues)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "GetValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::WebHeaderCollection::*)()>(&System::Net::WebHeaderCollection::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::OnDeserialization
// Il2CppName: OnDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(::Il2CppObject*)>(&System::Net::WebHeaderCollection::OnDeserialization)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "OnDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Net::WebHeaderCollection::GetObjectData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::WebHeaderCollection::*)(::Il2CppString*)>(&System::Net::WebHeaderCollection::Get)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (System::Net::WebHeaderCollection::*)()>(&System::Net::WebHeaderCollection::GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::WebHeaderCollection::*)()>(&System::Net::WebHeaderCollection::get_Count)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::WebHeaderCollection::*)(int)>(&System::Net::WebHeaderCollection::Get)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::GetValues
// Il2CppName: GetValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (System::Net::WebHeaderCollection::*)(int)>(&System::Net::WebHeaderCollection::GetValues)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "GetValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::GetKey
// Il2CppName: GetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::WebHeaderCollection::*)(int)>(&System::Net::WebHeaderCollection::GetKey)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), "GetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebHeaderCollection::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::WebHeaderCollection::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebHeaderCollection*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
