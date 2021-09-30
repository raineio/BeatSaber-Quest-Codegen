// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
// Including type: HoudiniEngineUnity.HAPI_Transform
#include "HoudiniEngineUnity/HAPI_Transform.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_HAPI_Transform
  // [TokenAttribute] Offset: FFFFFFFF
  class Test_HAPI_Transform : public ::Il2CppObject/*, public HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_Transform*>*/ {
    public:
    // public HoudiniEngineUnity.HAPI_Transform self
    // Size: 0x24
    // Offset: 0x10
    HoudiniEngineUnity::HAPI_Transform self;
    // Field size check
    static_assert(sizeof(HoudiniEngineUnity::HAPI_Transform) == 0x24);
    // Creating interface conversion operator: operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_Transform*>
    operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_Transform*>() noexcept {
      return *reinterpret_cast<HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_Transform*>*>(this);
    }
    // Creating conversion operator: operator HoudiniEngineUnity::HAPI_Transform
    constexpr operator HoudiniEngineUnity::HAPI_Transform() const noexcept {
      return self;
    }
    // Get instance field reference: public HoudiniEngineUnity.HAPI_Transform self
    HoudiniEngineUnity::HAPI_Transform& dyn_self();
    // public System.Void .ctor(HoudiniEngineUnity.HAPI_Transform self)
    // Offset: 0x25CFCA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test_HAPI_Transform* New_ctor(HoudiniEngineUnity::HAPI_Transform self) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::Test_HAPI_Transform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test_HAPI_Transform*, creationType>(self)));
    }
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.Test_HAPI_Transform other)
    // Offset: 0x25CFCDC
    bool IsEquivalentTo(HoudiniEngineUnity::Test_HAPI_Transform* other);
  }; // HoudiniEngineUnity.Test_HAPI_Transform
  #pragma pack(pop)
  static check_size<sizeof(Test_HAPI_Transform), 16 + sizeof(HoudiniEngineUnity::HAPI_Transform)> __HoudiniEngineUnity_Test_HAPI_TransformSizeCheck;
  static_assert(sizeof(Test_HAPI_Transform) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_HAPI_Transform*, "HoudiniEngineUnity", "Test_HAPI_Transform");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_HAPI_Transform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_HAPI_Transform::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_HAPI_Transform::*)(HoudiniEngineUnity::Test_HAPI_Transform*)>(&HoudiniEngineUnity::Test_HAPI_Transform::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "Test_HAPI_Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_HAPI_Transform*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};