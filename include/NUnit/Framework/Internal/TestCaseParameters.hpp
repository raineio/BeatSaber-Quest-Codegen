// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.TestParameters
#include "NUnit/Framework/Internal/TestParameters.hpp"
// Including type: NUnit.Framework.Interfaces.ITestCaseData
#include "NUnit/Framework/Interfaces/ITestCaseData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestCaseParameters
  class TestCaseParameters;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(NUnit::Framework::Internal::TestCaseParameters);
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestCaseParameters*, "NUnit.Framework.Internal", "TestCaseParameters");
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestCaseParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class TestCaseParameters : public NUnit::Framework::Internal::TestParameters/*, public NUnit::Framework::Interfaces::ITestCaseData*/ {
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
    // private System.Object _expectedResult
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* expectedResult;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xF2FA9C
    // private System.Boolean <HasExpectedResult>k__BackingField
    // Size: 0x1
    // Offset: 0x40
    bool HasExpectedResult;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::ITestCaseData
    operator NUnit::Framework::Interfaces::ITestCaseData() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::ITestCaseData*>(this);
    }
    // Get instance field reference: private System.Object _expectedResult
    ::Il2CppObject*& dyn__expectedResult();
    // Get instance field reference: private System.Boolean <HasExpectedResult>k__BackingField
    bool& dyn_$HasExpectedResult$k__BackingField();
    // public System.Object get_ExpectedResult()
    // Offset: 0x2554EF0
    ::Il2CppObject* get_ExpectedResult();
    // public System.Boolean get_HasExpectedResult()
    // Offset: 0x2554EF8
    bool get_HasExpectedResult();
    // public System.Void .ctor()
    // Offset: 0x2554DF0
    // Implemented from: NUnit.Framework.Internal.TestParameters
    // Base method: System.Void TestParameters::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestCaseParameters* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestCaseParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestCaseParameters*, creationType>()));
    }
    // public System.Void .ctor(System.Object[] args)
    // Offset: 0x2554E64
    // Implemented from: NUnit.Framework.Internal.TestParameters
    // Base method: System.Void TestParameters::.ctor(System.Object[] args)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestCaseParameters* New_ctor(::ArrayW<::Il2CppObject*> args) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestCaseParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestCaseParameters*, creationType>(args)));
    }
  }; // NUnit.Framework.Internal.TestCaseParameters
  #pragma pack(pop)
  static check_size<sizeof(TestCaseParameters), 64 + sizeof(bool)> __NUnit_Framework_Internal_TestCaseParametersSizeCheck;
  static_assert(sizeof(TestCaseParameters) == 0x41);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestCaseParameters::get_ExpectedResult
// Il2CppName: get_ExpectedResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (NUnit::Framework::Internal::TestCaseParameters::*)()>(&NUnit::Framework::Internal::TestCaseParameters::get_ExpectedResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestCaseParameters*), "get_ExpectedResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestCaseParameters::get_HasExpectedResult
// Il2CppName: get_HasExpectedResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TestCaseParameters::*)()>(&NUnit::Framework::Internal::TestCaseParameters::get_HasExpectedResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestCaseParameters*), "get_HasExpectedResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestCaseParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestCaseParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
