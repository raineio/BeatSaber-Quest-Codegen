// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ListSettingsController
#include "GlobalNamespace/ListSettingsController.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FloatSO
  class FloatSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FormattedFloatListSettingsValueController
  class FormattedFloatListSettingsValueController;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::FormattedFloatListSettingsValueController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FormattedFloatListSettingsValueController*, "", "FormattedFloatListSettingsValueController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: FormattedFloatListSettingsValueController
  // [TokenAttribute] Offset: FFFFFFFF
  class FormattedFloatListSettingsValueController : public GlobalNamespace::ListSettingsController {
    public:
    // Nested type: GlobalNamespace::FormattedFloatListSettingsValueController::ValueType
    struct ValueType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: FormattedFloatListSettingsValueController/ValueType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ValueType/*, public System::Enum*/ {
      public:
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      protected:
      #endif
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ValueType
      constexpr ValueType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public FormattedFloatListSettingsValueController/ValueType Normal
      static constexpr const int Normal = 0;
      // Get static field: static public FormattedFloatListSettingsValueController/ValueType Normal
      static GlobalNamespace::FormattedFloatListSettingsValueController::ValueType _get_Normal();
      // Set static field: static public FormattedFloatListSettingsValueController/ValueType Normal
      static void _set_Normal(GlobalNamespace::FormattedFloatListSettingsValueController::ValueType value);
      // static field const value: static public FormattedFloatListSettingsValueController/ValueType Normalized
      static constexpr const int Normalized = 1;
      // Get static field: static public FormattedFloatListSettingsValueController/ValueType Normalized
      static GlobalNamespace::FormattedFloatListSettingsValueController::ValueType _get_Normalized();
      // Set static field: static public FormattedFloatListSettingsValueController/ValueType Normalized
      static void _set_Normalized(GlobalNamespace::FormattedFloatListSettingsValueController::ValueType value);
      // static field const value: static public FormattedFloatListSettingsValueController/ValueType InvertedNormalized
      static constexpr const int InvertedNormalized = 2;
      // Get static field: static public FormattedFloatListSettingsValueController/ValueType InvertedNormalized
      static GlobalNamespace::FormattedFloatListSettingsValueController::ValueType _get_InvertedNormalized();
      // Set static field: static public FormattedFloatListSettingsValueController/ValueType InvertedNormalized
      static void _set_InvertedNormalized(GlobalNamespace::FormattedFloatListSettingsValueController::ValueType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // FormattedFloatListSettingsValueController/ValueType
    #pragma pack(pop)
    static check_size<sizeof(FormattedFloatListSettingsValueController::ValueType), 0 + sizeof(int)> __GlobalNamespace_FormattedFloatListSettingsValueController_ValueTypeSizeCheck;
    static_assert(sizeof(FormattedFloatListSettingsValueController::ValueType) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private FloatSO _settingsValue
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::FloatSO* settingsValue;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // private System.Single[] _values
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<float> values;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // private System.String _formattingString
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* formattingString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private FormattedFloatListSettingsValueController/ValueType valueType
    // Size: 0x4
    // Offset: 0x40
    GlobalNamespace::FormattedFloatListSettingsValueController::ValueType valueType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FormattedFloatListSettingsValueController::ValueType) == 0x4);
    // private System.Single _min
    // Size: 0x4
    // Offset: 0x44
    float min;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _max
    // Size: 0x4
    // Offset: 0x48
    float max;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private FloatSO _settingsValue
    GlobalNamespace::FloatSO*& dyn__settingsValue();
    // Get instance field reference: private System.Single[] _values
    ::ArrayW<float>& dyn__values();
    // Get instance field reference: private System.String _formattingString
    ::Il2CppString*& dyn__formattingString();
    // Get instance field reference: private FormattedFloatListSettingsValueController/ValueType valueType
    GlobalNamespace::FormattedFloatListSettingsValueController::ValueType& dyn_valueType();
    // Get instance field reference: private System.Single _min
    float& dyn__min();
    // Get instance field reference: private System.Single _max
    float& dyn__max();
    // public System.Void .ctor()
    // Offset: 0x11A55EC
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::.ctor()
    // Base method: System.Void IncDecSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FormattedFloatListSettingsValueController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FormattedFloatListSettingsValueController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FormattedFloatListSettingsValueController*, creationType>()));
    }
    // protected override System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0x11A534C
    // Implemented from: ListSettingsController
    // Base method: System.Boolean ListSettingsController::GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    bool GetInitValues(ByRef<int> idx, ByRef<int> numberOfElements);
    // protected override System.Void ApplyValue(System.Int32 idx)
    // Offset: 0x11A5474
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::ApplyValue(System.Int32 idx)
    void ApplyValue(int idx);
    // protected override System.String TextForValue(System.Int32 idx)
    // Offset: 0x11A5500
    // Implemented from: ListSettingsController
    // Base method: System.String ListSettingsController::TextForValue(System.Int32 idx)
    ::Il2CppString* TextForValue(int idx);
  }; // FormattedFloatListSettingsValueController
  #pragma pack(pop)
  static check_size<sizeof(FormattedFloatListSettingsValueController), 72 + sizeof(float)> __GlobalNamespace_FormattedFloatListSettingsValueControllerSizeCheck;
  static_assert(sizeof(FormattedFloatListSettingsValueController) == 0x4C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FormattedFloatListSettingsValueController::ValueType, "", "FormattedFloatListSettingsValueController/ValueType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FormattedFloatListSettingsValueController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FormattedFloatListSettingsValueController::GetInitValues
// Il2CppName: GetInitValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::FormattedFloatListSettingsValueController::*)(ByRef<int>, ByRef<int>)>(&GlobalNamespace::FormattedFloatListSettingsValueController::GetInitValues)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* numberOfElements = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FormattedFloatListSettingsValueController*), "GetInitValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, numberOfElements});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FormattedFloatListSettingsValueController::ApplyValue
// Il2CppName: ApplyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FormattedFloatListSettingsValueController::*)(int)>(&GlobalNamespace::FormattedFloatListSettingsValueController::ApplyValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FormattedFloatListSettingsValueController*), "ApplyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FormattedFloatListSettingsValueController::TextForValue
// Il2CppName: TextForValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::FormattedFloatListSettingsValueController::*)(int)>(&GlobalNamespace::FormattedFloatListSettingsValueController::TextForValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FormattedFloatListSettingsValueController*), "TextForValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
