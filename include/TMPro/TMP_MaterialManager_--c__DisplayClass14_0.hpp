// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.TMP_MaterialManager
#include "TMPro/TMP_MaterialManager.hpp"
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
  // Forward declaring type: <>c__DisplayClass14_0
  class $$c__DisplayClass14_0;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(TMPro::TMP_MaterialManager::$$c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_MaterialManager::$$c__DisplayClass14_0*, "TMPro", "TMP_MaterialManager/<>c__DisplayClass14_0");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_MaterialManager/TMPro.<>c__DisplayClass14_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TMP_MaterialManager::$$c__DisplayClass14_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.Material baseMaterial
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Material* baseMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    public:
    // Creating conversion operator: operator UnityEngine::Material*
    constexpr operator UnityEngine::Material*() const noexcept {
      return baseMaterial;
    }
    // Get instance field reference: public UnityEngine.Material baseMaterial
    UnityEngine::Material*& dyn_baseMaterial();
    // System.Boolean <ReleaseBaseMaterial>b__0(TMPro.TMP_MaterialManager/TMPro.MaskingMaterial item)
    // Offset: 0x125D114
    bool $ReleaseBaseMaterial$b__0(TMPro::TMP_MaterialManager::MaskingMaterial* item);
    // public System.Void .ctor()
    // Offset: 0x125BCD4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_MaterialManager::$$c__DisplayClass14_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_MaterialManager::$$c__DisplayClass14_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_MaterialManager::$$c__DisplayClass14_0*, creationType>()));
    }
  }; // TMPro.TMP_MaterialManager/TMPro.<>c__DisplayClass14_0
  #pragma pack(pop)
  static check_size<sizeof(TMP_MaterialManager::$$c__DisplayClass14_0), 16 + sizeof(UnityEngine::Material*)> __TMPro_TMP_MaterialManager_$$c__DisplayClass14_0SizeCheck;
  static_assert(sizeof(TMP_MaterialManager::$$c__DisplayClass14_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::$$c__DisplayClass14_0::$ReleaseBaseMaterial$b__0
// Il2CppName: <ReleaseBaseMaterial>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::TMP_MaterialManager::$$c__DisplayClass14_0::*)(TMPro::TMP_MaterialManager::MaskingMaterial*)>(&TMPro::TMP_MaterialManager::$$c__DisplayClass14_0::$ReleaseBaseMaterial$b__0)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_MaterialManager/MaskingMaterial")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MaterialManager::$$c__DisplayClass14_0*), "<ReleaseBaseMaterial>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::$$c__DisplayClass14_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
