// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Http.Headers.HttpHeaders
#include "System/Net/Http/Headers/HttpHeaders.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: HttpResponseHeaders
  class HttpResponseHeaders;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Net::Http::Headers::HttpResponseHeaders);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::HttpResponseHeaders*, "System.Net.Http.Headers", "HttpResponseHeaders");
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Http.Headers.HttpResponseHeaders
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpResponseHeaders : public System::Net::Http::Headers::HttpHeaders {
    public:
    // System.Void .ctor()
    // Offset: 0x17C23F0
    // Implemented from: System.Net.Http.Headers.HttpHeaders
    // Base method: System.Void HttpHeaders::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpResponseHeaders* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpResponseHeaders::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpResponseHeaders*, creationType>()));
    }
  }; // System.Net.Http.Headers.HttpResponseHeaders
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpResponseHeaders::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
