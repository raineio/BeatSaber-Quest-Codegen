// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: GeneralSecurityException
  class GeneralSecurityException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Security::GeneralSecurityException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::GeneralSecurityException*, "Org.BouncyCastle.Security", "GeneralSecurityException");
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Security.GeneralSecurityException
  // [TokenAttribute] Offset: FFFFFFFF
  class GeneralSecurityException : public ::System::Exception {
    public:
    // public System.Void .ctor()
    // Offset: 0x17E9C0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GeneralSecurityException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Security::GeneralSecurityException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GeneralSecurityException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x17E9C74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GeneralSecurityException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Security::GeneralSecurityException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GeneralSecurityException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception exception)
    // Offset: 0x17E9CEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GeneralSecurityException* New_ctor(::StringW message, ::System::Exception* exception) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Security::GeneralSecurityException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GeneralSecurityException*, creationType>(message, exception)));
    }
  }; // Org.BouncyCastle.Security.GeneralSecurityException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Security::GeneralSecurityException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Security::GeneralSecurityException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Security::GeneralSecurityException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
