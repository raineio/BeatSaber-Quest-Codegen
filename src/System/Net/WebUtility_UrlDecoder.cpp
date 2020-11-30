// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.WebUtility/UrlDecoder
#include "System/Net/WebUtility_UrlDecoder.hpp"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.WebUtility/UrlDecoder.FlushBytes
void System::Net::WebUtility::UrlDecoder::FlushBytes() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("UrlDecoder").WithContext("FlushBytes");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "FlushBytes", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.WebUtility/UrlDecoder..ctor
System::Net::WebUtility::UrlDecoder* System::Net::WebUtility::UrlDecoder::New_ctor(int bufferSize, System::Text::Encoding* encoding) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("UrlDecoder").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<WebUtility::UrlDecoder*>(bufferSize, encoding));
}
// Autogenerated method: System.Net.WebUtility/UrlDecoder.AddChar
void System::Net::WebUtility::UrlDecoder::AddChar(::Il2CppChar ch) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("UrlDecoder").WithContext("AddChar");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "AddChar", {}, ::il2cpp_utils::ExtractTypes(ch)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, ch);
}
// Autogenerated method: System.Net.WebUtility/UrlDecoder.AddByte
void System::Net::WebUtility::UrlDecoder::AddByte(uint8_t b) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("UrlDecoder").WithContext("AddByte");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "AddByte", {}, ::il2cpp_utils::ExtractTypes(b)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, b);
}
// Autogenerated method: System.Net.WebUtility/UrlDecoder.GetString
::Il2CppString* System::Net::WebUtility::UrlDecoder::GetString() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("UrlDecoder").WithContext("GetString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "GetString", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}