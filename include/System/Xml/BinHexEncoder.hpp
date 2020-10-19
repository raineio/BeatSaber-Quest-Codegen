// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlWriter
  class XmlWriter;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.BinHexEncoder
  class BinHexEncoder : public ::Il2CppObject {
    public:
    // static System.Void Encode(System.Byte[] buffer, System.Int32 index, System.Int32 count, System.Xml.XmlWriter writer)
    // Offset: 0x1541808
    static void Encode(::Array<uint8_t>* buffer, int index, int count, System::Xml::XmlWriter* writer);
    // static private System.Int32 Encode(System.Byte[] inArray, System.Int32 offsetIn, System.Int32 count, System.Char[] outArray)
    // Offset: 0x1541994
    static int Encode(::Array<uint8_t>* inArray, int offsetIn, int count, ::Array<::Il2CppChar>* outArray);
  }; // System.Xml.BinHexEncoder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::BinHexEncoder*, "System.Xml", "BinHexEncoder");
#pragma pack(pop)
