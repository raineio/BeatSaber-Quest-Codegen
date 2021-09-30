// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_SessionBase
#include "HoudiniEngineUnity/HEU_SessionBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_SessionHAPI
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_SessionHAPI : public HoudiniEngineUnity::HEU_SessionBase {
    public:
    // public System.Void .ctor()
    // Offset: 0x17D3494
    // Implemented from: HoudiniEngineUnity.HEU_SessionBase
    // Base method: System.Void HEU_SessionBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_SessionHAPI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_SessionHAPI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_SessionHAPI*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_SessionHAPI
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_SessionHAPI*, "HoudiniEngineUnity", "HEU_SessionHAPI");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_SessionHAPI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!