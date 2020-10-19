// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.IWebRequestCreate
#include "System/Net/IWebRequestCreate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebRequest
  class WebRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.HttpRequestCreator
  class HttpRequestCreator : public ::Il2CppObject, public System::Net::IWebRequestCreate {
    public:
    // System.Void .ctor()
    // Offset: 0x123F57C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static HttpRequestCreator* New_ctor();
    // public System.Net.WebRequest Create(System.Uri uri)
    // Offset: 0x123F584
    // Implemented from: System.Net.IWebRequestCreate
    // Base method: System.Net.WebRequest IWebRequestCreate::Create(System.Uri uri)
    System::Net::WebRequest* Create(System::Uri* uri);
  }; // System.Net.HttpRequestCreator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpRequestCreator*, "System.Net", "HttpRequestCreator");
#pragma pack(pop)
