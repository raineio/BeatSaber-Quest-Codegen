// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.IO.MonoIOStat
#include "System/IO/MonoIOStat.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: FileAttributes because it is already included!
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileSystemInfo
  // [ComVisibleAttribute] Offset: D7C850
  class FileSystemInfo : public System::MarshalByRefObject/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // System.IO.MonoIOStat _data
    // Size: 0x28
    // Offset: 0x18
    System::IO::MonoIOStat data;
    // Field size check
    static_assert(sizeof(System::IO::MonoIOStat) == 0x28);
    // System.Int32 _dataInitialised
    // Size: 0x4
    // Offset: 0x40
    int dataInitialised;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: dataInitialised and: FullPath
    char __padding1[0x4] = {};
    // protected System.String FullPath
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* FullPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected System.String OriginalPath
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* OriginalPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _displayPath
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* displayPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: FileSystemInfo
    FileSystemInfo(System::IO::MonoIOStat data_ = {}, int dataInitialised_ = {}, ::Il2CppString* FullPath_ = {}, ::Il2CppString* OriginalPath_ = {}, ::Il2CppString* displayPath_ = {}) noexcept : data{data_}, dataInitialised{dataInitialised_}, FullPath{FullPath_}, OriginalPath{OriginalPath_}, displayPath{displayPath_} {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1948198
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileSystemInfo* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileSystemInfo*, creationType>(info, context)));
    }
    // public System.String get_FullName()
    // Offset: 0x1951104
    ::Il2CppString* get_FullName();
    // public System.String get_Name()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Name();
    // public System.Boolean get_Exists()
    // Offset: 0xFFFFFFFF
    bool get_Exists();
    // public System.DateTime get_CreationTime()
    // Offset: 0x195110C
    System::DateTime get_CreationTime();
    // public System.DateTime get_CreationTimeUtc()
    // Offset: 0x1951138
    System::DateTime get_CreationTimeUtc();
    // public System.DateTime get_LastAccessTime()
    // Offset: 0x19511E0
    System::DateTime get_LastAccessTime();
    // public System.DateTime get_LastAccessTimeUtc()
    // Offset: 0x195120C
    System::DateTime get_LastAccessTimeUtc();
    // public System.Void Refresh()
    // Offset: 0x1948310
    void Refresh();
    // public System.IO.FileAttributes get_Attributes()
    // Offset: 0x19512B4
    System::IO::FileAttributes get_Attributes();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1951310
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.String get_DisplayPath()
    // Offset: 0x19513F4
    ::Il2CppString* get_DisplayPath();
    // System.Void set_DisplayPath(System.String value)
    // Offset: 0x19513FC
    void set_DisplayPath(::Il2CppString* value);
    // protected System.Void .ctor()
    // Offset: 0x1947C2C
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileSystemInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileSystemInfo*, creationType>()));
    }
  }; // System.IO.FileSystemInfo
  #pragma pack(pop)
  static check_size<sizeof(FileSystemInfo), 88 + sizeof(::Il2CppString*)> __System_IO_FileSystemInfoSizeCheck;
  static_assert(sizeof(FileSystemInfo) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileSystemInfo*, "System.IO", "FileSystemInfo");
// Writing MetadataGetter for method: System::IO::FileSystemInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::FileSystemInfo::get_FullName
// Il2CppName: get_FullName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_FullName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "get_FullName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_Name)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::get_Exists
// Il2CppName: get_Exists
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_Exists)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "get_Exists", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::get_CreationTime
// Il2CppName: get_CreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_CreationTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "get_CreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::get_CreationTimeUtc
// Il2CppName: get_CreationTimeUtc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_CreationTimeUtc)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "get_CreationTimeUtc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::get_LastAccessTime
// Il2CppName: get_LastAccessTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_LastAccessTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "get_LastAccessTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::get_LastAccessTimeUtc
// Il2CppName: get_LastAccessTimeUtc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_LastAccessTimeUtc)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "get_LastAccessTimeUtc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::Refresh)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::FileAttributes (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_Attributes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemInfo::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::IO::FileSystemInfo::GetObjectData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::get_DisplayPath
// Il2CppName: get_DisplayPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_DisplayPath)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "get_DisplayPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::set_DisplayPath
// Il2CppName: set_DisplayPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemInfo::*)(::Il2CppString*)>(&System::IO::FileSystemInfo::set_DisplayPath)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "set_DisplayPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
