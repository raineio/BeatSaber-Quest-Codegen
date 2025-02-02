// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightGroupSubsystem
#include "GlobalNamespace/LightGroupSubsystem.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: MonoBehaviour because it is already included!
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightTransformGroup`3<TX, TY, TZ>
  template<typename TX, typename TY, typename TZ>
  class LightTransformGroup_3;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::LightTransformGroup_3, "", "LightTransformGroup`3");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: LightTransformGroup`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TX, typename TY, typename TZ>
  class LightTransformGroup_3 : public ::GlobalNamespace::LightGroupSubsystem {
    public:
    public:
    // [SpaceAttribute] Offset: 0x111FCC8
    // private System.Boolean _mirrorX
    // Size: 0x1
    // Offset: 0x0
    bool mirrorX;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _mirrorY
    // Size: 0x1
    // Offset: 0x0
    bool mirrorY;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _mirrorZ
    // Size: 0x1
    // Offset: 0x0
    bool mirrorZ;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _disableAutomaticTransformGathering
    // Size: 0x1
    // Offset: 0x0
    bool disableAutomaticTransformGathering;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Collections.Generic.List`1<UnityEngine.Transform> _xTransforms
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* xTransforms;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Transform> _yTransforms
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* yTransforms;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Transform> _zTransforms
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* zTransforms;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean _mirrorX
    [[deprecated("Use field access instead!")]] bool& dyn__mirrorX() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightTransformGroup_3::dyn__mirrorX");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_mirrorX"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean _mirrorY
    [[deprecated("Use field access instead!")]] bool& dyn__mirrorY() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightTransformGroup_3::dyn__mirrorY");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_mirrorY"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean _mirrorZ
    [[deprecated("Use field access instead!")]] bool& dyn__mirrorZ() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightTransformGroup_3::dyn__mirrorZ");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_mirrorZ"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean _disableAutomaticTransformGathering
    [[deprecated("Use field access instead!")]] bool& dyn__disableAutomaticTransformGathering() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightTransformGroup_3::dyn__disableAutomaticTransformGathering");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_disableAutomaticTransformGathering"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.List`1<UnityEngine.Transform> _xTransforms
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& dyn__xTransforms() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightTransformGroup_3::dyn__xTransforms");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_xTransforms"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::List_1<::UnityEngine::Transform*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.List`1<UnityEngine.Transform> _yTransforms
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& dyn__yTransforms() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightTransformGroup_3::dyn__yTransforms");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_yTransforms"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::List_1<::UnityEngine::Transform*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.List`1<UnityEngine.Transform> _zTransforms
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& dyn__zTransforms() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightTransformGroup_3::dyn__zTransforms");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_zTransforms"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::List_1<::UnityEngine::Transform*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Boolean get_mirrorX()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_mirrorX() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightTransformGroup_3::get_mirrorX");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_mirrorX", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Boolean get_mirrorY()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_mirrorY() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightTransformGroup_3::get_mirrorY");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_mirrorY", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Boolean get_mirrorZ()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_mirrorZ() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightTransformGroup_3::get_mirrorZ");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_mirrorZ", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Collections.Generic.List`1<UnityEngine.Transform> get_xTransforms()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* get_xTransforms() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightTransformGroup_3::get_xTransforms");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_xTransforms", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, false>(this, ___internal__method);
    }
    // public System.Collections.Generic.List`1<UnityEngine.Transform> get_yTransforms()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* get_yTransforms() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightTransformGroup_3::get_yTransforms");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_yTransforms", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, false>(this, ___internal__method);
    }
    // public System.Collections.Generic.List`1<UnityEngine.Transform> get_zTransforms()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* get_zTransforms() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightTransformGroup_3::get_zTransforms");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_zTransforms", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, false>(this, ___internal__method);
    }
    // public System.Int32 get_count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightTransformGroup_3::get_count");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: LightGroupSubsystem
    // Base method: System.Void LightGroupSubsystem::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightTransformGroup_3<TX, TY, TZ>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightTransformGroup_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightTransformGroup_3<TX, TY, TZ>*, creationType>()));
    }
  }; // LightTransformGroup`3
  // Could not write size check! Type: LightTransformGroup`3 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
