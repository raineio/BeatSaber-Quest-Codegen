// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: UriSyntaxFlags
  struct UriSyntaxFlags;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::UriSyntaxFlags, "System", "UriSyntaxFlags");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.UriSyntaxFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct UriSyntaxFlags/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UriSyntaxFlags
    constexpr UriSyntaxFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.UriSyntaxFlags None
    static constexpr const int None = 0;
    // Get static field: static public System.UriSyntaxFlags None
    static System::UriSyntaxFlags _get_None();
    // Set static field: static public System.UriSyntaxFlags None
    static void _set_None(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags MustHaveAuthority
    static constexpr const int MustHaveAuthority = 1;
    // Get static field: static public System.UriSyntaxFlags MustHaveAuthority
    static System::UriSyntaxFlags _get_MustHaveAuthority();
    // Set static field: static public System.UriSyntaxFlags MustHaveAuthority
    static void _set_MustHaveAuthority(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags OptionalAuthority
    static constexpr const int OptionalAuthority = 2;
    // Get static field: static public System.UriSyntaxFlags OptionalAuthority
    static System::UriSyntaxFlags _get_OptionalAuthority();
    // Set static field: static public System.UriSyntaxFlags OptionalAuthority
    static void _set_OptionalAuthority(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags MayHaveUserInfo
    static constexpr const int MayHaveUserInfo = 4;
    // Get static field: static public System.UriSyntaxFlags MayHaveUserInfo
    static System::UriSyntaxFlags _get_MayHaveUserInfo();
    // Set static field: static public System.UriSyntaxFlags MayHaveUserInfo
    static void _set_MayHaveUserInfo(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags MayHavePort
    static constexpr const int MayHavePort = 8;
    // Get static field: static public System.UriSyntaxFlags MayHavePort
    static System::UriSyntaxFlags _get_MayHavePort();
    // Set static field: static public System.UriSyntaxFlags MayHavePort
    static void _set_MayHavePort(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags MayHavePath
    static constexpr const int MayHavePath = 16;
    // Get static field: static public System.UriSyntaxFlags MayHavePath
    static System::UriSyntaxFlags _get_MayHavePath();
    // Set static field: static public System.UriSyntaxFlags MayHavePath
    static void _set_MayHavePath(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags MayHaveQuery
    static constexpr const int MayHaveQuery = 32;
    // Get static field: static public System.UriSyntaxFlags MayHaveQuery
    static System::UriSyntaxFlags _get_MayHaveQuery();
    // Set static field: static public System.UriSyntaxFlags MayHaveQuery
    static void _set_MayHaveQuery(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags MayHaveFragment
    static constexpr const int MayHaveFragment = 64;
    // Get static field: static public System.UriSyntaxFlags MayHaveFragment
    static System::UriSyntaxFlags _get_MayHaveFragment();
    // Set static field: static public System.UriSyntaxFlags MayHaveFragment
    static void _set_MayHaveFragment(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags AllowEmptyHost
    static constexpr const int AllowEmptyHost = 128;
    // Get static field: static public System.UriSyntaxFlags AllowEmptyHost
    static System::UriSyntaxFlags _get_AllowEmptyHost();
    // Set static field: static public System.UriSyntaxFlags AllowEmptyHost
    static void _set_AllowEmptyHost(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags AllowUncHost
    static constexpr const int AllowUncHost = 256;
    // Get static field: static public System.UriSyntaxFlags AllowUncHost
    static System::UriSyntaxFlags _get_AllowUncHost();
    // Set static field: static public System.UriSyntaxFlags AllowUncHost
    static void _set_AllowUncHost(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags AllowDnsHost
    static constexpr const int AllowDnsHost = 512;
    // Get static field: static public System.UriSyntaxFlags AllowDnsHost
    static System::UriSyntaxFlags _get_AllowDnsHost();
    // Set static field: static public System.UriSyntaxFlags AllowDnsHost
    static void _set_AllowDnsHost(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags AllowIPv4Host
    static constexpr const int AllowIPv4Host = 1024;
    // Get static field: static public System.UriSyntaxFlags AllowIPv4Host
    static System::UriSyntaxFlags _get_AllowIPv4Host();
    // Set static field: static public System.UriSyntaxFlags AllowIPv4Host
    static void _set_AllowIPv4Host(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags AllowIPv6Host
    static constexpr const int AllowIPv6Host = 2048;
    // Get static field: static public System.UriSyntaxFlags AllowIPv6Host
    static System::UriSyntaxFlags _get_AllowIPv6Host();
    // Set static field: static public System.UriSyntaxFlags AllowIPv6Host
    static void _set_AllowIPv6Host(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags AllowAnInternetHost
    static constexpr const int AllowAnInternetHost = 3584;
    // Get static field: static public System.UriSyntaxFlags AllowAnInternetHost
    static System::UriSyntaxFlags _get_AllowAnInternetHost();
    // Set static field: static public System.UriSyntaxFlags AllowAnInternetHost
    static void _set_AllowAnInternetHost(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags AllowAnyOtherHost
    static constexpr const int AllowAnyOtherHost = 4096;
    // Get static field: static public System.UriSyntaxFlags AllowAnyOtherHost
    static System::UriSyntaxFlags _get_AllowAnyOtherHost();
    // Set static field: static public System.UriSyntaxFlags AllowAnyOtherHost
    static void _set_AllowAnyOtherHost(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags FileLikeUri
    static constexpr const int FileLikeUri = 8192;
    // Get static field: static public System.UriSyntaxFlags FileLikeUri
    static System::UriSyntaxFlags _get_FileLikeUri();
    // Set static field: static public System.UriSyntaxFlags FileLikeUri
    static void _set_FileLikeUri(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags MailToLikeUri
    static constexpr const int MailToLikeUri = 16384;
    // Get static field: static public System.UriSyntaxFlags MailToLikeUri
    static System::UriSyntaxFlags _get_MailToLikeUri();
    // Set static field: static public System.UriSyntaxFlags MailToLikeUri
    static void _set_MailToLikeUri(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags V1_UnknownUri
    static constexpr const int V1_UnknownUri = 65536;
    // Get static field: static public System.UriSyntaxFlags V1_UnknownUri
    static System::UriSyntaxFlags _get_V1_UnknownUri();
    // Set static field: static public System.UriSyntaxFlags V1_UnknownUri
    static void _set_V1_UnknownUri(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags SimpleUserSyntax
    static constexpr const int SimpleUserSyntax = 131072;
    // Get static field: static public System.UriSyntaxFlags SimpleUserSyntax
    static System::UriSyntaxFlags _get_SimpleUserSyntax();
    // Set static field: static public System.UriSyntaxFlags SimpleUserSyntax
    static void _set_SimpleUserSyntax(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags BuiltInSyntax
    static constexpr const int BuiltInSyntax = 262144;
    // Get static field: static public System.UriSyntaxFlags BuiltInSyntax
    static System::UriSyntaxFlags _get_BuiltInSyntax();
    // Set static field: static public System.UriSyntaxFlags BuiltInSyntax
    static void _set_BuiltInSyntax(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags ParserSchemeOnly
    static constexpr const int ParserSchemeOnly = 524288;
    // Get static field: static public System.UriSyntaxFlags ParserSchemeOnly
    static System::UriSyntaxFlags _get_ParserSchemeOnly();
    // Set static field: static public System.UriSyntaxFlags ParserSchemeOnly
    static void _set_ParserSchemeOnly(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags AllowDOSPath
    static constexpr const int AllowDOSPath = 1048576;
    // Get static field: static public System.UriSyntaxFlags AllowDOSPath
    static System::UriSyntaxFlags _get_AllowDOSPath();
    // Set static field: static public System.UriSyntaxFlags AllowDOSPath
    static void _set_AllowDOSPath(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags PathIsRooted
    static constexpr const int PathIsRooted = 2097152;
    // Get static field: static public System.UriSyntaxFlags PathIsRooted
    static System::UriSyntaxFlags _get_PathIsRooted();
    // Set static field: static public System.UriSyntaxFlags PathIsRooted
    static void _set_PathIsRooted(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags ConvertPathSlashes
    static constexpr const int ConvertPathSlashes = 4194304;
    // Get static field: static public System.UriSyntaxFlags ConvertPathSlashes
    static System::UriSyntaxFlags _get_ConvertPathSlashes();
    // Set static field: static public System.UriSyntaxFlags ConvertPathSlashes
    static void _set_ConvertPathSlashes(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags CompressPath
    static constexpr const int CompressPath = 8388608;
    // Get static field: static public System.UriSyntaxFlags CompressPath
    static System::UriSyntaxFlags _get_CompressPath();
    // Set static field: static public System.UriSyntaxFlags CompressPath
    static void _set_CompressPath(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags CanonicalizeAsFilePath
    static constexpr const int CanonicalizeAsFilePath = 16777216;
    // Get static field: static public System.UriSyntaxFlags CanonicalizeAsFilePath
    static System::UriSyntaxFlags _get_CanonicalizeAsFilePath();
    // Set static field: static public System.UriSyntaxFlags CanonicalizeAsFilePath
    static void _set_CanonicalizeAsFilePath(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags UnEscapeDotsAndSlashes
    static constexpr const int UnEscapeDotsAndSlashes = 33554432;
    // Get static field: static public System.UriSyntaxFlags UnEscapeDotsAndSlashes
    static System::UriSyntaxFlags _get_UnEscapeDotsAndSlashes();
    // Set static field: static public System.UriSyntaxFlags UnEscapeDotsAndSlashes
    static void _set_UnEscapeDotsAndSlashes(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags AllowIdn
    static constexpr const int AllowIdn = 67108864;
    // Get static field: static public System.UriSyntaxFlags AllowIdn
    static System::UriSyntaxFlags _get_AllowIdn();
    // Set static field: static public System.UriSyntaxFlags AllowIdn
    static void _set_AllowIdn(System::UriSyntaxFlags value);
    // static field const value: static public System.UriSyntaxFlags AllowIriParsing
    static constexpr const int AllowIriParsing = 268435456;
    // Get static field: static public System.UriSyntaxFlags AllowIriParsing
    static System::UriSyntaxFlags _get_AllowIriParsing();
    // Set static field: static public System.UriSyntaxFlags AllowIriParsing
    static void _set_AllowIriParsing(System::UriSyntaxFlags value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.UriSyntaxFlags
  #pragma pack(pop)
  static check_size<sizeof(UriSyntaxFlags), 0 + sizeof(int)> __System_UriSyntaxFlagsSizeCheck;
  static_assert(sizeof(UriSyntaxFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
