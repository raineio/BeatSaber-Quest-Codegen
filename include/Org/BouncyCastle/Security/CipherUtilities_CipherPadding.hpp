// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Security.CipherUtilities
#include "Org/BouncyCastle/Security/CipherUtilities.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::CipherUtilities::CipherPadding, "Org.BouncyCastle.Security", "CipherUtilities/CipherPadding");
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding
  // [TokenAttribute] Offset: FFFFFFFF
  struct CipherUtilities::CipherPadding/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CipherPadding
    constexpr CipherPadding(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding NOPADDING
    static constexpr const int NOPADDING = 0;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding NOPADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_NOPADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding NOPADDING
    static void _set_NOPADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding RAW
    static constexpr const int RAW = 1;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding RAW
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_RAW();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding RAW
    static void _set_RAW(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ISO10126PADDING
    static constexpr const int ISO10126PADDING = 2;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ISO10126PADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_ISO10126PADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ISO10126PADDING
    static void _set_ISO10126PADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ISO10126D2PADDING
    static constexpr const int ISO10126D2PADDING = 3;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ISO10126D2PADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_ISO10126D2PADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ISO10126D2PADDING
    static void _set_ISO10126D2PADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ISO10126_2PADDING
    static constexpr const int ISO10126_2PADDING = 4;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ISO10126_2PADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_ISO10126_2PADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ISO10126_2PADDING
    static void _set_ISO10126_2PADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ISO7816_4PADDING
    static constexpr const int ISO7816_4PADDING = 5;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ISO7816_4PADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_ISO7816_4PADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ISO7816_4PADDING
    static void _set_ISO7816_4PADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ISO9797_1PADDING
    static constexpr const int ISO9797_1PADDING = 6;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ISO9797_1PADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_ISO9797_1PADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ISO9797_1PADDING
    static void _set_ISO9797_1PADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ISO9796_1
    static constexpr const int ISO9796_1 = 7;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ISO9796_1
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_ISO9796_1();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ISO9796_1
    static void _set_ISO9796_1(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ISO9796_1PADDING
    static constexpr const int ISO9796_1PADDING = 8;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ISO9796_1PADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_ISO9796_1PADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ISO9796_1PADDING
    static void _set_ISO9796_1PADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEP
    static constexpr const int OAEP = 9;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEP
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_OAEP();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEP
    static void _set_OAEP(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPPADDING
    static constexpr const int OAEPPADDING = 10;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPPADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_OAEPPADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPPADDING
    static void _set_OAEPPADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHMD5ANDMGF1PADDING
    static constexpr const int OAEPWITHMD5ANDMGF1PADDING = 11;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHMD5ANDMGF1PADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_OAEPWITHMD5ANDMGF1PADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHMD5ANDMGF1PADDING
    static void _set_OAEPWITHMD5ANDMGF1PADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA1ANDMGF1PADDING
    static constexpr const int OAEPWITHSHA1ANDMGF1PADDING = 12;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA1ANDMGF1PADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_OAEPWITHSHA1ANDMGF1PADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA1ANDMGF1PADDING
    static void _set_OAEPWITHSHA1ANDMGF1PADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA_1ANDMGF1PADDING
    static constexpr const int OAEPWITHSHA_1ANDMGF1PADDING = 13;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA_1ANDMGF1PADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_OAEPWITHSHA_1ANDMGF1PADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA_1ANDMGF1PADDING
    static void _set_OAEPWITHSHA_1ANDMGF1PADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA224ANDMGF1PADDING
    static constexpr const int OAEPWITHSHA224ANDMGF1PADDING = 14;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA224ANDMGF1PADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_OAEPWITHSHA224ANDMGF1PADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA224ANDMGF1PADDING
    static void _set_OAEPWITHSHA224ANDMGF1PADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA_224ANDMGF1PADDING
    static constexpr const int OAEPWITHSHA_224ANDMGF1PADDING = 15;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA_224ANDMGF1PADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_OAEPWITHSHA_224ANDMGF1PADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA_224ANDMGF1PADDING
    static void _set_OAEPWITHSHA_224ANDMGF1PADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA256ANDMGF1PADDING
    static constexpr const int OAEPWITHSHA256ANDMGF1PADDING = 16;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA256ANDMGF1PADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_OAEPWITHSHA256ANDMGF1PADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA256ANDMGF1PADDING
    static void _set_OAEPWITHSHA256ANDMGF1PADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA_256ANDMGF1PADDING
    static constexpr const int OAEPWITHSHA_256ANDMGF1PADDING = 17;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA_256ANDMGF1PADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_OAEPWITHSHA_256ANDMGF1PADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA_256ANDMGF1PADDING
    static void _set_OAEPWITHSHA_256ANDMGF1PADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA384ANDMGF1PADDING
    static constexpr const int OAEPWITHSHA384ANDMGF1PADDING = 18;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA384ANDMGF1PADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_OAEPWITHSHA384ANDMGF1PADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA384ANDMGF1PADDING
    static void _set_OAEPWITHSHA384ANDMGF1PADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA_384ANDMGF1PADDING
    static constexpr const int OAEPWITHSHA_384ANDMGF1PADDING = 19;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA_384ANDMGF1PADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_OAEPWITHSHA_384ANDMGF1PADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA_384ANDMGF1PADDING
    static void _set_OAEPWITHSHA_384ANDMGF1PADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA512ANDMGF1PADDING
    static constexpr const int OAEPWITHSHA512ANDMGF1PADDING = 20;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA512ANDMGF1PADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_OAEPWITHSHA512ANDMGF1PADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA512ANDMGF1PADDING
    static void _set_OAEPWITHSHA512ANDMGF1PADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA_512ANDMGF1PADDING
    static constexpr const int OAEPWITHSHA_512ANDMGF1PADDING = 21;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA_512ANDMGF1PADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_OAEPWITHSHA_512ANDMGF1PADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding OAEPWITHSHA_512ANDMGF1PADDING
    static void _set_OAEPWITHSHA_512ANDMGF1PADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding PKCS1
    static constexpr const int PKCS1 = 22;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding PKCS1
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_PKCS1();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding PKCS1
    static void _set_PKCS1(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding PKCS1PADDING
    static constexpr const int PKCS1PADDING = 23;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding PKCS1PADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_PKCS1PADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding PKCS1PADDING
    static void _set_PKCS1PADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding PKCS5
    static constexpr const int PKCS5 = 24;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding PKCS5
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_PKCS5();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding PKCS5
    static void _set_PKCS5(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding PKCS5PADDING
    static constexpr const int PKCS5PADDING = 25;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding PKCS5PADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_PKCS5PADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding PKCS5PADDING
    static void _set_PKCS5PADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding PKCS7
    static constexpr const int PKCS7 = 26;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding PKCS7
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_PKCS7();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding PKCS7
    static void _set_PKCS7(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding PKCS7PADDING
    static constexpr const int PKCS7PADDING = 27;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding PKCS7PADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_PKCS7PADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding PKCS7PADDING
    static void _set_PKCS7PADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding TBCPADDING
    static constexpr const int TBCPADDING = 28;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding TBCPADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_TBCPADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding TBCPADDING
    static void _set_TBCPADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding WITHCTS
    static constexpr const int WITHCTS = 29;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding WITHCTS
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_WITHCTS();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding WITHCTS
    static void _set_WITHCTS(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding X923PADDING
    static constexpr const int X923PADDING = 30;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding X923PADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_X923PADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding X923PADDING
    static void _set_X923PADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ZEROBYTEPADDING
    static constexpr const int ZEROBYTEPADDING = 31;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ZEROBYTEPADDING
    static Org::BouncyCastle::Security::CipherUtilities::CipherPadding _get_ZEROBYTEPADDING();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding ZEROBYTEPADDING
    static void _set_ZEROBYTEPADDING(Org::BouncyCastle::Security::CipherUtilities::CipherPadding value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Org.BouncyCastle.Security.CipherUtilities/Org.BouncyCastle.Security.CipherPadding
  #pragma pack(pop)
  static check_size<sizeof(CipherUtilities::CipherPadding), 0 + sizeof(int)> __Org_BouncyCastle_Security_CipherUtilities_CipherPaddingSizeCheck;
  static_assert(sizeof(CipherUtilities::CipherPadding) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
