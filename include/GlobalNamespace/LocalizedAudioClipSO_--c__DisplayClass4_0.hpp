// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LocalizedAudioClipSO
#include "GlobalNamespace/LocalizedAudioClipSO.hpp"
// Including type: Polyglot.Language
#include "Polyglot/Language.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LocalizedAudioClipSO::$$c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizedAudioClipSO::$$c__DisplayClass4_0*, "", "LocalizedAudioClipSO/<>c__DisplayClass4_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: LocalizedAudioClipSO/<>c__DisplayClass4_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LocalizedAudioClipSO::$$c__DisplayClass4_0 : public ::Il2CppObject {
    public:
    public:
    // public Polyglot.Language language
    // Size: 0x4
    // Offset: 0x10
    ::Polyglot::Language language;
    // Field size check
    static_assert(sizeof(::Polyglot::Language) == 0x4);
    public:
    // Creating conversion operator: operator ::Polyglot::Language
    constexpr operator ::Polyglot::Language() const noexcept {
      return language;
    }
    // Get instance field reference: public Polyglot.Language language
    [[deprecated("Use field access instead!")]] ::Polyglot::Language& dyn_language();
    // public System.Void .ctor()
    // Offset: 0x1343FF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizedAudioClipSO::$$c__DisplayClass4_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LocalizedAudioClipSO::$$c__DisplayClass4_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizedAudioClipSO::$$c__DisplayClass4_0*, creationType>()));
    }
    // System.Boolean <get_localizedAudioClip>b__0(LocalizedAudioClipSO/LocalizedAudioClipInfo t)
    // Offset: 0x1344008
    bool $get_localizedAudioClip$b__0(::GlobalNamespace::LocalizedAudioClipSO::LocalizedAudioClipInfo* t);
  }; // LocalizedAudioClipSO/<>c__DisplayClass4_0
  #pragma pack(pop)
  static check_size<sizeof(LocalizedAudioClipSO::$$c__DisplayClass4_0), 16 + sizeof(::Polyglot::Language)> __GlobalNamespace_LocalizedAudioClipSO_$$c__DisplayClass4_0SizeCheck;
  static_assert(sizeof(LocalizedAudioClipSO::$$c__DisplayClass4_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocalizedAudioClipSO::$$c__DisplayClass4_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LocalizedAudioClipSO::$$c__DisplayClass4_0::$get_localizedAudioClip$b__0
// Il2CppName: <get_localizedAudioClip>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LocalizedAudioClipSO::$$c__DisplayClass4_0::*)(::GlobalNamespace::LocalizedAudioClipSO::LocalizedAudioClipInfo*)>(&GlobalNamespace::LocalizedAudioClipSO::$$c__DisplayClass4_0::$get_localizedAudioClip$b__0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("", "LocalizedAudioClipSO/LocalizedAudioClipInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalizedAudioClipSO::$$c__DisplayClass4_0*), "<get_localizedAudioClip>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
