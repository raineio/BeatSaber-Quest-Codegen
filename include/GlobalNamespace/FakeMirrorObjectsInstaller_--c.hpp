// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: FakeMirrorObjectsInstaller
#include "GlobalNamespace/FakeMirrorObjectsInstaller.hpp"
// Including type: Zenject.BindingId
#include "Zenject/BindingId.hpp"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FakeMirrorObjectsInstaller::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FakeMirrorObjectsInstaller::$$c*, "", "FakeMirrorObjectsInstaller/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: FakeMirrorObjectsInstaller/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FakeMirrorObjectsInstaller::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly FakeMirrorObjectsInstaller/<>c <>9
    static ::GlobalNamespace::FakeMirrorObjectsInstaller::$$c* _get_$$9();
    // Set static field: static public readonly FakeMirrorObjectsInstaller/<>c <>9
    static void _set_$$9(::GlobalNamespace::FakeMirrorObjectsInstaller::$$c* value);
    // Get static field: static public System.Func`2<Zenject.BindingId,System.Boolean> <>9__11_0
    static ::System::Func_2<::Zenject::BindingId, bool>* _get_$$9__11_0();
    // Set static field: static public System.Func`2<Zenject.BindingId,System.Boolean> <>9__11_0
    static void _set_$$9__11_0(::System::Func_2<::Zenject::BindingId, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x139B504
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x139B568
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FakeMirrorObjectsInstaller::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FakeMirrorObjectsInstaller::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FakeMirrorObjectsInstaller::$$c*, creationType>()));
    }
    // System.Boolean <InstallBindings>b__11_0(Zenject.BindingId t)
    // Offset: 0x139B570
    bool $InstallBindings$b__11_0(::Zenject::BindingId t);
  }; // FakeMirrorObjectsInstaller/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FakeMirrorObjectsInstaller::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::FakeMirrorObjectsInstaller::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FakeMirrorObjectsInstaller::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FakeMirrorObjectsInstaller::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FakeMirrorObjectsInstaller::$$c::$InstallBindings$b__11_0
// Il2CppName: <InstallBindings>b__11_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::FakeMirrorObjectsInstaller::$$c::*)(::Zenject::BindingId)>(&GlobalNamespace::FakeMirrorObjectsInstaller::$$c::$InstallBindings$b__11_0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("Zenject", "BindingId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FakeMirrorObjectsInstaller::$$c*), "<InstallBindings>b__11_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
