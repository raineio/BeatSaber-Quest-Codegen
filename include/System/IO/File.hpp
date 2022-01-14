// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: StreamWriter
  class StreamWriter;
  // Forward declaring type: FileStream
  class FileStream;
  // Forward declaring type: FileAttributes
  struct FileAttributes;
  // Forward declaring type: FileMode
  struct FileMode;
  // Forward declaring type: FileAccess
  struct FileAccess;
  // Forward declaring type: FileShare
  struct FileShare;
  // Forward declaring type: StreamReader
  class StreamReader;
  // Forward declaring type: MonoIOStat
  struct MonoIOStat;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: File
  class File;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::IO::File);
DEFINE_IL2CPP_ARG_TYPE(System::IO::File*, "System.IO", "File");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.File
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E9F9BC
  class File : public ::Il2CppObject {
    public:
    // Get static field: static private System.Nullable`1<System.DateTime> defaultLocalFileTime
    static System::Nullable_1<System::DateTime> _get_defaultLocalFileTime();
    // Set static field: static private System.Nullable`1<System.DateTime> defaultLocalFileTime
    static void _set_defaultLocalFileTime(System::Nullable_1<System::DateTime> value);
    // static private System.DateTime get_DefaultLocalFileTime()
    // Offset: 0x1AF9C4C
    static System::DateTime get_DefaultLocalFileTime();
    // static public System.IO.StreamWriter AppendText(System.String path)
    // Offset: 0x1AF9680
    static System::IO::StreamWriter* AppendText(::StringW path);
    // static public System.IO.FileStream Create(System.String path)
    // Offset: 0x1AF9770
    static System::IO::FileStream* Create(::StringW path);
    // static public System.IO.FileStream Create(System.String path, System.Int32 bufferSize)
    // Offset: 0x1AF9778
    static System::IO::FileStream* Create(::StringW path, int bufferSize);
    // static public System.IO.StreamWriter CreateText(System.String path)
    // Offset: 0x1AF9828
    static System::IO::StreamWriter* CreateText(::StringW path);
    // static public System.Void Delete(System.String path)
    // Offset: 0x1AF7C4C
    static void Delete(::StringW path);
    // static public System.Boolean Exists(System.String path)
    // Offset: 0x1AF6B50
    static bool Exists(::StringW path);
    // static public System.IO.FileAttributes GetAttributes(System.String path)
    // Offset: 0x1AF991C
    static System::IO::FileAttributes GetAttributes(::StringW path);
    // static public System.DateTime GetCreationTime(System.String path)
    // Offset: 0x1AF9A88
    static System::DateTime GetCreationTime(::StringW path);
    // static public System.DateTime GetLastWriteTime(System.String path)
    // Offset: 0x1AF9D20
    static System::DateTime GetLastWriteTime(::StringW path);
    // static public System.IO.FileStream Open(System.String path, System.IO.FileMode mode)
    // Offset: 0x1AF9E58
    static System::IO::FileStream* Open(::StringW path, System::IO::FileMode mode);
    // static public System.IO.FileStream Open(System.String path, System.IO.FileMode mode, System.IO.FileAccess access, System.IO.FileShare share)
    // Offset: 0x1AF9F18
    static System::IO::FileStream* Open(::StringW path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share);
    // static public System.IO.FileStream OpenRead(System.String path)
    // Offset: 0x1AF9FB4
    static System::IO::FileStream* OpenRead(::StringW path);
    // static public System.IO.StreamReader OpenText(System.String path)
    // Offset: 0x1AFA034
    static System::IO::StreamReader* OpenText(::StringW path);
    // static public System.Void Replace(System.String sourceFileName, System.String destinationFileName, System.String destinationBackupFileName)
    // Offset: 0x1AFA0A0
    static void Replace(::StringW sourceFileName, ::StringW destinationFileName, ::StringW destinationBackupFileName);
    // static public System.Void Replace(System.String sourceFileName, System.String destinationFileName, System.String destinationBackupFileName, System.Boolean ignoreMetadataErrors)
    // Offset: 0x1AFA0A8
    static void Replace(::StringW sourceFileName, ::StringW destinationFileName, ::StringW destinationBackupFileName, bool ignoreMetadataErrors);
    // static public System.Byte[] ReadAllBytes(System.String path)
    // Offset: 0x1AFA7D8
    static ::ArrayW<uint8_t> ReadAllBytes(::StringW path);
    // static public System.String[] ReadAllLines(System.String path)
    // Offset: 0x1AFAA0C
    static ::ArrayW<::StringW> ReadAllLines(::StringW path);
    // static private System.String[] ReadAllLines(System.IO.StreamReader reader)
    // Offset: 0x1AFAB10
    static ::ArrayW<::StringW> ReadAllLines(System::IO::StreamReader* reader);
    // static public System.String ReadAllText(System.String path)
    // Offset: 0x1AFAC44
    static ::StringW ReadAllText(::StringW path);
    // static public System.Void WriteAllBytes(System.String path, System.Byte[] bytes)
    // Offset: 0x1AFAD70
    static void WriteAllBytes(::StringW path, ::ArrayW<uint8_t> bytes);
    // static public System.Void WriteAllLines(System.String path, System.String[] contents)
    // Offset: 0x1AFAE98
    static void WriteAllLines(::StringW path, ::ArrayW<::StringW> contents);
    // static private System.Void WriteAllLines(System.IO.StreamWriter writer, System.String[] contents)
    // Offset: 0x1AFB034
    static void WriteAllLines(System::IO::StreamWriter* writer, ::ArrayW<::StringW> contents);
    // static public System.Void WriteAllText(System.String path, System.String contents)
    // Offset: 0x1AFB0BC
    static void WriteAllText(::StringW path, ::StringW contents);
    // static public System.Void WriteAllText(System.String path, System.String contents, System.Text.Encoding encoding)
    // Offset: 0x1AFB13C
    static void WriteAllText(::StringW path, ::StringW contents, System::Text::Encoding* encoding);
    // static public System.Void AppendAllLines(System.String path, System.Collections.Generic.IEnumerable`1<System.String> contents)
    // Offset: 0x1AFB284
    static void AppendAllLines(::StringW path, System::Collections::Generic::IEnumerable_1<::StringW>* contents);
    // static System.Int32 FillAttributeInfo(System.String path, ref System.IO.MonoIOStat data, System.Boolean tryagain, System.Boolean returnErrorOnNotFound)
    // Offset: 0x1AFB5DC
    static int FillAttributeInfo(::StringW path, ByRef<System::IO::MonoIOStat> data, bool tryagain, bool returnErrorOnNotFound);
  }; // System.IO.File
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::File::get_DefaultLocalFileTime
// Il2CppName: get_DefaultLocalFileTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (*)()>(&System::IO::File::get_DefaultLocalFileTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "get_DefaultLocalFileTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::File::AppendText
// Il2CppName: AppendText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::StreamWriter* (*)(::StringW)>(&System::IO::File::AppendText)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "AppendText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::FileStream* (*)(::StringW)>(&System::IO::File::Create)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::FileStream* (*)(::StringW, int)>(&System::IO::File::Create)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bufferSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, bufferSize});
  }
};
// Writing MetadataGetter for method: System::IO::File::CreateText
// Il2CppName: CreateText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::StreamWriter* (*)(::StringW)>(&System::IO::File::CreateText)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "CreateText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::Delete
// Il2CppName: Delete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::IO::File::Delete)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Delete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::Exists
// Il2CppName: Exists
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::IO::File::Exists)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Exists", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::GetAttributes
// Il2CppName: GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::FileAttributes (*)(::StringW)>(&System::IO::File::GetAttributes)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::GetCreationTime
// Il2CppName: GetCreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (*)(::StringW)>(&System::IO::File::GetCreationTime)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "GetCreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::GetLastWriteTime
// Il2CppName: GetLastWriteTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (*)(::StringW)>(&System::IO::File::GetLastWriteTime)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "GetLastWriteTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::FileStream* (*)(::StringW, System::IO::FileMode)>(&System::IO::File::Open)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("System.IO", "FileMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, mode});
  }
};
// Writing MetadataGetter for method: System::IO::File::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::FileStream* (*)(::StringW, System::IO::FileMode, System::IO::FileAccess, System::IO::FileShare)>(&System::IO::File::Open)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("System.IO", "FileMode")->byval_arg;
    static auto* access = &::il2cpp_utils::GetClassFromName("System.IO", "FileAccess")->byval_arg;
    static auto* share = &::il2cpp_utils::GetClassFromName("System.IO", "FileShare")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, mode, access, share});
  }
};
// Writing MetadataGetter for method: System::IO::File::OpenRead
// Il2CppName: OpenRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::FileStream* (*)(::StringW)>(&System::IO::File::OpenRead)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "OpenRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::OpenText
// Il2CppName: OpenText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::StreamReader* (*)(::StringW)>(&System::IO::File::OpenText)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "OpenText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::Replace
// Il2CppName: Replace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::StringW)>(&System::IO::File::Replace)> {
  static const MethodInfo* get() {
    static auto* sourceFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destinationFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destinationBackupFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Replace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceFileName, destinationFileName, destinationBackupFileName});
  }
};
// Writing MetadataGetter for method: System::IO::File::Replace
// Il2CppName: Replace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::StringW, bool)>(&System::IO::File::Replace)> {
  static const MethodInfo* get() {
    static auto* sourceFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destinationFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destinationBackupFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ignoreMetadataErrors = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Replace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceFileName, destinationFileName, destinationBackupFileName, ignoreMetadataErrors});
  }
};
// Writing MetadataGetter for method: System::IO::File::ReadAllBytes
// Il2CppName: ReadAllBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&System::IO::File::ReadAllBytes)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "ReadAllBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::ReadAllLines
// Il2CppName: ReadAllLines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&System::IO::File::ReadAllLines)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "ReadAllLines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::ReadAllLines
// Il2CppName: ReadAllLines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(System::IO::StreamReader*)>(&System::IO::File::ReadAllLines)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("System.IO", "StreamReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "ReadAllLines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: System::IO::File::ReadAllText
// Il2CppName: ReadAllText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::IO::File::ReadAllText)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "ReadAllText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::WriteAllBytes
// Il2CppName: WriteAllBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>)>(&System::IO::File::WriteAllBytes)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "WriteAllBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, bytes});
  }
};
// Writing MetadataGetter for method: System::IO::File::WriteAllLines
// Il2CppName: WriteAllLines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::StringW>)>(&System::IO::File::WriteAllLines)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* contents = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "WriteAllLines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, contents});
  }
};
// Writing MetadataGetter for method: System::IO::File::WriteAllLines
// Il2CppName: WriteAllLines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IO::StreamWriter*, ::ArrayW<::StringW>)>(&System::IO::File::WriteAllLines)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.IO", "StreamWriter")->byval_arg;
    static auto* contents = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "WriteAllLines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, contents});
  }
};
// Writing MetadataGetter for method: System::IO::File::WriteAllText
// Il2CppName: WriteAllText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&System::IO::File::WriteAllText)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* contents = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "WriteAllText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, contents});
  }
};
// Writing MetadataGetter for method: System::IO::File::WriteAllText
// Il2CppName: WriteAllText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, System::Text::Encoding*)>(&System::IO::File::WriteAllText)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* contents = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* encoding = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "WriteAllText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, contents, encoding});
  }
};
// Writing MetadataGetter for method: System::IO::File::AppendAllLines
// Il2CppName: AppendAllLines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, System::Collections::Generic::IEnumerable_1<::StringW>*)>(&System::IO::File::AppendAllLines)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* contents = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "AppendAllLines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, contents});
  }
};
// Writing MetadataGetter for method: System::IO::File::FillAttributeInfo
// Il2CppName: FillAttributeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, ByRef<System::IO::MonoIOStat>, bool, bool)>(&System::IO::File::FillAttributeInfo)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOStat")->this_arg;
    static auto* tryagain = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* returnErrorOnNotFound = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "FillAttributeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, data, tryagain, returnErrorOnNotFound});
  }
};
