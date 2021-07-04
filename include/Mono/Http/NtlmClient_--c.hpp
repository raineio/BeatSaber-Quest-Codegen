// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Http.NtlmClient
#include "Mono/Http/NtlmClient.hpp"
// Including type: System.Runtime.CompilerServices.ConditionalWeakTable`2
#include "System/Runtime/CompilerServices/ConditionalWeakTable_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Http.NtlmClient/<>c
  // [CompilerGeneratedAttribute] Offset: D87540
  class NtlmClient::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly Mono.Http.NtlmClient/<>c <>9
    static Mono::Http::NtlmClient::$$c* _get_$$9();
    // Set static field: static public readonly Mono.Http.NtlmClient/<>c <>9
    static void _set_$$9(Mono::Http::NtlmClient::$$c* value);
    // Get static field: static public System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Net.HttpWebRequest,Mono.Http.NtlmSession> <>9__1_0
    static typename System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Net::HttpWebRequest*, Mono::Http::NtlmSession*>::CreateValueCallback* _get_$$9__1_0();
    // Set static field: static public System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Net.HttpWebRequest,Mono.Http.NtlmSession> <>9__1_0
    static void _set_$$9__1_0(typename System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Net::HttpWebRequest*, Mono::Http::NtlmSession*>::CreateValueCallback* value);
    // static private System.Void .cctor()
    // Offset: 0x15E92C4
    static void _cctor();
    // Mono.Http.NtlmSession <Authenticate>b__1_0(System.Net.HttpWebRequest x)
    // Offset: 0x15E9330
    Mono::Http::NtlmSession* $Authenticate$b__1_0(System::Net::HttpWebRequest* x);
    // public System.Void .ctor()
    // Offset: 0x15E9328
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NtlmClient::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Http::NtlmClient::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NtlmClient::$$c*, creationType>()));
    }
  }; // Mono.Http.NtlmClient/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Http::NtlmClient::$$c*, "Mono.Http", "NtlmClient/<>c");
// Writing MetadataGetter for method: Mono::Http::NtlmClient::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Http::NtlmClient::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Http::NtlmClient::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Http::NtlmClient::$$c::$Authenticate$b__1_0
// Il2CppName: <Authenticate>b__1_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Http::NtlmSession* (Mono::Http::NtlmClient::$$c::*)(System::Net::HttpWebRequest*)>(&Mono::Http::NtlmClient::$$c::$Authenticate$b__1_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Http::NtlmClient::$$c*), "<Authenticate>b__1_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Net::HttpWebRequest*>()});
  }
};
// Writing MetadataGetter for method: Mono::Http::NtlmClient::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
