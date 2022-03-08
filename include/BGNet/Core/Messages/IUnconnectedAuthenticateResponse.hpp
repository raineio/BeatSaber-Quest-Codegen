// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.IUnconnectedReliableResponse
#include "BGNet/Core/Messages/IUnconnectedReliableResponse.hpp"
// Completed includes
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: IUnconnectedAuthenticateResponse
  class IUnconnectedAuthenticateResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::IUnconnectedAuthenticateResponse);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::IUnconnectedAuthenticateResponse*, "BGNet.Core.Messages", "IUnconnectedAuthenticateResponse");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.IUnconnectedAuthenticateResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class IUnconnectedAuthenticateResponse/*, public ::BGNet::Core::Messages::IUnconnectedReliableResponse*/ {
    public:
    // Creating interface conversion operator: operator ::BGNet::Core::Messages::IUnconnectedReliableResponse
    operator ::BGNet::Core::Messages::IUnconnectedReliableResponse() noexcept {
      return *reinterpret_cast<::BGNet::Core::Messages::IUnconnectedReliableResponse*>(this);
    }
    // public System.Boolean get_isAuthenticated()
    // Offset: 0xFFFFFFFF
    bool get_isAuthenticated();
  }; // BGNet.Core.Messages.IUnconnectedAuthenticateResponse
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::IUnconnectedAuthenticateResponse::get_isAuthenticated
// Il2CppName: get_isAuthenticated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::IUnconnectedAuthenticateResponse::*)()>(&BGNet::Core::Messages::IUnconnectedAuthenticateResponse::get_isAuthenticated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::IUnconnectedAuthenticateResponse*), "get_isAuthenticated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};