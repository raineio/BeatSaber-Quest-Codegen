// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_SerializableDictionary`2
#include "HoudiniEngineUnity/HEU_SerializableDictionary_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_OutputAttribute
  class HEU_OutputAttribute;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // WARNING Size may be invalid!
  // Autogenerated type: HoudiniEngineUnity.HEU_OutputAttributeDictionary
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_OutputAttributeDictionary : public HoudiniEngineUnity::HEU_SerializableDictionary_2<::Il2CppString*, HoudiniEngineUnity::HEU_OutputAttribute*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x17A07AC
    // Implemented from: HoudiniEngineUnity.HEU_SerializableDictionary`2
    // Base method: System.Void HEU_SerializableDictionary_2::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_OutputAttributeDictionary* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_OutputAttributeDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_OutputAttributeDictionary*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_OutputAttributeDictionary
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_OutputAttributeDictionary*, "HoudiniEngineUnity", "HEU_OutputAttributeDictionary");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_OutputAttributeDictionary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!