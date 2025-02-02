// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.Util.ObjectInitializationData
#include "UnityEngine/ResourceManagement/Util/ObjectInitializationData.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AddressableAssets::ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Forward declaring type: ResourceLocationMap
  class ResourceLocationMap;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Forward declaring type: ContentCatalogData
  class ContentCatalogData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData");
// Type namespace: UnityEngine.AddressableAssets.ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData
  // [TokenAttribute] Offset: FFFFFFFF
  class ContentCatalogData : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::Bucket
    struct Bucket;
    // Nested type: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation
    class CompactLocation;
    public:
    // System.String localHash
    // Size: 0x8
    // Offset: 0x10
    ::StringW localHash;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*) == 0x8);
    // System.String m_LocatorId
    // Size: 0x8
    // Offset: 0x20
    ::StringW m_LocatorId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.ResourceManagement.Util.ObjectInitializationData m_InstanceProviderData
    // Size: 0x30
    // Offset: 0x28
    ::UnityEngine::ResourceManagement::Util::ObjectInitializationData m_InstanceProviderData;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::Util::ObjectInitializationData) == 0x30);
    // private UnityEngine.ResourceManagement.Util.ObjectInitializationData m_SceneProviderData
    // Size: 0x30
    // Offset: 0x58
    ::UnityEngine::ResourceManagement::Util::ObjectInitializationData m_SceneProviderData;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::Util::ObjectInitializationData) == 0x30);
    // System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Util.ObjectInitializationData> m_ResourceProviderData
    // Size: 0x8
    // Offset: 0x88
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* m_ResourceProviderData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x11113A0
    // System.String[] m_ProviderIds
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<::StringW> m_ProviderIds;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x11113EC
    // System.String[] m_InternalIds
    // Size: 0x8
    // Offset: 0x98
    ::ArrayW<::StringW> m_InternalIds;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x1111438
    // System.String m_KeyDataString
    // Size: 0x8
    // Offset: 0xA0
    ::StringW m_KeyDataString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x1111484
    // System.String m_BucketDataString
    // Size: 0x8
    // Offset: 0xA8
    ::StringW m_BucketDataString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x11114D0
    // System.String m_EntryDataString
    // Size: 0x8
    // Offset: 0xB0
    ::StringW m_EntryDataString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x111151C
    // System.String m_ExtraDataString
    // Size: 0x8
    // Offset: 0xB8
    ::StringW m_ExtraDataString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // UnityEngine.ResourceManagement.Util.SerializedType[] m_resourceTypes
    // Size: 0x8
    // Offset: 0xC0
    ::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType> m_resourceTypes;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType>) == 0x8);
    // private System.String[] m_InternalIdPrefixes
    // Size: 0x8
    // Offset: 0xC8
    ::ArrayW<::StringW> m_InternalIdPrefixes;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // static field const value: static private System.Int32 kBytesPerInt32
    static constexpr const int kBytesPerInt32 = 4;
    // Get static field: static private System.Int32 kBytesPerInt32
    static int _get_kBytesPerInt32();
    // Set static field: static private System.Int32 kBytesPerInt32
    static void _set_kBytesPerInt32(int value);
    // static field const value: static private System.Int32 k_EntryDataItemPerEntry
    static constexpr const int k_EntryDataItemPerEntry = 7;
    // Get static field: static private System.Int32 k_EntryDataItemPerEntry
    static int _get_k_EntryDataItemPerEntry();
    // Set static field: static private System.Int32 k_EntryDataItemPerEntry
    static void _set_k_EntryDataItemPerEntry(int value);
    // Get instance field reference: System.String localHash
    [[deprecated("Use field access instead!")]] ::StringW& dyn_localHash();
    // Get instance field reference: UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& dyn_location();
    // Get instance field reference: System.String m_LocatorId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_LocatorId();
    // Get instance field reference: private UnityEngine.ResourceManagement.Util.ObjectInitializationData m_InstanceProviderData
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::Util::ObjectInitializationData& dyn_m_InstanceProviderData();
    // Get instance field reference: private UnityEngine.ResourceManagement.Util.ObjectInitializationData m_SceneProviderData
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::Util::ObjectInitializationData& dyn_m_SceneProviderData();
    // Get instance field reference: System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Util.ObjectInitializationData> m_ResourceProviderData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*& dyn_m_ResourceProviderData();
    // Get instance field reference: System.String[] m_ProviderIds
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_m_ProviderIds();
    // Get instance field reference: System.String[] m_InternalIds
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_m_InternalIds();
    // Get instance field reference: System.String m_KeyDataString
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_KeyDataString();
    // Get instance field reference: System.String m_BucketDataString
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_BucketDataString();
    // Get instance field reference: System.String m_EntryDataString
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_EntryDataString();
    // Get instance field reference: System.String m_ExtraDataString
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_ExtraDataString();
    // Get instance field reference: UnityEngine.ResourceManagement.Util.SerializedType[] m_resourceTypes
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType>& dyn_m_resourceTypes();
    // Get instance field reference: private System.String[] m_InternalIdPrefixes
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_m_InternalIdPrefixes();
    // public System.String get_ProviderId()
    // Offset: 0x1902CD4
    ::StringW get_ProviderId();
    // System.Void set_ProviderId(System.String value)
    // Offset: 0x1902CDC
    void set_ProviderId(::StringW value);
    // public UnityEngine.ResourceManagement.Util.ObjectInitializationData get_InstanceProviderData()
    // Offset: 0x1902CE4
    ::UnityEngine::ResourceManagement::Util::ObjectInitializationData get_InstanceProviderData();
    // public System.Void set_InstanceProviderData(UnityEngine.ResourceManagement.Util.ObjectInitializationData value)
    // Offset: 0x1902CFC
    void set_InstanceProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData value);
    // public UnityEngine.ResourceManagement.Util.ObjectInitializationData get_SceneProviderData()
    // Offset: 0x1902D14
    ::UnityEngine::ResourceManagement::Util::ObjectInitializationData get_SceneProviderData();
    // public System.Void set_SceneProviderData(UnityEngine.ResourceManagement.Util.ObjectInitializationData value)
    // Offset: 0x1902D2C
    void set_SceneProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData value);
    // public System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Util.ObjectInitializationData> get_ResourceProviderData()
    // Offset: 0x1902D44
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* get_ResourceProviderData();
    // public System.Void set_ResourceProviderData(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Util.ObjectInitializationData> value)
    // Offset: 0x1902D4C
    void set_ResourceProviderData(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* value);
    // public System.String[] get_ProviderIds()
    // Offset: 0x1902D54
    ::ArrayW<::StringW> get_ProviderIds();
    // public System.String[] get_InternalIds()
    // Offset: 0x1902D5C
    ::ArrayW<::StringW> get_InternalIds();
    // public System.Void .ctor()
    // Offset: 0x1903878
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContentCatalogData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContentCatalogData*, creationType>()));
    }
    // System.Void CleanData()
    // Offset: 0x1902D64
    void CleanData();
    // UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationMap CreateCustomLocator(System.String overrideId, System.String providerSuffix)
    // Offset: 0x1901EF0
    ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* CreateCustomLocator(::StringW overrideId, ::StringW providerSuffix);
    // public UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationMap CreateLocator(System.String providerSuffix)
    // Offset: 0x1902DC4
    ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* CreateLocator(::StringW providerSuffix);
    // static System.String ExpandInternalId(System.String[] internalIdPrefixes, System.String v)
    // Offset: 0x19035F4
    static ::StringW ExpandInternalId(::ArrayW<::StringW> internalIdPrefixes, ::StringW v);
  }; // UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData
  #pragma pack(pop)
  static check_size<sizeof(ContentCatalogData), 200 + sizeof(::ArrayW<::StringW>)> __UnityEngine_AddressableAssets_ResourceLocators_ContentCatalogDataSizeCheck;
  static_assert(sizeof(ContentCatalogData) == 0xD0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderId
// Il2CppName: get_ProviderId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "get_ProviderId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ProviderId
// Il2CppName: set_ProviderId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ProviderId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "set_ProviderId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InstanceProviderData
// Il2CppName: get_InstanceProviderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::Util::ObjectInitializationData (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InstanceProviderData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "get_InstanceProviderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_InstanceProviderData
// Il2CppName: set_InstanceProviderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::UnityEngine::ResourceManagement::Util::ObjectInitializationData)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_InstanceProviderData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.Util", "ObjectInitializationData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "set_InstanceProviderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_SceneProviderData
// Il2CppName: get_SceneProviderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::Util::ObjectInitializationData (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_SceneProviderData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "get_SceneProviderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_SceneProviderData
// Il2CppName: set_SceneProviderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::UnityEngine::ResourceManagement::Util::ObjectInitializationData)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_SceneProviderData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.Util", "ObjectInitializationData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "set_SceneProviderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ResourceProviderData
// Il2CppName: get_ResourceProviderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ResourceProviderData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "get_ResourceProviderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ResourceProviderData
// Il2CppName: set_ResourceProviderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ResourceProviderData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.Util", "ObjectInitializationData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "set_ResourceProviderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderIds
// Il2CppName: get_ProviderIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderIds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "get_ProviderIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InternalIds
// Il2CppName: get_InternalIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InternalIds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "get_InternalIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CleanData
// Il2CppName: CleanData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CleanData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "CleanData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateCustomLocator
// Il2CppName: CreateCustomLocator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW, ::StringW)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateCustomLocator)> {
  static const MethodInfo* get() {
    static auto* overrideId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* providerSuffix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "CreateCustomLocator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{overrideId, providerSuffix});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateLocator
// Il2CppName: CreateLocator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateLocator)> {
  static const MethodInfo* get() {
    static auto* providerSuffix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "CreateLocator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{providerSuffix});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::ExpandInternalId
// Il2CppName: ExpandInternalId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<::StringW>, ::StringW)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::ExpandInternalId)> {
  static const MethodInfo* get() {
    static auto* internalIdPrefixes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "ExpandInternalId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{internalIdPrefixes, v});
  }
};
