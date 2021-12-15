// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Http.NtlmClient
#include "Mono/Http/NtlmClient.hpp"
// Including type: System.Runtime.CompilerServices.ConditionalWeakTable`2
#include "System/Runtime/CompilerServices/ConditionalWeakTable_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
}
// Forward declaring namespace: Mono::Http
namespace Mono::Http {
  // Forward declaring type: NtlmSession
  class NtlmSession;
}
// Completed forward declares
// Type namespace: Mono.Http
namespace Mono::Http {
  // Forward declaring type: <>c
  class $$c;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Mono::Http::NtlmClient::$$c);
DEFINE_IL2CPP_ARG_TYPE(Mono::Http::NtlmClient::$$c*, "Mono.Http", "NtlmClient/<>c");
// Type namespace: Mono.Http
namespace Mono::Http {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Http.NtlmClient/Mono.Http.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class NtlmClient::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Mono.Http.NtlmClient/Mono.Http.<>c <>9
    static Mono::Http::NtlmClient::$$c* _get_$$9();
    // Set static field: static public readonly Mono.Http.NtlmClient/Mono.Http.<>c <>9
    static void _set_$$9(Mono::Http::NtlmClient::$$c* value);
    // Get static field: static public System.Runtime.CompilerServices.ConditionalWeakTable`2/System.Runtime.CompilerServices.CreateValueCallback<System.Net.HttpWebRequest,Mono.Http.NtlmSession> <>9__1_0
    static typename System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Net::HttpWebRequest*, Mono::Http::NtlmSession*>::CreateValueCallback* _get_$$9__1_0();
    // Set static field: static public System.Runtime.CompilerServices.ConditionalWeakTable`2/System.Runtime.CompilerServices.CreateValueCallback<System.Net.HttpWebRequest,Mono.Http.NtlmSession> <>9__1_0
    static void _set_$$9__1_0(typename System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Net::HttpWebRequest*, Mono::Http::NtlmSession*>::CreateValueCallback* value);
    // static private System.Void .cctor()
    // Offset: 0x182944C
    static void _cctor();
    // Mono.Http.NtlmSession <Authenticate>b__1_0(System.Net.HttpWebRequest x)
    // Offset: 0x18294B8
    Mono::Http::NtlmSession* $Authenticate$b__1_0(System::Net::HttpWebRequest* x);
    // public System.Void .ctor()
    // Offset: 0x18294B0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NtlmClient::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Http::NtlmClient::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NtlmClient::$$c*, creationType>()));
    }
  }; // Mono.Http.NtlmClient/Mono.Http.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Http::NtlmClient::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Http::NtlmClient::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Http::NtlmClient::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Http::NtlmClient::$$c::$Authenticate$b__1_0
// Il2CppName: <Authenticate>b__1_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Http::NtlmSession* (Mono::Http::NtlmClient::$$c::*)(System::Net::HttpWebRequest*)>(&Mono::Http::NtlmClient::$$c::$Authenticate$b__1_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System.Net", "HttpWebRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Http::NtlmClient::$$c*), "<Authenticate>b__1_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Mono::Http::NtlmClient::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
