// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: EnterPlayerGuestNameViewController
#include "GlobalNamespace/EnterPlayerGuestNameViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_1*, "", "EnterPlayerGuestNameViewController/<>c__DisplayClass10_1");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: EnterPlayerGuestNameViewController/<>c__DisplayClass10_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class EnterPlayerGuestNameViewController::$$c__DisplayClass10_1 : public ::Il2CppObject {
    public:
    public:
    // public System.String guestPlayerName
    // Size: 0x8
    // Offset: 0x10
    ::StringW guestPlayerName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public EnterPlayerGuestNameViewController/<>c__DisplayClass10_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_0*) == 0x8);
    public:
    // Get instance field reference: public System.String guestPlayerName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_guestPlayerName();
    // Get instance field reference: public EnterPlayerGuestNameViewController/<>c__DisplayClass10_0 CS$<>8__locals1
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_0*& dyn_CS$$$8__locals1();
    // public System.Void .ctor()
    // Offset: 0x1393348
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnterPlayerGuestNameViewController::$$c__DisplayClass10_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnterPlayerGuestNameViewController::$$c__DisplayClass10_1*, creationType>()));
    }
    // System.Void <DidActivate>b__1()
    // Offset: 0x1393350
    void $DidActivate$b__1();
  }; // EnterPlayerGuestNameViewController/<>c__DisplayClass10_1
  #pragma pack(pop)
  static check_size<sizeof(EnterPlayerGuestNameViewController::$$c__DisplayClass10_1), 24 + sizeof(::GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_0*)> __GlobalNamespace_EnterPlayerGuestNameViewController_$$c__DisplayClass10_1SizeCheck;
  static_assert(sizeof(EnterPlayerGuestNameViewController::$$c__DisplayClass10_1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_1::$DidActivate$b__1
// Il2CppName: <DidActivate>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_1::*)()>(&GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_1::$DidActivate$b__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_1*), "<DidActivate>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
