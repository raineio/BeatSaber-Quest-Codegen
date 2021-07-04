// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: CloudStorageUpdateResponse
  class CloudStorageUpdateResponse;
  // Forward declaring type: CloudStorageData
  class CloudStorageData;
  // Forward declaring type: CloudStorageMetadataList
  class CloudStorageMetadataList;
  // Forward declaring type: CloudStorageConflictMetadata
  class CloudStorageConflictMetadata;
  // Forward declaring type: CloudStorageMetadata
  class CloudStorageMetadata;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.CloudStorage
  class CloudStorage : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CloudStorage
    CloudStorage() noexcept {}
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageUpdateResponse> Delete(System.String bucket, System.String key)
    // Offset: 0x14C2DA8
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>* Delete(::Il2CppString* bucket, ::Il2CppString* key);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageData> Load(System.String bucket, System.String key)
    // Offset: 0x14C2ECC
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageData*>* Load(::Il2CppString* bucket, ::Il2CppString* key);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageMetadataList> LoadBucketMetadata(System.String bucket)
    // Offset: 0x14C2FF0
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageMetadataList*>* LoadBucketMetadata(::Il2CppString* bucket);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageConflictMetadata> LoadConflictMetadata(System.String bucket, System.String key)
    // Offset: 0x14C310C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageConflictMetadata*>* LoadConflictMetadata(::Il2CppString* bucket, ::Il2CppString* key);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageData> LoadHandle(System.String handle)
    // Offset: 0x14C3230
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageData*>* LoadHandle(::Il2CppString* handle);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageMetadata> LoadMetadata(System.String bucket, System.String key)
    // Offset: 0x14C334C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageMetadata*>* LoadMetadata(::Il2CppString* bucket, ::Il2CppString* key);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageUpdateResponse> ResolveKeepLocal(System.String bucket, System.String key, System.String remoteHandle)
    // Offset: 0x14C3470
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>* ResolveKeepLocal(::Il2CppString* bucket, ::Il2CppString* key, ::Il2CppString* remoteHandle);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageUpdateResponse> ResolveKeepRemote(System.String bucket, System.String key, System.String remoteHandle)
    // Offset: 0x14C35A4
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>* ResolveKeepRemote(::Il2CppString* bucket, ::Il2CppString* key, ::Il2CppString* remoteHandle);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageUpdateResponse> Save(System.String bucket, System.String key, System.Byte[] data, System.Int64 counter, System.String extraData)
    // Offset: 0x14C36D8
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>* Save(::Il2CppString* bucket, ::Il2CppString* key, ::Array<uint8_t>* data, int64_t counter, ::Il2CppString* extraData);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageMetadataList> GetNextCloudStorageMetadataListPage(Oculus.Platform.Models.CloudStorageMetadataList list)
    // Offset: 0x14C3838
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageMetadataList*>* GetNextCloudStorageMetadataListPage(Oculus::Platform::Models::CloudStorageMetadataList* list);
  }; // Oculus.Platform.CloudStorage
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::CloudStorage*, "Oculus.Platform", "CloudStorage");
// Writing MetadataGetter for method: Oculus::Platform::CloudStorage::Delete
// Il2CppName: Delete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>* (*)(::Il2CppString*, ::Il2CppString*)>(&Oculus::Platform::CloudStorage::Delete)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CloudStorage*), "Delete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::CloudStorage::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageData*>* (*)(::Il2CppString*, ::Il2CppString*)>(&Oculus::Platform::CloudStorage::Load)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CloudStorage*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::CloudStorage::LoadBucketMetadata
// Il2CppName: LoadBucketMetadata
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageMetadataList*>* (*)(::Il2CppString*)>(&Oculus::Platform::CloudStorage::LoadBucketMetadata)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CloudStorage*), "LoadBucketMetadata", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::CloudStorage::LoadConflictMetadata
// Il2CppName: LoadConflictMetadata
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageConflictMetadata*>* (*)(::Il2CppString*, ::Il2CppString*)>(&Oculus::Platform::CloudStorage::LoadConflictMetadata)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CloudStorage*), "LoadConflictMetadata", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::CloudStorage::LoadHandle
// Il2CppName: LoadHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageData*>* (*)(::Il2CppString*)>(&Oculus::Platform::CloudStorage::LoadHandle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CloudStorage*), "LoadHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::CloudStorage::LoadMetadata
// Il2CppName: LoadMetadata
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageMetadata*>* (*)(::Il2CppString*, ::Il2CppString*)>(&Oculus::Platform::CloudStorage::LoadMetadata)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CloudStorage*), "LoadMetadata", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::CloudStorage::ResolveKeepLocal
// Il2CppName: ResolveKeepLocal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>* (*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&Oculus::Platform::CloudStorage::ResolveKeepLocal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CloudStorage*), "ResolveKeepLocal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::CloudStorage::ResolveKeepRemote
// Il2CppName: ResolveKeepRemote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>* (*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&Oculus::Platform::CloudStorage::ResolveKeepRemote)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CloudStorage*), "ResolveKeepRemote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::CloudStorage::Save
// Il2CppName: Save
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>* (*)(::Il2CppString*, ::Il2CppString*, ::Array<uint8_t>*, int64_t, ::Il2CppString*)>(&Oculus::Platform::CloudStorage::Save)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CloudStorage*), "Save", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int64_t>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::CloudStorage::GetNextCloudStorageMetadataListPage
// Il2CppName: GetNextCloudStorageMetadataListPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageMetadataList*>* (*)(Oculus::Platform::Models::CloudStorageMetadataList*)>(&Oculus::Platform::CloudStorage::GetNextCloudStorageMetadataListPage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CloudStorage*), "GetNextCloudStorageMetadataListPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Oculus::Platform::Models::CloudStorageMetadataList*>()});
  }
};
