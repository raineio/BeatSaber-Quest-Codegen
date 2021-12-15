// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: System.Net.Http.Headers.Token
#include "System/Net/Http/Headers/Token.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: Lexer
  class Lexer;
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
  // Forward declaring type: ElementTryParser`1<T>
  template<typename T>
  class ElementTryParser_1;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Net::Http::Headers::ElementTryParser_1, "System.Net.Http.Headers", "ElementTryParser`1");
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Http.Headers.ElementTryParser`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ElementTryParser_1 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ElementTryParser_1<T>* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::ElementTryParser_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ElementTryParser_1<T>*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.Net.Http.Headers.Lexer lexer, out T parsedValue, out System.Net.Http.Headers.Token token)
    // Offset: 0xFFFFFFFF
    bool Invoke(System::Net::Http::Headers::Lexer* lexer, ByRef<T> parsedValue, ByRef<System::Net::Http::Headers::Token> token) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::ElementTryParser_1::Invoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(lexer), ::il2cpp_utils::ExtractIndependentType<T&>(), ::il2cpp_utils::ExtractIndependentType<System::Net::Http::Headers::Token&>()})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, lexer, byref(parsedValue), byref(token));
    }
    // public System.IAsyncResult BeginInvoke(System.Net.Http.Headers.Lexer lexer, out T parsedValue, out System.Net.Http.Headers.Token token, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke(System::Net::Http::Headers::Lexer* lexer, ByRef<T> parsedValue, ByRef<System::Net::Http::Headers::Token> token, System::AsyncCallback* callback, ::Il2CppObject* object) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::ElementTryParser_1::BeginInvoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "BeginInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(lexer), ::il2cpp_utils::ExtractIndependentType<T&>(), ::il2cpp_utils::ExtractIndependentType<System::Net::Http::Headers::Token&>(), ::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(object)})));
      return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, lexer, byref(parsedValue), byref(token), callback, object);
    }
    // public System.Boolean EndInvoke(out T parsedValue, out System.Net.Http.Headers.Token token, System.IAsyncResult result)
    // Offset: 0xFFFFFFFF
    bool EndInvoke(ByRef<T> parsedValue, ByRef<System::Net::Http::Headers::Token> token, System::IAsyncResult* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::ElementTryParser_1::EndInvoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "EndInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<T&>(), ::il2cpp_utils::ExtractIndependentType<System::Net::Http::Headers::Token&>(), ::il2cpp_utils::ExtractType(result)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, byref(parsedValue), byref(token), result);
    }
  }; // System.Net.Http.Headers.ElementTryParser`1
  // Could not write size check! Type: System.Net.Http.Headers.ElementTryParser`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
