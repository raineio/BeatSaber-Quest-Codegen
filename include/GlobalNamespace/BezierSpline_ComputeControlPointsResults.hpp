// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BezierSpline
#include "GlobalNamespace/BezierSpline.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: BezierSpline/ComputeControlPointsResults
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct BezierSpline::ComputeControlPointsResults/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public readonly System.Single[] p1
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<float> p1;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public readonly System.Single[] p2
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<float> p2;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    public:
    // Creating value type constructor for type: ComputeControlPointsResults
    constexpr ComputeControlPointsResults(::ArrayW<float> p1_ = ::ArrayW<float>(nullptr), ::ArrayW<float> p2_ = ::ArrayW<float>(nullptr)) noexcept : p1{p1_}, p2{p2_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public readonly System.Single[] p1
    ::ArrayW<float>& dyn_p1();
    // Get instance field reference: public readonly System.Single[] p2
    ::ArrayW<float>& dyn_p2();
    // public System.Void .ctor(System.Single[] p1, System.Single[] p2)
    // Offset: 0x12A8748
    // ABORTED: conflicts with another method.  ComputeControlPointsResults(::ArrayW<float> p1, ::ArrayW<float> p2);
  }; // BezierSpline/ComputeControlPointsResults
  #pragma pack(pop)
  static check_size<sizeof(BezierSpline::ComputeControlPointsResults), 8 + sizeof(::ArrayW<float>)> __GlobalNamespace_BezierSpline_ComputeControlPointsResultsSizeCheck;
  static_assert(sizeof(BezierSpline::ComputeControlPointsResults) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BezierSpline::ComputeControlPointsResults, "", "BezierSpline/ComputeControlPointsResults");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BezierSpline::ComputeControlPointsResults::ComputeControlPointsResults
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
