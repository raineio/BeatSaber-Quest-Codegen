// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
// Including type: HoudiniEngineUnity.HAPI_GeoInfo
#include "HoudiniEngineUnity/HAPI_GeoInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: Test_HAPI_GeoInfo
  class Test_HAPI_GeoInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::Test_HAPI_GeoInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_HAPI_GeoInfo*, "HoudiniEngineUnity", "Test_HAPI_GeoInfo");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_HAPI_GeoInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class Test_HAPI_GeoInfo : public ::Il2CppObject/*, public ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_GeoInfo*>*/ {
    public:
    public:
    // public HoudiniEngineUnity.HAPI_GeoInfo self
    // Size: 0x24
    // Offset: 0x10
    ::HoudiniEngineUnity::HAPI_GeoInfo self;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_GeoInfo) == 0x24);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_GeoInfo*>
    operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_GeoInfo*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_GeoInfo*>*>(this);
    }
    // Creating conversion operator: operator ::HoudiniEngineUnity::HAPI_GeoInfo
    constexpr operator ::HoudiniEngineUnity::HAPI_GeoInfo() const noexcept {
      return self;
    }
    // Get instance field reference: public HoudiniEngineUnity.HAPI_GeoInfo self
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_GeoInfo& dyn_self();
    // public System.Void .ctor(HoudiniEngineUnity.HAPI_GeoInfo self)
    // Offset: 0x1A1C9F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test_HAPI_GeoInfo* New_ctor(::HoudiniEngineUnity::HAPI_GeoInfo self) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::Test_HAPI_GeoInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test_HAPI_GeoInfo*, creationType>(self)));
    }
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.Test_HAPI_GeoInfo other)
    // Offset: 0x1A1CA30
    bool IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_GeoInfo* other);
  }; // HoudiniEngineUnity.Test_HAPI_GeoInfo
  #pragma pack(pop)
  static check_size<sizeof(Test_HAPI_GeoInfo), 16 + sizeof(::HoudiniEngineUnity::HAPI_GeoInfo)> __HoudiniEngineUnity_Test_HAPI_GeoInfoSizeCheck;
  static_assert(sizeof(Test_HAPI_GeoInfo) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_HAPI_GeoInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_HAPI_GeoInfo::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_HAPI_GeoInfo::*)(::HoudiniEngineUnity::Test_HAPI_GeoInfo*)>(&HoudiniEngineUnity::Test_HAPI_GeoInfo::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "Test_HAPI_GeoInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_HAPI_GeoInfo*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
