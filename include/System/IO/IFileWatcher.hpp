// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: FileSystemWatcher
  class FileSystemWatcher;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.IFileWatcher
  class IFileWatcher {
    public:
    // Creating value type constructor for type: IFileWatcher
    IFileWatcher() noexcept {}
    // public System.Void StartDispatching(System.IO.FileSystemWatcher fsw)
    // Offset: 0xFFFFFFFF
    void StartDispatching(System::IO::FileSystemWatcher* fsw);
    // public System.Void StopDispatching(System.IO.FileSystemWatcher fsw)
    // Offset: 0xFFFFFFFF
    void StopDispatching(System::IO::FileSystemWatcher* fsw);
  }; // System.IO.IFileWatcher
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::IFileWatcher*, "System.IO", "IFileWatcher");
// Writing MetadataGetter for method: System::IO::IFileWatcher::StartDispatching
// Il2CppName: StartDispatching
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::IFileWatcher::*)(System::IO::FileSystemWatcher*)>(&System::IO::IFileWatcher::StartDispatching)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::IFileWatcher*), "StartDispatching", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IO::FileSystemWatcher*>()});
  }
};
// Writing MetadataGetter for method: System::IO::IFileWatcher::StopDispatching
// Il2CppName: StopDispatching
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::IFileWatcher::*)(System::IO::FileSystemWatcher*)>(&System::IO::IFileWatcher::StopDispatching)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::IFileWatcher*), "StopDispatching", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IO::FileSystemWatcher*>()});
  }
};
