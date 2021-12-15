// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.Rfc8032.Ed25519
#include "Org/BouncyCastle/Math/EC/Rfc8032/Ed25519.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExt);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExt*, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed25519/PointExt");
// Type namespace: Org.BouncyCastle.Math.EC.Rfc8032
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/Org.BouncyCastle.Math.EC.Rfc8032.PointExt
  // [TokenAttribute] Offset: FFFFFFFF
  class Ed25519::PointExt : public ::Il2CppObject {
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
    // System.Int32[] x
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int> x;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Int32[] y
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<int> y;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Int32[] z
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<int> z;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Int32[] t
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<int> t;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Get instance field reference: System.Int32[] x
    ::ArrayW<int>& dyn_x();
    // Get instance field reference: System.Int32[] y
    ::ArrayW<int>& dyn_y();
    // Get instance field reference: System.Int32[] z
    ::ArrayW<int>& dyn_z();
    // Get instance field reference: System.Int32[] t
    ::ArrayW<int>& dyn_t();
    // public System.Void .ctor()
    // Offset: 0x1F69A78
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ed25519::PointExt* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExt::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ed25519::PointExt*, creationType>()));
    }
  }; // Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/Org.BouncyCastle.Math.EC.Rfc8032.PointExt
  #pragma pack(pop)
  static check_size<sizeof(Ed25519::PointExt), 40 + sizeof(::ArrayW<int>)> __Org_BouncyCastle_Math_EC_Rfc8032_Ed25519_PointExtSizeCheck;
  static_assert(sizeof(Ed25519::PointExt) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExt::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
