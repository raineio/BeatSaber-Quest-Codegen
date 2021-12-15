// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: INativeCertificateHelper
  class INativeCertificateHelper;
  // Forward declaring type: X509CertificateImpl
  class X509CertificateImpl;
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509KeyStorageFlags
  struct X509KeyStorageFlags;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Helper
  class X509Helper;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Security::Cryptography::X509Certificates::X509Helper);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509Helper*, "System.Security.Cryptography.X509Certificates", "X509Helper");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Helper
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Helper : public ::Il2CppObject {
    public:
    // Get static field: static private System.Security.Cryptography.X509Certificates.INativeCertificateHelper nativeHelper
    static System::Security::Cryptography::X509Certificates::INativeCertificateHelper* _get_nativeHelper();
    // Set static field: static private System.Security.Cryptography.X509Certificates.INativeCertificateHelper nativeHelper
    static void _set_nativeHelper(System::Security::Cryptography::X509Certificates::INativeCertificateHelper* value);
    // static System.Void InstallNativeHelper(System.Security.Cryptography.X509Certificates.INativeCertificateHelper helper)
    // Offset: 0x1D22DA0
    static void InstallNativeHelper(System::Security::Cryptography::X509Certificates::INativeCertificateHelper* helper);
    // static private System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(System.Byte[] rawData)
    // Offset: 0x1D22E0C
    static System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::ArrayW<uint8_t> rawData);
    // static public System.Security.Cryptography.X509Certificates.X509CertificateImpl InitFromCertificate(System.Security.Cryptography.X509Certificates.X509Certificate cert)
    // Offset: 0x1D21914
    static System::Security::Cryptography::X509Certificates::X509CertificateImpl* InitFromCertificate(System::Security::Cryptography::X509Certificates::X509Certificate* cert);
    // static public System.Security.Cryptography.X509Certificates.X509CertificateImpl InitFromCertificate(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
    // Offset: 0x1D21798
    static System::Security::Cryptography::X509Certificates::X509CertificateImpl* InitFromCertificate(System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);
    // static public System.Boolean IsValid(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
    // Offset: 0x1D21AD8
    static bool IsValid(System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);
    // static System.Void ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
    // Offset: 0x1D21A54
    static void ThrowIfContextInvalid(System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);
    // static System.Exception GetInvalidContextException()
    // Offset: 0x1D22548
    static System::Exception* GetInvalidContextException();
    // static Mono.Security.X509.X509Certificate ImportPkcs12(System.Byte[] rawData, System.String password)
    // Offset: 0x1D22FDC
    static Mono::Security::X509::X509Certificate* ImportPkcs12(::ArrayW<uint8_t> rawData, ::Il2CppString* password);
    // static private System.Byte[] PEM(System.String type, System.Byte[] data)
    // Offset: 0x1D233A4
    static ::ArrayW<uint8_t> PEM(::Il2CppString* type, ::ArrayW<uint8_t> data);
    // static private System.Byte[] ConvertData(System.Byte[] data)
    // Offset: 0x1D234D0
    static ::ArrayW<uint8_t> ConvertData(::ArrayW<uint8_t> data);
    // static private System.Security.Cryptography.X509Certificates.X509CertificateImpl ImportCore(System.Byte[] rawData)
    // Offset: 0x1D22E10
    static System::Security::Cryptography::X509Certificates::X509CertificateImpl* ImportCore(::ArrayW<uint8_t> rawData);
    // static public System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(System.Byte[] rawData, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    // Offset: 0x1D221B4
    static System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::ArrayW<uint8_t> rawData, ::Il2CppString* password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
    // static public System.String ToHexString(System.Byte[] data)
    // Offset: 0x1D21C70
    static ::Il2CppString* ToHexString(::ArrayW<uint8_t> data);
  }; // System.Security.Cryptography.X509Certificates.X509Helper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper::InstallNativeHelper
// Il2CppName: InstallNativeHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Security::Cryptography::X509Certificates::INativeCertificateHelper*)>(&System::Security::Cryptography::X509Certificates::X509Helper::InstallNativeHelper)> {
  static const MethodInfo* get() {
    static auto* helper = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "INativeCertificateHelper")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper*), "InstallNativeHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{helper});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper::Import
// Il2CppName: Import
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateImpl* (*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::X509Certificates::X509Helper::Import)> {
  static const MethodInfo* get() {
    static auto* rawData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper*), "Import", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawData});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper::InitFromCertificate
// Il2CppName: InitFromCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateImpl* (*)(System::Security::Cryptography::X509Certificates::X509Certificate*)>(&System::Security::Cryptography::X509Certificates::X509Helper::InitFromCertificate)> {
  static const MethodInfo* get() {
    static auto* cert = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper*), "InitFromCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cert});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper::InitFromCertificate
// Il2CppName: InitFromCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateImpl* (*)(System::Security::Cryptography::X509Certificates::X509CertificateImpl*)>(&System::Security::Cryptography::X509Certificates::X509Helper::InitFromCertificate)> {
  static const MethodInfo* get() {
    static auto* impl = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateImpl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper*), "InitFromCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{impl});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Security::Cryptography::X509Certificates::X509CertificateImpl*)>(&System::Security::Cryptography::X509Certificates::X509Helper::IsValid)> {
  static const MethodInfo* get() {
    static auto* impl = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateImpl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{impl});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper::ThrowIfContextInvalid
// Il2CppName: ThrowIfContextInvalid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Security::Cryptography::X509Certificates::X509CertificateImpl*)>(&System::Security::Cryptography::X509Certificates::X509Helper::ThrowIfContextInvalid)> {
  static const MethodInfo* get() {
    static auto* impl = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateImpl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper*), "ThrowIfContextInvalid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{impl});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper::GetInvalidContextException
// Il2CppName: GetInvalidContextException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (*)()>(&System::Security::Cryptography::X509Certificates::X509Helper::GetInvalidContextException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper*), "GetInvalidContextException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper::ImportPkcs12
// Il2CppName: ImportPkcs12
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509Certificate* (*)(::ArrayW<uint8_t>, ::Il2CppString*)>(&System::Security::Cryptography::X509Certificates::X509Helper::ImportPkcs12)> {
  static const MethodInfo* get() {
    static auto* rawData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper*), "ImportPkcs12", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawData, password});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper::PEM
// Il2CppName: PEM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::Il2CppString*, ::ArrayW<uint8_t>)>(&System::Security::Cryptography::X509Certificates::X509Helper::PEM)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper*), "PEM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, data});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper::ConvertData
// Il2CppName: ConvertData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::X509Certificates::X509Helper::ConvertData)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper*), "ConvertData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper::ImportCore
// Il2CppName: ImportCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateImpl* (*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::X509Certificates::X509Helper::ImportCore)> {
  static const MethodInfo* get() {
    static auto* rawData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper*), "ImportCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawData});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper::Import
// Il2CppName: Import
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateImpl* (*)(::ArrayW<uint8_t>, ::Il2CppString*, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(&System::Security::Cryptography::X509Certificates::X509Helper::Import)> {
  static const MethodInfo* get() {
    static auto* rawData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keyStorageFlags = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509KeyStorageFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper*), "Import", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawData, password, keyStorageFlags});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper::ToHexString
// Il2CppName: ToHexString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::X509Certificates::X509Helper::ToHexString)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper*), "ToHexString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
