// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightGroupSubsystem
#include "GlobalNamespace/LightGroupSubsystem.hpp"
// Including type: IEditTimeValidated
#include "GlobalNamespace/IEditTimeValidated.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightColorGroupParent
  class LightColorGroupParent;
  // Forward declaring type: LightWithIds
  class LightWithIds;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightColorGroup
  class LightColorGroup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightColorGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorGroup*, "", "LightColorGroup");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: LightColorGroup
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class LightColorGroup : public ::GlobalNamespace::LightGroupSubsystem/*, public ::GlobalNamespace::IEditTimeValidated*/ {
    public:
    // Nested type: ::GlobalNamespace::LightColorGroup::LightColorGroupControlType
    struct LightColorGroupControlType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: LightColorGroup/LightColorGroupControlType
    // [TokenAttribute] Offset: FFFFFFFF
    struct LightColorGroupControlType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: LightColorGroupControlType
      constexpr LightColorGroupControlType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public LightColorGroup/LightColorGroupControlType LightWithIdsFromHierarchy
      static constexpr const int LightWithIdsFromHierarchy = 0;
      // Get static field: static public LightColorGroup/LightColorGroupControlType LightWithIdsFromHierarchy
      static ::GlobalNamespace::LightColorGroup::LightColorGroupControlType _get_LightWithIdsFromHierarchy();
      // Set static field: static public LightColorGroup/LightColorGroupControlType LightWithIdsFromHierarchy
      static void _set_LightWithIdsFromHierarchy(::GlobalNamespace::LightColorGroup::LightColorGroupControlType value);
      // static field const value: static public LightColorGroup/LightColorGroupControlType LightWithIdsCollection
      static constexpr const int LightWithIdsCollection = 1;
      // Get static field: static public LightColorGroup/LightColorGroupControlType LightWithIdsCollection
      static ::GlobalNamespace::LightColorGroup::LightColorGroupControlType _get_LightWithIdsCollection();
      // Set static field: static public LightColorGroup/LightColorGroupControlType LightWithIdsCollection
      static void _set_LightWithIdsCollection(::GlobalNamespace::LightColorGroup::LightColorGroupControlType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // LightColorGroup/LightColorGroupControlType
    #pragma pack(pop)
    static check_size<sizeof(LightColorGroup::LightColorGroupControlType), 0 + sizeof(int)> __GlobalNamespace_LightColorGroup_LightColorGroupControlTypeSizeCheck;
    static_assert(sizeof(LightColorGroup::LightColorGroupControlType) == 0x4);
    public:
    // [TooltipAttribute] Offset: 0x111F7AC
    // private LightColorGroup/LightColorGroupControlType _lightColorGroupControlType
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::LightColorGroup::LightColorGroupControlType lightColorGroupControlType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightColorGroup::LightColorGroupControlType) == 0x4);
    // [HeaderAttribute] Offset: 0x111F7F8
    // private System.Boolean _disableAutomaticIdAssignment
    // Size: 0x1
    // Offset: 0x24
    bool disableAutomaticIdAssignment;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disableAutomaticIdAssignment and: lightColorGroupParents
    char __padding1[0x3] = {};
    // private System.Collections.Generic.List`1<LightColorGroupParent> _lightColorGroupParents
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupParent*>* lightColorGroupParents;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupParent*>*) == 0x8);
    // [HeaderAttribute] Offset: 0x111F854
    // [NullAllowed] Offset: 0x111F854
    // private LightWithIds _lightWithIds
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::LightWithIds* lightWithIds;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightWithIds*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IEditTimeValidated
    operator ::GlobalNamespace::IEditTimeValidated() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IEditTimeValidated*>(this);
    }
    // Creating interface conversion operator: i_IEditTimeValidated
    inline ::GlobalNamespace::IEditTimeValidated* i_IEditTimeValidated() noexcept {
      return reinterpret_cast<::GlobalNamespace::IEditTimeValidated*>(this);
    }
    // Get instance field reference: private LightColorGroup/LightColorGroupControlType _lightColorGroupControlType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightColorGroup::LightColorGroupControlType& dyn__lightColorGroupControlType();
    // Get instance field reference: private System.Boolean _disableAutomaticIdAssignment
    [[deprecated("Use field access instead!")]] bool& dyn__disableAutomaticIdAssignment();
    // Get instance field reference: private System.Collections.Generic.List`1<LightColorGroupParent> _lightColorGroupParents
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupParent*>*& dyn__lightColorGroupParents();
    // Get instance field reference: private LightWithIds _lightWithIds
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightWithIds*& dyn__lightWithIds();
    // public System.Void .ctor()
    // Offset: 0x151C664
    // Implemented from: LightGroupSubsystem
    // Base method: System.Void LightGroupSubsystem::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightColorGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightColorGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightColorGroup*, creationType>()));
    }
  }; // LightColorGroup
  #pragma pack(pop)
  static check_size<sizeof(LightColorGroup), 48 + sizeof(::GlobalNamespace::LightWithIds*)> __GlobalNamespace_LightColorGroupSizeCheck;
  static_assert(sizeof(LightColorGroup) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorGroup::LightColorGroupControlType, "", "LightColorGroup/LightColorGroupControlType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightColorGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
