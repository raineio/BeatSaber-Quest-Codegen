// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Tls
namespace Org::BouncyCastle::Crypto::Tls {
  // Forward declaring type: AlertDescription
  class AlertDescription;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::AlertDescription);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::AlertDescription*, "Org.BouncyCastle.Crypto.Tls", "AlertDescription");
// Type namespace: Org.BouncyCastle.Crypto.Tls
namespace Org::BouncyCastle::Crypto::Tls {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Tls.AlertDescription
  // [TokenAttribute] Offset: FFFFFFFF
  class AlertDescription : public ::Il2CppObject {
    public:
    // static public System.String GetName(System.Byte alertDescription)
    // Offset: 0x1605CDC
    static ::StringW GetName(uint8_t alertDescription);
    // static public System.String GetText(System.Byte alertDescription)
    // Offset: 0x1605F5C
    static ::StringW GetText(uint8_t alertDescription);
  }; // Org.BouncyCastle.Crypto.Tls.AlertDescription
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::AlertDescription::GetName
// Il2CppName: GetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(uint8_t)>(&Org::BouncyCastle::Crypto::Tls::AlertDescription::GetName)> {
  static const MethodInfo* get() {
    static auto* alertDescription = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::AlertDescription*), "GetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alertDescription});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::AlertDescription::GetText
// Il2CppName: GetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(uint8_t)>(&Org::BouncyCastle::Crypto::Tls::AlertDescription::GetText)> {
  static const MethodInfo* get() {
    static auto* alertDescription = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::AlertDescription*), "GetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alertDescription});
  }
};
