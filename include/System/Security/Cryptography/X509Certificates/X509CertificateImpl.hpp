// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509CertificateImpl
  class X509CertificateImpl : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private System.Byte[] cachedCertificateHash
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* cachedCertificateHash;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: X509CertificateImpl
    X509CertificateImpl(::Array<uint8_t>* cachedCertificateHash_ = {}) noexcept : cachedCertificateHash{cachedCertificateHash_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept {
      return cachedCertificateHash;
    }
    // public System.Boolean get_IsValid()
    // Offset: 0xFFFFFFFF
    bool get_IsValid();
    // protected System.Void ThrowIfContextInvalid()
    // Offset: 0x1AF15C4
    void ThrowIfContextInvalid();
    // public System.Security.Cryptography.X509Certificates.X509CertificateImpl Clone()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::X509Certificates::X509CertificateImpl* Clone();
    // public System.String GetIssuerName(System.Boolean legacyV1Mode)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* GetIssuerName(bool legacyV1Mode);
    // public System.String GetSubjectName(System.Boolean legacyV1Mode)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* GetSubjectName(bool legacyV1Mode);
    // public System.Byte[] GetRawCertData()
    // Offset: 0xFFFFFFFF
    ::Array<uint8_t>* GetRawCertData();
    // public System.DateTime GetValidFrom()
    // Offset: 0xFFFFFFFF
    System::DateTime GetValidFrom();
    // public System.DateTime GetValidUntil()
    // Offset: 0xFFFFFFFF
    System::DateTime GetValidUntil();
    // public System.Byte[] GetCertHash()
    // Offset: 0x1AF0CF8
    ::Array<uint8_t>* GetCertHash();
    // protected System.Byte[] GetCertHash(System.Boolean lazy)
    // Offset: 0xFFFFFFFF
    ::Array<uint8_t>* GetCertHash(bool lazy);
    // public System.Boolean Equals(System.Security.Cryptography.X509Certificates.X509CertificateImpl other, out System.Boolean result)
    // Offset: 0xFFFFFFFF
    bool Equals(System::Security::Cryptography::X509Certificates::X509CertificateImpl* other, bool& result);
    // public System.Byte[] GetSerialNumber()
    // Offset: 0xFFFFFFFF
    ::Array<uint8_t>* GetSerialNumber();
    // public System.String ToString(System.Boolean full)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* ToString(bool full);
    // public System.Void Dispose()
    // Offset: 0x1AF1544
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1AF18A4
    void Dispose(bool disposing);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1AF16A8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1AF1714
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // protected override System.Void Finalize()
    // Offset: 0x1AF18AC
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // protected System.Void .ctor()
    // Offset: 0x1AF1924
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateImpl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509CertificateImpl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateImpl*, creationType>()));
    }
  }; // System.Security.Cryptography.X509Certificates.X509CertificateImpl
  #pragma pack(pop)
  static check_size<sizeof(X509CertificateImpl), 16 + sizeof(::Array<uint8_t>*)> __System_Security_Cryptography_X509Certificates_X509CertificateImplSizeCheck;
  static_assert(sizeof(X509CertificateImpl) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509CertificateImpl*, "System.Security.Cryptography.X509Certificates", "X509CertificateImpl");
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_IsValid)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImpl*), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImpl::ThrowIfContextInvalid
// Il2CppName: ThrowIfContextInvalid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateImpl::ThrowIfContextInvalid)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImpl*), "ThrowIfContextInvalid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImpl::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateImpl* (System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateImpl::Clone)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImpl*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetIssuerName
// Il2CppName: GetIssuerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetIssuerName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImpl*), "GetIssuerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetSubjectName
// Il2CppName: GetSubjectName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetSubjectName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImpl*), "GetSubjectName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetRawCertData
// Il2CppName: GetRawCertData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetRawCertData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImpl*), "GetRawCertData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetValidFrom
// Il2CppName: GetValidFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetValidFrom)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImpl*), "GetValidFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetValidUntil
// Il2CppName: GetValidUntil
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetValidUntil)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImpl*), "GetValidUntil", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetCertHash
// Il2CppName: GetCertHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetCertHash)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImpl*), "GetCertHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetCertHash
// Il2CppName: GetCertHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetCertHash)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImpl*), "GetCertHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImpl::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)(System::Security::Cryptography::X509Certificates::X509CertificateImpl*, bool&)>(&System::Security::Cryptography::X509Certificates::X509CertificateImpl::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImpl*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), ::il2cpp_utils::ExtractIndependentType<bool&>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetSerialNumber
// Il2CppName: GetSerialNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetSerialNumber)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImpl*), "GetSerialNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImpl::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509CertificateImpl::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImpl*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImpl::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateImpl::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImpl*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImpl::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509CertificateImpl::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImpl*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImpl*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImpl::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)(::Il2CppObject*)>(&System::Security::Cryptography::X509Certificates::X509CertificateImpl::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImpl*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImpl::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateImpl::Finalize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImpl*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImpl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
