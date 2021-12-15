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
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointPrecomp);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointPrecomp*, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed25519/PointPrecomp");
// Type namespace: Org.BouncyCastle.Math.EC.Rfc8032
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/Org.BouncyCastle.Math.EC.Rfc8032.PointPrecomp
  // [TokenAttribute] Offset: FFFFFFFF
  class Ed25519::PointPrecomp : public ::Il2CppObject {
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
    // System.Int32[] ypx_h
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int> ypx_h;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Int32[] ymx_h
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<int> ymx_h;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Int32[] xyd
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<int> xyd;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Get instance field reference: System.Int32[] ypx_h
    ::ArrayW<int>& dyn_ypx_h();
    // Get instance field reference: System.Int32[] ymx_h
    ::ArrayW<int>& dyn_ymx_h();
    // Get instance field reference: System.Int32[] xyd
    ::ArrayW<int>& dyn_xyd();
    // public System.Void .ctor()
    // Offset: 0x1F6AB28
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ed25519::PointPrecomp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointPrecomp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ed25519::PointPrecomp*, creationType>()));
    }
  }; // Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/Org.BouncyCastle.Math.EC.Rfc8032.PointPrecomp
  #pragma pack(pop)
  static check_size<sizeof(Ed25519::PointPrecomp), 32 + sizeof(::ArrayW<int>)> __Org_BouncyCastle_Math_EC_Rfc8032_Ed25519_PointPrecompSizeCheck;
  static_assert(sizeof(Ed25519::PointPrecomp) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointPrecomp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
