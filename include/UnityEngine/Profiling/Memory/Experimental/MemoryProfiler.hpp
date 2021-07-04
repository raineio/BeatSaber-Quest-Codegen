// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Profiling.Experimental.DebugScreenCapture
#include "UnityEngine/Profiling/Experimental/DebugScreenCapture.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: UnityEngine::Profiling::Memory::Experimental
namespace UnityEngine::Profiling::Memory::Experimental {
  // Forward declaring type: MetaData
  class MetaData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: TextureFormat because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Profiling.Memory.Experimental
namespace UnityEngine::Profiling::Memory::Experimental {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Profiling.Memory.Experimental.MemoryProfiler
  // [NativeHeaderAttribute] Offset: D90FB0
  class MemoryProfiler : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: MemoryProfiler
    MemoryProfiler() noexcept {}
    // [DebuggerBrowsableAttribute] Offset: 0xD93FB0
    // [CompilerGeneratedAttribute] Offset: 0xD93FB0
    // Get static field: static private System.Action`2<System.String,System.Boolean> m_SnapshotFinished
    static System::Action_2<::Il2CppString*, bool>* _get_m_SnapshotFinished();
    // Set static field: static private System.Action`2<System.String,System.Boolean> m_SnapshotFinished
    static void _set_m_SnapshotFinished(System::Action_2<::Il2CppString*, bool>* value);
    // [CompilerGeneratedAttribute] Offset: 0xD93FEC
    // [DebuggerBrowsableAttribute] Offset: 0xD93FEC
    // Get static field: static private System.Action`3<System.String,System.Boolean,UnityEngine.Profiling.Experimental.DebugScreenCapture> m_SaveScreenshotToDisk
    static System::Action_3<::Il2CppString*, bool, UnityEngine::Profiling::Experimental::DebugScreenCapture>* _get_m_SaveScreenshotToDisk();
    // Set static field: static private System.Action`3<System.String,System.Boolean,UnityEngine.Profiling.Experimental.DebugScreenCapture> m_SaveScreenshotToDisk
    static void _set_m_SaveScreenshotToDisk(System::Action_3<::Il2CppString*, bool, UnityEngine::Profiling::Experimental::DebugScreenCapture>* value);
    // [CompilerGeneratedAttribute] Offset: 0xD94028
    // [DebuggerBrowsableAttribute] Offset: 0xD94028
    // Get static field: static private System.Action`1<UnityEngine.Profiling.Memory.Experimental.MetaData> createMetaData
    static System::Action_1<UnityEngine::Profiling::Memory::Experimental::MetaData*>* _get_createMetaData();
    // Set static field: static private System.Action`1<UnityEngine.Profiling.Memory.Experimental.MetaData> createMetaData
    static void _set_createMetaData(System::Action_1<UnityEngine::Profiling::Memory::Experimental::MetaData*>* value);
    // static private System.Byte[] PrepareMetadata()
    // Offset: 0x1B24B68
    static ::Array<uint8_t>* PrepareMetadata();
    // static System.Int32 WriteIntToByteArray(System.Byte[] array, System.Int32 offset, System.Int32 value)
    // Offset: 0x1B24D20
    static int WriteIntToByteArray(::Array<uint8_t>* array, int offset, int value);
    // static System.Int32 WriteStringToByteArray(System.Byte[] array, System.Int32 offset, System.String value)
    // Offset: 0x1B24DC0
    static int WriteStringToByteArray(::Array<uint8_t>* array, int offset, ::Il2CppString* value);
    // static private System.Void FinalizeSnapshot(System.String path, System.Boolean result)
    // Offset: 0x1B24E68
    static void FinalizeSnapshot(::Il2CppString* path, bool result);
    // static private System.Void SaveScreenshotToDisk(System.String path, System.Boolean result, System.IntPtr pixelsPtr, System.Int32 pixelsCount, UnityEngine.TextureFormat format, System.Int32 width, System.Int32 height)
    // Offset: 0x1B24EF4
    static void SaveScreenshotToDisk(::Il2CppString* path, bool result, System::IntPtr pixelsPtr, int pixelsCount, UnityEngine::TextureFormat format, int width, int height);
  }; // UnityEngine.Profiling.Memory.Experimental.MemoryProfiler
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*, "UnityEngine.Profiling.Memory.Experimental", "MemoryProfiler");
// Writing MetadataGetter for method: UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::PrepareMetadata
// Il2CppName: PrepareMetadata
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)()>(&UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::PrepareMetadata)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*), "PrepareMetadata", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::WriteIntToByteArray
// Il2CppName: WriteIntToByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Array<uint8_t>*, int, int)>(&UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::WriteIntToByteArray)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*), "WriteIntToByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::WriteStringToByteArray
// Il2CppName: WriteStringToByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Array<uint8_t>*, int, ::Il2CppString*)>(&UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::WriteStringToByteArray)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*), "WriteStringToByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::FinalizeSnapshot
// Il2CppName: FinalizeSnapshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, bool)>(&UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::FinalizeSnapshot)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*), "FinalizeSnapshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::SaveScreenshotToDisk
// Il2CppName: SaveScreenshotToDisk
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, bool, System::IntPtr, int, UnityEngine::TextureFormat, int, int)>(&UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::SaveScreenshotToDisk)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*), "SaveScreenshotToDisk", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::TextureFormat>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
