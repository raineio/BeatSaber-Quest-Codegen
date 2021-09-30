// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivableWrapperClass`1
#include "HoudiniEngineUnity/IEquivableWrapperClass_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Gradient
  class Gradient;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_Gradient
  // [TokenAttribute] Offset: FFFFFFFF
  class Test_Gradient : public ::Il2CppObject/*, public HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Gradient*>*/ {
    public:
    // public UnityEngine.Gradient self
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Gradient* self;
    // Field size check
    static_assert(sizeof(UnityEngine::Gradient*) == 0x8);
    // Creating interface conversion operator: operator HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Gradient*>
    operator HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Gradient*>() noexcept {
      return *reinterpret_cast<HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Gradient*>*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Gradient*
    constexpr operator UnityEngine::Gradient*() const noexcept {
      return self;
    }
    // Get instance field reference: public UnityEngine.Gradient self
    UnityEngine::Gradient*& dyn_self();
    // public System.Void .ctor(UnityEngine.Gradient self)
    // Offset: 0x1708E30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test_Gradient* New_ctor(UnityEngine::Gradient* self) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::Test_Gradient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test_Gradient*, creationType>(self)));
    }
    // public System.Boolean IsNull()
    // Offset: 0x1708E5C
    bool IsNull();
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.Test_Gradient other)
    // Offset: 0x1708E6C
    bool IsEquivalentTo(HoudiniEngineUnity::Test_Gradient* other);
  }; // HoudiniEngineUnity.Test_Gradient
  #pragma pack(pop)
  static check_size<sizeof(Test_Gradient), 16 + sizeof(UnityEngine::Gradient*)> __HoudiniEngineUnity_Test_GradientSizeCheck;
  static_assert(sizeof(Test_Gradient) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_Gradient*, "HoudiniEngineUnity", "Test_Gradient");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_Gradient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_Gradient::IsNull
// Il2CppName: IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_Gradient::*)()>(&HoudiniEngineUnity::Test_Gradient::IsNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_Gradient*), "IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_Gradient::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_Gradient::*)(HoudiniEngineUnity::Test_Gradient*)>(&HoudiniEngineUnity::Test_Gradient::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "Test_Gradient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_Gradient*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};