// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: BinaryTypeEnum
  struct BinaryTypeEnum;
  // Forward declaring type: WriteObjectInfo
  class WriteObjectInfo;
  // Forward declaring type: ObjectWriter
  class ObjectWriter;
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
  // Forward declaring type: ObjectReader
  class ObjectReader;
  // Forward declaring type: BinaryAssemblyInfo
  class BinaryAssemblyInfo;
  // Forward declaring type: InternalPrimitiveTypeE
  struct InternalPrimitiveTypeE;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryConverter
  class BinaryConverter : public ::Il2CppObject {
    public:
    // static System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum GetBinaryTypeInfo(System.Type type, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.String typeName, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, out System.Object typeInformation, out System.Int32 assemId)
    // Offset: 0x12E1364
    static System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum GetBinaryTypeInfo(System::Type* type, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::Il2CppString* typeName, System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, ::Il2CppObject*& typeInformation, int& assemId);
    // static System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum GetParserBinaryTypeInfo(System.Type type, out System.Object typeInformation)
    // Offset: 0x12E1A0C
    static System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum GetParserBinaryTypeInfo(System::Type* type, ::Il2CppObject*& typeInformation);
    // static System.Void WriteTypeInfo(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, System.Object typeInformation, System.Int32 assemId, System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x12E0938
    static void WriteTypeInfo(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::Il2CppObject* typeInformation, int assemId, System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // static System.Object ReadTypeInfo(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, System.Runtime.Serialization.Formatters.Binary.__BinaryParser input, out System.Int32 assemId)
    // Offset: 0x12E0F1C
    static ::Il2CppObject* ReadTypeInfo(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input, int& assemId);
    // static System.Void TypeFromInfo(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, System.Object typeInformation, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo, out System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE primitiveTypeEnum, out System.String typeString, out System.Type type, out System.Boolean isVariant)
    // Offset: 0x12E1D90
    static void TypeFromInfo(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::Il2CppObject* typeInformation, System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& primitiveTypeEnum, ::Il2CppString*& typeString, System::Type*& type, bool& isVariant);
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryConverter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryConverter*, "System.Runtime.Serialization.Formatters.Binary", "BinaryConverter");
#pragma pack(pop)
