// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Profiling.Experimental.DebugScreenCapture
#include "UnityEngine/Profiling/Experimental/DebugScreenCapture.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: MemoryProfiler
  class MemoryProfiler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*, "UnityEngine.Profiling.Memory.Experimental", "MemoryProfiler");
// Type namespace: UnityEngine.Profiling.Memory.Experimental
namespace UnityEngine::Profiling::Memory::Experimental {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Profiling.Memory.Experimental.MemoryProfiler
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 104797C
  class MemoryProfiler : public ::Il2CppObject {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x104A9C4
    // Get static field: static private System.Action`2<System.String,System.Boolean> m_SnapshotFinished
    static ::System::Action_2<::StringW, bool>* _get_m_SnapshotFinished();
    // Set static field: static private System.Action`2<System.String,System.Boolean> m_SnapshotFinished
    static void _set_m_SnapshotFinished(::System::Action_2<::StringW, bool>* value);
    // [DebuggerBrowsableAttribute] Offset: 0x104AA00
    // Get static field: static private System.Action`3<System.String,System.Boolean,UnityEngine.Profiling.Experimental.DebugScreenCapture> m_SaveScreenshotToDisk
    static ::System::Action_3<::StringW, bool, ::UnityEngine::Profiling::Experimental::DebugScreenCapture>* _get_m_SaveScreenshotToDisk();
    // Set static field: static private System.Action`3<System.String,System.Boolean,UnityEngine.Profiling.Experimental.DebugScreenCapture> m_SaveScreenshotToDisk
    static void _set_m_SaveScreenshotToDisk(::System::Action_3<::StringW, bool, ::UnityEngine::Profiling::Experimental::DebugScreenCapture>* value);
    // [DebuggerBrowsableAttribute] Offset: 0x104AA3C
    // Get static field: static private System.Action`1<UnityEngine.Profiling.Memory.Experimental.MetaData> createMetaData
    static ::System::Action_1<::UnityEngine::Profiling::Memory::Experimental::MetaData*>* _get_createMetaData();
    // Set static field: static private System.Action`1<UnityEngine.Profiling.Memory.Experimental.MetaData> createMetaData
    static void _set_createMetaData(::System::Action_1<::UnityEngine::Profiling::Memory::Experimental::MetaData*>* value);
    // static private System.Byte[] PrepareMetadata()
    // Offset: 0x210491C
    static ::ArrayW<uint8_t> PrepareMetadata();
    // static System.Int32 WriteIntToByteArray(System.Byte[] array, System.Int32 offset, System.Int32 value)
    // Offset: 0x2104AD4
    static int WriteIntToByteArray(::ArrayW<uint8_t> array, int offset, int value);
    // static System.Int32 WriteStringToByteArray(System.Byte[] array, System.Int32 offset, System.String value)
    // Offset: 0x2104B74
    static int WriteStringToByteArray(::ArrayW<uint8_t> array, int offset, ::StringW value);
    // static private System.Void FinalizeSnapshot(System.String path, System.Boolean result)
    // Offset: 0x2104C1C
    static void FinalizeSnapshot(::StringW path, bool result);
    // static private System.Void SaveScreenshotToDisk(System.String path, System.Boolean result, System.IntPtr pixelsPtr, System.Int32 pixelsCount, UnityEngine.TextureFormat format, System.Int32 width, System.Int32 height)
    // Offset: 0x2104CA8
    static void SaveScreenshotToDisk(::StringW path, bool result, ::System::IntPtr pixelsPtr, int pixelsCount, ::UnityEngine::TextureFormat format, int width, int height);
  }; // UnityEngine.Profiling.Memory.Experimental.MemoryProfiler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::PrepareMetadata
// Il2CppName: PrepareMetadata
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)()>(&UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::PrepareMetadata)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*), "PrepareMetadata", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::WriteIntToByteArray
// Il2CppName: WriteIntToByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>, int, int)>(&UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::WriteIntToByteArray)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*), "WriteIntToByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, offset, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::WriteStringToByteArray
// Il2CppName: WriteStringToByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>, int, ::StringW)>(&UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::WriteStringToByteArray)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*), "WriteStringToByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, offset, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::FinalizeSnapshot
// Il2CppName: FinalizeSnapshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool)>(&UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::FinalizeSnapshot)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*), "FinalizeSnapshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, result});
  }
};
// Writing MetadataGetter for method: UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::SaveScreenshotToDisk
// Il2CppName: SaveScreenshotToDisk
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool, ::System::IntPtr, int, ::UnityEngine::TextureFormat, int, int)>(&UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::SaveScreenshotToDisk)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* pixelsPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* pixelsCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextureFormat")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*), "SaveScreenshotToDisk", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, result, pixelsPtr, pixelsCount, format, width, height});
  }
};
