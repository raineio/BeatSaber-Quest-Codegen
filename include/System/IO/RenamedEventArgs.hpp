// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.FileSystemEventArgs
#include "System/IO/FileSystemEventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: RenamedEventArgs
  class RenamedEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::RenamedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::RenamedEventArgs*, "System.IO", "RenamedEventArgs");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.RenamedEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class RenamedEventArgs : public ::System::IO::FileSystemEventArgs {
    public:
    public:
    // private System.String oldName
    // Size: 0x8
    // Offset: 0x28
    ::StringW oldName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String oldFullPath
    // Size: 0x8
    // Offset: 0x30
    ::StringW oldFullPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String oldName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_oldName();
    // Get instance field reference: private System.String oldFullPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_oldFullPath();
    // public System.Void .ctor(System.IO.WatcherChangeTypes changeType, System.String directory, System.String name, System.String oldName)
    // Offset: 0x1CF3680
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenamedEventArgs* New_ctor(::System::IO::WatcherChangeTypes changeType, ::StringW directory, ::StringW name, ::StringW oldName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::RenamedEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenamedEventArgs*, creationType>(changeType, directory, name, oldName)));
    }
  }; // System.IO.RenamedEventArgs
  #pragma pack(pop)
  static check_size<sizeof(RenamedEventArgs), 48 + sizeof(::StringW)> __System_IO_RenamedEventArgsSizeCheck;
  static_assert(sizeof(RenamedEventArgs) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::RenamedEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
