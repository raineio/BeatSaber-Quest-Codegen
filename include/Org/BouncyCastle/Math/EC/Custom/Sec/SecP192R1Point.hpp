// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.AbstractFpPoint
#include "Org/BouncyCastle/Math/EC/AbstractFpPoint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
  // Skipping declaration: ECPoint because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Point
  // [TokenAttribute] Offset: FFFFFFFF
  class SecP192R1Point : public Org::BouncyCastle::Math::EC::AbstractFpPoint {
    public:
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x1FB2FB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecP192R1Point* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecP192R1Point*, creationType>(curve, x, y)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Offset: 0x1FB329C
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractFpPoint
    // Base method: System.Void AbstractFpPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Base method: System.Void ECPointBase::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Base method: System.Void ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecP192R1Point* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecP192R1Point*, creationType>(curve, x, y, withCompression)));
    }
    // System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Offset: 0x1FB3400
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractFpPoint
    // Base method: System.Void AbstractFpPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Base method: System.Void ECPointBase::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Base method: System.Void ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecP192R1Point* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement*> zs, bool withCompression) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecP192R1Point*, creationType>(curve, x, y, zs, withCompression)));
    }
    // public override Org.BouncyCastle.Math.EC.ECPoint Add(Org.BouncyCastle.Math.EC.ECPoint b)
    // Offset: 0x1FB598C
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::Add(Org.BouncyCastle.Math.EC.ECPoint b)
    Org::BouncyCastle::Math::EC::ECPoint* Add(Org::BouncyCastle::Math::EC::ECPoint* b);
    // public override Org.BouncyCastle.Math.EC.ECPoint Twice()
    // Offset: 0x1FB6054
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::Twice()
    Org::BouncyCastle::Math::EC::ECPoint* Twice();
    // public override Org.BouncyCastle.Math.EC.ECPoint TwicePlus(Org.BouncyCastle.Math.EC.ECPoint b)
    // Offset: 0x1FB6514
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::TwicePlus(Org.BouncyCastle.Math.EC.ECPoint b)
    Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(Org::BouncyCastle::Math::EC::ECPoint* b);
    // public override Org.BouncyCastle.Math.EC.ECPoint ThreeTimes()
    // Offset: 0x1FB65E4
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::ThreeTimes()
    Org::BouncyCastle::Math::EC::ECPoint* ThreeTimes();
    // public override Org.BouncyCastle.Math.EC.ECPoint Negate()
    // Offset: 0x1FB6664
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::Negate()
    Org::BouncyCastle::Math::EC::ECPoint* Negate();
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Point
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192R1Point");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point::*)(Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point::Add)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point::Twice
// Il2CppName: Twice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point::Twice)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point*), "Twice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point::TwicePlus
// Il2CppName: TwicePlus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point::*)(Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point::TwicePlus)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point*), "TwicePlus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point::ThreeTimes
// Il2CppName: ThreeTimes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point::ThreeTimes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point*), "ThreeTimes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point::Negate
// Il2CppName: Negate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point::Negate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point*), "Negate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
