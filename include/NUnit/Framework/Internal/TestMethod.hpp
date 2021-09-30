// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.Test
#include "NUnit/Framework/Internal/Test.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestCaseParameters
  class TestCaseParameters;
  // Forward declaring type: TestResult
  class TestResult;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
  // Skipping declaration: ITest because it is already included!
  // Forward declaring type: TNode
  class TNode;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestMethod
  // [TokenAttribute] Offset: FFFFFFFF
  class TestMethod : public NUnit::Framework::Internal::Test {
    public:
    // Writing base type padding for base size: 0x75 to desired offset: 0x78
    char ___base_padding[0x3] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public NUnit.Framework.Internal.TestCaseParameters parms
    // Size: 0x8
    // Offset: 0x78
    NUnit::Framework::Internal::TestCaseParameters* parms;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::TestCaseParameters*) == 0x8);
    public:
    // Creating conversion operator: operator NUnit::Framework::Internal::TestCaseParameters*
    constexpr operator NUnit::Framework::Internal::TestCaseParameters*() const noexcept {
      return parms;
    }
    // Get instance field reference: public NUnit.Framework.Internal.TestCaseParameters parms
    NUnit::Framework::Internal::TestCaseParameters*& dyn_parms();
    // System.Boolean get_HasExpectedResult()
    // Offset: 0x24A29B4
    bool get_HasExpectedResult();
    // System.Object get_ExpectedResult()
    // Offset: 0x24A29D4
    ::Il2CppObject* get_ExpectedResult();
    // System.Object[] get_Arguments()
    // Offset: 0x24A29EC
    ::ArrayW<::Il2CppObject*> get_Arguments();
    // public System.Void .ctor(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test parentSuite)
    // Offset: 0x24A28FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestMethod* New_ctor(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* parentSuite) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestMethod::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestMethod*, creationType>(method, parentSuite)));
    }
    // public override System.Boolean get_HasChildren()
    // Offset: 0x24A2A64
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Boolean Test::get_HasChildren()
    bool get_HasChildren();
    // public override System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> get_Tests()
    // Offset: 0x24A2B40
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> Test::get_Tests()
    System::Collections::Generic::IList_1<NUnit::Framework::Interfaces::ITest*>* get_Tests();
    // public override System.String get_XmlElementName()
    // Offset: 0x24A2B8C
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.String Test::get_XmlElementName()
    ::Il2CppString* get_XmlElementName();
    // public override System.String get_MethodName()
    // Offset: 0x24A2BD4
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.String Test::get_MethodName()
    ::Il2CppString* get_MethodName();
    // public override NUnit.Framework.Internal.TestResult MakeTestResult()
    // Offset: 0x24A2A04
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: NUnit.Framework.Internal.TestResult Test::MakeTestResult()
    NUnit::Framework::Internal::TestResult* MakeTestResult();
    // public override NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0x24A2A6C
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: NUnit.Framework.Interfaces.TNode Test::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
  }; // NUnit.Framework.Internal.TestMethod
  #pragma pack(pop)
  static check_size<sizeof(TestMethod), 120 + sizeof(NUnit::Framework::Internal::TestCaseParameters*)> __NUnit_Framework_Internal_TestMethodSizeCheck;
  static_assert(sizeof(TestMethod) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestMethod*, "NUnit.Framework.Internal", "TestMethod");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestMethod::get_HasExpectedResult
// Il2CppName: get_HasExpectedResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TestMethod::*)()>(&NUnit::Framework::Internal::TestMethod::get_HasExpectedResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestMethod*), "get_HasExpectedResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestMethod::get_ExpectedResult
// Il2CppName: get_ExpectedResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (NUnit::Framework::Internal::TestMethod::*)()>(&NUnit::Framework::Internal::TestMethod::get_ExpectedResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestMethod*), "get_ExpectedResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestMethod::get_Arguments
// Il2CppName: get_Arguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (NUnit::Framework::Internal::TestMethod::*)()>(&NUnit::Framework::Internal::TestMethod::get_Arguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestMethod*), "get_Arguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestMethod::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestMethod::get_HasChildren
// Il2CppName: get_HasChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TestMethod::*)()>(&NUnit::Framework::Internal::TestMethod::get_HasChildren)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestMethod*), "get_HasChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestMethod::get_Tests
// Il2CppName: get_Tests
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<NUnit::Framework::Interfaces::ITest*>* (NUnit::Framework::Internal::TestMethod::*)()>(&NUnit::Framework::Internal::TestMethod::get_Tests)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestMethod*), "get_Tests", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestMethod::get_XmlElementName
// Il2CppName: get_XmlElementName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::TestMethod::*)()>(&NUnit::Framework::Internal::TestMethod::get_XmlElementName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestMethod*), "get_XmlElementName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestMethod::get_MethodName
// Il2CppName: get_MethodName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::TestMethod::*)()>(&NUnit::Framework::Internal::TestMethod::get_MethodName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestMethod*), "get_MethodName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestMethod::MakeTestResult
// Il2CppName: MakeTestResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::TestResult* (NUnit::Framework::Internal::TestMethod::*)()>(&NUnit::Framework::Internal::TestMethod::MakeTestResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestMethod*), "MakeTestResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestMethod::AddToXml
// Il2CppName: AddToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Internal::TestMethod::*)(NUnit::Framework::Interfaces::TNode*, bool)>(&NUnit::Framework::Internal::TestMethod::AddToXml)> {
  static const MethodInfo* get() {
    static auto* parentNode = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "TNode")->byval_arg;
    static auto* recursive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestMethod*), "AddToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentNode, recursive});
  }
};
