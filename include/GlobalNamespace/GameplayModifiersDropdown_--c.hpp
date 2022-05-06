// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameplayModifiersDropdown
#include "GlobalNamespace/GameplayModifiersDropdown.hpp"
// Including type: GameplayModifierMask
#include "GlobalNamespace/GameplayModifierMask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameplayModifiersDropdown::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiersDropdown::$$c*, "", "GameplayModifiersDropdown/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: GameplayModifiersDropdown/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GameplayModifiersDropdown::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly GameplayModifiersDropdown/<>c <>9
    static ::GlobalNamespace::GameplayModifiersDropdown::$$c* _get_$$9();
    // Set static field: static public readonly GameplayModifiersDropdown/<>c <>9
    static void _set_$$9(::GlobalNamespace::GameplayModifiersDropdown::$$c* value);
    // Get static field: static public System.Func`2<System.Tuple`2<GameplayModifierMask,System.String>,System.String> <>9__8_0
    static ::System::Func_2<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*, ::StringW>* _get_$$9__8_0();
    // Set static field: static public System.Func`2<System.Tuple`2<GameplayModifierMask,System.String>,System.String> <>9__8_0
    static void _set_$$9__8_0(::System::Func_2<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x13F2ABC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x13F2B20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayModifiersDropdown::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameplayModifiersDropdown::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayModifiersDropdown::$$c*, creationType>()));
    }
    // System.String <Start>b__8_0(System.Tuple`2<GameplayModifierMask,System.String> x)
    // Offset: 0x13F2B28
    ::StringW $Start$b__8_0(::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>* x);
  }; // GameplayModifiersDropdown/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersDropdown::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::GameplayModifiersDropdown::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersDropdown::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersDropdown::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersDropdown::$$c::$Start$b__8_0
// Il2CppName: <Start>b__8_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GameplayModifiersDropdown::$$c::*)(::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*)>(&GlobalNamespace::GameplayModifiersDropdown::$$c::$Start$b__8_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Tuple`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "GameplayModifierMask"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersDropdown::$$c*), "<Start>b__8_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
