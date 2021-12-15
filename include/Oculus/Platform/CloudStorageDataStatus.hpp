// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: CloudStorageDataStatus
  struct CloudStorageDataStatus;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::CloudStorageDataStatus, "Oculus.Platform", "CloudStorageDataStatus");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.CloudStorageDataStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct CloudStorageDataStatus/*, public System::Enum*/ {
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
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CloudStorageDataStatus
    constexpr CloudStorageDataStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0xF295B4
    // static field const value: static public Oculus.Platform.CloudStorageDataStatus Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.CloudStorageDataStatus Unknown
    static Oculus::Platform::CloudStorageDataStatus _get_Unknown();
    // Set static field: static public Oculus.Platform.CloudStorageDataStatus Unknown
    static void _set_Unknown(Oculus::Platform::CloudStorageDataStatus value);
    // [DescriptionAttribute] Offset: 0xF295EC
    // static field const value: static public Oculus.Platform.CloudStorageDataStatus InSync
    static constexpr const int InSync = 1;
    // Get static field: static public Oculus.Platform.CloudStorageDataStatus InSync
    static Oculus::Platform::CloudStorageDataStatus _get_InSync();
    // Set static field: static public Oculus.Platform.CloudStorageDataStatus InSync
    static void _set_InSync(Oculus::Platform::CloudStorageDataStatus value);
    // [DescriptionAttribute] Offset: 0xF29624
    // static field const value: static public Oculus.Platform.CloudStorageDataStatus NeedsDownload
    static constexpr const int NeedsDownload = 2;
    // Get static field: static public Oculus.Platform.CloudStorageDataStatus NeedsDownload
    static Oculus::Platform::CloudStorageDataStatus _get_NeedsDownload();
    // Set static field: static public Oculus.Platform.CloudStorageDataStatus NeedsDownload
    static void _set_NeedsDownload(Oculus::Platform::CloudStorageDataStatus value);
    // [DescriptionAttribute] Offset: 0xF2965C
    // static field const value: static public Oculus.Platform.CloudStorageDataStatus RemoteDownloading
    static constexpr const int RemoteDownloading = 3;
    // Get static field: static public Oculus.Platform.CloudStorageDataStatus RemoteDownloading
    static Oculus::Platform::CloudStorageDataStatus _get_RemoteDownloading();
    // Set static field: static public Oculus.Platform.CloudStorageDataStatus RemoteDownloading
    static void _set_RemoteDownloading(Oculus::Platform::CloudStorageDataStatus value);
    // [DescriptionAttribute] Offset: 0xF29694
    // static field const value: static public Oculus.Platform.CloudStorageDataStatus NeedsUpload
    static constexpr const int NeedsUpload = 4;
    // Get static field: static public Oculus.Platform.CloudStorageDataStatus NeedsUpload
    static Oculus::Platform::CloudStorageDataStatus _get_NeedsUpload();
    // Set static field: static public Oculus.Platform.CloudStorageDataStatus NeedsUpload
    static void _set_NeedsUpload(Oculus::Platform::CloudStorageDataStatus value);
    // [DescriptionAttribute] Offset: 0xF296CC
    // static field const value: static public Oculus.Platform.CloudStorageDataStatus LocalUploading
    static constexpr const int LocalUploading = 5;
    // Get static field: static public Oculus.Platform.CloudStorageDataStatus LocalUploading
    static Oculus::Platform::CloudStorageDataStatus _get_LocalUploading();
    // Set static field: static public Oculus.Platform.CloudStorageDataStatus LocalUploading
    static void _set_LocalUploading(Oculus::Platform::CloudStorageDataStatus value);
    // [DescriptionAttribute] Offset: 0xF29704
    // static field const value: static public Oculus.Platform.CloudStorageDataStatus InConflict
    static constexpr const int InConflict = 6;
    // Get static field: static public Oculus.Platform.CloudStorageDataStatus InConflict
    static Oculus::Platform::CloudStorageDataStatus _get_InConflict();
    // Set static field: static public Oculus.Platform.CloudStorageDataStatus InConflict
    static void _set_InConflict(Oculus::Platform::CloudStorageDataStatus value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Oculus.Platform.CloudStorageDataStatus
  #pragma pack(pop)
  static check_size<sizeof(CloudStorageDataStatus), 0 + sizeof(int)> __Oculus_Platform_CloudStorageDataStatusSizeCheck;
  static_assert(sizeof(CloudStorageDataStatus) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
