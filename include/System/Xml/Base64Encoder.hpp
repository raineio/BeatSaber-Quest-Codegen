// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Base64Encoder
  class Base64Encoder : public ::Il2CppObject {
    public:
    // private System.Byte[] leftOverBytes
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* leftOverBytes;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 leftOverBytesCount
    // Size: 0x4
    // Offset: 0x18
    int leftOverBytesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: leftOverBytesCount and: charsLine
    char __padding1[0x4] = {};
    // private System.Char[] charsLine
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppChar>* charsLine;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppChar>*) == 0x8);
    // Creating value type constructor for type: Base64Encoder
    Base64Encoder(::Array<uint8_t>* leftOverBytes_ = {}, int leftOverBytesCount_ = {}, ::Array<::Il2CppChar>* charsLine_ = {}) noexcept : leftOverBytes{leftOverBytes_}, leftOverBytesCount{leftOverBytesCount_}, charsLine{charsLine_} {}
    // System.Void WriteChars(System.Char[] chars, System.Int32 index, System.Int32 count)
    // Offset: 0xFFFFFFFF
    void WriteChars(::Array<::Il2CppChar>* chars, int index, int count);
    // System.Void Encode(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1929A60
    void Encode(::Array<uint8_t>* buffer, int index, int count);
    // System.Void Flush()
    // Offset: 0x1929D94
    void Flush();
    // System.Void .ctor()
    // Offset: 0x19299FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Base64Encoder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::Base64Encoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Base64Encoder*, creationType>()));
    }
  }; // System.Xml.Base64Encoder
  #pragma pack(pop)
  static check_size<sizeof(Base64Encoder), 32 + sizeof(::Array<::Il2CppChar>*)> __System_Xml_Base64EncoderSizeCheck;
  static_assert(sizeof(Base64Encoder) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Base64Encoder*, "System.Xml", "Base64Encoder");
// Writing MetadataGetter for method: System::Xml::Base64Encoder::WriteChars
// Il2CppName: WriteChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Base64Encoder::*)(::Array<::Il2CppChar>*, int, int)>(&System::Xml::Base64Encoder::WriteChars)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Base64Encoder*), "WriteChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppChar>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Xml::Base64Encoder::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Base64Encoder::*)(::Array<uint8_t>*, int, int)>(&System::Xml::Base64Encoder::Encode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Base64Encoder*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Xml::Base64Encoder::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Base64Encoder::*)()>(&System::Xml::Base64Encoder::Flush)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Base64Encoder*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Base64Encoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
