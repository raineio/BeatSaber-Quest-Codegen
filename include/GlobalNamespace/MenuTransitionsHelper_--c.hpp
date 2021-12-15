// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MenuTransitionsHelper
#include "GlobalNamespace/MenuTransitionsHelper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MenuTransitionsHelper::$$c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuTransitionsHelper::$$c*, "", "MenuTransitionsHelper/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MenuTransitionsHelper/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MenuTransitionsHelper::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly MenuTransitionsHelper/<>c <>9
    static GlobalNamespace::MenuTransitionsHelper::$$c* _get_$$9();
    // Set static field: static public readonly MenuTransitionsHelper/<>c <>9
    static void _set_$$9(GlobalNamespace::MenuTransitionsHelper::$$c* value);
    // Get static field: static public System.Action <>9__21_0
    static System::Action* _get_$$9__21_0();
    // Set static field: static public System.Action <>9__21_0
    static void _set_$$9__21_0(System::Action* value);
    // static private System.Void .cctor()
    // Offset: 0x115D184
    static void _cctor();
    // System.Void <StartBeatmapEditor>b__21_0()
    // Offset: 0x115D1F0
    void $StartBeatmapEditor$b__21_0();
    // public System.Void .ctor()
    // Offset: 0x115D1E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuTransitionsHelper::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MenuTransitionsHelper::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuTransitionsHelper::$$c*, creationType>()));
    }
  }; // MenuTransitionsHelper/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MenuTransitionsHelper::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::MenuTransitionsHelper::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuTransitionsHelper::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuTransitionsHelper::$$c::$StartBeatmapEditor$b__21_0
// Il2CppName: <StartBeatmapEditor>b__21_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::$$c::*)()>(&GlobalNamespace::MenuTransitionsHelper::$$c::$StartBeatmapEditor$b__21_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuTransitionsHelper::$$c*), "<StartBeatmapEditor>b__21_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuTransitionsHelper::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
