// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: IAsn1Convertible
  class IAsn1Convertible;
  // Forward declaring type: Asn1Object
  class Asn1Object;
  // Forward declaring type: Asn1EncodableVector
  class Asn1EncodableVector;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1StreamParser
  class Asn1StreamParser;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Asn1::Asn1StreamParser);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1StreamParser*, "Org.BouncyCastle.Asn1", "Asn1StreamParser");
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Asn1StreamParser
  // [TokenAttribute] Offset: FFFFFFFF
  class Asn1StreamParser : public ::Il2CppObject {
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
    // private readonly System.IO.Stream _in
    // Size: 0x8
    // Offset: 0x10
    System::IO::Stream* in;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private readonly System.Int32 _limit
    // Size: 0x4
    // Offset: 0x18
    int limit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: limit and: tmpBuffers
    char __padding1[0x4] = {};
    // private readonly System.Byte[][] tmpBuffers
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::ArrayW<uint8_t>> tmpBuffers;
    // Field size check
    static_assert(sizeof(::ArrayW<::ArrayW<uint8_t>>) == 0x8);
    public:
    // Get instance field reference: private readonly System.IO.Stream _in
    System::IO::Stream*& dyn__in();
    // Get instance field reference: private readonly System.Int32 _limit
    int& dyn__limit();
    // Get instance field reference: private readonly System.Byte[][] tmpBuffers
    ::ArrayW<::ArrayW<uint8_t>>& dyn_tmpBuffers();
    // public System.Void .ctor(System.IO.Stream inStream)
    // Offset: 0x18EB314
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1StreamParser* New_ctor(System::IO::Stream* inStream) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1StreamParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1StreamParser*, creationType>(inStream)));
    }
    // public System.Void .ctor(System.IO.Stream inStream, System.Int32 limit)
    // Offset: 0x18EC838
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1StreamParser* New_ctor(System::IO::Stream* inStream, int limit) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1StreamParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1StreamParser*, creationType>(inStream, limit)));
    }
    // Org.BouncyCastle.Asn1.IAsn1Convertible ReadIndef(System.Int32 tagValue)
    // Offset: 0x18F08E8
    Org::BouncyCastle::Asn1::IAsn1Convertible* ReadIndef(int tagValue);
    // Org.BouncyCastle.Asn1.Asn1Object ReadTaggedObject(System.Boolean constructed, System.Int32 tag)
    // Offset: 0x18EB348
    Org::BouncyCastle::Asn1::Asn1Object* ReadTaggedObject(bool constructed, int tag);
    // public Org.BouncyCastle.Asn1.IAsn1Convertible ReadObject()
    // Offset: 0x18F0BF8
    Org::BouncyCastle::Asn1::IAsn1Convertible* ReadObject();
    // private System.Void Set00Check(System.Boolean enabled)
    // Offset: 0x18F114C
    void Set00Check(bool enabled);
    // Org.BouncyCastle.Asn1.Asn1EncodableVector ReadVector()
    // Offset: 0x18F0A2C
    Org::BouncyCastle::Asn1::Asn1EncodableVector* ReadVector();
  }; // Org.BouncyCastle.Asn1.Asn1StreamParser
  #pragma pack(pop)
  static check_size<sizeof(Asn1StreamParser), 32 + sizeof(::ArrayW<::ArrayW<uint8_t>>)> __Org_BouncyCastle_Asn1_Asn1StreamParserSizeCheck;
  static_assert(sizeof(Asn1StreamParser) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1StreamParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1StreamParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1StreamParser::ReadIndef
// Il2CppName: ReadIndef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::IAsn1Convertible* (Org::BouncyCastle::Asn1::Asn1StreamParser::*)(int)>(&Org::BouncyCastle::Asn1::Asn1StreamParser::ReadIndef)> {
  static const MethodInfo* get() {
    static auto* tagValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1StreamParser*), "ReadIndef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tagValue});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1StreamParser::ReadTaggedObject
// Il2CppName: ReadTaggedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Asn1StreamParser::*)(bool, int)>(&Org::BouncyCastle::Asn1::Asn1StreamParser::ReadTaggedObject)> {
  static const MethodInfo* get() {
    static auto* constructed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1StreamParser*), "ReadTaggedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constructed, tag});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1StreamParser::ReadObject
// Il2CppName: ReadObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::IAsn1Convertible* (Org::BouncyCastle::Asn1::Asn1StreamParser::*)()>(&Org::BouncyCastle::Asn1::Asn1StreamParser::ReadObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1StreamParser*), "ReadObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1StreamParser::Set00Check
// Il2CppName: Set00Check
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Asn1StreamParser::*)(bool)>(&Org::BouncyCastle::Asn1::Asn1StreamParser::Set00Check)> {
  static const MethodInfo* get() {
    static auto* enabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1StreamParser*), "Set00Check", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enabled});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1StreamParser::ReadVector
// Il2CppName: ReadVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1EncodableVector* (Org::BouncyCastle::Asn1::Asn1StreamParser::*)()>(&Org::BouncyCastle::Asn1::Asn1StreamParser::ReadVector)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1StreamParser*), "ReadVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
