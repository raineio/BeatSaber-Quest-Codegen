// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.Aes
#include "System/Security/Cryptography/Aes.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: ICryptoTransform
  class ICryptoTransform;
  // Skipping declaration: CipherMode because it is already included!
  // Skipping declaration: PaddingMode because it is already included!
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.AesCryptoServiceProvider
  class AesCryptoServiceProvider : public System::Security::Cryptography::Aes {
    public:
    // Creating value type constructor for type: AesCryptoServiceProvider
    AesCryptoServiceProvider() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x23908E8
    // Implemented from: System.Security.Cryptography.Aes
    // Base method: System.Void Aes::.ctor()
    // Base method: System.Void SymmetricAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AesCryptoServiceProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::AesCryptoServiceProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AesCryptoServiceProvider*, creationType>()));
    }
    // public override System.Void GenerateIV()
    // Offset: 0x239095C
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::GenerateIV()
    void GenerateIV();
    // public override System.Void GenerateKey()
    // Offset: 0x239098C
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::GenerateKey()
    void GenerateKey();
    // public override System.Security.Cryptography.ICryptoTransform CreateDecryptor(System.Byte[] key, System.Byte[] iv)
    // Offset: 0x23909BC
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateDecryptor(System.Byte[] key, System.Byte[] iv)
    System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Array<uint8_t>* key, ::Array<uint8_t>* iv);
    // public override System.Security.Cryptography.ICryptoTransform CreateEncryptor(System.Byte[] key, System.Byte[] iv)
    // Offset: 0x239118C
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateEncryptor(System.Byte[] key, System.Byte[] iv)
    System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Array<uint8_t>* key, ::Array<uint8_t>* iv);
    // public override System.Byte[] get_IV()
    // Offset: 0x2391278
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Byte[] SymmetricAlgorithm::get_IV()
    ::Array<uint8_t>* get_IV();
    // public override System.Void set_IV(System.Byte[] value)
    // Offset: 0x2391280
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_IV(System.Byte[] value)
    void set_IV(::Array<uint8_t>* value);
    // public override System.Byte[] get_Key()
    // Offset: 0x2391288
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Byte[] SymmetricAlgorithm::get_Key()
    ::Array<uint8_t>* get_Key();
    // public override System.Void set_Key(System.Byte[] value)
    // Offset: 0x2391290
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_Key(System.Byte[] value)
    void set_Key(::Array<uint8_t>* value);
    // public override System.Int32 get_KeySize()
    // Offset: 0x2391298
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Int32 SymmetricAlgorithm::get_KeySize()
    int get_KeySize();
    // public override System.Void set_KeySize(System.Int32 value)
    // Offset: 0x23912A0
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_KeySize(System.Int32 value)
    void set_KeySize(int value);
    // public override System.Int32 get_FeedbackSize()
    // Offset: 0x23912A8
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Int32 SymmetricAlgorithm::get_FeedbackSize()
    int get_FeedbackSize();
    // public override System.Security.Cryptography.CipherMode get_Mode()
    // Offset: 0x23912B0
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.CipherMode SymmetricAlgorithm::get_Mode()
    System::Security::Cryptography::CipherMode get_Mode();
    // public override System.Void set_Mode(System.Security.Cryptography.CipherMode value)
    // Offset: 0x23912B8
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode value)
    void set_Mode(System::Security::Cryptography::CipherMode value);
    // public override System.Security.Cryptography.PaddingMode get_Padding()
    // Offset: 0x2391354
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.PaddingMode SymmetricAlgorithm::get_Padding()
    System::Security::Cryptography::PaddingMode get_Padding();
    // public override System.Void set_Padding(System.Security.Cryptography.PaddingMode value)
    // Offset: 0x239135C
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode value)
    void set_Padding(System::Security::Cryptography::PaddingMode value);
    // public override System.Security.Cryptography.ICryptoTransform CreateDecryptor()
    // Offset: 0x2391364
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateDecryptor()
    System::Security::Cryptography::ICryptoTransform* CreateDecryptor();
    // public override System.Security.Cryptography.ICryptoTransform CreateEncryptor()
    // Offset: 0x23913B8
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateEncryptor()
    System::Security::Cryptography::ICryptoTransform* CreateEncryptor();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x239140C
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Security.Cryptography.AesCryptoServiceProvider
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::AesCryptoServiceProvider*, "System.Security.Cryptography", "AesCryptoServiceProvider");
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::GenerateIV
// Il2CppName: GenerateIV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&System::Security::Cryptography::AesCryptoServiceProvider::GenerateIV)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "GenerateIV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::GenerateKey
// Il2CppName: GenerateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&System::Security::Cryptography::AesCryptoServiceProvider::GenerateKey)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "GenerateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::CreateDecryptor
// Il2CppName: CreateDecryptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::ICryptoTransform* (System::Security::Cryptography::AesCryptoServiceProvider::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&System::Security::Cryptography::AesCryptoServiceProvider::CreateDecryptor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "CreateDecryptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::CreateEncryptor
// Il2CppName: CreateEncryptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::ICryptoTransform* (System::Security::Cryptography::AesCryptoServiceProvider::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&System::Security::Cryptography::AesCryptoServiceProvider::CreateEncryptor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "CreateEncryptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::get_IV
// Il2CppName: get_IV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&System::Security::Cryptography::AesCryptoServiceProvider::get_IV)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "get_IV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::set_IV
// Il2CppName: set_IV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesCryptoServiceProvider::*)(::Array<uint8_t>*)>(&System::Security::Cryptography::AesCryptoServiceProvider::set_IV)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "set_IV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&System::Security::Cryptography::AesCryptoServiceProvider::get_Key)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::set_Key
// Il2CppName: set_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesCryptoServiceProvider::*)(::Array<uint8_t>*)>(&System::Security::Cryptography::AesCryptoServiceProvider::set_Key)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "set_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::get_KeySize
// Il2CppName: get_KeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&System::Security::Cryptography::AesCryptoServiceProvider::get_KeySize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "get_KeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::set_KeySize
// Il2CppName: set_KeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesCryptoServiceProvider::*)(int)>(&System::Security::Cryptography::AesCryptoServiceProvider::set_KeySize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "set_KeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::get_FeedbackSize
// Il2CppName: get_FeedbackSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&System::Security::Cryptography::AesCryptoServiceProvider::get_FeedbackSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "get_FeedbackSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::get_Mode
// Il2CppName: get_Mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::CipherMode (System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&System::Security::Cryptography::AesCryptoServiceProvider::get_Mode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "get_Mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::set_Mode
// Il2CppName: set_Mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesCryptoServiceProvider::*)(System::Security::Cryptography::CipherMode)>(&System::Security::Cryptography::AesCryptoServiceProvider::set_Mode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "set_Mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Security::Cryptography::CipherMode>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::get_Padding
// Il2CppName: get_Padding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::PaddingMode (System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&System::Security::Cryptography::AesCryptoServiceProvider::get_Padding)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "get_Padding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::set_Padding
// Il2CppName: set_Padding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesCryptoServiceProvider::*)(System::Security::Cryptography::PaddingMode)>(&System::Security::Cryptography::AesCryptoServiceProvider::set_Padding)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "set_Padding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Security::Cryptography::PaddingMode>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::CreateDecryptor
// Il2CppName: CreateDecryptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::ICryptoTransform* (System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&System::Security::Cryptography::AesCryptoServiceProvider::CreateDecryptor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "CreateDecryptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::CreateEncryptor
// Il2CppName: CreateEncryptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::ICryptoTransform* (System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&System::Security::Cryptography::AesCryptoServiceProvider::CreateEncryptor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "CreateEncryptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesCryptoServiceProvider::*)(bool)>(&System::Security::Cryptography::AesCryptoServiceProvider::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
