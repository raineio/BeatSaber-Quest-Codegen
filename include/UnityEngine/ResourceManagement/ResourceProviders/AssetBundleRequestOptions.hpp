// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceLocations.ILocationSizeData
#include "UnityEngine/ResourceManagement/ResourceLocations/ILocationSizeData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: UnityEngine::ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: ResourceManager
  class ResourceManager;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x42
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.AssetBundleRequestOptions
  // [TokenAttribute] Offset: FFFFFFFF
  class AssetBundleRequestOptions : public ::Il2CppObject/*, public UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // [FormerlySerializedAsAttribute] Offset: 0xEE5A7C
    // private System.String m_Hash
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_Hash;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xEE5AC8
    // private System.UInt32 m_Crc
    // Size: 0x4
    // Offset: 0x18
    uint m_Crc;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xEE5B14
    // private System.Int32 m_Timeout
    // Size: 0x4
    // Offset: 0x1C
    int m_Timeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xEE5B60
    // private System.Boolean m_ChunkedTransfer
    // Size: 0x1
    // Offset: 0x20
    bool m_ChunkedTransfer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_ChunkedTransfer and: m_RedirectLimit
    char __padding3[0x3] = {};
    // [FormerlySerializedAsAttribute] Offset: 0xEE5BAC
    // private System.Int32 m_RedirectLimit
    // Size: 0x4
    // Offset: 0x24
    int m_RedirectLimit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xEE5BF8
    // private System.Int32 m_RetryCount
    // Size: 0x4
    // Offset: 0x28
    int m_RetryCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_RetryCount and: m_BundleName
    char __padding5[0x4] = {};
    // private System.String m_BundleName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* m_BundleName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int64 m_BundleSize
    // Size: 0x8
    // Offset: 0x38
    int64_t m_BundleSize;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Boolean m_UseCrcForCachedBundles
    // Size: 0x1
    // Offset: 0x40
    bool m_UseCrcForCachedBundles;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_ClearOtherCachedVersionsWhenLoaded
    // Size: 0x1
    // Offset: 0x41
    bool m_ClearOtherCachedVersionsWhenLoaded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData
    operator UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData() noexcept {
      return *reinterpret_cast<UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData*>(this);
    }
    // Get instance field reference: private System.String m_Hash
    ::Il2CppString*& dyn_m_Hash();
    // Get instance field reference: private System.UInt32 m_Crc
    uint& dyn_m_Crc();
    // Get instance field reference: private System.Int32 m_Timeout
    int& dyn_m_Timeout();
    // Get instance field reference: private System.Boolean m_ChunkedTransfer
    bool& dyn_m_ChunkedTransfer();
    // Get instance field reference: private System.Int32 m_RedirectLimit
    int& dyn_m_RedirectLimit();
    // Get instance field reference: private System.Int32 m_RetryCount
    int& dyn_m_RetryCount();
    // Get instance field reference: private System.String m_BundleName
    ::Il2CppString*& dyn_m_BundleName();
    // Get instance field reference: private System.Int64 m_BundleSize
    int64_t& dyn_m_BundleSize();
    // Get instance field reference: private System.Boolean m_UseCrcForCachedBundles
    bool& dyn_m_UseCrcForCachedBundles();
    // Get instance field reference: private System.Boolean m_ClearOtherCachedVersionsWhenLoaded
    bool& dyn_m_ClearOtherCachedVersionsWhenLoaded();
    // public System.String get_Hash()
    // Offset: 0x1B67658
    ::Il2CppString* get_Hash();
    // public System.Void set_Hash(System.String value)
    // Offset: 0x1B67660
    void set_Hash(::Il2CppString* value);
    // public System.UInt32 get_Crc()
    // Offset: 0x1B67668
    uint get_Crc();
    // public System.Void set_Crc(System.UInt32 value)
    // Offset: 0x1B67670
    void set_Crc(uint value);
    // public System.Int32 get_Timeout()
    // Offset: 0x1B67678
    int get_Timeout();
    // public System.Void set_Timeout(System.Int32 value)
    // Offset: 0x1B67680
    void set_Timeout(int value);
    // public System.Boolean get_ChunkedTransfer()
    // Offset: 0x1B67688
    bool get_ChunkedTransfer();
    // public System.Void set_ChunkedTransfer(System.Boolean value)
    // Offset: 0x1B67690
    void set_ChunkedTransfer(bool value);
    // public System.Int32 get_RedirectLimit()
    // Offset: 0x1B6769C
    int get_RedirectLimit();
    // public System.Void set_RedirectLimit(System.Int32 value)
    // Offset: 0x1B676A4
    void set_RedirectLimit(int value);
    // public System.Int32 get_RetryCount()
    // Offset: 0x1B676AC
    int get_RetryCount();
    // public System.Void set_RetryCount(System.Int32 value)
    // Offset: 0x1B676B4
    void set_RetryCount(int value);
    // public System.String get_BundleName()
    // Offset: 0x1B676BC
    ::Il2CppString* get_BundleName();
    // public System.Void set_BundleName(System.String value)
    // Offset: 0x1B676C4
    void set_BundleName(::Il2CppString* value);
    // public System.Int64 get_BundleSize()
    // Offset: 0x1B676CC
    int64_t get_BundleSize();
    // public System.Void set_BundleSize(System.Int64 value)
    // Offset: 0x1B676D4
    void set_BundleSize(int64_t value);
    // public System.Boolean get_UseCrcForCachedBundle()
    // Offset: 0x1B676DC
    bool get_UseCrcForCachedBundle();
    // public System.Void set_UseCrcForCachedBundle(System.Boolean value)
    // Offset: 0x1B676E4
    void set_UseCrcForCachedBundle(bool value);
    // public System.Boolean get_ClearOtherCachedVersionsWhenLoaded()
    // Offset: 0x1B676F0
    bool get_ClearOtherCachedVersionsWhenLoaded();
    // public System.Void set_ClearOtherCachedVersionsWhenLoaded(System.Boolean value)
    // Offset: 0x1B676F8
    void set_ClearOtherCachedVersionsWhenLoaded(bool value);
    // public System.Int64 ComputeSize(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location, UnityEngine.ResourceManagement.ResourceManager resourceManager)
    // Offset: 0x1B67704
    int64_t ComputeSize(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, UnityEngine::ResourceManagement::ResourceManager* resourceManager);
    // public System.Void .ctor()
    // Offset: 0x1B678C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetBundleRequestOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetBundleRequestOptions*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.ResourceProviders.AssetBundleRequestOptions
  #pragma pack(pop)
  static check_size<sizeof(AssetBundleRequestOptions), 65 + sizeof(bool)> __UnityEngine_ResourceManagement_ResourceProviders_AssetBundleRequestOptionsSizeCheck;
  static_assert(sizeof(AssetBundleRequestOptions) == 0x42);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*, "UnityEngine.ResourceManagement.ResourceProviders", "AssetBundleRequestOptions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_Hash
// Il2CppName: get_Hash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_Hash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*), "get_Hash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_Hash
// Il2CppName: set_Hash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(::Il2CppString*)>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_Hash)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*), "set_Hash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_Crc
// Il2CppName: get_Crc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_Crc)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*), "get_Crc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_Crc
// Il2CppName: set_Crc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(uint)>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_Crc)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*), "set_Crc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_Timeout
// Il2CppName: get_Timeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_Timeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*), "get_Timeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_Timeout
// Il2CppName: set_Timeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(int)>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_Timeout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*), "set_Timeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_ChunkedTransfer
// Il2CppName: get_ChunkedTransfer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_ChunkedTransfer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*), "get_ChunkedTransfer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_ChunkedTransfer
// Il2CppName: set_ChunkedTransfer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(bool)>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_ChunkedTransfer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*), "set_ChunkedTransfer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_RedirectLimit
// Il2CppName: get_RedirectLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_RedirectLimit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*), "get_RedirectLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_RedirectLimit
// Il2CppName: set_RedirectLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(int)>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_RedirectLimit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*), "set_RedirectLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_RetryCount
// Il2CppName: get_RetryCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_RetryCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*), "get_RetryCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_RetryCount
// Il2CppName: set_RetryCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(int)>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_RetryCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*), "set_RetryCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_BundleName
// Il2CppName: get_BundleName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_BundleName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*), "get_BundleName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_BundleName
// Il2CppName: set_BundleName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(::Il2CppString*)>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_BundleName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*), "set_BundleName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_BundleSize
// Il2CppName: get_BundleSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_BundleSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*), "get_BundleSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_BundleSize
// Il2CppName: set_BundleSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(int64_t)>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_BundleSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*), "set_BundleSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_UseCrcForCachedBundle
// Il2CppName: get_UseCrcForCachedBundle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_UseCrcForCachedBundle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*), "get_UseCrcForCachedBundle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_UseCrcForCachedBundle
// Il2CppName: set_UseCrcForCachedBundle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(bool)>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_UseCrcForCachedBundle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*), "set_UseCrcForCachedBundle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_ClearOtherCachedVersionsWhenLoaded
// Il2CppName: get_ClearOtherCachedVersionsWhenLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_ClearOtherCachedVersionsWhenLoaded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*), "get_ClearOtherCachedVersionsWhenLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_ClearOtherCachedVersionsWhenLoaded
// Il2CppName: set_ClearOtherCachedVersionsWhenLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(bool)>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_ClearOtherCachedVersionsWhenLoaded)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*), "set_ClearOtherCachedVersionsWhenLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::ComputeSize
// Il2CppName: ComputeSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, UnityEngine::ResourceManagement::ResourceManager*)>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::ComputeSize)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    static auto* resourceManager = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement", "ResourceManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*), "ComputeSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location, resourceManager});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
