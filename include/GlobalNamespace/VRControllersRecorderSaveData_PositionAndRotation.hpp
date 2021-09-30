// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: VRControllersRecorderSaveData
#include "GlobalNamespace/VRControllersRecorderSaveData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: VRControllersRecorderSaveData/PositionAndRotation
  // [TokenAttribute] Offset: FFFFFFFF
  class VRControllersRecorderSaveData::PositionAndRotation : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Single posX
    // Size: 0x4
    // Offset: 0x10
    float posX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single posY
    // Size: 0x4
    // Offset: 0x14
    float posY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single posZ
    // Size: 0x4
    // Offset: 0x18
    float posZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotX
    // Size: 0x4
    // Offset: 0x1C
    float rotX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotY
    // Size: 0x4
    // Offset: 0x20
    float rotY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotZ
    // Size: 0x4
    // Offset: 0x24
    float rotZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotW
    // Size: 0x4
    // Offset: 0x28
    float rotW;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single posX
    float& dyn_posX();
    // Get instance field reference: public System.Single posY
    float& dyn_posY();
    // Get instance field reference: public System.Single posZ
    float& dyn_posZ();
    // Get instance field reference: public System.Single rotX
    float& dyn_rotX();
    // Get instance field reference: public System.Single rotY
    float& dyn_rotY();
    // Get instance field reference: public System.Single rotZ
    float& dyn_rotZ();
    // Get instance field reference: public System.Single rotW
    float& dyn_rotW();
    // public System.Void .ctor()
    // Offset: 0x134ACC0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRControllersRecorderSaveData::PositionAndRotation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRControllersRecorderSaveData::PositionAndRotation*, creationType>()));
    }
  }; // VRControllersRecorderSaveData/PositionAndRotation
  #pragma pack(pop)
  static check_size<sizeof(VRControllersRecorderSaveData::PositionAndRotation), 40 + sizeof(float)> __GlobalNamespace_VRControllersRecorderSaveData_PositionAndRotationSizeCheck;
  static_assert(sizeof(VRControllersRecorderSaveData::PositionAndRotation) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation*, "", "VRControllersRecorderSaveData/PositionAndRotation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
