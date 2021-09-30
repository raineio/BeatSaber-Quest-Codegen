// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Tls
namespace Org::BouncyCastle::Crypto::Tls {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Tls.TlsUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class TlsUtilities : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Byte[] EmptyBytes
    static ::ArrayW<uint8_t> _get_EmptyBytes();
    // Set static field: static public readonly System.Byte[] EmptyBytes
    static void _set_EmptyBytes(::ArrayW<uint8_t> value);
    // Get static field: static public readonly System.Int16[] EmptyShorts
    static ::ArrayW<int16_t> _get_EmptyShorts();
    // Set static field: static public readonly System.Int16[] EmptyShorts
    static void _set_EmptyShorts(::ArrayW<int16_t> value);
    // Get static field: static public readonly System.Int32[] EmptyInts
    static ::ArrayW<int> _get_EmptyInts();
    // Set static field: static public readonly System.Int32[] EmptyInts
    static void _set_EmptyInts(::ArrayW<int> value);
    // Get static field: static public readonly System.Int64[] EmptyLongs
    static ::ArrayW<int64_t> _get_EmptyLongs();
    // Set static field: static public readonly System.Int64[] EmptyLongs
    static void _set_EmptyLongs(::ArrayW<int64_t> value);
    // Get static field: static readonly System.Byte[] SSL_CLIENT
    static ::ArrayW<uint8_t> _get_SSL_CLIENT();
    // Set static field: static readonly System.Byte[] SSL_CLIENT
    static void _set_SSL_CLIENT(::ArrayW<uint8_t> value);
    // Get static field: static readonly System.Byte[] SSL_SERVER
    static ::ArrayW<uint8_t> _get_SSL_SERVER();
    // Set static field: static readonly System.Byte[] SSL_SERVER
    static void _set_SSL_SERVER(::ArrayW<uint8_t> value);
    // Get static field: static readonly System.Byte[][] SSL3_CONST
    static ::ArrayW<::ArrayW<uint8_t>> _get_SSL3_CONST();
    // Set static field: static readonly System.Byte[][] SSL3_CONST
    static void _set_SSL3_CONST(::ArrayW<::ArrayW<uint8_t>> value);
    // static private System.Void .cctor()
    // Offset: 0x13A5B08
    static void _cctor();
    // static public System.Void WriteUint8(System.Byte i, System.IO.Stream output)
    // Offset: 0x13A56F4
    static void WriteUint8(uint8_t i, System::IO::Stream* output);
    // static public System.Void WriteUint16(System.Int32 i, System.IO.Stream output)
    // Offset: 0x13A5720
    static void WriteUint16(int i, System::IO::Stream* output);
    // static public System.Void WriteOpaque8(System.Byte[] buf, System.IO.Stream output)
    // Offset: 0x13A5000
    static void WriteOpaque8(::ArrayW<uint8_t> buf, System::IO::Stream* output);
    // static public System.Void WriteOpaque16(System.Byte[] buf, System.IO.Stream output)
    // Offset: 0x13A44A8
    static void WriteOpaque16(::ArrayW<uint8_t> buf, System::IO::Stream* output);
    // static public System.Byte ReadUint8(System.IO.Stream input)
    // Offset: 0x13A5774
    static uint8_t ReadUint8(System::IO::Stream* input);
    // static public System.Int32 ReadUint16(System.IO.Stream input)
    // Offset: 0x13A5804
    static int ReadUint16(System::IO::Stream* input);
    // static public System.Void ReadFully(System.Byte[] buf, System.IO.Stream input)
    // Offset: 0x13A58B0
    static void ReadFully(::ArrayW<uint8_t> buf, System::IO::Stream* input);
    // static public System.Byte[] ReadOpaque8(System.IO.Stream input)
    // Offset: 0x13A5958
    static ::ArrayW<uint8_t> ReadOpaque8(System::IO::Stream* input);
    // static public System.Byte[] ReadOpaque16(System.IO.Stream input)
    // Offset: 0x13A4418
    static ::ArrayW<uint8_t> ReadOpaque16(System::IO::Stream* input);
    // static private System.Byte[][] GenSsl3Const()
    // Offset: 0x13A59E8
    static ::ArrayW<::ArrayW<uint8_t>> GenSsl3Const();
  }; // Org.BouncyCastle.Crypto.Tls.TlsUtilities
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsUtilities*, "Org.BouncyCastle.Crypto.Tls", "TlsUtilities");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsUtilities::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Tls::TlsUtilities::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsUtilities*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint8
// Il2CppName: WriteUint8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t, System::IO::Stream*)>(&Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint8)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* output = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsUtilities*), "WriteUint8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, output});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint16
// Il2CppName: WriteUint16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, System::IO::Stream*)>(&Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint16)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsUtilities*), "WriteUint16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, output});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteOpaque8
// Il2CppName: WriteOpaque8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, System::IO::Stream*)>(&Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteOpaque8)> {
  static const MethodInfo* get() {
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsUtilities*), "WriteOpaque8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf, output});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteOpaque16
// Il2CppName: WriteOpaque16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, System::IO::Stream*)>(&Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteOpaque16)> {
  static const MethodInfo* get() {
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsUtilities*), "WriteOpaque16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf, output});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint8
// Il2CppName: ReadUint8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(System::IO::Stream*)>(&Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint8)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsUtilities*), "ReadUint8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint16
// Il2CppName: ReadUint16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IO::Stream*)>(&Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint16)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsUtilities*), "ReadUint16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadFully
// Il2CppName: ReadFully
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, System::IO::Stream*)>(&Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadFully)> {
  static const MethodInfo* get() {
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* input = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsUtilities*), "ReadFully", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf, input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadOpaque8
// Il2CppName: ReadOpaque8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(System::IO::Stream*)>(&Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadOpaque8)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsUtilities*), "ReadOpaque8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadOpaque16
// Il2CppName: ReadOpaque16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(System::IO::Stream*)>(&Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadOpaque16)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsUtilities*), "ReadOpaque16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsUtilities::GenSsl3Const
// Il2CppName: GenSsl3Const
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<uint8_t>> (*)()>(&Org::BouncyCastle::Crypto::Tls::TlsUtilities::GenSsl3Const)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsUtilities*), "GenSsl3Const", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
