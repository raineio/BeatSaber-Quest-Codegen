// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Polyglot.ILocalize
#include "Polyglot/ILocalize.hpp"
// Including type: Polyglot.LanguageDirection
#include "Polyglot/LanguageDirection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Component because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: LocalizedTextComponent`1<T>
  template<typename T>
  class LocalizedTextComponent_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Polyglot::LocalizedTextComponent_1, "Polyglot", "LocalizedTextComponent`1");
// Type namespace: Polyglot
namespace Polyglot {
  // WARNING Size may be invalid!
  // Autogenerated type: Polyglot.LocalizedTextComponent`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class LocalizedTextComponent_1 : public ::UnityEngine::MonoBehaviour/*, public ::Polyglot::ILocalize*/ {
    public:
    public:
    // [TooltipAttribute] Offset: 0x10B4B48
    // protected T localizedComponent
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T localizedComponent;
    // [TooltipAttribute] Offset: 0x10B4B94
    // private System.Boolean maintainTextAlignment
    // Size: 0x1
    // Offset: 0x0
    bool maintainTextAlignment;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0x10B4BE0
    // [LocalizationKeyAttribute] Offset: 0x10B4BE0
    // private System.String key
    // Size: 0x8
    // Offset: 0x0
    ::StringW key;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Collections.Generic.List`1<System.Object> parameters
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::List_1<::Il2CppObject*>* parameters;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Il2CppObject*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Polyglot::ILocalize
    operator ::Polyglot::ILocalize() noexcept {
      return *reinterpret_cast<::Polyglot::ILocalize*>(this);
    }
    // Creating interface conversion operator: i_ILocalize
    inline ::Polyglot::ILocalize* i_ILocalize() noexcept {
      return reinterpret_cast<::Polyglot::ILocalize*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Autogenerated instance field getter
    // Get instance field: protected T localizedComponent
    [[deprecated("Use field access instead!")]] T& dyn_localizedComponent() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizedTextComponent_1::dyn_localizedComponent");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "localizedComponent"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean maintainTextAlignment
    [[deprecated("Use field access instead!")]] bool& dyn_maintainTextAlignment() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizedTextComponent_1::dyn_maintainTextAlignment");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "maintainTextAlignment"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.String key
    [[deprecated("Use field access instead!")]] ::StringW& dyn_key() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizedTextComponent_1::dyn_key");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "key"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.List`1<System.Object> parameters
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Il2CppObject*>*& dyn_parameters() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizedTextComponent_1::dyn_parameters");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "parameters"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::List_1<::Il2CppObject*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Boolean get_MaintainTextAlignment()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_MaintainTextAlignment() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizedTextComponent_1::get_MaintainTextAlignment");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_MaintainTextAlignment", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Void set_MaintainTextAlignment(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_MaintainTextAlignment(bool value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizedTextComponent_1::set_MaintainTextAlignment");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_MaintainTextAlignment", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.String get_Key()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Key() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizedTextComponent_1::get_Key");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Key", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // public System.Void set_Key(System.String value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Key(::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizedTextComponent_1::set_Key");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Key", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Collections.Generic.List`1<System.Object> get_Parameters()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::List_1<::Il2CppObject*>* get_Parameters() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizedTextComponent_1::get_Parameters");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Parameters", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::List_1<::Il2CppObject*>*, false>(this, ___internal__method);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizedTextComponent_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizedTextComponent_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizedTextComponent_1<T>*, creationType>()));
    }
    // public System.Void OnEnable()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnEnable() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizedTextComponent_1::OnEnable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnEnable", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void SetText(T component, System.String value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetText(T component, ::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizedTextComponent_1::SetText");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetText", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(component), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, component, value);
    }
    // protected System.Void UpdateAlignment(T component, Polyglot.LanguageDirection direction)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UpdateAlignment(T component, ::Polyglot::LanguageDirection direction) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizedTextComponent_1::UpdateAlignment");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "UpdateAlignment", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(component), ::il2cpp_utils::ExtractType(direction)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, component, direction);
    }
    // public System.Void OnLocalize()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnLocalize() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizedTextComponent_1::OnLocalize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnLocalize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void ClearParameters()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ClearParameters() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizedTextComponent_1::ClearParameters");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ClearParameters", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void AddParameter(System.Object parameter)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AddParameter(::Il2CppObject* parameter) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizedTextComponent_1::AddParameter");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddParameter", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(parameter)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, parameter);
    }
    // public System.Void AddParameter(System.Int32 parameter)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AddParameter(int parameter) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizedTextComponent_1::AddParameter");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddParameter", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(parameter)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, parameter);
    }
    // public System.Void AddParameter(System.Single parameter)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AddParameter(float parameter) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizedTextComponent_1::AddParameter");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddParameter", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(parameter)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, parameter);
    }
    // public System.Void AddParameter(System.String parameter)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AddParameter(::StringW parameter) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizedTextComponent_1::AddParameter");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddParameter", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(parameter)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, parameter);
    }
  }; // Polyglot.LocalizedTextComponent`1
  // Could not write size check! Type: Polyglot.LocalizedTextComponent`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
