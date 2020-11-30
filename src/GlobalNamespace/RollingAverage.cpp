// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RollingAverage
#include "GlobalNamespace/RollingAverage.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Int64 kGranularity
int64_t GlobalNamespace::RollingAverage::_get_kGranularity() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("RollingAverage").WithContext("_get_kGranularity");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int64_t>("", "RollingAverage", "kGranularity"));
}
// Autogenerated static field setter
// Set static field: static private System.Int64 kGranularity
void GlobalNamespace::RollingAverage::_set_kGranularity(int64_t value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("RollingAverage").WithContext("_set_kGranularity");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "RollingAverage", "kGranularity", value));
}
// Autogenerated method: RollingAverage.get_currentAverage
float GlobalNamespace::RollingAverage::get_currentAverage() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("RollingAverage").WithContext("get_currentAverage");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<float>(), "get_currentAverage", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
}
// Autogenerated method: RollingAverage.get_hasValue
bool GlobalNamespace::RollingAverage::get_hasValue() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("RollingAverage").WithContext("get_hasValue");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_hasValue", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: RollingAverage..ctor
GlobalNamespace::RollingAverage* GlobalNamespace::RollingAverage::New_ctor(int window) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("RollingAverage").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<RollingAverage*>(window));
}
// Autogenerated method: RollingAverage.Update
void GlobalNamespace::RollingAverage::Update(float value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("RollingAverage").WithContext("Update");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Update", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: RollingAverage.Reset
void GlobalNamespace::RollingAverage::Reset() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("RollingAverage").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Reset", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}