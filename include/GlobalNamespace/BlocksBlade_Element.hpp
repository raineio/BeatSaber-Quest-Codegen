// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BlocksBlade
#include "GlobalNamespace/BlocksBlade.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::BlocksBlade::Element);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BlocksBlade::Element*, "", "BlocksBlade/Element");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BlocksBlade/Element
  // [TokenAttribute] Offset: FFFFFFFF
  class BlocksBlade::Element : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Int32 idx
    // Size: 0x4
    // Offset: 0x10
    int idx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single velocity
    // Size: 0x4
    // Offset: 0x14
    float velocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Int32 idx
    int& dyn_idx();
    // Get instance field reference: public System.Single velocity
    float& dyn_velocity();
    // public System.Void .ctor()
    // Offset: 0x1180850
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BlocksBlade::Element* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BlocksBlade::Element::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BlocksBlade::Element*, creationType>()));
    }
  }; // BlocksBlade/Element
  #pragma pack(pop)
  static check_size<sizeof(BlocksBlade::Element), 20 + sizeof(float)> __GlobalNamespace_BlocksBlade_ElementSizeCheck;
  static_assert(sizeof(BlocksBlade::Element) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BlocksBlade::Element::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
