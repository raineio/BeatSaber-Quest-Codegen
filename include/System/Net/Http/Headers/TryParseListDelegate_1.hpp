// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Autogenerated type: System.Net.Http.Headers.TryParseListDelegate`1
  template<typename T>
  class TryParseListDelegate_1 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFF
    static TryParseListDelegate_1<T>* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Http::Headers").WithContext("TryParseListDelegate_1").WithContext(".ctor");
      return THROW_UNLESS(::il2cpp_utils::New<TryParseListDelegate_1<T>*>(object, method));
    }
    // public System.Boolean Invoke(System.String value, System.Int32 minimalCount, out System.Collections.Generic.List`1<T> result)
    // Offset: 0xFFFFFFFF
    bool Invoke(::Il2CppString* value, int minimalCount, System::Collections::Generic::List_1<T>*& result) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Http::Headers").WithContext("TryParseListDelegate_1").WithContext("Invoke");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "Invoke", {}, ::il2cpp_utils::ExtractTypes(value, minimalCount, result)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, value, minimalCount, result);
    }
    // public System.IAsyncResult BeginInvoke(System.String value, System.Int32 minimalCount, out System.Collections.Generic.List`1<T> result, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke(::Il2CppString* value, int minimalCount, System::Collections::Generic::List_1<T>*& result, System::AsyncCallback* callback, ::Il2CppObject* object) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Http::Headers").WithContext("TryParseListDelegate_1").WithContext("BeginInvoke");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::IAsyncResult*>(), "BeginInvoke", {}, ::il2cpp_utils::ExtractTypes(value, minimalCount, result, callback, object)));
      return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, value, minimalCount, result, callback, object);
    }
    // public System.Boolean EndInvoke(out System.Collections.Generic.List`1<T> result, System.IAsyncResult __result)
    // Offset: 0xFFFFFFFF
    bool EndInvoke(System::Collections::Generic::List_1<T>*& result, System::IAsyncResult* __result) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Http::Headers").WithContext("TryParseListDelegate_1").WithContext("EndInvoke");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "EndInvoke", {}, ::il2cpp_utils::ExtractTypes(result, __result)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, result, __result);
    }
  }; // System.Net.Http.Headers.TryParseListDelegate`1
  // Could not write size check! Type: System.Net.Http.Headers.TryParseListDelegate`1 is generic!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Net::Http::Headers::TryParseListDelegate_1, "System.Net.Http.Headers", "TryParseListDelegate`1");
#pragma pack(pop)