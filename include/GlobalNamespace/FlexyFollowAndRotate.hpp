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
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FlexyFollowAndRotate
  class FlexyFollowAndRotate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FlexyFollowAndRotate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlexyFollowAndRotate*, "", "FlexyFollowAndRotate");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: FlexyFollowAndRotate
  // [TokenAttribute] Offset: FFFFFFFF
  class FlexyFollowAndRotate : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Transform _target
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Single _smooth
    // Size: 0x4
    // Offset: 0x20
    float smooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Transform _target
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__target();
    // Get instance field reference: private System.Single _smooth
    [[deprecated("Use field access instead!")]] float& dyn__smooth();
    // public System.Void .ctor()
    // Offset: 0x15A4254
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlexyFollowAndRotate* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FlexyFollowAndRotate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlexyFollowAndRotate*, creationType>()));
    }
    // protected System.Void Update()
    // Offset: 0x15A4078
    void Update();
  }; // FlexyFollowAndRotate
  #pragma pack(pop)
  static check_size<sizeof(FlexyFollowAndRotate), 32 + sizeof(float)> __GlobalNamespace_FlexyFollowAndRotateSizeCheck;
  static_assert(sizeof(FlexyFollowAndRotate) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FlexyFollowAndRotate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FlexyFollowAndRotate::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlexyFollowAndRotate::*)()>(&GlobalNamespace::FlexyFollowAndRotate::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlexyFollowAndRotate*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
