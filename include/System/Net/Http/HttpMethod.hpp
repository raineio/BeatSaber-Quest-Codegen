// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Autogenerated type: System.Net.Http.HttpMethod
  class HttpMethod : public ::Il2CppObject, public System::IEquatable_1<System::Net::Http::HttpMethod*> {
    public:
    // private readonly System.String method
    // Offset: 0x10
    ::Il2CppString* method;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return method;
    }
    // Get static field: static private readonly System.Net.Http.HttpMethod delete_method
    static System::Net::Http::HttpMethod* _get_delete_method();
    // Set static field: static private readonly System.Net.Http.HttpMethod delete_method
    static void _set_delete_method(System::Net::Http::HttpMethod* value);
    // Get static field: static private readonly System.Net.Http.HttpMethod get_method
    static System::Net::Http::HttpMethod* _get_get_method();
    // Set static field: static private readonly System.Net.Http.HttpMethod get_method
    static void _set_get_method(System::Net::Http::HttpMethod* value);
    // Get static field: static private readonly System.Net.Http.HttpMethod head_method
    static System::Net::Http::HttpMethod* _get_head_method();
    // Set static field: static private readonly System.Net.Http.HttpMethod head_method
    static void _set_head_method(System::Net::Http::HttpMethod* value);
    // Get static field: static private readonly System.Net.Http.HttpMethod options_method
    static System::Net::Http::HttpMethod* _get_options_method();
    // Set static field: static private readonly System.Net.Http.HttpMethod options_method
    static void _set_options_method(System::Net::Http::HttpMethod* value);
    // Get static field: static private readonly System.Net.Http.HttpMethod post_method
    static System::Net::Http::HttpMethod* _get_post_method();
    // Set static field: static private readonly System.Net.Http.HttpMethod post_method
    static void _set_post_method(System::Net::Http::HttpMethod* value);
    // Get static field: static private readonly System.Net.Http.HttpMethod put_method
    static System::Net::Http::HttpMethod* _get_put_method();
    // Set static field: static private readonly System.Net.Http.HttpMethod put_method
    static void _set_put_method(System::Net::Http::HttpMethod* value);
    // Get static field: static private readonly System.Net.Http.HttpMethod trace_method
    static System::Net::Http::HttpMethod* _get_trace_method();
    // Set static field: static private readonly System.Net.Http.HttpMethod trace_method
    static void _set_trace_method(System::Net::Http::HttpMethod* value);
    // public System.Void .ctor(System.String method)
    // Offset: 0x1185D48
    static HttpMethod* New_ctor(::Il2CppString* method);
    // static public System.Net.Http.HttpMethod get_Get()
    // Offset: 0x1185E00
    static System::Net::Http::HttpMethod* get_Get();
    // public System.String get_Method()
    // Offset: 0x1185E68
    ::Il2CppString* get_Method();
    // static private System.Void .cctor()
    // Offset: 0x1185F74
    static void _cctor();
    // public System.Boolean Equals(System.Net.Http.HttpMethod other)
    // Offset: 0x1185E88
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(System.Net.Http.HttpMethod other)
    bool Equals(System::Net::Http::HttpMethod* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1185EAC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1185F4C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1185F6C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.HttpMethod
  // static public System.Boolean op_Equality(System.Net.Http.HttpMethod left, System.Net.Http.HttpMethod right)
  // Offset: 0x1185E70
  bool operator ==(System::Net::Http::HttpMethod* left, System::Net::Http::HttpMethod& right);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpMethod*, "System.Net.Http", "HttpMethod");
#pragma pack(pop)
