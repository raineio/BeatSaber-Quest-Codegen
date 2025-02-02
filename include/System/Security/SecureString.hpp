// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Security
namespace System::Security {
  // Forward declaring type: SecureString
  class SecureString;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::SecureString);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::SecureString*, "System.Security", "SecureString");
// Type namespace: System.Security
namespace System::Security {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.SecureString
  // [TokenAttribute] Offset: FFFFFFFF
  // [MonoTODOAttribute] Offset: 1076784
  class SecureString : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Int32 length
    // Size: 0x4
    // Offset: 0x10
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x14
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: data
    char __padding1[0x3] = {};
    // private System.Byte[] data
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> data;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.Int32 length
    [[deprecated("Use field access instead!")]] int& dyn_length();
    // Get instance field reference: private System.Boolean disposed
    [[deprecated("Use field access instead!")]] bool& dyn_disposed();
    // Get instance field reference: private System.Byte[] data
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_data();
    // public System.Int32 get_Length()
    // Offset: 0x1C2C7F8
    int get_Length();
    // public System.Void .ctor(System.Char* value, System.Int32 length)
    // Offset: 0x1C2C690
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecureString* New_ctor(::Il2CppChar* value, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::SecureString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecureString*, creationType>(value, length)));
    }
    // public System.Void Dispose()
    // Offset: 0x1C2C880
    void Dispose();
    // private System.Void Encrypt()
    // Offset: 0x1C2C7F4
    void Encrypt();
    // private System.Void Decrypt()
    // Offset: 0x1C2C8C4
    void Decrypt();
    // private System.Void Alloc(System.Int32 length, System.Boolean realloc)
    // Offset: 0x1C2C520
    void Alloc(int length, bool realloc);
    // System.Byte[] GetBuffer()
    // Offset: 0x1C2C8C8
    ::ArrayW<uint8_t> GetBuffer();
    // public System.Void .ctor()
    // Offset: 0x1C2C4F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecureString* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::SecureString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecureString*, creationType>()));
    }
  }; // System.Security.SecureString
  #pragma pack(pop)
  static check_size<sizeof(SecureString), 24 + sizeof(::ArrayW<uint8_t>)> __System_Security_SecureStringSizeCheck;
  static_assert(sizeof(SecureString) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::SecureString::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::SecureString::*)()>(&System::Security::SecureString::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecureString*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::SecureString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::SecureString::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::SecureString::*)()>(&System::Security::SecureString::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecureString*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::SecureString::Encrypt
// Il2CppName: Encrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::SecureString::*)()>(&System::Security::SecureString::Encrypt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecureString*), "Encrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::SecureString::Decrypt
// Il2CppName: Decrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::SecureString::*)()>(&System::Security::SecureString::Decrypt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecureString*), "Decrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::SecureString::Alloc
// Il2CppName: Alloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::SecureString::*)(int, bool)>(&System::Security::SecureString::Alloc)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* realloc = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecureString*), "Alloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length, realloc});
  }
};
// Writing MetadataGetter for method: System::Security::SecureString::GetBuffer
// Il2CppName: GetBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::SecureString::*)()>(&System::Security::SecureString::GetBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecureString*), "GetBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::SecureString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
