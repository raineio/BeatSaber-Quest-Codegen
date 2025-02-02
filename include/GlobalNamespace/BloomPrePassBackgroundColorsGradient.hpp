// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BloomPrePassBackgroundTextureGradient
#include "GlobalNamespace/BloomPrePassBackgroundTextureGradient.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Color because it is already included!
}
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Forward declaring type: NativeArray`1<T>
  template<typename T>
  struct NativeArray_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassBackgroundColorsGradient
  class BloomPrePassBackgroundColorsGradient;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradient*, "", "BloomPrePassBackgroundColorsGradient");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundColorsGradient
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassBackgroundColorsGradient : public ::GlobalNamespace::BloomPrePassBackgroundTextureGradient {
    public:
    // Nested type: ::GlobalNamespace::BloomPrePassBackgroundColorsGradient::Element
    class Element;
    public:
    // private BloomPrePassBackgroundColorsGradient/Element[] _elements
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient::Element*> elements;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient::Element*>) == 0x8);
    public:
    // Get instance field reference: private BloomPrePassBackgroundColorsGradient/Element[] _elements
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient::Element*>& dyn__elements();
    // public BloomPrePassBackgroundColorsGradient/Element[] get_elements()
    // Offset: 0x1CD0360
    ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient::Element*> get_elements();
    // private UnityEngine.Color EvaluateColor(System.Single t)
    // Offset: 0x1CD03D4
    ::UnityEngine::Color EvaluateColor(float t);
    // public System.Void .ctor()
    // Offset: 0x1CD055C
    // Implemented from: BloomPrePassBackgroundTextureGradient
    // Base method: System.Void BloomPrePassBackgroundTextureGradient::.ctor()
    // Base method: System.Void BloomPrePassNonLightPass::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundColorsGradient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassBackgroundColorsGradient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundColorsGradient*, creationType>()));
    }
    // protected override System.Void UpdatePixels(Unity.Collections.NativeArray`1<UnityEngine.Color32> pixels, System.Int32 numberOfPixels)
    // Offset: 0x1CD0368
    // Implemented from: BloomPrePassBackgroundTextureGradient
    // Base method: System.Void BloomPrePassBackgroundTextureGradient::UpdatePixels(Unity.Collections.NativeArray`1<UnityEngine.Color32> pixels, System.Int32 numberOfPixels)
    void UpdatePixels(::Unity::Collections::NativeArray_1<::UnityEngine::Color32> pixels, int numberOfPixels);
  }; // BloomPrePassBackgroundColorsGradient
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundColorsGradient), 64 + sizeof(::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient::Element*>)> __GlobalNamespace_BloomPrePassBackgroundColorsGradientSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundColorsGradient) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColorsGradient::get_elements
// Il2CppName: get_elements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient::Element*> (GlobalNamespace::BloomPrePassBackgroundColorsGradient::*)()>(&GlobalNamespace::BloomPrePassBackgroundColorsGradient::get_elements)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundColorsGradient*), "get_elements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColorsGradient::EvaluateColor
// Il2CppName: EvaluateColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::BloomPrePassBackgroundColorsGradient::*)(float)>(&GlobalNamespace::BloomPrePassBackgroundColorsGradient::EvaluateColor)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundColorsGradient*), "EvaluateColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColorsGradient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColorsGradient::UpdatePixels
// Il2CppName: UpdatePixels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundColorsGradient::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>, int)>(&GlobalNamespace::BloomPrePassBackgroundColorsGradient::UpdatePixels)> {
  static const MethodInfo* get() {
    static auto* pixels = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")})->byval_arg;
    static auto* numberOfPixels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundColorsGradient*), "UpdatePixels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pixels, numberOfPixels});
  }
};
