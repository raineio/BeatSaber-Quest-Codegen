// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.FileAttributes
#include "System/IO/FileAttributes.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: FileData
  class FileData;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::IO::FileData);
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileData*, "System.IO", "FileData");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileData
  // [TokenAttribute] Offset: FFFFFFFF
  class FileData : public ::Il2CppObject {
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
    // public System.String Directory
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Directory;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.IO.FileAttributes Attributes
    // Size: 0x4
    // Offset: 0x18
    System::IO::FileAttributes Attributes;
    // Field size check
    static_assert(sizeof(System::IO::FileAttributes) == 0x4);
    // public System.Boolean NotExists
    // Size: 0x1
    // Offset: 0x1C
    bool NotExists;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: NotExists and: CreationTime
    char __padding2[0x3] = {};
    // public System.DateTime CreationTime
    // Size: 0x8
    // Offset: 0x20
    System::DateTime CreationTime;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // public System.DateTime LastWriteTime
    // Size: 0x8
    // Offset: 0x28
    System::DateTime LastWriteTime;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    public:
    // Get instance field reference: public System.String Directory
    ::Il2CppString*& dyn_Directory();
    // Get instance field reference: public System.IO.FileAttributes Attributes
    System::IO::FileAttributes& dyn_Attributes();
    // Get instance field reference: public System.Boolean NotExists
    bool& dyn_NotExists();
    // Get instance field reference: public System.DateTime CreationTime
    System::DateTime& dyn_CreationTime();
    // Get instance field reference: public System.DateTime LastWriteTime
    System::DateTime& dyn_LastWriteTime();
    // public System.Void .ctor()
    // Offset: 0x1A362B8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileData*, creationType>()));
    }
  }; // System.IO.FileData
  #pragma pack(pop)
  static check_size<sizeof(FileData), 40 + sizeof(System::DateTime)> __System_IO_FileDataSizeCheck;
  static_assert(sizeof(FileData) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::FileData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
