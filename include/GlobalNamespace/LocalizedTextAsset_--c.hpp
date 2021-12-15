// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LocalizedTextAsset
#include "GlobalNamespace/LocalizedTextAsset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::LocalizedTextAsset::$$c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalizedTextAsset::$$c*, "", "LocalizedTextAsset/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LocalizedTextAsset/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LocalizedTextAsset::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly LocalizedTextAsset/<>c <>9
    static GlobalNamespace::LocalizedTextAsset::$$c* _get_$$9();
    // Set static field: static public readonly LocalizedTextAsset/<>c <>9
    static void _set_$$9(GlobalNamespace::LocalizedTextAsset::$$c* value);
    // Get static field: static public System.Func`2<LocalizedTextAsset/TextInfo,System.Boolean> <>9__6_0
    static System::Func_2<GlobalNamespace::LocalizedTextAsset::TextInfo*, bool>* _get_$$9__6_0();
    // Set static field: static public System.Func`2<LocalizedTextAsset/TextInfo,System.Boolean> <>9__6_0
    static void _set_$$9__6_0(System::Func_2<GlobalNamespace::LocalizedTextAsset::TextInfo*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x135DEFC
    static void _cctor();
    // System.Boolean <get_localizedText>b__6_0(LocalizedTextAsset/TextInfo t)
    // Offset: 0x135DF68
    bool $get_localizedText$b__6_0(GlobalNamespace::LocalizedTextAsset::TextInfo* t);
    // public System.Void .ctor()
    // Offset: 0x135DF60
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizedTextAsset::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalizedTextAsset::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizedTextAsset::$$c*, creationType>()));
    }
  }; // LocalizedTextAsset/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocalizedTextAsset::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::LocalizedTextAsset::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalizedTextAsset::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalizedTextAsset::$$c::$get_localizedText$b__6_0
// Il2CppName: <get_localizedText>b__6_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LocalizedTextAsset::$$c::*)(GlobalNamespace::LocalizedTextAsset::TextInfo*)>(&GlobalNamespace::LocalizedTextAsset::$$c::$get_localizedText$b__6_0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("", "LocalizedTextAsset/TextInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalizedTextAsset::$$c*), "<get_localizedText>b__6_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalizedTextAsset::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
