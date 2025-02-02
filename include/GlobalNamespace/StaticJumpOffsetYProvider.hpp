// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IJumpOffsetYProvider
#include "GlobalNamespace/IJumpOffsetYProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StaticJumpOffsetYProvider
  class StaticJumpOffsetYProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StaticJumpOffsetYProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticJumpOffsetYProvider*, "", "StaticJumpOffsetYProvider");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: StaticJumpOffsetYProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class StaticJumpOffsetYProvider : public ::Il2CppObject/*, public ::GlobalNamespace::IJumpOffsetYProvider*/ {
    public:
    // Nested type: ::GlobalNamespace::StaticJumpOffsetYProvider::InitData
    class InitData;
    public:
    // [InjectAttribute] Offset: 0x111E374
    // private readonly StaticJumpOffsetYProvider/InitData _initData
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::StaticJumpOffsetYProvider::InitData* initData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::StaticJumpOffsetYProvider::InitData*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IJumpOffsetYProvider
    operator ::GlobalNamespace::IJumpOffsetYProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IJumpOffsetYProvider*>(this);
    }
    // Creating interface conversion operator: i_IJumpOffsetYProvider
    inline ::GlobalNamespace::IJumpOffsetYProvider* i_IJumpOffsetYProvider() noexcept {
      return reinterpret_cast<::GlobalNamespace::IJumpOffsetYProvider*>(this);
    }
    // Creating conversion operator: operator ::GlobalNamespace::StaticJumpOffsetYProvider::InitData*
    constexpr operator ::GlobalNamespace::StaticJumpOffsetYProvider::InitData*() const noexcept {
      return initData;
    }
    // Get instance field reference: private readonly StaticJumpOffsetYProvider/InitData _initData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::StaticJumpOffsetYProvider::InitData*& dyn__initData();
    // public System.Single get_jumpOffsetY()
    // Offset: 0x13BB4F8
    float get_jumpOffsetY();
    // public System.Void .ctor()
    // Offset: 0x13BB514
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StaticJumpOffsetYProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StaticJumpOffsetYProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StaticJumpOffsetYProvider*, creationType>()));
    }
  }; // StaticJumpOffsetYProvider
  #pragma pack(pop)
  static check_size<sizeof(StaticJumpOffsetYProvider), 16 + sizeof(::GlobalNamespace::StaticJumpOffsetYProvider::InitData*)> __GlobalNamespace_StaticJumpOffsetYProviderSizeCheck;
  static_assert(sizeof(StaticJumpOffsetYProvider) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StaticJumpOffsetYProvider::get_jumpOffsetY
// Il2CppName: get_jumpOffsetY
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::StaticJumpOffsetYProvider::*)()>(&GlobalNamespace::StaticJumpOffsetYProvider::get_jumpOffsetY)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticJumpOffsetYProvider*), "get_jumpOffsetY", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticJumpOffsetYProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
