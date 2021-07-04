// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData
#include "UnityEngine/AddressableAssets/ResourceLocators/ContentCatalogData.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation
#include "UnityEngine/ResourceManagement/ResourceLocations/IResourceLocation.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AddressableAssets::ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Forward declaring type: ResourceLocationMap
  class ResourceLocationMap;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData/CompactLocation
  class ContentCatalogData::CompactLocation : public ::Il2CppObject/*, public UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*/ {
    public:
    // private UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationMap m_Locator
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* m_Locator;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*) == 0x8);
    // private System.String m_InternalId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_InternalId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_ProviderId
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* m_ProviderId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Object m_Dependency
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* m_Dependency;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object m_Data
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* m_Data;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 m_HashCode
    // Size: 0x4
    // Offset: 0x38
    int m_HashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_DependencyHashCode
    // Size: 0x4
    // Offset: 0x3C
    int m_DependencyHashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String m_PrimaryKey
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* m_PrimaryKey;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Type m_Type
    // Size: 0x8
    // Offset: 0x48
    System::Type* m_Type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: CompactLocation
    CompactLocation(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* m_Locator_ = {}, ::Il2CppString* m_InternalId_ = {}, ::Il2CppString* m_ProviderId_ = {}, ::Il2CppObject* m_Dependency_ = {}, ::Il2CppObject* m_Data_ = {}, int m_HashCode_ = {}, int m_DependencyHashCode_ = {}, ::Il2CppString* m_PrimaryKey_ = {}, System::Type* m_Type_ = {}) noexcept : m_Locator{m_Locator_}, m_InternalId{m_InternalId_}, m_ProviderId{m_ProviderId_}, m_Dependency{m_Dependency_}, m_Data{m_Data_}, m_HashCode{m_HashCode_}, m_DependencyHashCode{m_DependencyHashCode_}, m_PrimaryKey{m_PrimaryKey_}, m_Type{m_Type_} {}
    // Creating interface conversion operator: operator UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation
    operator UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation() noexcept {
      return *reinterpret_cast<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(this);
    }
    // public System.String get_InternalId()
    // Offset: 0x13F735C
    ::Il2CppString* get_InternalId();
    // public System.String get_ProviderId()
    // Offset: 0x13F7364
    ::Il2CppString* get_ProviderId();
    // public System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> get_Dependencies()
    // Offset: 0x13F736C
    System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* get_Dependencies();
    // public System.Boolean get_HasDependencies()
    // Offset: 0x13F7424
    bool get_HasDependencies();
    // public System.Int32 get_DependencyHashCode()
    // Offset: 0x13F7434
    int get_DependencyHashCode();
    // public System.Object get_Data()
    // Offset: 0x13F743C
    ::Il2CppObject* get_Data();
    // public System.String get_PrimaryKey()
    // Offset: 0x13F7444
    ::Il2CppString* get_PrimaryKey();
    // public System.Void set_PrimaryKey(System.String value)
    // Offset: 0x13F744C
    void set_PrimaryKey(::Il2CppString* value);
    // public System.Type get_ResourceType()
    // Offset: 0x13F7454
    System::Type* get_ResourceType();
    // public System.Int32 Hash(System.Type t)
    // Offset: 0x13F7464
    int Hash(System::Type* t);
    // public System.Void .ctor(UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationMap locator, System.String internalId, System.String providerId, System.Object dependencyKey, System.Object data, System.Int32 depHash, System.String primaryKey, System.Type type)
    // Offset: 0x13F7134
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContentCatalogData::CompactLocation* New_ctor(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* locator, ::Il2CppString* internalId, ::Il2CppString* providerId, ::Il2CppObject* dependencyKey, ::Il2CppObject* data, int depHash, ::Il2CppString* primaryKey, System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContentCatalogData::CompactLocation*, creationType>(locator, internalId, providerId, dependencyKey, data, depHash, primaryKey, type)));
    }
    // public override System.String ToString()
    // Offset: 0x13F745C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData/CompactLocation
  #pragma pack(pop)
  static check_size<sizeof(ContentCatalogData::CompactLocation), 72 + sizeof(System::Type*)> __UnityEngine_AddressableAssets_ResourceLocators_ContentCatalogData_CompactLocationSizeCheck;
  static_assert(sizeof(ContentCatalogData::CompactLocation) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation*, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData/CompactLocation");
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::get_InternalId
// Il2CppName: get_InternalId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::get_InternalId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation*), "get_InternalId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::get_ProviderId
// Il2CppName: get_ProviderId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::get_ProviderId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation*), "get_ProviderId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::get_Dependencies
// Il2CppName: get_Dependencies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::get_Dependencies)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation*), "get_Dependencies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::get_HasDependencies
// Il2CppName: get_HasDependencies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::get_HasDependencies)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation*), "get_HasDependencies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::get_DependencyHashCode
// Il2CppName: get_DependencyHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::get_DependencyHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation*), "get_DependencyHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::get_Data)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation*), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::get_PrimaryKey
// Il2CppName: get_PrimaryKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::get_PrimaryKey)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation*), "get_PrimaryKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::set_PrimaryKey
// Il2CppName: set_PrimaryKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::*)(::Il2CppString*)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::set_PrimaryKey)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation*), "set_PrimaryKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::get_ResourceType
// Il2CppName: get_ResourceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::get_ResourceType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation*), "get_ResourceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::Hash
// Il2CppName: Hash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::*)(System::Type*)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::Hash)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation*), "Hash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
