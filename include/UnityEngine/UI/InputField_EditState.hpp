// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.InputField
#include "UnityEngine/UI/InputField.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.InputField/UnityEngine.UI.EditState
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputField::EditState/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EditState
    constexpr EditState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UI.InputField/UnityEngine.UI.EditState Continue
    static constexpr const int Continue = 0;
    // Get static field: static public UnityEngine.UI.InputField/UnityEngine.UI.EditState Continue
    static UnityEngine::UI::InputField::EditState _get_Continue();
    // Set static field: static public UnityEngine.UI.InputField/UnityEngine.UI.EditState Continue
    static void _set_Continue(UnityEngine::UI::InputField::EditState value);
    // static field const value: static public UnityEngine.UI.InputField/UnityEngine.UI.EditState Finish
    static constexpr const int Finish = 1;
    // Get static field: static public UnityEngine.UI.InputField/UnityEngine.UI.EditState Finish
    static UnityEngine::UI::InputField::EditState _get_Finish();
    // Set static field: static public UnityEngine.UI.InputField/UnityEngine.UI.EditState Finish
    static void _set_Finish(UnityEngine::UI::InputField::EditState value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.UI.InputField/UnityEngine.UI.EditState
  #pragma pack(pop)
  static check_size<sizeof(InputField::EditState), 0 + sizeof(int)> __UnityEngine_UI_InputField_EditStateSizeCheck;
  static_assert(sizeof(InputField::EditState) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::InputField::EditState, "UnityEngine.UI", "InputField/EditState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
