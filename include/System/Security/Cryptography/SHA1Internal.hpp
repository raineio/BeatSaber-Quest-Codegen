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
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.SHA1Internal
  class SHA1Internal : public ::Il2CppObject {
    public:
    // private System.UInt32[] _H
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint>* H;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt64 count
    // Size: 0x8
    // Offset: 0x18
    uint64_t count;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.Byte[] _ProcessingBuffer
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* ProcessingBuffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 _ProcessingBufferCount
    // Size: 0x4
    // Offset: 0x28
    int ProcessingBufferCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: ProcessingBufferCount and: buff
    char __padding3[0x4] = {};
    // private System.UInt32[] buff
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint>* buff;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // Creating value type constructor for type: SHA1Internal
    SHA1Internal(::Array<uint>* H_ = {}, uint64_t count_ = {}, ::Array<uint8_t>* ProcessingBuffer_ = {}, int ProcessingBufferCount_ = {}, ::Array<uint>* buff_ = {}) noexcept : H{H_}, count{count_}, ProcessingBuffer{ProcessingBuffer_}, ProcessingBufferCount{ProcessingBufferCount_}, buff{buff_} {}
    // public System.Void HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x1AE8F98
    void HashCore(::Array<uint8_t>* rgb, int ibStart, int cbSize);
    // public System.Byte[] HashFinal()
    // Offset: 0x1AE90BC
    ::Array<uint8_t>* HashFinal();
    // public System.Void Initialize()
    // Offset: 0x1AE91C8
    void Initialize();
    // private System.Void ProcessBlock(System.Byte[] inputBuffer, System.UInt32 inputOffset)
    // Offset: 0x1AE928C
    void ProcessBlock(::Array<uint8_t>* inputBuffer, uint inputOffset);
    // static private System.Void InitialiseBuff(System.UInt32[] buff, System.Byte[] input, System.UInt32 inputOffset)
    // Offset: 0x1AE9968
    static void InitialiseBuff(::Array<uint>* buff, ::Array<uint8_t>* input, uint inputOffset);
    // static private System.Void FillBuff(System.UInt32[] buff)
    // Offset: 0x1AEA050
    static void FillBuff(::Array<uint>* buff);
    // private System.Void ProcessFinalBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x1AE97B0
    void ProcessFinalBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
    // System.Void AddLength(System.UInt64 length, System.Byte[] buffer, System.Int32 position)
    // Offset: 0x1AEA290
    void AddLength(uint64_t length, ::Array<uint8_t>* buffer, int position);
    // public System.Void .ctor()
    // Offset: 0x1AE8E60
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SHA1Internal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::SHA1Internal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SHA1Internal*, creationType>()));
    }
  }; // System.Security.Cryptography.SHA1Internal
  #pragma pack(pop)
  static check_size<sizeof(SHA1Internal), 48 + sizeof(::Array<uint>*)> __System_Security_Cryptography_SHA1InternalSizeCheck;
  static_assert(sizeof(SHA1Internal) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SHA1Internal*, "System.Security.Cryptography", "SHA1Internal");
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1Internal::HashCore
// Il2CppName: HashCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA1Internal::*)(::Array<uint8_t>*, int, int)>(&System::Security::Cryptography::SHA1Internal::HashCore)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1Internal*), "HashCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1Internal::HashFinal
// Il2CppName: HashFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::SHA1Internal::*)()>(&System::Security::Cryptography::SHA1Internal::HashFinal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1Internal*), "HashFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1Internal::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA1Internal::*)()>(&System::Security::Cryptography::SHA1Internal::Initialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1Internal*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1Internal::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA1Internal::*)(::Array<uint8_t>*, uint)>(&System::Security::Cryptography::SHA1Internal::ProcessBlock)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1Internal*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1Internal::InitialiseBuff
// Il2CppName: InitialiseBuff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint8_t>*, uint)>(&System::Security::Cryptography::SHA1Internal::InitialiseBuff)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1Internal*), "InitialiseBuff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1Internal::FillBuff
// Il2CppName: FillBuff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*)>(&System::Security::Cryptography::SHA1Internal::FillBuff)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1Internal*), "FillBuff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint>*>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1Internal::ProcessFinalBlock
// Il2CppName: ProcessFinalBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA1Internal::*)(::Array<uint8_t>*, int, int)>(&System::Security::Cryptography::SHA1Internal::ProcessFinalBlock)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1Internal*), "ProcessFinalBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1Internal::AddLength
// Il2CppName: AddLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA1Internal::*)(uint64_t, ::Array<uint8_t>*, int)>(&System::Security::Cryptography::SHA1Internal::AddLength)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1Internal*), "AddLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1Internal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
