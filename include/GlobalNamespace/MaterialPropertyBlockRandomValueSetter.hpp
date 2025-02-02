// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockRandomValueSetter
  class MaterialPropertyBlockRandomValueSetter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockRandomValueSetter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockRandomValueSetter*, "", "MaterialPropertyBlockRandomValueSetter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: MaterialPropertyBlockRandomValueSetter
  // [TokenAttribute] Offset: FFFFFFFF
  class MaterialPropertyBlockRandomValueSetter : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Renderer[] _renderers
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Renderer*> renderers;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Renderer*>) == 0x8);
    // private System.String _propertyName
    // Size: 0x8
    // Offset: 0x20
    ::StringW propertyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Single _minValue
    // Size: 0x4
    // Offset: 0x28
    float minValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxValue
    // Size: 0x4
    // Offset: 0x2C
    float maxValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.MaterialPropertyBlock[] _materialPropertyBlocks
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::MaterialPropertyBlock*> materialPropertyBlocks;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::MaterialPropertyBlock*>) == 0x8);
    // private System.Int32 _propertyId
    // Size: 0x4
    // Offset: 0x38
    int propertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Renderer[] _renderers
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Renderer*>& dyn__renderers();
    // Get instance field reference: private System.String _propertyName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__propertyName();
    // Get instance field reference: private System.Single _minValue
    [[deprecated("Use field access instead!")]] float& dyn__minValue();
    // Get instance field reference: private System.Single _maxValue
    [[deprecated("Use field access instead!")]] float& dyn__maxValue();
    // Get instance field reference: private UnityEngine.MaterialPropertyBlock[] _materialPropertyBlocks
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::MaterialPropertyBlock*>& dyn__materialPropertyBlocks();
    // Get instance field reference: private System.Int32 _propertyId
    [[deprecated("Use field access instead!")]] int& dyn__propertyId();
    // public System.Void .ctor()
    // Offset: 0x1CDBB50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPropertyBlockRandomValueSetter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MaterialPropertyBlockRandomValueSetter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPropertyBlockRandomValueSetter*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1CDB8DC
    void Start();
    // protected System.Void OnValidate()
    // Offset: 0x1CDBAF4
    void OnValidate();
    // private System.Void RefreshPropertyId()
    // Offset: 0x1CDBB24
    void RefreshPropertyId();
    // private System.Void ApplyParams()
    // Offset: 0x1CDB8E0
    void ApplyParams();
  }; // MaterialPropertyBlockRandomValueSetter
  #pragma pack(pop)
  static check_size<sizeof(MaterialPropertyBlockRandomValueSetter), 56 + sizeof(int)> __GlobalNamespace_MaterialPropertyBlockRandomValueSetterSizeCheck;
  static_assert(sizeof(MaterialPropertyBlockRandomValueSetter) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockRandomValueSetter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockRandomValueSetter::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockRandomValueSetter::*)()>(&GlobalNamespace::MaterialPropertyBlockRandomValueSetter::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockRandomValueSetter*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockRandomValueSetter::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockRandomValueSetter::*)()>(&GlobalNamespace::MaterialPropertyBlockRandomValueSetter::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockRandomValueSetter*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockRandomValueSetter::RefreshPropertyId
// Il2CppName: RefreshPropertyId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockRandomValueSetter::*)()>(&GlobalNamespace::MaterialPropertyBlockRandomValueSetter::RefreshPropertyId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockRandomValueSetter*), "RefreshPropertyId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockRandomValueSetter::ApplyParams
// Il2CppName: ApplyParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockRandomValueSetter::*)()>(&GlobalNamespace::MaterialPropertyBlockRandomValueSetter::ApplyParams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockRandomValueSetter*), "ApplyParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
