// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: ZenjectAllowDuringValidationAttribute
  class ZenjectAllowDuringValidationAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ZenjectAllowDuringValidationAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenjectAllowDuringValidationAttribute*, "Zenject", "ZenjectAllowDuringValidationAttribute");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ZenjectAllowDuringValidationAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 10873A0
  class ZenjectAllowDuringValidationAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x2ACFA54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenjectAllowDuringValidationAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ZenjectAllowDuringValidationAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenjectAllowDuringValidationAttribute*, creationType>()));
    }
  }; // Zenject.ZenjectAllowDuringValidationAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ZenjectAllowDuringValidationAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
