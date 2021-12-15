// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_TreePrototypeInfo
  class HEU_TreePrototypeInfo;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HoudiniEngineUnity::HEU_TreePrototypeInfo);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_TreePrototypeInfo*, "HoudiniEngineUnity", "HEU_TreePrototypeInfo");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_TreePrototypeInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_TreePrototypeInfo : public ::Il2CppObject/*, public HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_TreePrototypeInfo*>*/ {
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
    // public System.String _prefabPath
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* prefabPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Single _bendfactor
    // Size: 0x4
    // Offset: 0x18
    float bendfactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_TreePrototypeInfo*>
    operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_TreePrototypeInfo*>() noexcept {
      return *reinterpret_cast<HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_TreePrototypeInfo*>*>(this);
    }
    // Get instance field reference: public System.String _prefabPath
    ::Il2CppString*& dyn__prefabPath();
    // Get instance field reference: public System.Single _bendfactor
    float& dyn__bendfactor();
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.HEU_TreePrototypeInfo other)
    // Offset: 0x1781DE0
    bool IsEquivalentTo(HoudiniEngineUnity::HEU_TreePrototypeInfo* other);
    // public System.Void .ctor()
    // Offset: 0x1781EF4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_TreePrototypeInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_TreePrototypeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_TreePrototypeInfo*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_TreePrototypeInfo
  #pragma pack(pop)
  static check_size<sizeof(HEU_TreePrototypeInfo), 24 + sizeof(float)> __HoudiniEngineUnity_HEU_TreePrototypeInfoSizeCheck;
  static_assert(sizeof(HEU_TreePrototypeInfo) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TreePrototypeInfo::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_TreePrototypeInfo::*)(HoudiniEngineUnity::HEU_TreePrototypeInfo*)>(&HoudiniEngineUnity::HEU_TreePrototypeInfo::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_TreePrototypeInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TreePrototypeInfo*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TreePrototypeInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
