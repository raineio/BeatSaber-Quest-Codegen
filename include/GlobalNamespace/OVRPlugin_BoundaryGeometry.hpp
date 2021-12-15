// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/BoundaryType
#include "GlobalNamespace/OVRPlugin_BoundaryType.hpp"
// Including type: OVRPlugin/Vector3f
// Already included the same include: GlobalNamespace/OVRPlugin.hpp
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BoundaryGeometry
  struct BoundaryGeometry;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::BoundaryGeometry, "", "OVRPlugin/BoundaryGeometry");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/BoundaryGeometry
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::BoundaryGeometry/*, public System::ValueType*/ {
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
    // public OVRPlugin/BoundaryType BoundaryType
    // Size: 0x4
    // Offset: 0x0
    GlobalNamespace::OVRPlugin::BoundaryType BoundaryType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::BoundaryType) == 0x4);
    // Padding between fields: BoundaryType and: Points
    char __padding0[0x4] = {};
    // public OVRPlugin/Vector3f[] Points
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<GlobalNamespace::OVRPlugin::Vector3f> Points;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::OVRPlugin::Vector3f>) == 0x8);
    // public System.Int32 PointsCount
    // Size: 0x4
    // Offset: 0x10
    int PointsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BoundaryGeometry
    constexpr BoundaryGeometry(GlobalNamespace::OVRPlugin::BoundaryType BoundaryType_ = {}, ::ArrayW<GlobalNamespace::OVRPlugin::Vector3f> Points_ = ::ArrayW<GlobalNamespace::OVRPlugin::Vector3f>(nullptr), int PointsCount_ = {}) noexcept : BoundaryType{BoundaryType_}, Points{Points_}, PointsCount{PointsCount_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public OVRPlugin/BoundaryType BoundaryType
    GlobalNamespace::OVRPlugin::BoundaryType& dyn_BoundaryType();
    // Get instance field reference: public OVRPlugin/Vector3f[] Points
    ::ArrayW<GlobalNamespace::OVRPlugin::Vector3f>& dyn_Points();
    // Get instance field reference: public System.Int32 PointsCount
    int& dyn_PointsCount();
  }; // OVRPlugin/BoundaryGeometry
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::BoundaryGeometry), 16 + sizeof(int)> __GlobalNamespace_OVRPlugin_BoundaryGeometrySizeCheck;
  static_assert(sizeof(OVRPlugin::BoundaryGeometry) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
