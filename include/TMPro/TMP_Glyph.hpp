// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.TMP_TextElement_Legacy
#include "TMPro/TMP_TextElement_Legacy.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Glyph
  class TMP_Glyph;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(TMPro::TMP_Glyph);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Glyph*, "TMPro", "TMP_Glyph");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_Glyph
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_Glyph : public TMPro::TMP_TextElement_Legacy {
    public:
    // static public TMPro.TMP_Glyph Clone(TMPro.TMP_Glyph source)
    // Offset: 0x124E108
    static TMPro::TMP_Glyph* Clone(TMPro::TMP_Glyph* source);
    // public System.Void .ctor()
    // Offset: 0x124E1BC
    // Implemented from: TMPro.TMP_TextElement_Legacy
    // Base method: System.Void TMP_TextElement_Legacy::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Glyph* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_Glyph::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Glyph*, creationType>()));
    }
  }; // TMPro.TMP_Glyph
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_Glyph::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TMP_Glyph* (*)(TMPro::TMP_Glyph*)>(&TMPro::TMP_Glyph::Clone)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Glyph")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Glyph*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Glyph::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
