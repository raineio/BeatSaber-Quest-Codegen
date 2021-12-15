// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: ITestResult
  class ITestResult;
  // Forward declaring type: TestOutput
  class TestOutput;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestListener
  class ITestListener;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(NUnit::Framework::Interfaces::ITestListener);
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::ITestListener*, "NUnit.Framework.Interfaces", "ITestListener");
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.ITestListener
  // [TokenAttribute] Offset: FFFFFFFF
  class ITestListener {
    public:
    // public System.Void TestStarted(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFF
    void TestStarted(NUnit::Framework::Interfaces::ITest* test);
    // public System.Void TestFinished(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0xFFFFFFFF
    void TestFinished(NUnit::Framework::Interfaces::ITestResult* result);
    // public System.Void TestOutput(NUnit.Framework.Interfaces.TestOutput output)
    // Offset: 0xFFFFFFFF
    void TestOutput(NUnit::Framework::Interfaces::TestOutput* output);
  }; // NUnit.Framework.Interfaces.ITestListener
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestListener::TestStarted
// Il2CppName: TestStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::ITestListener::*)(NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Interfaces::ITestListener::TestStarted)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestListener*), "TestStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestListener::TestFinished
// Il2CppName: TestFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::ITestListener::*)(NUnit::Framework::Interfaces::ITestResult*)>(&NUnit::Framework::Interfaces::ITestListener::TestFinished)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestListener*), "TestFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestListener::TestOutput
// Il2CppName: TestOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::ITestListener::*)(NUnit::Framework::Interfaces::TestOutput*)>(&NUnit::Framework::Interfaces::ITestListener::TestOutput)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "TestOutput")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestListener*), "TestOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output});
  }
};
