// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PoseObjectIdSO
  class PoseObjectIdSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PoseObjectIdSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PoseObjectIdSO*, "", "PoseObjectIdSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PoseObjectIdSO
  // [TokenAttribute] Offset: FFFFFFFF
  class PoseObjectIdSO : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    public:
    // private System.String _serializedId
    // Size: 0x8
    // Offset: 0x18
    ::StringW serializedId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _serializedId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__serializedId();
    // public System.String get_id()
    // Offset: 0x13DB6FC
    ::StringW get_id();
    // public System.Void .ctor()
    // Offset: 0x13DB704
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoseObjectIdSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PoseObjectIdSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoseObjectIdSO*, creationType>()));
    }
  }; // PoseObjectIdSO
  #pragma pack(pop)
  static check_size<sizeof(PoseObjectIdSO), 24 + sizeof(::StringW)> __GlobalNamespace_PoseObjectIdSOSizeCheck;
  static_assert(sizeof(PoseObjectIdSO) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PoseObjectIdSO::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PoseObjectIdSO::*)()>(&GlobalNamespace::PoseObjectIdSO::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoseObjectIdSO*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoseObjectIdSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
