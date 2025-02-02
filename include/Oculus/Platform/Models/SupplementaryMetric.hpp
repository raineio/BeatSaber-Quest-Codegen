// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: SupplementaryMetric
  class SupplementaryMetric;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::SupplementaryMetric);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::SupplementaryMetric*, "Oculus.Platform.Models", "SupplementaryMetric");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.SupplementaryMetric
  // [TokenAttribute] Offset: FFFFFFFF
  class SupplementaryMetric : public ::Il2CppObject {
    public:
    public:
    // public readonly System.UInt64 ID
    // Size: 0x8
    // Offset: 0x10
    uint64_t _ID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.Int64 Metric
    // Size: 0x8
    // Offset: 0x18
    int64_t Metric;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Get instance field reference: public readonly System.UInt64 ID
    [[deprecated("Use field access instead!")]] uint64_t& dyn_ID();
    // Get instance field reference: public readonly System.Int64 Metric
    [[deprecated("Use field access instead!")]] int64_t& dyn_Metric();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1A39184
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SupplementaryMetric* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::SupplementaryMetric::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SupplementaryMetric*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.SupplementaryMetric
  #pragma pack(pop)
  static check_size<sizeof(SupplementaryMetric), 24 + sizeof(int64_t)> __Oculus_Platform_Models_SupplementaryMetricSizeCheck;
  static_assert(sizeof(SupplementaryMetric) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::SupplementaryMetric::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
