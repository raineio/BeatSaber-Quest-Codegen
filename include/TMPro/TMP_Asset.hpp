// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Asset
  class TMP_Asset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_Asset);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Asset*, "TMPro", "TMP_Asset");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_Asset
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_Asset : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // public System.Int32 hashCode
    // Size: 0x4
    // Offset: 0x18
    int hashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: hashCode and: material
    char __padding0[0x4] = {};
    // public UnityEngine.Material material
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public System.Int32 materialHashCode
    // Size: 0x4
    // Offset: 0x28
    int materialHashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Int32 hashCode
    [[deprecated("Use field access instead!")]] int& dyn_hashCode();
    // Get instance field reference: public UnityEngine.Material material
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_material();
    // Get instance field reference: public System.Int32 materialHashCode
    [[deprecated("Use field access instead!")]] int& dyn_materialHashCode();
    // public System.Void .ctor()
    // Offset: 0x14A9914
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Asset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_Asset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Asset*, creationType>()));
    }
  }; // TMPro.TMP_Asset
  #pragma pack(pop)
  static check_size<sizeof(TMP_Asset), 40 + sizeof(int)> __TMPro_TMP_AssetSizeCheck;
  static_assert(sizeof(TMP_Asset) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_Asset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
