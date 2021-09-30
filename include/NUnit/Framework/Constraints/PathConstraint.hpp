// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Constraints.StringConstraint
#include "NUnit/Framework/Constraints/StringConstraint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.PathConstraint
  // [TokenAttribute] Offset: FFFFFFFF
  class PathConstraint : public NUnit::Framework::Constraints::StringConstraint {
    public:
    // Get static field: static private readonly System.Char[] DirectorySeparatorChars
    static ::ArrayW<::Il2CppChar> _get_DirectorySeparatorChars();
    // Set static field: static private readonly System.Char[] DirectorySeparatorChars
    static void _set_DirectorySeparatorChars(::ArrayW<::Il2CppChar> value);
    // static private System.Void .cctor()
    // Offset: 0x1935094
    static void _cctor();
    // protected System.String Canonicalize(System.String path)
    // Offset: 0x1934D90
    ::Il2CppString* Canonicalize(::Il2CppString* path);
    // protected System.Void .ctor(System.String expected)
    // Offset: 0x1934BA8
    // Implemented from: NUnit.Framework.Constraints.StringConstraint
    // Base method: System.Void StringConstraint::.ctor(System.String expected)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PathConstraint* New_ctor(::Il2CppString* expected) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::PathConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PathConstraint*, creationType>(expected)));
    }
    // protected override System.String GetStringRepresentation()
    // Offset: 0x1934CF4
    // Implemented from: NUnit.Framework.Constraints.Constraint
    // Base method: System.String Constraint::GetStringRepresentation()
    ::Il2CppString* GetStringRepresentation();
  }; // NUnit.Framework.Constraints.PathConstraint
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::PathConstraint*, "NUnit.Framework.Constraints", "PathConstraint");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::PathConstraint::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Constraints::PathConstraint::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::PathConstraint*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::PathConstraint::Canonicalize
// Il2CppName: Canonicalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Constraints::PathConstraint::*)(::Il2CppString*)>(&NUnit::Framework::Constraints::PathConstraint::Canonicalize)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::PathConstraint*), "Canonicalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::PathConstraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::PathConstraint::GetStringRepresentation
// Il2CppName: GetStringRepresentation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Constraints::PathConstraint::*)()>(&NUnit::Framework::Constraints::PathConstraint::GetStringRepresentation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::PathConstraint*), "GetStringRepresentation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
