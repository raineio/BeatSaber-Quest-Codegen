// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Globalization.Bootstring
#include "System/Globalization/Bootstring.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: Punycode
  class Punycode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Globalization::Punycode);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::Punycode*, "System.Globalization", "Punycode");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.Punycode
  // [TokenAttribute] Offset: FFFFFFFF
  class Punycode : public ::System::Globalization::Bootstring {
    public:
    // public System.Void .ctor()
    // Offset: 0x213FBF8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Punycode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Globalization::Punycode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Punycode*, creationType>()));
    }
  }; // System.Globalization.Punycode
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::Punycode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
