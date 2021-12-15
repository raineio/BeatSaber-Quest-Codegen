// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: RaycastHit
  class RaycastHit;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::ProBuilder::RaycastHit);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::RaycastHit*, "UnityEngine.ProBuilder", "RaycastHit");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.RaycastHit
  // [TokenAttribute] Offset: FFFFFFFF
  class RaycastHit : public ::Il2CppObject {
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
    // public System.Single distance
    // Size: 0x4
    // Offset: 0x10
    float distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 point
    // Size: 0xC
    // Offset: 0x14
    UnityEngine::Vector3 point;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 normal
    // Size: 0xC
    // Offset: 0x20
    UnityEngine::Vector3 normal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public System.Int32 face
    // Size: 0x4
    // Offset: 0x2C
    int face;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Single distance
    float& dyn_distance();
    // Get instance field reference: public UnityEngine.Vector3 point
    UnityEngine::Vector3& dyn_point();
    // Get instance field reference: public UnityEngine.Vector3 normal
    UnityEngine::Vector3& dyn_normal();
    // Get instance field reference: public System.Int32 face
    int& dyn_face();
    // public System.Void .ctor(System.Single distance, UnityEngine.Vector3 point, UnityEngine.Vector3 normal, System.Int32 face)
    // Offset: 0x16F8654
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RaycastHit* New_ctor(float distance, UnityEngine::Vector3 point, UnityEngine::Vector3 normal, int face) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::RaycastHit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RaycastHit*, creationType>(distance, point, normal, face)));
    }
  }; // UnityEngine.ProBuilder.RaycastHit
  #pragma pack(pop)
  static check_size<sizeof(RaycastHit), 44 + sizeof(int)> __UnityEngine_ProBuilder_RaycastHitSizeCheck;
  static_assert(sizeof(RaycastHit) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::RaycastHit::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
