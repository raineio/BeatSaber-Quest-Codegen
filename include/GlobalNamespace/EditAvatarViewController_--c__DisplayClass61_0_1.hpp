// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: EditAvatarViewController
#include "GlobalNamespace/EditAvatarViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAvatarPart
  class IAvatarPart;
  // Forward declaring type: AvatarPartCollection`1<T>
  template<typename T>
  class AvatarPartCollection_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: EditAvatarViewController/<>c__DisplayClass61_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  class EditAvatarViewController::$$c__DisplayClass61_0_1 : public ::Il2CppObject {
    public:
    // public System.Action`1<System.String> setIdAction
    // Size: 0x8
    // Offset: 0x0
    System::Action_1<::Il2CppString*>* setIdAction;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    // public AvatarPartCollection`1<T> partCollection
    // Size: 0x8
    // Offset: 0x0
    GlobalNamespace::AvatarPartCollection_1<T>* partCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPartCollection_1<T>*) == 0x8);
    // public EditAvatarViewController <>4__this
    // Size: 0x8
    // Offset: 0x0
    GlobalNamespace::EditAvatarViewController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EditAvatarViewController*) == 0x8);
    // public EditAvatarViewController/AvatarEditPart avatarEditPart
    // Size: 0x4
    // Offset: 0x0
    GlobalNamespace::EditAvatarViewController::AvatarEditPart avatarEditPart;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EditAvatarViewController::AvatarEditPart) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass61_0_1
    $$c__DisplayClass61_0_1(System::Action_1<::Il2CppString*>* setIdAction_ = {}, GlobalNamespace::AvatarPartCollection_1<T>* partCollection_ = {}, GlobalNamespace::EditAvatarViewController* $$4__this_ = {}, GlobalNamespace::EditAvatarViewController::AvatarEditPart avatarEditPart_ = {}) noexcept : setIdAction{setIdAction_}, partCollection{partCollection_}, $$4__this{$$4__this_}, avatarEditPart{avatarEditPart_} {}
    // Autogenerated instance field getter
    // Get instance field: public System.Action`1<System.String> setIdAction
    System::Action_1<::Il2CppString*>*& dyn_setIdAction() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EditAvatarViewController::$$c__DisplayClass61_0_1::dyn_setIdAction");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "setIdAction"))->offset;
      return *reinterpret_cast<System::Action_1<::Il2CppString*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public AvatarPartCollection`1<T> partCollection
    GlobalNamespace::AvatarPartCollection_1<T>*& dyn_partCollection() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EditAvatarViewController::$$c__DisplayClass61_0_1::dyn_partCollection");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "partCollection"))->offset;
      return *reinterpret_cast<GlobalNamespace::AvatarPartCollection_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public EditAvatarViewController <>4__this
    GlobalNamespace::EditAvatarViewController*& dyn_$$4__this() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EditAvatarViewController::$$c__DisplayClass61_0_1::dyn_$$4__this");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
      return *reinterpret_cast<GlobalNamespace::EditAvatarViewController**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public EditAvatarViewController/AvatarEditPart avatarEditPart
    GlobalNamespace::EditAvatarViewController::AvatarEditPart& dyn_avatarEditPart() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EditAvatarViewController::$$c__DisplayClass61_0_1::dyn_avatarEditPart");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "avatarEditPart"))->offset;
      return *reinterpret_cast<GlobalNamespace::EditAvatarViewController::AvatarEditPart*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Void <SetupValuePicker>b__0(System.Int32 idx)
    // Offset: 0xFFFFFFFF
    void $SetupValuePicker$b__0(int idx) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EditAvatarViewController::$$c__DisplayClass61_0_1::<SetupValuePicker>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<SetupValuePicker>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(idx)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, idx);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EditAvatarViewController::$$c__DisplayClass61_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EditAvatarViewController::$$c__DisplayClass61_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EditAvatarViewController::$$c__DisplayClass61_0_1<T>*, creationType>()));
    }
  }; // EditAvatarViewController/<>c__DisplayClass61_0`1
  // Could not write size check! Type: EditAvatarViewController/<>c__DisplayClass61_0`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::EditAvatarViewController::$$c__DisplayClass61_0_1, "", "EditAvatarViewController/<>c__DisplayClass61_0`1");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"