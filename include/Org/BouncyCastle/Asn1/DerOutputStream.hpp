// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Utilities.IO.FilterStream
#include "Org/BouncyCastle/Utilities/IO/FilterStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Encodable
  class Asn1Encodable;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: Stream because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.DerOutputStream
  // [TokenAttribute] Offset: FFFFFFFF
  class DerOutputStream : public Org::BouncyCastle::Utilities::IO::FilterStream {
    public:
    // private System.Void WriteLength(System.Int32 length)
    // Offset: 0x18F20B4
    void WriteLength(int length);
    // System.Void WriteEncoded(System.Int32 tag, System.Byte[] bytes)
    // Offset: 0x18ED748
    void WriteEncoded(int tag, ::ArrayW<uint8_t> bytes);
    // System.Void WriteEncoded(System.Int32 tag, System.Byte first, System.Byte[] bytes)
    // Offset: 0x18E6720
    void WriteEncoded(int tag, uint8_t first, ::ArrayW<uint8_t> bytes);
    // System.Void WriteTag(System.Int32 flags, System.Int32 tagNo)
    // Offset: 0x18E8658
    void WriteTag(int flags, int tagNo);
    // System.Void WriteEncoded(System.Int32 flags, System.Int32 tagNo, System.Byte[] bytes)
    // Offset: 0x18ED038
    void WriteEncoded(int flags, int tagNo, ::ArrayW<uint8_t> bytes);
    // protected System.Void WriteNull()
    // Offset: 0x18F2164
    void WriteNull();
    // public System.Void WriteObject(Org.BouncyCastle.Asn1.Asn1Encodable obj)
    // Offset: 0x18F21A8
    void WriteObject(Org::BouncyCastle::Asn1::Asn1Encodable* obj);
    // public System.Void WriteObject(Org.BouncyCastle.Asn1.Asn1Object obj)
    // Offset: 0x18F2228
    void WriteObject(Org::BouncyCastle::Asn1::Asn1Object* obj);
    // public System.Void .ctor(System.IO.Stream os)
    // Offset: 0x18DE180
    // Implemented from: Org.BouncyCastle.Utilities.IO.FilterStream
    // Base method: System.Void FilterStream::.ctor(System.IO.Stream os)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerOutputStream* New_ctor(System::IO::Stream* os) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerOutputStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerOutputStream*, creationType>(os)));
    }
  }; // Org.BouncyCastle.Asn1.DerOutputStream
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerOutputStream*, "Org.BouncyCastle.Asn1", "DerOutputStream");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerOutputStream::WriteLength
// Il2CppName: WriteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerOutputStream::*)(int)>(&Org::BouncyCastle::Asn1::DerOutputStream::WriteLength)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerOutputStream*), "WriteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerOutputStream::WriteEncoded
// Il2CppName: WriteEncoded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerOutputStream::*)(int, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Asn1::DerOutputStream::WriteEncoded)> {
  static const MethodInfo* get() {
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerOutputStream*), "WriteEncoded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tag, bytes});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerOutputStream::WriteEncoded
// Il2CppName: WriteEncoded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerOutputStream::*)(int, uint8_t, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Asn1::DerOutputStream::WriteEncoded)> {
  static const MethodInfo* get() {
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* first = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerOutputStream*), "WriteEncoded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tag, first, bytes});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerOutputStream::WriteTag
// Il2CppName: WriteTag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerOutputStream::*)(int, int)>(&Org::BouncyCastle::Asn1::DerOutputStream::WriteTag)> {
  static const MethodInfo* get() {
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* tagNo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerOutputStream*), "WriteTag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flags, tagNo});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerOutputStream::WriteEncoded
// Il2CppName: WriteEncoded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerOutputStream::*)(int, int, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Asn1::DerOutputStream::WriteEncoded)> {
  static const MethodInfo* get() {
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* tagNo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerOutputStream*), "WriteEncoded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flags, tagNo, bytes});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerOutputStream::WriteNull
// Il2CppName: WriteNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerOutputStream::*)()>(&Org::BouncyCastle::Asn1::DerOutputStream::WriteNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerOutputStream*), "WriteNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerOutputStream::WriteObject
// Il2CppName: WriteObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerOutputStream::*)(Org::BouncyCastle::Asn1::Asn1Encodable*)>(&Org::BouncyCastle::Asn1::DerOutputStream::WriteObject)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Encodable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerOutputStream*), "WriteObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerOutputStream::WriteObject
// Il2CppName: WriteObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerOutputStream::*)(Org::BouncyCastle::Asn1::Asn1Object*)>(&Org::BouncyCastle::Asn1::DerOutputStream::WriteObject)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerOutputStream*), "WriteObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerOutputStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
