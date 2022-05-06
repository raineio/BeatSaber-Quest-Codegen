// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: Tolerance
  class Tolerance;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Decimal
  struct Decimal;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: Numerics
  class Numerics;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Constraints::Numerics);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Constraints::Numerics*, "NUnit.Framework.Constraints", "Numerics");
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.Numerics
  // [TokenAttribute] Offset: FFFFFFFF
  class Numerics : public ::Il2CppObject {
    public:
    // static public System.Boolean IsNumericType(System.Object obj)
    // Offset: 0x1C9B8BC
    static bool IsNumericType(::Il2CppObject* obj);
    // static public System.Boolean IsFloatingPointNumeric(System.Object obj)
    // Offset: 0x1C9CAC4
    static bool IsFloatingPointNumeric(::Il2CppObject* obj);
    // static public System.Boolean IsFixedPointNumeric(System.Object obj)
    // Offset: 0x1C9CB3C
    static bool IsFixedPointNumeric(::Il2CppObject* obj);
    // static public System.Boolean AreEqual(System.Object expected, System.Object actual, ref NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0x1C9B8F4
    static bool AreEqual(::Il2CppObject* expected, ::Il2CppObject* actual, ByRef<::NUnit::Framework::Constraints::Tolerance*> tolerance);
    // static private System.Boolean AreEqual(System.Double expected, System.Double actual, ref NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0x1C9CC54
    static bool AreEqual(double expected, double actual, ByRef<::NUnit::Framework::Constraints::Tolerance*> tolerance);
    // static private System.Boolean AreEqual(System.Single expected, System.Single actual, ref NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0x1C9CFB4
    static bool AreEqual(float expected, float actual, ByRef<::NUnit::Framework::Constraints::Tolerance*> tolerance);
    // static private System.Boolean AreEqual(System.Decimal expected, System.Decimal actual, NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0x1C9D2A8
    static bool AreEqual(::System::Decimal expected, ::System::Decimal actual, ::NUnit::Framework::Constraints::Tolerance* tolerance);
    // static private System.Boolean AreEqual(System.UInt64 expected, System.UInt64 actual, NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0x1C9D5B0
    static bool AreEqual(uint64_t expected, uint64_t actual, ::NUnit::Framework::Constraints::Tolerance* tolerance);
    // static private System.Boolean AreEqual(System.Int64 expected, System.Int64 actual, NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0x1C9D774
    static bool AreEqual(int64_t expected, int64_t actual, ::NUnit::Framework::Constraints::Tolerance* tolerance);
    // static private System.Boolean AreEqual(System.UInt32 expected, System.UInt32 actual, NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0x1C9D93C
    static bool AreEqual(uint expected, uint actual, ::NUnit::Framework::Constraints::Tolerance* tolerance);
    // static private System.Boolean AreEqual(System.Int32 expected, System.Int32 actual, NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0x1C9DB00
    static bool AreEqual(int expected, int actual, ::NUnit::Framework::Constraints::Tolerance* tolerance);
  }; // NUnit.Framework.Constraints.Numerics
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Numerics::IsNumericType
// Il2CppName: IsNumericType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*)>(&NUnit::Framework::Constraints::Numerics::IsNumericType)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Numerics*), "IsNumericType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Numerics::IsFloatingPointNumeric
// Il2CppName: IsFloatingPointNumeric
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*)>(&NUnit::Framework::Constraints::Numerics::IsFloatingPointNumeric)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Numerics*), "IsFloatingPointNumeric", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Numerics::IsFixedPointNumeric
// Il2CppName: IsFixedPointNumeric
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*)>(&NUnit::Framework::Constraints::Numerics::IsFixedPointNumeric)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Numerics*), "IsFixedPointNumeric", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Numerics::AreEqual
// Il2CppName: AreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*, ::Il2CppObject*, ByRef<::NUnit::Framework::Constraints::Tolerance*>)>(&NUnit::Framework::Constraints::Numerics::AreEqual)> {
  static const MethodInfo* get() {
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* tolerance = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "Tolerance")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Numerics*), "AreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected, actual, tolerance});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Numerics::AreEqual
// Il2CppName: AreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(double, double, ByRef<::NUnit::Framework::Constraints::Tolerance*>)>(&NUnit::Framework::Constraints::Numerics::AreEqual)> {
  static const MethodInfo* get() {
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* tolerance = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "Tolerance")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Numerics*), "AreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected, actual, tolerance});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Numerics::AreEqual
// Il2CppName: AreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float, float, ByRef<::NUnit::Framework::Constraints::Tolerance*>)>(&NUnit::Framework::Constraints::Numerics::AreEqual)> {
  static const MethodInfo* get() {
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* tolerance = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "Tolerance")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Numerics*), "AreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected, actual, tolerance});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Numerics::AreEqual
// Il2CppName: AreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Decimal, ::System::Decimal, ::NUnit::Framework::Constraints::Tolerance*)>(&NUnit::Framework::Constraints::Numerics::AreEqual)> {
  static const MethodInfo* get() {
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    static auto* tolerance = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "Tolerance")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Numerics*), "AreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected, actual, tolerance});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Numerics::AreEqual
// Il2CppName: AreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t, uint64_t, ::NUnit::Framework::Constraints::Tolerance*)>(&NUnit::Framework::Constraints::Numerics::AreEqual)> {
  static const MethodInfo* get() {
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* tolerance = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "Tolerance")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Numerics*), "AreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected, actual, tolerance});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Numerics::AreEqual
// Il2CppName: AreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int64_t, int64_t, ::NUnit::Framework::Constraints::Tolerance*)>(&NUnit::Framework::Constraints::Numerics::AreEqual)> {
  static const MethodInfo* get() {
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* tolerance = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "Tolerance")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Numerics*), "AreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected, actual, tolerance});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Numerics::AreEqual
// Il2CppName: AreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint, uint, ::NUnit::Framework::Constraints::Tolerance*)>(&NUnit::Framework::Constraints::Numerics::AreEqual)> {
  static const MethodInfo* get() {
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* tolerance = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "Tolerance")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Numerics*), "AreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected, actual, tolerance});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Numerics::AreEqual
// Il2CppName: AreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, int, ::NUnit::Framework::Constraints::Tolerance*)>(&NUnit::Framework::Constraints::Numerics::AreEqual)> {
  static const MethodInfo* get() {
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* tolerance = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "Tolerance")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::Numerics*), "AreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected, actual, tolerance});
  }
};
