// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: IConstraint
  class IConstraint;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: IResolveConstraint
  class IResolveConstraint;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(NUnit::Framework::Constraints::IResolveConstraint);
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::IResolveConstraint*, "NUnit.Framework.Constraints", "IResolveConstraint");
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.IResolveConstraint
  // [TokenAttribute] Offset: FFFFFFFF
  class IResolveConstraint {
    public:
    // public NUnit.Framework.Constraints.IConstraint Resolve()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Constraints::IConstraint* Resolve();
  }; // NUnit.Framework.Constraints.IResolveConstraint
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::IResolveConstraint::Resolve
// Il2CppName: Resolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Constraints::IConstraint* (NUnit::Framework::Constraints::IResolveConstraint::*)()>(&NUnit::Framework::Constraints::IResolveConstraint::Resolve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::IResolveConstraint*), "Resolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
