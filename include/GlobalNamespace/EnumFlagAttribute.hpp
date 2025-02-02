// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnumFlagAttribute
  class EnumFlagAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnumFlagAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnumFlagAttribute*, "", "EnumFlagAttribute");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: EnumFlagAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class EnumFlagAttribute : public ::UnityEngine::PropertyAttribute {
    public:
    public:
    // public System.String enumName
    // Size: 0x8
    // Offset: 0x10
    ::StringW enumName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return enumName;
    }
    // Get instance field reference: public System.String enumName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_enumName();
    // public System.Void .ctor()
    // Offset: 0x161FA84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumFlagAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnumFlagAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumFlagAttribute*, creationType>()));
    }
    // public System.Void .ctor(System.String name)
    // Offset: 0x161FA8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumFlagAttribute* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnumFlagAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumFlagAttribute*, creationType>(name)));
    }
  }; // EnumFlagAttribute
  #pragma pack(pop)
  static check_size<sizeof(EnumFlagAttribute), 16 + sizeof(::StringW)> __GlobalNamespace_EnumFlagAttributeSizeCheck;
  static_assert(sizeof(EnumFlagAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnumFlagAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EnumFlagAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
