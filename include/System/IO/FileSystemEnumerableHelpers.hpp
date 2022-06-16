// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Microsoft.Win32.Win32Native
#include "Microsoft/Win32/Win32Native.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: FileSystemEnumerableHelpers
  class FileSystemEnumerableHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::FileSystemEnumerableHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileSystemEnumerableHelpers*, "System.IO", "FileSystemEnumerableHelpers");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileSystemEnumerableHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class FileSystemEnumerableHelpers : public ::Il2CppObject {
    public:
    // static System.Boolean IsDir(Microsoft.Win32.Win32Native/Microsoft.Win32.WIN32_FIND_DATA data)
    // Offset: 0x1FF7FDC
    static bool IsDir(::Microsoft::Win32::Win32Native::WIN32_FIND_DATA* data);
    // static System.Boolean IsFile(Microsoft.Win32.Win32Native/Microsoft.Win32.WIN32_FIND_DATA data)
    // Offset: 0x1FF8078
    static bool IsFile(::Microsoft::Win32::Win32Native::WIN32_FIND_DATA* data);
  }; // System.IO.FileSystemEnumerableHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::FileSystemEnumerableHelpers::IsDir
// Il2CppName: IsDir
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Microsoft::Win32::Win32Native::WIN32_FIND_DATA*)>(&System::IO::FileSystemEnumerableHelpers::IsDir)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "Win32Native/WIN32_FIND_DATA")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemEnumerableHelpers*), "IsDir", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemEnumerableHelpers::IsFile
// Il2CppName: IsFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Microsoft::Win32::Win32Native::WIN32_FIND_DATA*)>(&System::IO::FileSystemEnumerableHelpers::IsFile)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "Win32Native/WIN32_FIND_DATA")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemEnumerableHelpers*), "IsFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
