// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.CloudStorageDataStatus
#include "Oculus/Platform/CloudStorageDataStatus.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: CloudStorageMetadata
  class CloudStorageMetadata;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::CloudStorageMetadata);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::CloudStorageMetadata*, "Oculus.Platform.Models", "CloudStorageMetadata");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.CloudStorageMetadata
  // [TokenAttribute] Offset: FFFFFFFF
  class CloudStorageMetadata : public ::Il2CppObject {
    public:
    public:
    // public readonly System.String Bucket
    // Size: 0x8
    // Offset: 0x10
    ::StringW Bucket;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.Int64 Counter
    // Size: 0x8
    // Offset: 0x18
    int64_t Counter;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.UInt32 DataSize
    // Size: 0x4
    // Offset: 0x20
    uint DataSize;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: DataSize and: ExtraData
    char __padding2[0x4] = {};
    // public readonly System.String ExtraData
    // Size: 0x8
    // Offset: 0x28
    ::StringW ExtraData;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String Key
    // Size: 0x8
    // Offset: 0x30
    ::StringW Key;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.UInt64 SaveTime
    // Size: 0x8
    // Offset: 0x38
    uint64_t SaveTime;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly Oculus.Platform.CloudStorageDataStatus Status
    // Size: 0x4
    // Offset: 0x40
    ::Oculus::Platform::CloudStorageDataStatus Status;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::CloudStorageDataStatus) == 0x4);
    // Padding between fields: Status and: VersionHandle
    char __padding6[0x4] = {};
    // public readonly System.String VersionHandle
    // Size: 0x8
    // Offset: 0x48
    ::StringW VersionHandle;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.String Bucket
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Bucket();
    // Get instance field reference: public readonly System.Int64 Counter
    [[deprecated("Use field access instead!")]] int64_t& dyn_Counter();
    // Get instance field reference: public readonly System.UInt32 DataSize
    [[deprecated("Use field access instead!")]] uint& dyn_DataSize();
    // Get instance field reference: public readonly System.String ExtraData
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ExtraData();
    // Get instance field reference: public readonly System.String Key
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Key();
    // Get instance field reference: public readonly System.UInt64 SaveTime
    [[deprecated("Use field access instead!")]] uint64_t& dyn_SaveTime();
    // Get instance field reference: public readonly Oculus.Platform.CloudStorageDataStatus Status
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::CloudStorageDataStatus& dyn_Status();
    // Get instance field reference: public readonly System.String VersionHandle
    [[deprecated("Use field access instead!")]] ::StringW& dyn_VersionHandle();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1A31360
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CloudStorageMetadata* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::CloudStorageMetadata::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CloudStorageMetadata*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.CloudStorageMetadata
  #pragma pack(pop)
  static check_size<sizeof(CloudStorageMetadata), 72 + sizeof(::StringW)> __Oculus_Platform_Models_CloudStorageMetadataSizeCheck;
  static_assert(sizeof(CloudStorageMetadata) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::CloudStorageMetadata::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
