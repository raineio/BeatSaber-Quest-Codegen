// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SelectRegionViewController
#include "GlobalNamespace/SelectRegionViewController.hpp"
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
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SelectRegionViewController::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectRegionViewController::$$c*, "", "SelectRegionViewController/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SelectRegionViewController/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SelectRegionViewController::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly SelectRegionViewController/<>c <>9
    static ::GlobalNamespace::SelectRegionViewController::$$c* _get_$$9();
    // Set static field: static public readonly SelectRegionViewController/<>c <>9
    static void _set_$$9(::GlobalNamespace::SelectRegionViewController::$$c* value);
    // Get static field: static public System.Func`2<SelectRegionViewController/RegionToLocalizationKeyPair,System.String> <>9__8_1
    static ::System::Func_2<::GlobalNamespace::SelectRegionViewController::RegionToLocalizationKeyPair, ::StringW>* _get_$$9__8_1();
    // Set static field: static public System.Func`2<SelectRegionViewController/RegionToLocalizationKeyPair,System.String> <>9__8_1
    static void _set_$$9__8_1(::System::Func_2<::GlobalNamespace::SelectRegionViewController::RegionToLocalizationKeyPair, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x1419B90
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1419BF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectRegionViewController::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SelectRegionViewController::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectRegionViewController::$$c*, creationType>()));
    }
    // System.String <DidActivate>b__8_1(SelectRegionViewController/RegionToLocalizationKeyPair p)
    // Offset: 0x1419BFC
    ::StringW $DidActivate$b__8_1(::GlobalNamespace::SelectRegionViewController::RegionToLocalizationKeyPair p);
  }; // SelectRegionViewController/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SelectRegionViewController::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SelectRegionViewController::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectRegionViewController::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectRegionViewController::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SelectRegionViewController::$$c::$DidActivate$b__8_1
// Il2CppName: <DidActivate>b__8_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::SelectRegionViewController::$$c::*)(::GlobalNamespace::SelectRegionViewController::RegionToLocalizationKeyPair)>(&GlobalNamespace::SelectRegionViewController::$$c::$DidActivate$b__8_1)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("", "SelectRegionViewController/RegionToLocalizationKeyPair")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectRegionViewController::$$c*), "<DidActivate>b__8_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
