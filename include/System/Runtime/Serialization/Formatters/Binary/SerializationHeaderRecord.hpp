// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: SerializationHeaderRecord
  class SerializationHeaderRecord;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*, "System.Runtime.Serialization.Formatters.Binary", "SerializationHeaderRecord");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord
  // [TokenAttribute] Offset: FFFFFFFF
  class SerializationHeaderRecord : public ::Il2CppObject {
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
    // System.Int32 binaryFormatterMajorVersion
    // Size: 0x4
    // Offset: 0x10
    int binaryFormatterMajorVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 binaryFormatterMinorVersion
    // Size: 0x4
    // Offset: 0x14
    int binaryFormatterMinorVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum
    // Size: 0x4
    // Offset: 0x18
    System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum) == 0x4);
    // System.Int32 topId
    // Size: 0x4
    // Offset: 0x1C
    int topId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 headerId
    // Size: 0x4
    // Offset: 0x20
    int headerId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 majorVersion
    // Size: 0x4
    // Offset: 0x24
    int majorVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 minorVersion
    // Size: 0x4
    // Offset: 0x28
    int minorVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: System.Int32 binaryFormatterMajorVersion
    int& dyn_binaryFormatterMajorVersion();
    // Get instance field reference: System.Int32 binaryFormatterMinorVersion
    int& dyn_binaryFormatterMinorVersion();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum
    System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum& dyn_binaryHeaderEnum();
    // Get instance field reference: System.Int32 topId
    int& dyn_topId();
    // Get instance field reference: System.Int32 headerId
    int& dyn_headerId();
    // Get instance field reference: System.Int32 majorVersion
    int& dyn_majorVersion();
    // Get instance field reference: System.Int32 minorVersion
    int& dyn_minorVersion();
    // System.Void .ctor(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum, System.Int32 topId, System.Int32 headerId, System.Int32 majorVersion, System.Int32 minorVersion)
    // Offset: 0x18695C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationHeaderRecord* New_ctor(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum, int topId, int headerId, int majorVersion, int minorVersion) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationHeaderRecord*, creationType>(binaryHeaderEnum, topId, headerId, majorVersion, minorVersion)));
    }
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x1869620
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // static private System.Int32 GetInt32(System.Byte[] buffer, System.Int32 index)
    // Offset: 0x186969C
    static int GetInt32(::ArrayW<uint8_t> buffer, int index);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0x186971C
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0x18698F8
    void Dump();
    // System.Void .ctor()
    // Offset: 0x18695B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationHeaderRecord* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationHeaderRecord*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord
  #pragma pack(pop)
  static check_size<sizeof(SerializationHeaderRecord), 40 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_SerializationHeaderRecordSizeCheck;
  static_assert(sizeof(SerializationHeaderRecord) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::*)(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::Write)> {
  static const MethodInfo* get() {
    static auto* sout = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "__BinaryWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sout});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::GetInt32
// Il2CppName: GetInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>, int)>(&System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::GetInt32)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*), "GetInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::*)(System::Runtime::Serialization::Formatters::Binary::__BinaryParser*)>(&System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::Read)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "__BinaryParser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::Dump
// Il2CppName: Dump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::*)()>(&System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::Dump)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*), "Dump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
