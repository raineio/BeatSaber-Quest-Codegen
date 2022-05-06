// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.LimitedInputStream
#include "Org/BouncyCastle/Asn1/LimitedInputStream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: Stream because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: IndefiniteLengthInputStream
  class IndefiniteLengthInputStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*, "Org.BouncyCastle.Asn1", "IndefiniteLengthInputStream");
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.IndefiniteLengthInputStream
  // [TokenAttribute] Offset: FFFFFFFF
  class IndefiniteLengthInputStream : public ::Org::BouncyCastle::Asn1::LimitedInputStream {
    public:
    public:
    // private System.Int32 _lookAhead
    // Size: 0x4
    // Offset: 0x3C
    int lookAhead;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _eofOn00
    // Size: 0x1
    // Offset: 0x40
    bool eofOn00;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Int32 _lookAhead
    [[deprecated("Use field access instead!")]] int& dyn__lookAhead();
    // Get instance field reference: private System.Boolean _eofOn00
    [[deprecated("Use field access instead!")]] bool& dyn__eofOn00();
    // System.Void SetEofOn00(System.Boolean eofOn00)
    // Offset: 0x1CC7EF4
    void SetEofOn00(bool eofOn00);
    // private System.Boolean CheckForEof()
    // Offset: 0x1CC7E34
    bool CheckForEof();
    // private System.Int32 RequireByte()
    // Offset: 0x1CC7DA4
    int RequireByte();
    // System.Void .ctor(System.IO.Stream inStream, System.Int32 limit)
    // Offset: 0x1CC7D14
    // Implemented from: Org.BouncyCastle.Asn1.LimitedInputStream
    // Base method: System.Void LimitedInputStream::.ctor(System.IO.Stream inStream, System.Int32 limit)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IndefiniteLengthInputStream* New_ctor(::System::IO::Stream* inStream, int limit) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IndefiniteLengthInputStream*, creationType>(inStream, limit)));
    }
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x1CC7F08
    // Implemented from: Org.BouncyCastle.Utilities.IO.BaseInputStream
    // Base method: System.Int32 BaseInputStream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::ArrayW<uint8_t> buffer, int offset, int count);
    // public override System.Int32 ReadByte()
    // Offset: 0x1CC8048
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::ReadByte()
    int ReadByte();
  }; // Org.BouncyCastle.Asn1.IndefiniteLengthInputStream
  #pragma pack(pop)
  static check_size<sizeof(IndefiniteLengthInputStream), 64 + sizeof(bool)> __Org_BouncyCastle_Asn1_IndefiniteLengthInputStreamSizeCheck;
  static_assert(sizeof(IndefiniteLengthInputStream) == 0x41);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::SetEofOn00
// Il2CppName: SetEofOn00
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::*)(bool)>(&Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::SetEofOn00)> {
  static const MethodInfo* get() {
    static auto* eofOn00 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*), "SetEofOn00", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eofOn00});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::CheckForEof
// Il2CppName: CheckForEof
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::*)()>(&Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::CheckForEof)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*), "CheckForEof", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::RequireByte
// Il2CppName: RequireByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::*)()>(&Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::RequireByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*), "RequireByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::ReadByte
// Il2CppName: ReadByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::*)()>(&Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::ReadByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*), "ReadByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
