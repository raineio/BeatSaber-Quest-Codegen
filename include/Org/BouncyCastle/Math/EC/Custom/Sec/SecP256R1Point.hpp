// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.AbstractFpPoint
#include "Org/BouncyCastle/Math/EC/AbstractFpPoint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1Point
  class SecP256R1Point : public Org::BouncyCastle::Math::EC::AbstractFpPoint {
    public:
    // Creating value type constructor for type: SecP256R1Point
    SecP256R1Point() noexcept {}
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x1E31860
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecP256R1Point* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecP256R1Point*, creationType>(curve, x, y)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Offset: 0x1E31B44
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractFpPoint
    // Base method: System.Void AbstractFpPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Base method: System.Void ECPointBase::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Base method: System.Void ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecP256R1Point* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecP256R1Point*, creationType>(curve, x, y, withCompression)));
    }
    // System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Offset: 0x1E31CA8
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractFpPoint
    // Base method: System.Void AbstractFpPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Base method: System.Void ECPointBase::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Base method: System.Void ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecP256R1Point* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, bool withCompression) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecP256R1Point*, creationType>(curve, x, y, zs, withCompression)));
    }
    // public override Org.BouncyCastle.Math.EC.ECPoint Add(Org.BouncyCastle.Math.EC.ECPoint b)
    // Offset: 0x1E34368
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::Add(Org.BouncyCastle.Math.EC.ECPoint b)
    Org::BouncyCastle::Math::EC::ECPoint* Add(Org::BouncyCastle::Math::EC::ECPoint* b);
    // public override Org.BouncyCastle.Math.EC.ECPoint Twice()
    // Offset: 0x1E34A30
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::Twice()
    Org::BouncyCastle::Math::EC::ECPoint* Twice();
    // public override Org.BouncyCastle.Math.EC.ECPoint TwicePlus(Org.BouncyCastle.Math.EC.ECPoint b)
    // Offset: 0x1E34EF0
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::TwicePlus(Org.BouncyCastle.Math.EC.ECPoint b)
    Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(Org::BouncyCastle::Math::EC::ECPoint* b);
    // public override Org.BouncyCastle.Math.EC.ECPoint ThreeTimes()
    // Offset: 0x1E34FC0
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::ThreeTimes()
    Org::BouncyCastle::Math::EC::ECPoint* ThreeTimes();
    // public override Org.BouncyCastle.Math.EC.ECPoint Negate()
    // Offset: 0x1E35040
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::Negate()
    Org::BouncyCastle::Math::EC::ECPoint* Negate();
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1Point
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP256R1Point");
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point::*)(Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point::Add)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECPoint*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point::Twice
// Il2CppName: Twice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point::Twice)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point*), "Twice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point::TwicePlus
// Il2CppName: TwicePlus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point::*)(Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point::TwicePlus)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point*), "TwicePlus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECPoint*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point::ThreeTimes
// Il2CppName: ThreeTimes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point::ThreeTimes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point*), "ThreeTimes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point::Negate
// Il2CppName: Negate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point::Negate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Point*), "Negate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
