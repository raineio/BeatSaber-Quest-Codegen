// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.Test
#include "NUnit/Framework/Internal/Test.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Skipping declaration: ITest because it is already included!
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
  // Forward declaring type: TNode
  class TNode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestResult
  class TestResult;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(NUnit::Framework::Internal::TestSuite);
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestSuite*, "NUnit.Framework.Internal", "TestSuite");
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x89
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestSuite
  // [TokenAttribute] Offset: FFFFFFFF
  class TestSuite : public NUnit::Framework::Internal::Test {
    public:
    // Writing base type padding for base size: 0x75 to desired offset: 0x78
    char ___base_padding[0x3] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITest> tests
    // Size: 0x8
    // Offset: 0x78
    System::Collections::Generic::List_1<NUnit::Framework::Interfaces::ITest*>* tests;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<NUnit::Framework::Interfaces::ITest*>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xF300B4
    // private System.Object[] <Arguments>k__BackingField
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<::Il2CppObject*> Arguments;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xF300F0
    // private System.Boolean <MaintainTestOrder>k__BackingField
    // Size: 0x1
    // Offset: 0x88
    bool MaintainTestOrder;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITest> tests
    System::Collections::Generic::List_1<NUnit::Framework::Interfaces::ITest*>*& dyn_tests();
    // Get instance field reference: private System.Object[] <Arguments>k__BackingField
    ::ArrayW<::Il2CppObject*>& dyn_$Arguments$k__BackingField();
    // Get instance field reference: private System.Boolean <MaintainTestOrder>k__BackingField
    bool& dyn_$MaintainTestOrder$k__BackingField();
    // public System.Object[] get_Arguments()
    // Offset: 0x255A594
    ::ArrayW<::Il2CppObject*> get_Arguments();
    // System.Void set_Arguments(System.Object[] value)
    // Offset: 0x255A59C
    void set_Arguments(::ArrayW<::Il2CppObject*> value);
    // protected System.Boolean get_MaintainTestOrder()
    // Offset: 0x255A5A4
    bool get_MaintainTestOrder();
    // protected System.Void set_MaintainTestOrder(System.Boolean value)
    // Offset: 0x255A5AC
    void set_MaintainTestOrder(bool value);
    // public System.Void Sort()
    // Offset: 0x2559F5C
    void Sort();
    // public System.Void Add(NUnit.Framework.Internal.Test test)
    // Offset: 0x255A250
    void Add(NUnit::Framework::Internal::Test* test);
    // protected System.Void CheckSetUpTearDownMethods(System.Type attrType)
    // Offset: 0x255603C
    void CheckSetUpTearDownMethods(System::Type* attrType);
    // public override System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> get_Tests()
    // Offset: 0x255A2C0
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> Test::get_Tests()
    System::Collections::Generic::IList_1<NUnit::Framework::Interfaces::ITest*>* get_Tests();
    // public override System.Int32 get_TestCaseCount()
    // Offset: 0x255A2C8
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Int32 Test::get_TestCaseCount()
    int get_TestCaseCount();
    // public override System.Boolean get_HasChildren()
    // Offset: 0x255A6BC
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Boolean Test::get_HasChildren()
    bool get_HasChildren();
    // public override System.String get_XmlElementName()
    // Offset: 0x255A714
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.String Test::get_XmlElementName()
    ::Il2CppString* get_XmlElementName();
    // public System.Void .ctor(System.String name)
    // Offset: 0x2554C58
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Void Test::.ctor(System.String name)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestSuite* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestSuite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestSuite*, creationType>(name)));
    }
    // public System.Void .ctor(System.String parentSuiteName, System.String name)
    // Offset: 0x2551A94
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Void Test::.ctor(System.String parentSuiteName, System.String name)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestSuite* New_ctor(::Il2CppString* parentSuiteName, ::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestSuite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestSuite*, creationType>(parentSuiteName, name)));
    }
    // public System.Void .ctor(NUnit.Framework.Interfaces.ITypeInfo fixtureType)
    // Offset: 0x2555F84
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Void Test::.ctor(NUnit.Framework.Interfaces.ITypeInfo fixtureType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestSuite* New_ctor(NUnit::Framework::Interfaces::ITypeInfo* fixtureType) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestSuite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestSuite*, creationType>(fixtureType)));
    }
    // public override NUnit.Framework.Internal.TestResult MakeTestResult()
    // Offset: 0x255A5B8
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: NUnit.Framework.Internal.TestResult Test::MakeTestResult()
    NUnit::Framework::Internal::TestResult* MakeTestResult();
    // public override NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0x255A75C
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: NUnit.Framework.Interfaces.TNode Test::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
  }; // NUnit.Framework.Internal.TestSuite
  #pragma pack(pop)
  static check_size<sizeof(TestSuite), 136 + sizeof(bool)> __NUnit_Framework_Internal_TestSuiteSizeCheck;
  static_assert(sizeof(TestSuite) == 0x89);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::get_Arguments
