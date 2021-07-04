// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: CustomTimelineTween
  class CustomTimelineTween : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Transform[] transforms
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::Transform*>* transforms;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // [HideInInspector] Offset: 0xE287C8
    // public UnityEngine.Vector3[] startPositions
    // Size: 0x8
    // Offset: 0x20
    ::Array<UnityEngine::Vector3>* startPositions;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // Creating value type constructor for type: CustomTimelineTween
    CustomTimelineTween(::Array<UnityEngine::Transform*>* transforms_ = {}, ::Array<UnityEngine::Vector3>* startPositions_ = {}) noexcept : transforms{transforms_}, startPositions{startPositions_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void OnValidate()
    // Offset: 0x119A0A0
    void OnValidate();
    // public System.Void .ctor()
    // Offset: 0x119A184
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomTimelineTween* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CustomTimelineTween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomTimelineTween*, creationType>()));
    }
  }; // CustomTimelineTween
  #pragma pack(pop)
  static check_size<sizeof(CustomTimelineTween), 32 + sizeof(::Array<UnityEngine::Vector3>*)> __GlobalNamespace_CustomTimelineTweenSizeCheck;
  static_assert(sizeof(CustomTimelineTween) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomTimelineTween*, "", "CustomTimelineTween");
// Writing MetadataGetter for method: GlobalNamespace::CustomTimelineTween::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomTimelineTween::*)()>(&GlobalNamespace::CustomTimelineTween::OnValidate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomTimelineTween*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomTimelineTween::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
