// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x2
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebHeaderCollectionType
  // [TokenAttribute] Offset: FFFFFFFF
  struct WebHeaderCollectionType/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.UInt16 value__
    // Size: 0x2
    // Offset: 0x0
    uint16_t value;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    public:
    // Creating value type constructor for type: WebHeaderCollectionType
    constexpr WebHeaderCollectionType(uint16_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator uint16_t
    constexpr operator uint16_t() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.WebHeaderCollectionType Unknown
    static constexpr const uint16_t Unknown = 0u;
    // Get static field: static public System.Net.WebHeaderCollectionType Unknown
    static System::Net::WebHeaderCollectionType _get_Unknown();
    // Set static field: static public System.Net.WebHeaderCollectionType Unknown
    static void _set_Unknown(System::Net::WebHeaderCollectionType value);
    // static field const value: static public System.Net.WebHeaderCollectionType WebRequest
    static constexpr const uint16_t WebRequest = 1u;
    // Get static field: static public System.Net.WebHeaderCollectionType WebRequest
    static System::Net::WebHeaderCollectionType _get_WebRequest();
    // Set static field: static public System.Net.WebHeaderCollectionType WebRequest
    static void _set_WebRequest(System::Net::WebHeaderCollectionType value);
    // static field const value: static public System.Net.WebHeaderCollectionType WebResponse
    static constexpr const uint16_t WebResponse = 2u;
    // Get static field: static public System.Net.WebHeaderCollectionType WebResponse
    static System::Net::WebHeaderCollectionType _get_WebResponse();
    // Set static field: static public System.Net.WebHeaderCollectionType WebResponse
    static void _set_WebResponse(System::Net::WebHeaderCollectionType value);
    // static field const value: static public System.Net.WebHeaderCollectionType HttpWebRequest
    static constexpr const uint16_t HttpWebRequest = 3u;
    // Get static field: static public System.Net.WebHeaderCollectionType HttpWebRequest
    static System::Net::WebHeaderCollectionType _get_HttpWebRequest();
    // Set static field: static public System.Net.WebHeaderCollectionType HttpWebRequest
    static void _set_HttpWebRequest(System::Net::WebHeaderCollectionType value);
    // static field const value: static public System.Net.WebHeaderCollectionType HttpWebResponse
    static constexpr const uint16_t HttpWebResponse = 4u;
    // Get static field: static public System.Net.WebHeaderCollectionType HttpWebResponse
    static System::Net::WebHeaderCollectionType _get_HttpWebResponse();
    // Set static field: static public System.Net.WebHeaderCollectionType HttpWebResponse
    static void _set_HttpWebResponse(System::Net::WebHeaderCollectionType value);
    // static field const value: static public System.Net.WebHeaderCollectionType HttpListenerRequest
    static constexpr const uint16_t HttpListenerRequest = 5u;
    // Get static field: static public System.Net.WebHeaderCollectionType HttpListenerRequest
    static System::Net::WebHeaderCollectionType _get_HttpListenerRequest();
    // Set static field: static public System.Net.WebHeaderCollectionType HttpListenerRequest
    static void _set_HttpListenerRequest(System::Net::WebHeaderCollectionType value);
    // static field const value: static public System.Net.WebHeaderCollectionType HttpListenerResponse
    static constexpr const uint16_t HttpListenerResponse = 6u;
    // Get static field: static public System.Net.WebHeaderCollectionType HttpListenerResponse
    static System::Net::WebHeaderCollectionType _get_HttpListenerResponse();
    // Set static field: static public System.Net.WebHeaderCollectionType HttpListenerResponse
    static void _set_HttpListenerResponse(System::Net::WebHeaderCollectionType value);
    // static field const value: static public System.Net.WebHeaderCollectionType FtpWebRequest
    static constexpr const uint16_t FtpWebRequest = 7u;
    // Get static field: static public System.Net.WebHeaderCollectionType FtpWebRequest
    static System::Net::WebHeaderCollectionType _get_FtpWebRequest();
    // Set static field: static public System.Net.WebHeaderCollectionType FtpWebRequest
    static void _set_FtpWebRequest(System::Net::WebHeaderCollectionType value);
    // static field const value: static public System.Net.WebHeaderCollectionType FtpWebResponse
    static constexpr const uint16_t FtpWebResponse = 8u;
    // Get static field: static public System.Net.WebHeaderCollectionType FtpWebResponse
    static System::Net::WebHeaderCollectionType _get_FtpWebResponse();
    // Set static field: static public System.Net.WebHeaderCollectionType FtpWebResponse
    static void _set_FtpWebResponse(System::Net::WebHeaderCollectionType value);
    // static field const value: static public System.Net.WebHeaderCollectionType FileWebRequest
    static constexpr const uint16_t FileWebRequest = 9u;
    // Get static field: static public System.Net.WebHeaderCollectionType FileWebRequest
    static System::Net::WebHeaderCollectionType _get_FileWebRequest();
    // Set static field: static public System.Net.WebHeaderCollectionType FileWebRequest
    static void _set_FileWebRequest(System::Net::WebHeaderCollectionType value);
    // static field const value: static public System.Net.WebHeaderCollectionType FileWebResponse
    static constexpr const uint16_t FileWebResponse = 10u;
    // Get static field: static public System.Net.WebHeaderCollectionType FileWebResponse
    static System::Net::WebHeaderCollectionType _get_FileWebResponse();
    // Set static field: static public System.Net.WebHeaderCollectionType FileWebResponse
    static void _set_FileWebResponse(System::Net::WebHeaderCollectionType value);
    // Get instance field reference: public System.UInt16 value__
    uint16_t& dyn_value__();
  }; // System.Net.WebHeaderCollectionType
  #pragma pack(pop)
  static check_size<sizeof(WebHeaderCollectionType), 0 + sizeof(uint16_t)> __System_Net_WebHeaderCollectionTypeSizeCheck;
  static_assert(sizeof(WebHeaderCollectionType) == 0x2);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebHeaderCollectionType, "System.Net", "WebHeaderCollectionType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
