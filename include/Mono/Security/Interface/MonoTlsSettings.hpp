// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: Mono.Security.Interface.TlsProtocols
#include "Mono/Security/Interface/TlsProtocols.hpp"
// Including type: Mono.Security.Interface.CipherSuiteCode
#include "Mono/Security/Interface/CipherSuiteCode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoRemoteCertificateValidationCallback
  class MonoRemoteCertificateValidationCallback;
  // Forward declaring type: MonoLocalCertificateSelectionCallback
  class MonoLocalCertificateSelectionCallback;
  // Forward declaring type: ICertificateValidator
  class ICertificateValidator;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
}
// Completed forward declares
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsSettings
  class MonoTlsSettings;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Mono::Security::Interface::MonoTlsSettings);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::MonoTlsSettings*, "Mono.Security.Interface", "MonoTlsSettings");
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // WARNING Size may be invalid!
  // Autogenerated type: Mono.Security.Interface.MonoTlsSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoTlsSettings : public ::Il2CppObject {
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
    // private Mono.Security.Interface.MonoRemoteCertificateValidationCallback <RemoteCertificateValidationCallback>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    Mono::Security::Interface::MonoRemoteCertificateValidationCallback* RemoteCertificateValidationCallback;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::MonoRemoteCertificateValidationCallback*) == 0x8);
    // private Mono.Security.Interface.MonoLocalCertificateSelectionCallback <ClientCertificateSelectionCallback>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    Mono::Security::Interface::MonoLocalCertificateSelectionCallback* ClientCertificateSelectionCallback;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::MonoLocalCertificateSelectionCallback*) == 0x8);
    // private System.Nullable`1<System.DateTime> <CertificateValidationTime>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    System::Nullable_1<System::DateTime> CertificateValidationTime;
    // private System.Security.Cryptography.X509Certificates.X509CertificateCollection <TrustAnchors>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    System::Security::Cryptography::X509Certificates::X509CertificateCollection* TrustAnchors;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509CertificateCollection*) == 0x8);
    // private System.Object <UserSettings>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* UserSettings;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.String[] <CertificateSearchPaths>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::Il2CppString*> CertificateSearchPaths;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppString*>) == 0x8);
    // private System.Boolean <SendCloseNotify>k__BackingField
    // Size: 0x1
    // Offset: 0x48
    bool SendCloseNotify;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Nullable`1<Mono.Security.Interface.TlsProtocols> <EnabledProtocols>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x4C
    System::Nullable_1<Mono::Security::Interface::TlsProtocols> EnabledProtocols;
    // private Mono.Security.Interface.CipherSuiteCode[] <EnabledCiphers>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<Mono::Security::Interface::CipherSuiteCode> EnabledCiphers;
    // Field size check
    static_assert(sizeof(::ArrayW<Mono::Security::Interface::CipherSuiteCode>) == 0x8);
    // private System.Boolean cloned
    // Size: 0x1
    // Offset: 0x60
    bool cloned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean checkCertName
    // Size: 0x1
    // Offset: 0x61
    bool checkCertName;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean checkCertRevocationStatus
    // Size: 0x1
    // Offset: 0x62
    bool checkCertRevocationStatus;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Nullable`1<System.Boolean> useServicePointManagerCallback
    // Size: 0xFFFFFFFF
    // Offset: 0x63
    System::Nullable_1<bool> useServicePointManagerCallback;
    // private System.Boolean skipSystemValidators
    // Size: 0x1
    // Offset: 0x65
    bool skipSystemValidators;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean callbackNeedsChain
    // Size: 0x1
    // Offset: 0x66
    bool callbackNeedsChain;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private Mono.Security.Interface.ICertificateValidator certificateValidator
    // Size: 0x8
    // Offset: 0x68
    Mono::Security::Interface::ICertificateValidator* certificateValidator;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::ICertificateValidator*) == 0x8);
    public:
    // Get static field: static private Mono.Security.Interface.MonoTlsSettings defaultSettings
    static Mono::Security::Interface::MonoTlsSettings* _get_defaultSettings();
    // Set static field: static private Mono.Security.Interface.MonoTlsSettings defaultSettings
    static void _set_defaultSettings(Mono::Security::Interface::MonoTlsSettings* value);
    // Get instance field reference: private Mono.Security.Interface.MonoRemoteCertificateValidationCallback <RemoteCertificateValidationCallback>k__BackingField
    Mono::Security::Interface::MonoRemoteCertificateValidationCallback*& dyn_$RemoteCertificateValidationCallback$k__BackingField();
    // Get instance field reference: private Mono.Security.Interface.MonoLocalCertificateSelectionCallback <ClientCertificateSelectionCallback>k__BackingField
    Mono::Security::Interface::MonoLocalCertificateSelectionCallback*& dyn_$ClientCertificateSelectionCallback$k__BackingField();
    // Get instance field reference: private System.Nullable`1<System.DateTime> <CertificateValidationTime>k__BackingField
    System::Nullable_1<System::DateTime>& dyn_$CertificateValidationTime$k__BackingField();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509CertificateCollection <TrustAnchors>k__BackingField
    System::Security::Cryptography::X509Certificates::X509CertificateCollection*& dyn_$TrustAnchors$k__BackingField();
    // Get instance field reference: private System.Object <UserSettings>k__BackingField
    ::Il2CppObject*& dyn_$UserSettings$k__BackingField();
    // Get instance field reference: private System.String[] <CertificateSearchPaths>k__BackingField
    ::ArrayW<::Il2CppString*>& dyn_$CertificateSearchPaths$k__BackingField();
    // Get instance field reference: private System.Boolean <SendCloseNotify>k__BackingField
    bool& dyn_$SendCloseNotify$k__BackingField();
    // Get instance field reference: private System.Nullable`1<Mono.Security.Interface.TlsProtocols> <EnabledProtocols>k__BackingField
    System::Nullable_1<Mono::Security::Interface::TlsProtocols>& dyn_$EnabledProtocols$k__BackingField();
    // Get instance field reference: private Mono.Security.Interface.CipherSuiteCode[] <EnabledCiphers>k__BackingField
    ::ArrayW<Mono::Security::Interface::CipherSuiteCode>& dyn_$EnabledCiphers$k__BackingField();
    // Get instance field reference: private System.Boolean cloned
    bool& dyn_cloned();
    // Get instance field reference: private System.Boolean checkCertName
    bool& dyn_checkCertName();
    // Get instance field reference: private System.Boolean checkCertRevocationStatus
    bool& dyn_checkCertRevocationStatus();
    // Get instance field reference: private System.Nullable`1<System.Boolean> useServicePointManagerCallback
    System::Nullable_1<bool>& dyn_useServicePointManagerCallback();
    // Get instance field reference: private System.Boolean skipSystemValidators
    bool& dyn_skipSystemValidators();
    // Get instance field reference: private System.Boolean callbackNeedsChain
    bool& dyn_callbackNeedsChain();
    // Get instance field reference: private Mono.Security.Interface.ICertificateValidator certificateValidator
    Mono::Security::Interface::ICertificateValidator*& dyn_certificateValidator();
    // public Mono.Security.Interface.MonoRemoteCertificateValidationCallback get_RemoteCertificateValidationCallback()
    // Offset: 0x1F950B4
    Mono::Security::Interface::MonoRemoteCertificateValidationCallback* get_RemoteCertificateValidationCallback();
    // public System.Void set_RemoteCertificateValidationCallback(Mono.Security.Interface.MonoRemoteCertificateValidationCallback value)
    // Offset: 0x1F950BC
    void set_RemoteCertificateValidationCallback(Mono::Security::Interface::MonoRemoteCertificateValidationCallback* value);
    // public Mono.Security.Interface.MonoLocalCertificateSelectionCallback get_ClientCertificateSelectionCallback()
    // Offset: 0x1F950C4
    Mono::Security::Interface::MonoLocalCertificateSelectionCallback* get_ClientCertificateSelectionCallback();
    // public System.Void set_ClientCertificateSelectionCallback(Mono.Security.Interface.MonoLocalCertificateSelectionCallback value)
    // Offset: 0x1F950CC
    void set_ClientCertificateSelectionCallback(Mono::Security::Interface::MonoLocalCertificateSelectionCallback* value);
    // public System.Nullable`1<System.Boolean> get_UseServicePointManagerCallback()
    // Offset: 0x1F950D4
    System::Nullable_1<bool> get_UseServicePointManagerCallback();
    // public System.Void set_UseServicePointManagerCallback(System.Nullable`1<System.Boolean> value)
    // Offset: 0x1F950DC
    void set_UseServicePointManagerCallback(System::Nullable_1<bool> value);
    // public System.Boolean get_CallbackNeedsCertificateChain()
    // Offset: 0x1F950E4
    bool get_CallbackNeedsCertificateChain();
    // public System.Nullable`1<System.DateTime> get_CertificateValidationTime()
    // Offset: 0x1F950EC
    System::Nullable_1<System::DateTime> get_CertificateValidationTime();
    // public System.Void set_CertificateValidationTime(System.Nullable`1<System.DateTime> value)
    // Offset: 0x1F950F8
    void set_CertificateValidationTime(System::Nullable_1<System::DateTime> value);
    // public System.Security.Cryptography.X509Certificates.X509CertificateCollection get_TrustAnchors()
    // Offset: 0x1F95100
    System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_TrustAnchors();
    // public System.Void set_TrustAnchors(System.Security.Cryptography.X509Certificates.X509CertificateCollection value)
    // Offset: 0x1F95108
    void set_TrustAnchors(System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);
    // public System.Object get_UserSettings()
    // Offset: 0x1F95110
    ::Il2CppObject* get_UserSettings();
    // public System.Void set_UserSettings(System.Object value)
    // Offset: 0x1F95118
    void set_UserSettings(::Il2CppObject* value);
    // System.String[] get_CertificateSearchPaths()
    // Offset: 0x1F95120
    ::ArrayW<::Il2CppString*> get_CertificateSearchPaths();
    // System.Void set_CertificateSearchPaths(System.String[] value)
    // Offset: 0x1F95128
    void set_CertificateSearchPaths(::ArrayW<::Il2CppString*> value);
    // System.Boolean get_SendCloseNotify()
    // Offset: 0x1F95130
    bool get_SendCloseNotify();
    // System.Void set_SendCloseNotify(System.Boolean value)
    // Offset: 0x1F95138
    void set_SendCloseNotify(bool value);
    // public System.Nullable`1<Mono.Security.Interface.TlsProtocols> get_EnabledProtocols()
    // Offset: 0x1F95144
    System::Nullable_1<Mono::Security::Interface::TlsProtocols> get_EnabledProtocols();
    // public System.Void set_EnabledProtocols(System.Nullable`1<Mono.Security.Interface.TlsProtocols> value)
    // Offset: 0x1F9514C
    void set_EnabledProtocols(System::Nullable_1<Mono::Security::Interface::TlsProtocols> value);
    // public Mono.Security.Interface.CipherSuiteCode[] get_EnabledCiphers()
    // Offset: 0x1F95154
    ::ArrayW<Mono::Security::Interface::CipherSuiteCode> get_EnabledCiphers();
    // public System.Void set_EnabledCiphers(Mono.Security.Interface.CipherSuiteCode[] value)
    // Offset: 0x1F9515C
    void set_EnabledCiphers(::ArrayW<Mono::Security::Interface::CipherSuiteCode> value);
    // static public Mono.Security.Interface.MonoTlsSettings get_DefaultSettings()
    // Offset: 0x1F95178
    static Mono::Security::Interface::MonoTlsSettings* get_DefaultSettings();
    // public Mono.Security.Interface.ICertificateValidator get_CertificateValidator()
    // Offset: 0x1F95288
    Mono::Security::Interface::ICertificateValidator* get_CertificateValidator();
    // private System.Void .ctor(Mono.Security.Interface.MonoTlsSettings other)
    // Offset: 0x1F95320
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoTlsSettings* New_ctor(Mono::Security::Interface::MonoTlsSettings* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Interface::MonoTlsSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoTlsSettings*, creationType>(other)));
    }
    // static public Mono.Security.Interface.MonoTlsSettings CopyDefaultSettings()
    // Offset: 0x1F9520C
    static Mono::Security::Interface::MonoTlsSettings* CopyDefaultSettings();
    // public Mono.Security.Interface.MonoTlsSettings CloneWithValidator(Mono.Security.Interface.ICertificateValidator validator)
    // Offset: 0x1F95290
    Mono::Security::Interface::MonoTlsSettings* CloneWithValidator(Mono::Security::Interface::ICertificateValidator* validator);
    // public Mono.Security.Interface.MonoTlsSettings Clone()
    // Offset: 0x1F95228
    Mono::Security::Interface::MonoTlsSettings* Clone();
    // public System.Void .ctor()
    // Offset: 0x1F95164
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoTlsSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Interface::MonoTlsSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoTlsSettings*, creationType>()));
    }
  }; // Mono.Security.Interface.MonoTlsSettings
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_RemoteCertificateValidationCallback
// Il2CppName: get_RemoteCertificateValidationCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::MonoRemoteCertificateValidationCallback* (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_RemoteCertificateValidationCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_RemoteCertificateValidationCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::set_RemoteCertificateValidationCallback
// Il2CppName: set_RemoteCertificateValidationCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsSettings::*)(Mono::Security::Interface::MonoRemoteCertificateValidationCallback*)>(&Mono::Security::Interface::MonoTlsSettings::set_RemoteCertificateValidationCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "MonoRemoteCertificateValidationCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "set_RemoteCertificateValidationCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_ClientCertificateSelectionCallback
// Il2CppName: get_ClientCertificateSelectionCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::MonoLocalCertificateSelectionCallback* (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_ClientCertificateSelectionCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_ClientCertificateSelectionCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::set_ClientCertificateSelectionCallback
// Il2CppName: set_ClientCertificateSelectionCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsSettings::*)(Mono::Security::Interface::MonoLocalCertificateSelectionCallback*)>(&Mono::Security::Interface::MonoTlsSettings::set_ClientCertificateSelectionCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "MonoLocalCertificateSelectionCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "set_ClientCertificateSelectionCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_UseServicePointManagerCallback
// Il2CppName: get_UseServicePointManagerCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<bool> (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_UseServicePointManagerCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_UseServicePointManagerCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::set_UseServicePointManagerCallback
// Il2CppName: set_UseServicePointManagerCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsSettings::*)(System::Nullable_1<bool>)>(&Mono::Security::Interface::MonoTlsSettings::set_UseServicePointManagerCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "set_UseServicePointManagerCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_CallbackNeedsCertificateChain
// Il2CppName: get_CallbackNeedsCertificateChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_CallbackNeedsCertificateChain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_CallbackNeedsCertificateChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_CertificateValidationTime
// Il2CppName: get_CertificateValidationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<System::DateTime> (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_CertificateValidationTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_CertificateValidationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::set_CertificateValidationTime
// Il2CppName: set_CertificateValidationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsSettings::*)(System::Nullable_1<System::DateTime>)>(&Mono::Security::Interface::MonoTlsSettings::set_CertificateValidationTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "DateTime")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "set_CertificateValidationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_TrustAnchors
// Il2CppName: get_TrustAnchors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateCollection* (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_TrustAnchors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_TrustAnchors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::set_TrustAnchors
// Il2CppName: set_TrustAnchors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsSettings::*)(System::Security::Cryptography::X509Certificates::X509CertificateCollection*)>(&Mono::Security::Interface::MonoTlsSettings::set_TrustAnchors)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "set_TrustAnchors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_UserSettings
// Il2CppName: get_UserSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_UserSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_UserSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::set_UserSettings
// Il2CppName: set_UserSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsSettings::*)(::Il2CppObject*)>(&Mono::Security::Interface::MonoTlsSettings::set_UserSettings)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "set_UserSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_CertificateSearchPaths
// Il2CppName: get_CertificateSearchPaths
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppString*> (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_CertificateSearchPaths)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_CertificateSearchPaths", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::set_CertificateSearchPaths
// Il2CppName: set_CertificateSearchPaths
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsSettings::*)(::ArrayW<::Il2CppString*>)>(&Mono::Security::Interface::MonoTlsSettings::set_CertificateSearchPaths)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "set_CertificateSearchPaths", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_SendCloseNotify
// Il2CppName: get_SendCloseNotify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_SendCloseNotify)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_SendCloseNotify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::set_SendCloseNotify
// Il2CppName: set_SendCloseNotify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsSettings::*)(bool)>(&Mono::Security::Interface::MonoTlsSettings::set_SendCloseNotify)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "set_SendCloseNotify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_EnabledProtocols
// Il2CppName: get_EnabledProtocols
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<Mono::Security::Interface::TlsProtocols> (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_EnabledProtocols)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_EnabledProtocols", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::set_EnabledProtocols
// Il2CppName: set_EnabledProtocols
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsSettings::*)(System::Nullable_1<Mono::Security::Interface::TlsProtocols>)>(&Mono::Security::Interface::MonoTlsSettings::set_EnabledProtocols)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "TlsProtocols")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "set_EnabledProtocols", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_EnabledCiphers
// Il2CppName: get_EnabledCiphers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<Mono::Security::Interface::CipherSuiteCode> (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_EnabledCiphers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_EnabledCiphers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::set_EnabledCiphers
// Il2CppName: set_EnabledCiphers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsSettings::*)(::ArrayW<Mono::Security::Interface::CipherSuiteCode>)>(&Mono::Security::Interface::MonoTlsSettings::set_EnabledCiphers)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "CipherSuiteCode"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "set_EnabledCiphers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_DefaultSettings
// Il2CppName: get_DefaultSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::MonoTlsSettings* (*)()>(&Mono::Security::Interface::MonoTlsSettings::get_DefaultSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_DefaultSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_CertificateValidator
// Il2CppName: get_CertificateValidator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::ICertificateValidator* (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_CertificateValidator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_CertificateValidator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::CopyDefaultSettings
// Il2CppName: CopyDefaultSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::MonoTlsSettings* (*)()>(&Mono::Security::Interface::MonoTlsSettings::CopyDefaultSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "CopyDefaultSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::CloneWithValidator
// Il2CppName: CloneWithValidator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::MonoTlsSettings* (Mono::Security::Interface::MonoTlsSettings::*)(Mono::Security::Interface::ICertificateValidator*)>(&Mono::Security::Interface::MonoTlsSettings::CloneWithValidator)> {
  static const MethodInfo* get() {
    static auto* validator = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "ICertificateValidator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "CloneWithValidator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{validator});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::MonoTlsSettings* (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
