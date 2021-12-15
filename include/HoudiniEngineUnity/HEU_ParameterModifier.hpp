// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Skipping declaration: ModifierAction because it is already included!
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_ParameterModifier
  class HEU_ParameterModifier;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HoudiniEngineUnity::HEU_ParameterModifier);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_ParameterModifier*, "HoudiniEngineUnity", "HEU_ParameterModifier");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_ParameterModifier
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_ParameterModifier : public ::Il2CppObject/*, public HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_ParameterModifier*>*/ {
    public:
    // Nested type: HoudiniEngineUnity::HEU_ParameterModifier::ModifierAction
    struct ModifierAction;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HoudiniEngineUnity.HEU_ParameterModifier/HoudiniEngineUnity.ModifierAction
    // [TokenAttribute] Offset: FFFFFFFF
    struct ModifierAction/*, public System::Enum*/ {
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
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ModifierAction
      constexpr ModifierAction(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HoudiniEngineUnity.HEU_ParameterModifier/HoudiniEngineUnity.ModifierAction MULTIPARM_INSERT
      static constexpr const int MULTIPARM_INSERT = 0;
      // Get static field: static public HoudiniEngineUnity.HEU_ParameterModifier/HoudiniEngineUnity.ModifierAction MULTIPARM_INSERT
      static HoudiniEngineUnity::HEU_ParameterModifier::ModifierAction _get_MULTIPARM_INSERT();
      // Set static field: static public HoudiniEngineUnity.HEU_ParameterModifier/HoudiniEngineUnity.ModifierAction MULTIPARM_INSERT
      static void _set_MULTIPARM_INSERT(HoudiniEngineUnity::HEU_ParameterModifier::ModifierAction value);
      // static field const value: static public HoudiniEngineUnity.HEU_ParameterModifier/HoudiniEngineUnity.ModifierAction MULTIPARM_REMOVE
      static constexpr const int MULTIPARM_REMOVE = 1;
      // Get static field: static public HoudiniEngineUnity.HEU_ParameterModifier/HoudiniEngineUnity.ModifierAction MULTIPARM_REMOVE
      static HoudiniEngineUnity::HEU_ParameterModifier::ModifierAction _get_MULTIPARM_REMOVE();
      // Set static field: static public HoudiniEngineUnity.HEU_ParameterModifier/HoudiniEngineUnity.ModifierAction MULTIPARM_REMOVE
      static void _set_MULTIPARM_REMOVE(HoudiniEngineUnity::HEU_ParameterModifier::ModifierAction value);
      // static field const value: static public HoudiniEngineUnity.HEU_ParameterModifier/HoudiniEngineUnity.ModifierAction MULTIPARM_CLEAR
      static constexpr const int MULTIPARM_CLEAR = 2;
      // Get static field: static public HoudiniEngineUnity.HEU_ParameterModifier/HoudiniEngineUnity.ModifierAction MULTIPARM_CLEAR
      static HoudiniEngineUnity::HEU_ParameterModifier::ModifierAction _get_MULTIPARM_CLEAR();
      // Set static field: static public HoudiniEngineUnity.HEU_ParameterModifier/HoudiniEngineUnity.ModifierAction MULTIPARM_CLEAR
      static void _set_MULTIPARM_CLEAR(HoudiniEngineUnity::HEU_ParameterModifier::ModifierAction value);
      // static field const value: static public HoudiniEngineUnity.HEU_ParameterModifier/HoudiniEngineUnity.ModifierAction SET_FLOAT
      static constexpr const int SET_FLOAT = 3;
      // Get static field: static public HoudiniEngineUnity.HEU_ParameterModifier/HoudiniEngineUnity.ModifierAction SET_FLOAT
      static HoudiniEngineUnity::HEU_ParameterModifier::ModifierAction _get_SET_FLOAT();
      // Set static field: static public HoudiniEngineUnity.HEU_ParameterModifier/HoudiniEngineUnity.ModifierAction SET_FLOAT
      static void _set_SET_FLOAT(HoudiniEngineUnity::HEU_ParameterModifier::ModifierAction value);
      // static field const value: static public HoudiniEngineUnity.HEU_ParameterModifier/HoudiniEngineUnity.ModifierAction SET_INT
      static constexpr const int SET_INT = 4;
      // Get static field: static public HoudiniEngineUnity.HEU_ParameterModifier/HoudiniEngineUnity.ModifierAction SET_INT
      static HoudiniEngineUnity::HEU_ParameterModifier::ModifierAction _get_SET_INT();
      // Set static field: static public HoudiniEngineUnity.HEU_ParameterModifier/HoudiniEngineUnity.ModifierAction SET_INT
      static void _set_SET_INT(HoudiniEngineUnity::HEU_ParameterModifier::ModifierAction value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // HoudiniEngineUnity.HEU_ParameterModifier/HoudiniEngineUnity.ModifierAction
    #pragma pack(pop)
    static check_size<sizeof(HEU_ParameterModifier::ModifierAction), 0 + sizeof(int)> __HoudiniEngineUnity_HEU_ParameterModifier_ModifierActionSizeCheck;
    static_assert(sizeof(HEU_ParameterModifier::ModifierAction) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Int32 _parameterIndex
    // Size: 0x4
    // Offset: 0x10
    int parameterIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public HoudiniEngineUnity.HEU_ParameterModifier/HoudiniEngineUnity.ModifierAction _action
    // Size: 0x4
    // Offset: 0x14
    HoudiniEngineUnity::HEU_ParameterModifier::ModifierAction action;
    // Field size check
    static_assert(sizeof(HoudiniEngineUnity::HEU_ParameterModifier::ModifierAction) == 0x4);
    // public System.Int32 _instanceIndex
    // Size: 0x4
    // Offset: 0x18
    int instanceIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 _modifierValue
    // Size: 0x4
    // Offset: 0x1C
    int modifierValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single _floatValue
    // Size: 0x4
    // Offset: 0x20
    float floatValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 _intValue
    // Size: 0x4
    // Offset: 0x24
    int intValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_ParameterModifier*>
    operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_ParameterModifier*>() noexcept {
      return *reinterpret_cast<HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_ParameterModifier*>*>(this);
    }
    // Get instance field reference: public System.Int32 _parameterIndex
    int& dyn__parameterIndex();
    // Get instance field reference: public HoudiniEngineUnity.HEU_ParameterModifier/HoudiniEngineUnity.ModifierAction _action
    HoudiniEngineUnity::HEU_ParameterModifier::ModifierAction& dyn__action();
    // Get instance field reference: public System.Int32 _instanceIndex
    int& dyn__instanceIndex();
    // Get instance field reference: public System.Int32 _modifierValue
    int& dyn__modifierValue();
    // Get instance field reference: public System.Single _floatValue
    float& dyn__floatValue();
    // Get instance field reference: public System.Int32 _intValue
    int& dyn__intValue();
    // static public HoudiniEngineUnity.HEU_ParameterModifier GetNewModifier(HoudiniEngineUnity.HEU_ParameterModifier/HoudiniEngineUnity.ModifierAction action, System.Int32 parameterIndex, System.Int32 instanceIndex, System.Int32 modifierValue)
    // Offset: 0x18180E4
    static HoudiniEngineUnity::HEU_ParameterModifier* GetNewModifier(HoudiniEngineUnity::HEU_ParameterModifier::ModifierAction action, int parameterIndex, int instanceIndex, int modifierValue);
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.HEU_ParameterModifier other)
    // Offset: 0x1818178
    bool IsEquivalentTo(HoudiniEngineUnity::HEU_ParameterModifier* other);
    // public System.Void .ctor()
    // Offset: 0x1818170
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_ParameterModifier* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_ParameterModifier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_ParameterModifier*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_ParameterModifier
  #pragma pack(pop)
  static check_size<sizeof(HEU_ParameterModifier), 36 + sizeof(int)> __HoudiniEngineUnity_HEU_ParameterModifierSizeCheck;
  static_assert(sizeof(HEU_ParameterModifier) == 0x28);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_ParameterModifier::ModifierAction, "HoudiniEngineUnity", "HEU_ParameterModifier/ModifierAction");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterModifier::GetNewModifier
// Il2CppName: GetNewModifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_ParameterModifier* (*)(HoudiniEngineUnity::HEU_ParameterModifier::ModifierAction, int, int, int)>(&HoudiniEngineUnity::HEU_ParameterModifier::GetNewModifier)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_ParameterModifier/ModifierAction")->byval_arg;
    static auto* parameterIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* instanceIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* modifierValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterModifier*), "GetNewModifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, parameterIndex, instanceIndex, modifierValue});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterModifier::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_ParameterModifier::*)(HoudiniEngineUnity::HEU_ParameterModifier*)>(&HoudiniEngineUnity::HEU_ParameterModifier::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_ParameterModifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterModifier*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterModifier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
