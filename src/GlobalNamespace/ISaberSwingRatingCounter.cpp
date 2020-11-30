// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: ISaberSwingRatingCounter
#include "GlobalNamespace/ISaberSwingRatingCounter.hpp"
// Including type: SwingSaberRatingDidChangeDelegate
#include "GlobalNamespace/SwingSaberRatingDidChangeDelegate.hpp"
// Including type: SwingSaberRatingDidFinishDelegate
#include "GlobalNamespace/SwingSaberRatingDidFinishDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: ISaberSwingRatingCounter.add_didChangeEvent
void GlobalNamespace::ISaberSwingRatingCounter::add_didChangeEvent(GlobalNamespace::SwingSaberRatingDidChangeDelegate* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ISaberSwingRatingCounter").WithContext("add_didChangeEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "add_didChangeEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: ISaberSwingRatingCounter.remove_didChangeEvent
void GlobalNamespace::ISaberSwingRatingCounter::remove_didChangeEvent(GlobalNamespace::SwingSaberRatingDidChangeDelegate* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ISaberSwingRatingCounter").WithContext("remove_didChangeEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "remove_didChangeEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: ISaberSwingRatingCounter.add_didFinishEvent
void GlobalNamespace::ISaberSwingRatingCounter::add_didFinishEvent(GlobalNamespace::SwingSaberRatingDidFinishDelegate* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ISaberSwingRatingCounter").WithContext("add_didFinishEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "add_didFinishEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: ISaberSwingRatingCounter.remove_didFinishEvent
void GlobalNamespace::ISaberSwingRatingCounter::remove_didFinishEvent(GlobalNamespace::SwingSaberRatingDidFinishDelegate* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ISaberSwingRatingCounter").WithContext("remove_didFinishEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "remove_didFinishEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: ISaberSwingRatingCounter.get_didFinish
bool GlobalNamespace::ISaberSwingRatingCounter::get_didFinish() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ISaberSwingRatingCounter").WithContext("get_didFinish");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_didFinish", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: ISaberSwingRatingCounter.get_beforeCutRating
float GlobalNamespace::ISaberSwingRatingCounter::get_beforeCutRating() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ISaberSwingRatingCounter").WithContext("get_beforeCutRating");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<float>(), "get_beforeCutRating", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
}
// Autogenerated method: ISaberSwingRatingCounter.get_afterCutRating
float GlobalNamespace::ISaberSwingRatingCounter::get_afterCutRating() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ISaberSwingRatingCounter").WithContext("get_afterCutRating");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<float>(), "get_afterCutRating", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
}