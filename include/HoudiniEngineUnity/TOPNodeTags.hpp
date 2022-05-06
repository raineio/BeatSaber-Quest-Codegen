// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: TOPNodeTags
  class TOPNodeTags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::TOPNodeTags);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::TOPNodeTags*, "HoudiniEngineUnity", "TOPNodeTags");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x12
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.TOPNodeTags
  // [TokenAttribute] Offset: FFFFFFFF
  class TOPNodeTags : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean _show
    // Size: 0x1
    // Offset: 0x10
    bool show;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _autoload
    // Size: 0x1
    // Offset: 0x11
    bool autoload;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Boolean _show
    [[deprecated("Use field access instead!")]] bool& dyn__show();
    // Get instance field reference: public System.Boolean _autoload
    [[deprecated("Use field access instead!")]] bool& dyn__autoload();
    // public System.Void .ctor()
    // Offset: 0x1A1B81C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TOPNodeTags* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::TOPNodeTags::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TOPNodeTags*, creationType>()));
    }
  }; // HoudiniEngineUnity.TOPNodeTags
  #pragma pack(pop)
  static check_size<sizeof(TOPNodeTags), 17 + sizeof(bool)> __HoudiniEngineUnity_TOPNodeTagsSizeCheck;
  static_assert(sizeof(TOPNodeTags) == 0x12);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::TOPNodeTags::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
