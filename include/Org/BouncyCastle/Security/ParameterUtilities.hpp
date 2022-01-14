// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: KeyParameter
  class KeyParameter;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: ParameterUtilities
  class ParameterUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Security::ParameterUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::ParameterUtilities*, "Org.BouncyCastle.Security", "ParameterUtilities");
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Security.ParameterUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class ParameterUtilities : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Collections.IDictionary algorithms
    static System::Collections::IDictionary* _get_algorithms();
    // Set static field: static private readonly System.Collections.IDictionary algorithms
    static void _set_algorithms(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary basicIVSizes
    static System::Collections::IDictionary* _get_basicIVSizes();
    // Set static field: static private readonly System.Collections.IDictionary basicIVSizes
    static void _set_basicIVSizes(System::Collections::IDictionary* value);
    // static private System.Void .cctor()
    // Offset: 0x152DB60
    static void _cctor();
    // static private System.Void AddAlgorithm(System.String canonicalName, params System.Object[] aliases)
    // Offset: 0x152F120
    static void AddAlgorithm(::StringW canonicalName, ::ArrayW<::Il2CppObject*> aliases);
    // static private System.Void AddBasicIVSizeEntries(System.Int32 size, params System.String[] algorithms)
    // Offset: 0x152F310
    static void AddBasicIVSizeEntries(int size, ::ArrayW<::StringW> algorithms);
    // static public System.String GetCanonicalAlgorithmName(System.String algorithm)
    // Offset: 0x152F47C
    static ::StringW GetCanonicalAlgorithmName(::StringW algorithm);
    // static public Org.BouncyCastle.Crypto.Parameters.KeyParameter CreateKeyParameter(System.String algorithm, System.Byte[] keyBytes, System.Int32 offset, System.Int32 length)
    // Offset: 0x152F5B0
    static Org::BouncyCastle::Crypto::Parameters::KeyParameter* CreateKeyParameter(::StringW algorithm, ::ArrayW<uint8_t> keyBytes, int offset, int length);
  }; // Org.BouncyCastle.Security.ParameterUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Security::ParameterUtilities::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Security::ParameterUtilities::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::ParameterUtilities*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::ParameterUtilities::AddAlgorithm
// Il2CppName: AddAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&Org::BouncyCastle::Security::ParameterUtilities::AddAlgorithm)> {
  static const MethodInfo* get() {
    static auto* canonicalName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* aliases = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::ParameterUtilities*), "AddAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canonicalName, aliases});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::ParameterUtilities::AddBasicIVSizeEntries
// Il2CppName: AddBasicIVSizeEntries
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::ArrayW<::StringW>)>(&Org::BouncyCastle::Security::ParameterUtilities::AddBasicIVSizeEntries)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* algorithms = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::ParameterUtilities*), "AddBasicIVSizeEntries", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size, algorithms});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::ParameterUtilities::GetCanonicalAlgorithmName
// Il2CppName: GetCanonicalAlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&Org::BouncyCastle::Security::ParameterUtilities::GetCanonicalAlgorithmName)> {
  static const MethodInfo* get() {
    static auto* algorithm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::ParameterUtilities*), "GetCanonicalAlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithm});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::ParameterUtilities::CreateKeyParameter
// Il2CppName: CreateKeyParameter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::KeyParameter* (*)(::StringW, ::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Security::ParameterUtilities::CreateKeyParameter)> {
  static const MethodInfo* get() {
    static auto* algorithm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keyBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::ParameterUtilities*), "CreateKeyParameter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithm, keyBytes, offset, length});
  }
};
