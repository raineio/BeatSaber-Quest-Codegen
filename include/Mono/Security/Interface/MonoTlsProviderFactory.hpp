// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsProvider
  class MonoTlsProvider;
}
// Completed forward declares
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsProviderFactory
  class MonoTlsProviderFactory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Interface::MonoTlsProviderFactory);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::MonoTlsProviderFactory*, "Mono.Security.Interface", "MonoTlsProviderFactory");
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Interface.MonoTlsProviderFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoTlsProviderFactory : public ::Il2CppObject {
    public:
    // static public Mono.Security.Interface.MonoTlsProvider GetProvider()
    // Offset: 0x2346110
    static ::Mono::Security::Interface::MonoTlsProvider* GetProvider();
  }; // Mono.Security.Interface.MonoTlsProviderFactory
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsProviderFactory::GetProvider
// Il2CppName: GetProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoTlsProvider* (*)()>(&Mono::Security::Interface::MonoTlsProviderFactory::GetProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsProviderFactory*), "GetProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
