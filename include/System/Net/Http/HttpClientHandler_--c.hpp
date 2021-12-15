// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Http.HttpClientHandler
#include "System/Net/Http/HttpClientHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Net::Http::HttpClientHandler::$$c);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpClientHandler::$$c*, "System.Net.Http", "HttpClientHandler/<>c");
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.HttpClientHandler/System.Net.Http.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class HttpClientHandler::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Net.Http.HttpClientHandler/System.Net.Http.<>c <>9
    static System::Net::Http::HttpClientHandler::$$c* _get_$$9();
    // Set static field: static public readonly System.Net.Http.HttpClientHandler/System.Net.Http.<>c <>9
    static void _set_$$9(System::Net::Http::HttpClientHandler::$$c* value);
    // Get static field: static public System.Func`2<System.String,System.Boolean> <>9__61_0
    static System::Func_2<::Il2CppString*, bool>* _get_$$9__61_0();
    // Set static field: static public System.Func`2<System.String,System.Boolean> <>9__61_0
    static void _set_$$9__61_0(System::Func_2<::Il2CppString*, bool>* value);
    // Get static field: static public System.Action`1<System.Object> <>9__64_0
    static System::Action_1<::Il2CppObject*>* _get_$$9__64_0();
    // Set static field: static public System.Action`1<System.Object> <>9__64_0
    static void _set_$$9__64_0(System::Action_1<::Il2CppObject*>* value);
    // static private System.Void .cctor()
    // Offset: 0x17CB810
    static void _cctor();
    // System.Boolean <CreateWebRequest>b__61_0(System.String l)
    // Offset: 0x17CB87C
    bool $CreateWebRequest$b__61_0(::Il2CppString* l);
    // System.Void <SendAsync>b__64_0(System.Object l)
    // Offset: 0x17CB8D0
    void $SendAsync$b__64_0(::Il2CppObject* l);
    // public System.Void .ctor()
    // Offset: 0x17CB874
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpClientHandler::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::HttpClientHandler::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpClientHandler::$$c*, creationType>()));
    }
  }; // System.Net.Http.HttpClientHandler/System.Net.Http.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::HttpClientHandler::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Http::HttpClientHandler::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpClientHandler::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpClientHandler::$$c::$CreateWebRequest$b__61_0
// Il2CppName: <CreateWebRequest>b__61_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::HttpClientHandler::$$c::*)(::Il2CppString*)>(&System::Net::Http::HttpClientHandler::$$c::$CreateWebRequest$b__61_0)> {
  static const MethodInfo* get() {
    static auto* l = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpClientHandler::$$c*), "<CreateWebRequest>b__61_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpClientHandler::$$c::$SendAsync$b__64_0
// Il2CppName: <SendAsync>b__64_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpClientHandler::$$c::*)(::Il2CppObject*)>(&System::Net::Http::HttpClientHandler::$$c::$SendAsync$b__64_0)> {
  static const MethodInfo* get() {
    static auto* l = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpClientHandler::$$c*), "<SendAsync>b__64_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpClientHandler::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
