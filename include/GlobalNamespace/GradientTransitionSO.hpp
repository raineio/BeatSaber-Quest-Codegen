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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GradientTransitionSO
  class GradientTransitionSO;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::GradientTransitionSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GradientTransitionSO*, "", "GradientTransitionSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: GradientTransitionSO
  // [TokenAttribute] Offset: FFFFFFFF
  class GradientTransitionSO : public GlobalNamespace::BaseTransitionSO {
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
    // private ColorSO _normalColor1
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ColorSO* normalColor1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _normalColor2
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ColorSO* normalColor2;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _highlightColor1
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ColorSO* highlightColor1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _highlightColor2
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ColorSO* highlightColor2;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _pressedColor1
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::ColorSO* pressedColor1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _pressedColor2
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::ColorSO* pressedColor2;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _disabledColor1
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::ColorSO* disabledColor1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _disabledColor2
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::ColorSO* disabledColor2;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _selectedColor1
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::ColorSO* selectedColor1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _selectedColor2
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::ColorSO* selectedColor2;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _selectedAndHighlightedColor1
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::ColorSO* selectedAndHighlightedColor1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _selectedAndHighlightedColor2
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::ColorSO* selectedAndHighlightedColor2;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    public:
    // Get instance field reference: private ColorSO _normalColor1
    GlobalNamespace::ColorSO*& dyn__normalColor1();
    // Get instance field reference: private ColorSO _normalColor2
    GlobalNamespace::ColorSO*& dyn__normalColor2();
    // Get instance field reference: private ColorSO _highlightColor1
    GlobalNamespace::ColorSO*& dyn__highlightColor1();
    // Get instance field reference: private ColorSO _highlightColor2
    GlobalNamespace::ColorSO*& dyn__highlightColor2();
    // Get instance field reference: private ColorSO _pressedColor1
    GlobalNamespace::ColorSO*& dyn__pressedColor1();
    // Get instance field reference: private ColorSO _pressedColor2
    GlobalNamespace::ColorSO*& dyn__pressedColor2();
    // Get instance field reference: private ColorSO _disabledColor1
    GlobalNamespace::ColorSO*& dyn__disabledColor1();
    // Get instance field reference: private ColorSO _disabledColor2
    GlobalNamespace::ColorSO*& dyn__disabledColor2();
    // Get instance field reference: private ColorSO _selectedColor1
    GlobalNamespace::ColorSO*& dyn__selectedColor1();
    // Get instance field reference: private ColorSO _selectedColor2
    GlobalNamespace::ColorSO*& dyn__selectedColor2();
    // Get instance field reference: private ColorSO _selectedAndHighlightedColor1
    GlobalNamespace::ColorSO*& dyn__selectedAndHighlightedColor1();
    // Get instance field reference: private ColorSO _selectedAndHighlightedColor2
    GlobalNamespace::ColorSO*& dyn__selectedAndHighlightedColor2();
    // public UnityEngine.Color get_normalColor1()
    // Offset: 0x1198BAC
    UnityEngine::Color get_normalColor1();
    // public UnityEngine.Color get_normalColor2()
    // Offset: 0x1198BB8
    UnityEngine::Color get_normalColor2();
    // public UnityEngine.Color get_highlightColor1()
    // Offset: 0x1198E28
    UnityEngine::Color get_highlightColor1();
    // public UnityEngine.Color get_highlightColor2()
    // Offset: 0x1198E34
    UnityEngine::Color get_highlightColor2();
    // public UnityEngine.Color get_pressedColor1()
    // Offset: 0x1198ECC
    UnityEngine::Color get_pressedColor1();
    // public UnityEngine.Color get_pressedColor2()
    // Offset: 0x1198ED8
    UnityEngine::Color get_pressedColor2();
    // public UnityEngine.Color get_disabledColor1()
    // Offset: 0x1198F70
    UnityEngine::Color get_disabledColor1();
    // public UnityEngine.Color get_disabledColor2()
    // Offset: 0x1198F7C
    UnityEngine::Color get_disabledColor2();
    // public UnityEngine.Color get_selectedColor1()
    // Offset: 0x1199014
    UnityEngine::Color get_selectedColor1();
    // public UnityEngine.Color get_selectedColor2()
    // Offset: 0x1199020
    UnityEngine::Color get_selectedColor2();
    // public UnityEngine.Color get_selectedAndHighlightedColor1()
    // Offset: 0x11990B8
    UnityEngine::Color get_selectedAndHighlightedColor1();
    // public UnityEngine.Color get_selectedAndHighlightedColor2()
    // Offset: 0x11990C4
    UnityEngine::Color get_selectedAndHighlightedColor2();
    // public System.Void .ctor()
    // Offset: 0x1199800
    // Implemented from: BaseTransitionSO
    // Base method: System.Void BaseTransitionSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GradientTransitionSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GradientTransitionSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GradientTransitionSO*, creationType>()));
    }
  }; // GradientTransitionSO
  #pragma pack(pop)
  static check_size<sizeof(GradientTransitionSO), 120 + sizeof(GlobalNamespace::ColorSO*)> __GlobalNamespace_GradientTransitionSOSizeCheck;
  static_assert(sizeof(GradientTransitionSO) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GradientTransitionSO::get_normalColor1
// Il2CppName: get_normalColor1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::GradientTransitionSO::*)()>(&GlobalNamespace::GradientTransitionSO::get_normalColor1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientTransitionSO*), "get_normalColor1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientTransitionSO::get_normalColor2
// Il2CppName: get_normalColor2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::GradientTransitionSO::*)()>(&GlobalNamespace::GradientTransitionSO::get_normalColor2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientTransitionSO*), "get_normalColor2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientTransitionSO::get_highlightColor1
// Il2CppName: get_highlightColor1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::GradientTransitionSO::*)()>(&GlobalNamespace::GradientTransitionSO::get_highlightColor1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientTransitionSO*), "get_highlightColor1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientTransitionSO::get_highlightColor2
// Il2CppName: get_highlightColor2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::GradientTransitionSO::*)()>(&GlobalNamespace::GradientTransitionSO::get_highlightColor2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientTransitionSO*), "get_highlightColor2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientTransitionSO::get_pressedColor1
// Il2CppName: get_pressedColor1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::GradientTransitionSO::*)()>(&GlobalNamespace::GradientTransitionSO::get_pressedColor1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientTransitionSO*), "get_pressedColor1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientTransitionSO::get_pressedColor2
// Il2CppName: get_pressedColor2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::GradientTransitionSO::*)()>(&GlobalNamespace::GradientTransitionSO::get_pressedColor2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientTransitionSO*), "get_pressedColor2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientTransitionSO::get_disabledColor1
// Il2CppName: get_disabledColor1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::GradientTransitionSO::*)()>(&GlobalNamespace::GradientTransitionSO::get_disabledColor1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientTransitionSO*), "get_disabledColor1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientTransitionSO::get_disabledColor2
// Il2CppName: get_disabledColor2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::GradientTransitionSO::*)()>(&GlobalNamespace::GradientTransitionSO::get_disabledColor2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientTransitionSO*), "get_disabledColor2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientTransitionSO::get_selectedColor1
// Il2CppName: get_selectedColor1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::GradientTransitionSO::*)()>(&GlobalNamespace::GradientTransitionSO::get_selectedColor1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientTransitionSO*), "get_selectedColor1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientTransitionSO::get_selectedColor2
// Il2CppName: get_selectedColor2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::GradientTransitionSO::*)()>(&GlobalNamespace::GradientTransitionSO::get_selectedColor2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientTransitionSO*), "get_selectedColor2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientTransitionSO::get_selectedAndHighlightedColor1
// Il2CppName: get_selectedAndHighlightedColor1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::GradientTransitionSO::*)()>(&GlobalNamespace::GradientTransitionSO::get_selectedAndHighlightedColor1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientTransitionSO*), "get_selectedAndHighlightedColor1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientTransitionSO::get_selectedAndHighlightedColor2
// Il2CppName: get_selectedAndHighlightedColor2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::GradientTransitionSO::*)()>(&GlobalNamespace::GradientTransitionSO::get_selectedAndHighlightedColor2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientTransitionSO*), "get_selectedAndHighlightedColor2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientTransitionSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
