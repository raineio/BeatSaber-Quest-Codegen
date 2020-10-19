// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
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
  // Autogenerated type: Org.BouncyCastle.Security.ParameterUtilities
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
    // Offset: 0xFCBB30
    static void _cctor();
    // static private System.Void AddAlgorithm(System.String canonicalName, params System.Object[] aliases)
    // Offset: 0xFCD4C8
    static void AddAlgorithm(::Il2CppString* canonicalName, ::Array<::Il2CppObject*>* aliases);
    // Creating initializer_list -> params proxy for: System.Void AddAlgorithm(System.String canonicalName, params System.Object[] aliases)
    static void AddAlgorithm(::Il2CppString* canonicalName, std::initializer_list<::Il2CppObject*> aliases);
    // Creating TArgs -> initializer_list proxy for: System.Void AddAlgorithm(System.String canonicalName, params System.Object[] aliases)
    template<class ...TParams>
    static void AddAlgorithm(::Il2CppString* canonicalName, TParams&&... aliases) {
      AddAlgorithm(canonicalName, {aliases...});
    }
    // static private System.Void AddBasicIVSizeEntries(System.Int32 size, params System.String[] algorithms)
    // Offset: 0xFCD6B8
    static void AddBasicIVSizeEntries(int size, ::Array<::Il2CppString*>* algorithms);
    // Creating initializer_list -> params proxy for: System.Void AddBasicIVSizeEntries(System.Int32 size, params System.String[] algorithms)
    static void AddBasicIVSizeEntries(int size, std::initializer_list<::Il2CppString*> algorithms);
    // Creating TArgs -> initializer_list proxy for: System.Void AddBasicIVSizeEntries(System.Int32 size, params System.String[] algorithms)
    template<class ...TParams>
    static void AddBasicIVSizeEntries(int size, TParams&&... algorithms) {
      AddBasicIVSizeEntries(size, {algorithms...});
    }
    // static public System.String GetCanonicalAlgorithmName(System.String algorithm)
    // Offset: 0xFCD824
    static ::Il2CppString* GetCanonicalAlgorithmName(::Il2CppString* algorithm);
    // static public Org.BouncyCastle.Crypto.Parameters.KeyParameter CreateKeyParameter(System.String algorithm, System.Byte[] keyBytes, System.Int32 offset, System.Int32 length)
    // Offset: 0xFCD958
    static Org::BouncyCastle::Crypto::Parameters::KeyParameter* CreateKeyParameter(::Il2CppString* algorithm, ::Array<uint8_t>* keyBytes, int offset, int length);
  }; // Org.BouncyCastle.Security.ParameterUtilities
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::ParameterUtilities*, "Org.BouncyCastle.Security", "ParameterUtilities");
#pragma pack(pop)
