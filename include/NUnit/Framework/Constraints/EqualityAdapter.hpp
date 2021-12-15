// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: EqualityAdapter
  class EqualityAdapter;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(NUnit::Framework::Constraints::EqualityAdapter);
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::EqualityAdapter*, "NUnit.Framework.Constraints", "EqualityAdapter");
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.EqualityAdapter
  // [TokenAttribute] Offset: FFFFFFFF
  class EqualityAdapter : public ::Il2CppObject {
    public:
    // public System.Boolean AreEqual(System.Object x, System.Object y)
    // Offset: 0xFFFFFFFF
    bool AreEqual(::Il2CppObject* x, ::Il2CppObject* y);
    // public System.Boolean CanCompare(System.Object x, System.Object y)
    // Offset: 0x1939454
    bool CanCompare(::Il2CppObject* x, ::Il2CppObject* y);
  }; // NUnit.Framework.Constraints.EqualityAdapter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::EqualityAdapter::AreEqual
// Il2CppName: AreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::EqualityAdapter::*)(::Il2CppObject*, ::Il2CppObject*)>(&NUnit::Framework::Constraints::EqualityAdapter::AreEqual)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::EqualityAdapter*), "AreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::EqualityAdapter::CanCompare
// Il2CppName: CanCompare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::EqualityAdapter::*)(::Il2CppObject*, ::Il2CppObject*)>(&NUnit::Framework::Constraints::EqualityAdapter::CanCompare)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::EqualityAdapter*), "CanCompare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
