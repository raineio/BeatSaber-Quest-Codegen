// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.NUnitAttribute
#include "NUnit/Framework/NUnitAttribute.hpp"
// Including type: NUnit.Framework.Interfaces.ITestBuilder
#include "NUnit/Framework/Interfaces/ITestBuilder.hpp"
// Including type: NUnit.Framework.Interfaces.IApplyToTest
#include "NUnit/Framework/Interfaces/IApplyToTest.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal::Builders
namespace NUnit::Framework::Internal::Builders {
  // Forward declaring type: NUnitTestCaseBuilder
  class NUnitTestCaseBuilder;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ICombiningStrategy
  class ICombiningStrategy;
  // Forward declaring type: IParameterDataProvider
  class IParameterDataProvider;
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
  // Forward declaring type: Test
  class Test;
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Forward declaring type: CombiningStrategyAttribute
  class CombiningStrategyAttribute;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(NUnit::Framework::CombiningStrategyAttribute);
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::CombiningStrategyAttribute*, "NUnit.Framework", "CombiningStrategyAttribute");
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.CombiningStrategyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: F2F1EC
  class CombiningStrategyAttribute : public NUnit::Framework::NUnitAttribute/*, public NUnit::Framework::Interfaces::ITestBuilder, public NUnit::Framework::Interfaces::IApplyToTest*/ {
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
    // private NUnit.Framework.Internal.Builders.NUnitTestCaseBuilder _builder
    // Size: 0x8
    // Offset: 0x10
    NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder* builder;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder*) == 0x8);
    // private NUnit.Framework.Interfaces.ICombiningStrategy _strategy
    // Size: 0x8
    // Offset: 0x18
    NUnit::Framework::Interfaces::ICombiningStrategy* strategy;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ICombiningStrategy*) == 0x8);
    // private NUnit.Framework.Interfaces.IParameterDataProvider _dataProvider
    // Size: 0x8
    // Offset: 0x20
    NUnit::Framework::Interfaces::IParameterDataProvider* dataProvider;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::IParameterDataProvider*) == 0x8);
    public:
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::ITestBuilder
    operator NUnit::Framework::Interfaces::ITestBuilder() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::ITestBuilder*>(this);
    }
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::IApplyToTest
    operator NUnit::Framework::Interfaces::IApplyToTest() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::IApplyToTest*>(this);
    }
    // Get instance field reference: private NUnit.Framework.Internal.Builders.NUnitTestCaseBuilder _builder
    NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder*& dyn__builder();
    // Get instance field reference: private NUnit.Framework.Interfaces.ICombiningStrategy _strategy
    NUnit::Framework::Interfaces::ICombiningStrategy*& dyn__strategy();
    // Get instance field reference: private NUnit.Framework.Interfaces.IParameterDataProvider _dataProvider
    NUnit::Framework::Interfaces::IParameterDataProvider*& dyn__dataProvider();
    // protected System.Void .ctor(NUnit.Framework.Interfaces.ICombiningStrategy strategy, NUnit.Framework.Interfaces.IParameterDataProvider provider)
    // Offset: 0x1934380
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CombiningStrategyAttribute* New_ctor(NUnit::Framework::Interfaces::ICombiningStrategy* strategy, NUnit::Framework::Interfaces::IParameterDataProvider* provider) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::CombiningStrategyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CombiningStrategyAttribute*, creationType>(strategy, provider)));
    }
    // public System.Collections.Generic.IEnumerable`1<NUnit.Framework.Internal.TestMethod> BuildFrom(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test suite)
    // Offset: 0x1934494
    System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestMethod*>* BuildFrom(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* suite);
    // public System.Void ApplyToTest(NUnit.Framework.Internal.Test test)
    // Offset: 0x1934E28
    void ApplyToTest(NUnit::Framework::Internal::Test* test);
  }; // NUnit.Framework.CombiningStrategyAttribute
  #pragma pack(pop)
  static check_size<sizeof(CombiningStrategyAttribute), 32 + sizeof(NUnit::Framework::Interfaces::IParameterDataProvider*)> __NUnit_Framework_CombiningStrategyAttributeSizeCheck;
  static_assert(sizeof(CombiningStrategyAttribute) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::CombiningStrategyAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::CombiningStrategyAttribute::BuildFrom
// Il2CppName: BuildFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestMethod*>* (NUnit::Framework::CombiningStrategyAttribute::*)(NUnit::Framework::Interfaces::IMethodInfo*, NUnit::Framework::Internal::Test*)>(&NUnit::Framework::CombiningStrategyAttribute::BuildFrom)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "IMethodInfo")->byval_arg;
    static auto* suite = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "Test")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::CombiningStrategyAttribute*), "BuildFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, suite});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::CombiningStrategyAttribute::ApplyToTest
// Il2CppName: ApplyToTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::CombiningStrategyAttribute::*)(NUnit::Framework::Internal::Test*)>(&NUnit::Framework::CombiningStrategyAttribute::ApplyToTest)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "Test")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::CombiningStrategyAttribute*), "ApplyToTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
