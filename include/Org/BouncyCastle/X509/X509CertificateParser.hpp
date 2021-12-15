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
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Set
  class Asn1Set;
  // Forward declaring type: Asn1InputStream
  class Asn1InputStream;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: Org::BouncyCastle::X509
namespace Org::BouncyCastle::X509 {
  // Forward declaring type: PemParser
  class PemParser;
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: X509CertificateStructure
  class X509CertificateStructure;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ICollection
  class ICollection;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.X509
namespace Org::BouncyCastle::X509 {
  // Forward declaring type: X509CertificateParser
  class X509CertificateParser;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::X509::X509CertificateParser);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::X509CertificateParser*, "Org.BouncyCastle.X509", "X509CertificateParser");
// Type namespace: Org.BouncyCastle.X509
namespace Org::BouncyCastle::X509 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.X509.X509CertificateParser
  // [TokenAttribute] Offset: FFFFFFFF
  class X509CertificateParser : public ::Il2CppObject {
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
    // private Org.BouncyCastle.Asn1.Asn1Set sData
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1Set* sData;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Set*) == 0x8);
    // private System.Int32 sDataObjectCount
    // Size: 0x4
    // Offset: 0x18
    int sDataObjectCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: sDataObjectCount and: currentStream
    char __padding1[0x4] = {};
    // private System.IO.Stream currentStream
    // Size: 0x8
    // Offset: 0x20
    System::IO::Stream* currentStream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    public:
    // Get static field: static private readonly Org.BouncyCastle.X509.PemParser PemCertParser
    static Org::BouncyCastle::X509::PemParser* _get_PemCertParser();
    // Set static field: static private readonly Org.BouncyCastle.X509.PemParser PemCertParser
    static void _set_PemCertParser(Org::BouncyCastle::X509::PemParser* value);
    // Get instance field reference: private Org.BouncyCastle.Asn1.Asn1Set sData
    Org::BouncyCastle::Asn1::Asn1Set*& dyn_sData();
    // Get instance field reference: private System.Int32 sDataObjectCount
    int& dyn_sDataObjectCount();
    // Get instance field reference: private System.IO.Stream currentStream
    System::IO::Stream*& dyn_currentStream();
    // static private System.Void .cctor()
    // Offset: 0x222EC40
    static void _cctor();
    // private Org.BouncyCastle.X509.X509Certificate ReadDerCertificate(Org.BouncyCastle.Asn1.Asn1InputStream dIn)
    // Offset: 0x222E384
    Org::BouncyCastle::X509::X509Certificate* ReadDerCertificate(Org::BouncyCastle::Asn1::Asn1InputStream* dIn);
    // private Org.BouncyCastle.X509.X509Certificate GetCertificate()
    // Offset: 0x222E588
    Org::BouncyCastle::X509::X509Certificate* GetCertificate();
    // private Org.BouncyCastle.X509.X509Certificate ReadPemCertificate(System.IO.Stream inStream)
    // Offset: 0x222E680
    Org::BouncyCastle::X509::X509Certificate* ReadPemCertificate(System::IO::Stream* inStream);
    // protected Org.BouncyCastle.X509.X509Certificate CreateX509Certificate(Org.BouncyCastle.Asn1.X509.X509CertificateStructure c)
    // Offset: 0x222E734
    Org::BouncyCastle::X509::X509Certificate* CreateX509Certificate(Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c);
    // public Org.BouncyCastle.X509.X509Certificate ReadCertificate(System.Byte[] input)
    // Offset: 0x222E794
    Org::BouncyCastle::X509::X509Certificate* ReadCertificate(::ArrayW<uint8_t> input);
    // public System.Collections.ICollection ReadCertificates(System.Byte[] input)
    // Offset: 0x222EAA8
    System::Collections::ICollection* ReadCertificates(::ArrayW<uint8_t> input);
    // public Org.BouncyCastle.X509.X509Certificate ReadCertificate(System.IO.Stream inStream)
    // Offset: 0x222E80C
    Org::BouncyCastle::X509::X509Certificate* ReadCertificate(System::IO::Stream* inStream);
    // public System.Collections.ICollection ReadCertificates(System.IO.Stream inStream)
    // Offset: 0x222EB20
    System::Collections::ICollection* ReadCertificates(System::IO::Stream* inStream);
    // public System.Void .ctor()
    // Offset: 0x222ECB4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateParser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::X509::X509CertificateParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateParser*, creationType>()));
    }
  }; // Org.BouncyCastle.X509.X509CertificateParser
  #pragma pack(pop)
  static check_size<sizeof(X509CertificateParser), 32 + sizeof(System::IO::Stream*)> __Org_BouncyCastle_X509_X509CertificateParserSizeCheck;
  static_assert(sizeof(X509CertificateParser) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CertificateParser::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::X509::X509CertificateParser::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CertificateParser*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CertificateParser::ReadDerCertificate
// Il2CppName: ReadDerCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::X509Certificate* (Org::BouncyCastle::X509::X509CertificateParser::*)(Org::BouncyCastle::Asn1::Asn1InputStream*)>(&Org::BouncyCastle::X509::X509CertificateParser::ReadDerCertificate)> {
  static const MethodInfo* get() {
    static auto* dIn = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1InputStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CertificateParser*), "ReadDerCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dIn});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CertificateParser::GetCertificate
// Il2CppName: GetCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::X509Certificate* (Org::BouncyCastle::X509::X509CertificateParser::*)()>(&Org::BouncyCastle::X509::X509CertificateParser::GetCertificate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CertificateParser*), "GetCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CertificateParser::ReadPemCertificate
// Il2CppName: ReadPemCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::X509Certificate* (Org::BouncyCastle::X509::X509CertificateParser::*)(System::IO::Stream*)>(&Org::BouncyCastle::X509::X509CertificateParser::ReadPemCertificate)> {
  static const MethodInfo* get() {
    static auto* inStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CertificateParser*), "ReadPemCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inStream});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CertificateParser::CreateX509Certificate
// Il2CppName: CreateX509Certificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::X509Certificate* (Org::BouncyCastle::X509::X509CertificateParser::*)(Org::BouncyCastle::Asn1::X509::X509CertificateStructure*)>(&Org::BouncyCastle::X509::X509CertificateParser::CreateX509Certificate)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1.X509", "X509CertificateStructure")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CertificateParser*), "CreateX509Certificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CertificateParser::ReadCertificate
// Il2CppName: ReadCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::X509Certificate* (Org::BouncyCastle::X509::X509CertificateParser::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::X509::X509CertificateParser::ReadCertificate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CertificateParser*), "ReadCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CertificateParser::ReadCertificates
// Il2CppName: ReadCertificates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection* (Org::BouncyCastle::X509::X509CertificateParser::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::X509::X509CertificateParser::ReadCertificates)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CertificateParser*), "ReadCertificates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CertificateParser::ReadCertificate
// Il2CppName: ReadCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::X509Certificate* (Org::BouncyCastle::X509::X509CertificateParser::*)(System::IO::Stream*)>(&Org::BouncyCastle::X509::X509CertificateParser::ReadCertificate)> {
  static const MethodInfo* get() {
    static auto* inStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CertificateParser*), "ReadCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inStream});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CertificateParser::ReadCertificates
// Il2CppName: ReadCertificates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection* (Org::BouncyCastle::X509::X509CertificateParser::*)(System::IO::Stream*)>(&Org::BouncyCastle::X509::X509CertificateParser::ReadCertificates)> {
  static const MethodInfo* get() {
    static auto* inStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CertificateParser*), "ReadCertificates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inStream});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CertificateParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
