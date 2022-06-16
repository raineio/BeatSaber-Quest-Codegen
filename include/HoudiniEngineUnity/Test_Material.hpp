// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivableWrapperClass`1
#include "HoudiniEngineUnity/IEquivableWrapperClass_1.hpp"
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
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: Test_Material
  class Test_Material;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::Test_Material);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Material*, "HoudiniEngineUnity", "Test_Material");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_Material
  // [TokenAttribute] Offset: FFFFFFFF
  class Test_Material : public ::Il2CppObject/*, public ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Material*>*/ {
    public:
    public:
    // public UnityEngine.Material self
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Material* self;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Material*>
    operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Material*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Material*>*>(this);
    }
    // Creating interface conversion operator: i_Test_Material
    inline ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Material*>* i_Test_Material() noexcept {
      return reinterpret_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Material*>*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Material*
    constexpr operator ::UnityEngine::Material*() const noexcept {
      return self;
    }
    // Get instance field reference: public UnityEngine.Material self
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_self();
    // public System.Void .ctor(UnityEngine.Material self)
    // Offset: 0x2A8AC44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test_Material* New_ctor(::UnityEngine::Material* self) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::Test_Material::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test_Material*, creationType>(self)));
    }
    // public System.Boolean IsNull()
    // Offset: 0x2A8AC70
    bool IsNull();
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.Test_Material other)
    // Offset: 0x2A8ACE0
    bool IsEquivalentTo(::HoudiniEngineUnity::Test_Material* other);
  }; // HoudiniEngineUnity.Test_Material
  #pragma pack(pop)
  static check_size<sizeof(Test_Material), 16 + sizeof(::UnityEngine::Material*)> __HoudiniEngineUnity_Test_MaterialSizeCheck;
  static_assert(sizeof(Test_Material) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_Material::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_Material::IsNull
// Il2CppName: IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_Material::*)()>(&HoudiniEngineUnity::Test_Material::IsNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_Material*), "IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_Material::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_Material::*)(::HoudiniEngineUnity::Test_Material*)>(&HoudiniEngineUnity::Test_Material::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "Test_Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_Material*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
