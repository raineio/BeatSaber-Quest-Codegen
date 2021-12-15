// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.FixedPointUtilities
#include "Org/BouncyCastle/Math/EC/Multiplier/FixedPointUtilities.hpp"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.IPreCompCallback
#include "Org/BouncyCastle/Math/EC/Multiplier/IPreCompCallback.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
  // Forward declaring type: ECLookupTable
  class ECLookupTable;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: PreCompInfo
  class PreCompInfo;
  // Forward declaring type: FixedPointPreCompInfo
  class FixedPointPreCompInfo;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::FixedPointCallback);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::FixedPointCallback*, "Org.BouncyCastle.Math.EC.Multiplier", "FixedPointUtilities/FixedPointCallback");
// Type namespace: Org.BouncyCastle.Math.EC.Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Multiplier.FixedPointUtilities/Org.BouncyCastle.Math.EC.Multiplier.FixedPointCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class FixedPointUtilities::FixedPointCallback : public ::Il2CppObject/*, public Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*/ {
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
    // private readonly Org.BouncyCastle.Math.EC.ECPoint m_p
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::ECPoint* m_p;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECPoint*) == 0x8);
    public:
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
    operator Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(this);
    }
    // Creating conversion operator: operator Org::BouncyCastle::Math::EC::ECPoint*
    constexpr operator Org::BouncyCastle::Math::EC::ECPoint*() const noexcept {
      return m_p;
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Math.EC.ECPoint m_p
    Org::BouncyCastle::Math::EC::ECPoint*& dyn_m_p();
    // System.Void .ctor(Org.BouncyCastle.Math.EC.ECPoint p)
    // Offset: 0x1F60A3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FixedPointUtilities::FixedPointCallback* New_ctor(Org::BouncyCastle::Math::EC::ECPoint* p) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::FixedPointCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FixedPointUtilities::FixedPointCallback*, creationType>(p)));
    }
    // public Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo Precompute(Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo existing)
    // Offset: 0x1F60AC4
    Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);
    // private System.Boolean CheckExisting(Org.BouncyCastle.Math.EC.Multiplier.FixedPointPreCompInfo existingFP, System.Int32 n)
    // Offset: 0x1F60EFC
    bool CheckExisting(Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo* existingFP, int n);
    // private System.Boolean CheckTable(Org.BouncyCastle.Math.EC.ECLookupTable table, System.Int32 n)
    // Offset: 0x1F60F40
    bool CheckTable(Org::BouncyCastle::Math::EC::ECLookupTable* table, int n);
  }; // Org.BouncyCastle.Math.EC.Multiplier.FixedPointUtilities/Org.BouncyCastle.Math.EC.Multiplier.FixedPointCallback
  #pragma pack(pop)
  static check_size<sizeof(FixedPointUtilities::FixedPointCallback), 16 + sizeof(Org::BouncyCastle::Math::EC::ECPoint*)> __Org_BouncyCastle_Math_EC_Multiplier_FixedPointUtilities_FixedPointCallbackSizeCheck;
  static_assert(sizeof(FixedPointUtilities::FixedPointCallback) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::FixedPointCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::FixedPointCallback::Precompute
// Il2CppName: Precompute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::FixedPointCallback::*)(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(&Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::FixedPointCallback::Precompute)> {
  static const MethodInfo* get() {
    static auto* existing = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Multiplier", "PreCompInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::FixedPointCallback*), "Precompute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{existing});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::FixedPointCallback::CheckExisting
// Il2CppName: CheckExisting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::FixedPointCallback::*)(Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo*, int)>(&Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::FixedPointCallback::CheckExisting)> {
  static const MethodInfo* get() {
    static auto* existingFP = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Multiplier", "FixedPointPreCompInfo")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::FixedPointCallback*), "CheckExisting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{existingFP, n});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::FixedPointCallback::CheckTable
// Il2CppName: CheckTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::FixedPointCallback::*)(Org::BouncyCastle::Math::EC::ECLookupTable*, int)>(&Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::FixedPointCallback::CheckTable)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECLookupTable")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::FixedPointCallback*), "CheckTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table, n});
  }
};
