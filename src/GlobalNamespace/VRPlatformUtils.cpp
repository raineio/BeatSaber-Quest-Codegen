// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: VRPlatformUtils
#include "GlobalNamespace/VRPlatformUtils.hpp"
// Including type: XRDeviceModel
#include "GlobalNamespace/XRDeviceModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: VRPlatformUtils.GetXRDeviceModel
GlobalNamespace::XRDeviceModel GlobalNamespace::VRPlatformUtils::GetXRDeviceModel() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("VRPlatformUtils").WithContext("GetXRDeviceModel");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "VRPlatformUtils", il2cpp_utils::NoArgClass<GlobalNamespace::XRDeviceModel>(), "GetXRDeviceModel", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::XRDeviceModel, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}