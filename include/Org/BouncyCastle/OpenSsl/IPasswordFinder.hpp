// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.OpenSsl
namespace Org::BouncyCastle::OpenSsl {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.OpenSsl.IPasswordFinder
  // [TokenAttribute] Offset: FFFFFFFF
  class IPasswordFinder {
    public:
    // public System.Char[] GetPassword()
    // Offset: 0xFFFFFFFF
    ::ArrayW<::Il2CppChar> GetPassword();
  }; // Org.BouncyCastle.OpenSsl.IPasswordFinder
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::OpenSsl::IPasswordFinder*, "Org.BouncyCastle.OpenSsl", "IPasswordFinder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::OpenSsl::IPasswordFinder::GetPassword
// Il2CppName: GetPassword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppChar> (Org::BouncyCastle::OpenSsl::IPasswordFinder::*)()>(&Org::BouncyCastle::OpenSsl::IPasswordFinder::GetPassword)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::OpenSsl::IPasswordFinder*), "GetPassword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
