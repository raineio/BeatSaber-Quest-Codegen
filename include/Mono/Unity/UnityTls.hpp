// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Unity
namespace Mono::Unity {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Forward declaring type: UnityTls
  class UnityTls;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Mono::Unity::UnityTls);
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls*, "Mono.Unity", "UnityTls");
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.UnityTls
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityTls : public ::Il2CppObject {
    public:
    // Nested type: Mono::Unity::UnityTls::unitytls_error_code
    struct unitytls_error_code;
    // Nested type: Mono::Unity::UnityTls::unitytls_errorstate
    struct unitytls_errorstate;
    // Nested type: Mono::Unity::UnityTls::unitytls_key
    struct unitytls_key;
    // Nested type: Mono::Unity::UnityTls::unitytls_key_ref
    struct unitytls_key_ref;
    // Nested type: Mono::Unity::UnityTls::unitytls_x509_ref
    struct unitytls_x509_ref;
    // Nested type: Mono::Unity::UnityTls::unitytls_x509list
    struct unitytls_x509list;
    // Nested type: Mono::Unity::UnityTls::unitytls_x509list_ref
    struct unitytls_x509list_ref;
    // Nested type: Mono::Unity::UnityTls::unitytls_x509verify_result
    struct unitytls_x509verify_result;
    // Nested type: Mono::Unity::UnityTls::unitytls_x509verify_callback
    class unitytls_x509verify_callback;
    // Nested type: Mono::Unity::UnityTls::unitytls_tlsctx
    struct unitytls_tlsctx;
    // Nested type: Mono::Unity::UnityTls::unitytls_x509name
    struct unitytls_x509name;
    // Nested type: Mono::Unity::UnityTls::unitytls_ciphersuite
    struct unitytls_ciphersuite;
    // Nested type: Mono::Unity::UnityTls::unitytls_protocol
    struct unitytls_protocol;
    // Nested type: Mono::Unity::UnityTls::unitytls_tlsctx_protocolrange
    struct unitytls_tlsctx_protocolrange;
    // Nested type: Mono::Unity::UnityTls::unitytls_tlsctx_write_callback
    class unitytls_tlsctx_write_callback;
    // Nested type: Mono::Unity::UnityTls::unitytls_tlsctx_read_callback
    class unitytls_tlsctx_read_callback;
    // Nested type: Mono::Unity::UnityTls::unitytls_tlsctx_trace_callback
    class unitytls_tlsctx_trace_callback;
    // Nested type: Mono::Unity::UnityTls::unitytls_tlsctx_certificate_callback
    class unitytls_tlsctx_certificate_callback;
    // Nested type: Mono::Unity::UnityTls::unitytls_tlsctx_x509verify_callback
    class unitytls_tlsctx_x509verify_callback;
    // Nested type: Mono::Unity::UnityTls::unitytls_tlsctx_callbacks
    struct unitytls_tlsctx_callbacks;
    // Nested type: Mono::Unity::UnityTls::unitytls_interface_struct
    class unitytls_interface_struct;
    // Get static field: static private Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct marshalledInterface
    static Mono::Unity::UnityTls::unitytls_interface_struct* _get_marshalledInterface();
    // Set static field: static private Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct marshalledInterface
    static void _set_marshalledInterface(Mono::Unity::UnityTls::unitytls_interface_struct* value);
    // static public System.Boolean get_IsSupported()
    // Offset: 0x18347F8
    static bool get_IsSupported();
    // static public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct get_NativeInterface()
    // Offset: 0x1835738
    static Mono::Unity::UnityTls::unitytls_interface_struct* get_NativeInterface();
    // static private System.IntPtr GetUnityTlsInterface()
    // Offset: 0x18363E4
    static System::IntPtr GetUnityTlsInterface();
  }; // Mono.Unity.UnityTls
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Unity::UnityTls::get_IsSupported
// Il2CppName: get_IsSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Mono::Unity::UnityTls::get_IsSupported)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls*), "get_IsSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTls::get_NativeInterface
// Il2CppName: get_NativeInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::UnityTls::unitytls_interface_struct* (*)()>(&Mono::Unity::UnityTls::get_NativeInterface)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls*), "get_NativeInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTls::GetUnityTlsInterface
// Il2CppName: GetUnityTlsInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)()>(&Mono::Unity::UnityTls::GetUnityTlsInterface)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls*), "GetUnityTlsInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