// Il2CppName: get_Arguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (NUnit::Framework::Internal::TestSuite::*)()>(&NUnit::Framework::Internal::TestSuite::get_Arguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestSuite*), "get_Arguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::set_Arguments
// Il2CppName: set_Arguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestSuite::*)(::ArrayW<::Il2CppObject*>)>(&NUnit::Framework::Internal::TestSuite::set_Arguments)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestSuite*), "set_Arguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::get_MaintainTestOrder
// Il2CppName: get_MaintainTestOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TestSuite::*)()>(&NUnit::Framework::Internal::TestSuite::get_MaintainTestOrder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestSuite*), "get_MaintainTestOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::set_MaintainTestOrder
// Il2CppName: set_MaintainTestOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestSuite::*)(bool)>(&NUnit::Framework::Internal::TestSuite::set_MaintainTestOrder)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestSuite*), "set_MaintainTestOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::Sort
// Il2CppName: Sort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestSuite::*)()>(&NUnit::Framework::Internal::TestSuite::Sort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestSuite*), "Sort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestSuite::*)(NUnit::Framework::Internal::Test*)>(&NUnit::Framework::Internal::TestSuite::Add)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "Test")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestSuite*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::CheckSetUpTearDownMethods
// Il2CppName: CheckSetUpTearDownMethods
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestSuite::*)(System::Type*)>(&NUnit::Framework::Internal::TestSuite::CheckSetUpTearDownMethods)> {
  static const MethodInfo* get() {
    static auto* attrType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestSuite*), "CheckSetUpTearDownMethods", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attrType});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::get_Tests
// Il2CppName: get_Tests
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<NUnit::Framework::Interfaces::ITest*>* (NUnit::Framework::Internal::TestSuite::*)()>(&NUnit::Framework::Internal::TestSuite::get_Tests)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestSuite*), "get_Tests", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::get_TestCaseCount
// Il2CppName: get_TestCaseCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Internal::TestSuite::*)()>(&NUnit::Framework::Internal::TestSuite::get_TestCaseCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestSuite*), "get_TestCaseCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::get_HasChildren
// Il2CppName: get_HasChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TestSuite::*)()>(&NUnit::Framework::Internal::TestSuite::get_HasChildren)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestSuite*), "get_HasChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::get_XmlElementName
// Il2CppName: get_XmlElementName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::TestSuite::*)()>(&NUnit::Framework::Internal::TestSuite::get_XmlElementName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestSuite*), "get_XmlElementName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::MakeTestResult
// Il2CppName: MakeTestResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::TestResult* (NUnit::Framework::Internal::TestSuite::*)()>(&NUnit::Framework::Internal::TestSuite::MakeTestResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestSuite*), "MakeTestResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::AddToXml
// Il2CppName: AddToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Internal::TestSuite::*)(NUnit::Framework::Interfaces::TNode*, bool)>(&NUnit::Framework::Internal::TestSuite::AddToXml)> {
  static const MethodInfo* get() {
    static auto* parentNode = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "TNode")->byval_arg;
    static auto* recursive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestSuite*), "AddToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentNode, recursive});
  }
};
