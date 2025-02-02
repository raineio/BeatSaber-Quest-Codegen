// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
// Including type: HoudiniEngineUnity.HAPI_AssetInfo
#include "HoudiniEngineUnity/HAPI_AssetInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: Test_HAPI_AssetInfo
  class Test_HAPI_AssetInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::Test_HAPI_AssetInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_HAPI_AssetInfo*, "HoudiniEngineUnity", "Test_HAPI_AssetInfo");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4E
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_HAPI_AssetInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class Test_HAPI_AssetInfo : public ::Il2CppObject/*, public ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AssetInfo*>*/ {
    public:
    public:
    // public HoudiniEngineUnity.HAPI_AssetInfo self
    // Size: 0x3E
    // Offset: 0x10
    ::HoudiniEngineUnity::HAPI_AssetInfo self;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_AssetInfo) == 0x3E);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AssetInfo*>
    operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AssetInfo*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AssetInfo*>*>(this);
    }
    // Creating interface conversion operator: i_Test_HAPI_AssetInfo
    inline ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AssetInfo*>* i_Test_HAPI_AssetInfo() noexcept {
      return reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AssetInfo*>*>(this);
    }
    // Creating conversion operator: operator ::HoudiniEngineUnity::HAPI_AssetInfo
    constexpr operator ::HoudiniEngineUnity::HAPI_AssetInfo() const noexcept {
      return self;
    }
    // Get instance field reference: public HoudiniEngineUnity.HAPI_AssetInfo self
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_AssetInfo& dyn_self();
    // public System.Void .ctor(HoudiniEngineUnity.HAPI_AssetInfo self)
    // Offset: 0x1A67BD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test_HAPI_AssetInfo* New_ctor(::HoudiniEngineUnity::HAPI_AssetInfo self) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::Test_HAPI_AssetInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test_HAPI_AssetInfo*, creationType>(self)));
    }
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.Test_HAPI_AssetInfo other)
    // Offset: 0x1A67C10
    bool IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_AssetInfo* other);
  }; // HoudiniEngineUnity.Test_HAPI_AssetInfo
  #pragma pack(pop)
  static check_size<sizeof(Test_HAPI_AssetInfo), 16 + sizeof(::HoudiniEngineUnity::HAPI_AssetInfo)> __HoudiniEngineUnity_Test_HAPI_AssetInfoSizeCheck;
  static_assert(sizeof(Test_HAPI_AssetInfo) == 0x4E);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_HAPI_AssetInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_HAPI_AssetInfo::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_HAPI_AssetInfo::*)(::HoudiniEngineUnity::Test_HAPI_AssetInfo*)>(&HoudiniEngineUnity::Test_HAPI_AssetInfo::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "Test_HAPI_AssetInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_HAPI_AssetInfo*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
