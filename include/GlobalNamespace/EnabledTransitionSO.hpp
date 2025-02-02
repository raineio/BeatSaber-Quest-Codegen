// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseTransitionSO
#include "GlobalNamespace/BaseTransitionSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnabledTransitionSO
  class EnabledTransitionSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnabledTransitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnabledTransitionSO*, "", "EnabledTransitionSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x26
  #pragma pack(push, 1)
  // Autogenerated type: EnabledTransitionSO
  // [TokenAttribute] Offset: FFFFFFFF
  class EnabledTransitionSO : public ::GlobalNamespace::BaseTransitionSO {
    public:
    public:
    // private System.Boolean _normalState
    // Size: 0x1
    // Offset: 0x20
    bool normalState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _highlightedState
    // Size: 0x1
    // Offset: 0x21
    bool highlightedState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _pressedState
    // Size: 0x1
    // Offset: 0x22
    bool pressedState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _disabledState
    // Size: 0x1
    // Offset: 0x23
    bool disabledState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _selectedState
    // Size: 0x1
    // Offset: 0x24
    bool selectedState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _selectedAndHighlightedState
    // Size: 0x1
    // Offset: 0x25
    bool selectedAndHighlightedState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Boolean _normalState
    [[deprecated("Use field access instead!")]] bool& dyn__normalState();
    // Get instance field reference: private System.Boolean _highlightedState
    [[deprecated("Use field access instead!")]] bool& dyn__highlightedState();
    // Get instance field reference: private System.Boolean _pressedState
    [[deprecated("Use field access instead!")]] bool& dyn__pressedState();
    // Get instance field reference: private System.Boolean _disabledState
    [[deprecated("Use field access instead!")]] bool& dyn__disabledState();
    // Get instance field reference: private System.Boolean _selectedState
    [[deprecated("Use field access instead!")]] bool& dyn__selectedState();
    // Get instance field reference: private System.Boolean _selectedAndHighlightedState
    [[deprecated("Use field access instead!")]] bool& dyn__selectedAndHighlightedState();
    // public System.Boolean get_normalState()
    // Offset: 0x13925D0
    bool get_normalState();
    // public System.Boolean get_highlightedState()
    // Offset: 0x13925D8
    bool get_highlightedState();
    // public System.Boolean get_pressedState()
    // Offset: 0x13925E0
    bool get_pressedState();
    // public System.Boolean get_disabledState()
    // Offset: 0x13925E8
    bool get_disabledState();
    // public System.Boolean get_selectedState()
    // Offset: 0x13925F0
    bool get_selectedState();
    // public System.Boolean get_selectedAndHighlightedState()
    // Offset: 0x13925F8
    bool get_selectedAndHighlightedState();
    // public System.Void .ctor()
    // Offset: 0x1392600
    // Implemented from: BaseTransitionSO
    // Base method: System.Void BaseTransitionSO::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnabledTransitionSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnabledTransitionSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnabledTransitionSO*, creationType>()));
    }
  }; // EnabledTransitionSO
  #pragma pack(pop)
  static check_size<sizeof(EnabledTransitionSO), 37 + sizeof(bool)> __GlobalNamespace_EnabledTransitionSOSizeCheck;
  static_assert(sizeof(EnabledTransitionSO) == 0x26);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnabledTransitionSO::get_normalState
// Il2CppName: get_normalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EnabledTransitionSO::*)()>(&GlobalNamespace::EnabledTransitionSO::get_normalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledTransitionSO*), "get_normalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledTransitionSO::get_highlightedState
// Il2CppName: get_highlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EnabledTransitionSO::*)()>(&GlobalNamespace::EnabledTransitionSO::get_highlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledTransitionSO*), "get_highlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledTransitionSO::get_pressedState
// Il2CppName: get_pressedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EnabledTransitionSO::*)()>(&GlobalNamespace::EnabledTransitionSO::get_pressedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledTransitionSO*), "get_pressedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledTransitionSO::get_disabledState
// Il2CppName: get_disabledState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EnabledTransitionSO::*)()>(&GlobalNamespace::EnabledTransitionSO::get_disabledState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledTransitionSO*), "get_disabledState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledTransitionSO::get_selectedState
// Il2CppName: get_selectedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EnabledTransitionSO::*)()>(&GlobalNamespace::EnabledTransitionSO::get_selectedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledTransitionSO*), "get_selectedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledTransitionSO::get_selectedAndHighlightedState
// Il2CppName: get_selectedAndHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EnabledTransitionSO::*)()>(&GlobalNamespace::EnabledTransitionSO::get_selectedAndHighlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledTransitionSO*), "get_selectedAndHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledTransitionSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
