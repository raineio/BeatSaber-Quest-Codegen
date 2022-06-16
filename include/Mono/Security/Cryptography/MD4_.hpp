// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.HashAlgorithm
#include "System/Security/Cryptography/HashAlgorithm.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Forward declaring type: MD4
  class MD4_;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Cryptography::MD4_);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::MD4_*, "Mono.Security.Cryptography", "MD4");
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.MD4
  // [TokenAttribute] Offset: FFFFFFFF
  class MD4_ : public ::System::Security::Cryptography::HashAlgorithm {
    public:
    // static public Mono.Security.Cryptography.MD4 Create()
    // Offset: 0x1F51284
    static ::Mono::Security::Cryptography::MD4_* Create();
    // protected System.Void .ctor()
    // Offset: 0x1F51258
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MD4_* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Cryptography::MD4_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MD4_*, creationType>()));
    }
  }; // Mono.Security.Cryptography.MD4
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4_::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Cryptography::MD4_* (*)()>(&Mono::Security::Cryptography::MD4_::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4_*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
