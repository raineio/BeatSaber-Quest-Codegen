// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: PlatformNetworkPlayerModel
#include "GlobalNamespace/PlatformNetworkPlayerModel.hpp"
// Including type: PlatformNetworkPlayerModel/CreatePartyConfig
#include "GlobalNamespace/PlatformNetworkPlayerModel_CreatePartyConfig.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: INetworkPlayer
#include "GlobalNamespace/INetworkPlayer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: PlatformNetworkPlayerModel.get_friends
System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* GlobalNamespace::PlatformNetworkPlayerModel::get_friends() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlatformNetworkPlayerModel").WithContext("get_friends");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>*>(), "get_friends", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>*, false>(this, ___internal__method);
}
// Autogenerated method: PlatformNetworkPlayerModel..ctor
GlobalNamespace::PlatformNetworkPlayerModel* GlobalNamespace::PlatformNetworkPlayerModel::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlatformNetworkPlayerModel").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<PlatformNetworkPlayerModel*>());
}