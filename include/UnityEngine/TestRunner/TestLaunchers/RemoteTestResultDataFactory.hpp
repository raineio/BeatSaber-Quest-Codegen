// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestRunner.TestLaunchers.IRemoteTestResultDataFactory
#include "UnityEngine/TestRunner/TestLaunchers/IRemoteTestResultDataFactory.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Forward declaring type: RemoteTestResultDataWithTestData
  class RemoteTestResultDataWithTestData;
  // Forward declaring type: RemoteTestData
  class RemoteTestData;
  // Forward declaring type: RemoteTestResultData
  class RemoteTestResultData;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestResult
  class ITestResult;
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Forward declaring type: RemoteTestResultDataFactory
  class RemoteTestResultDataFactory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataFactory*, "UnityEngine.TestRunner.TestLaunchers", "RemoteTestResultDataFactory");
// Type namespace: UnityEngine.TestRunner.TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.TestLaunchers.RemoteTestResultDataFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class RemoteTestResultDataFactory : public ::Il2CppObject/*, public ::UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory
    operator ::UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory() noexcept {
      return *reinterpret_cast<::UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory*>(this);
    }
    // Creating interface conversion operator: i_IRemoteTestResultDataFactory
    inline ::UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory* i_IRemoteTestResultDataFactory() noexcept {
      return reinterpret_cast<::UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x197B294
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteTestResultDataFactory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataFactory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteTestResultDataFactory*, creationType>()));
    }
    // public UnityEngine.TestRunner.TestLaunchers.RemoteTestResultDataWithTestData CreateFromTestResult(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0x197ABFC
    ::UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataWithTestData* CreateFromTestResult(::NUnit::Framework::Interfaces::ITestResult* result);
    // public UnityEngine.TestRunner.TestLaunchers.RemoteTestResultDataWithTestData CreateFromTest(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x197B17C
    ::UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataWithTestData* CreateFromTest(::NUnit::Framework::Interfaces::ITest* test);
    // private UnityEngine.TestRunner.TestLaunchers.RemoteTestData[] CreateTestDataList(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x197AD58
    ::ArrayW<::UnityEngine::TestRunner::TestLaunchers::RemoteTestData*> CreateTestDataList(::NUnit::Framework::Interfaces::ITest* test);
    // static private UnityEngine.TestRunner.TestLaunchers.RemoteTestResultData[] CreateTestResultDataList(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0x197AEF8
    static ::ArrayW<::UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData*> CreateTestResultDataList(::NUnit::Framework::Interfaces::ITestResult* result);
  }; // UnityEngine.TestRunner.TestLaunchers.RemoteTestResultDataFactory
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataFactory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataFactory::CreateFromTestResult
// Il2CppName: CreateFromTestResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataWithTestData* (UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataFactory::*)(::NUnit::Framework::Interfaces::ITestResult*)>(&UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataFactory::CreateFromTestResult)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataFactory*), "CreateFromTestResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataFactory::CreateFromTest
// Il2CppName: CreateFromTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataWithTestData* (UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataFactory::*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataFactory::CreateFromTest)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataFactory*), "CreateFromTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataFactory::CreateTestDataList
// Il2CppName: CreateTestDataList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::TestRunner::TestLaunchers::RemoteTestData*> (UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataFactory::*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataFactory::CreateTestDataList)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataFactory*), "CreateTestDataList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataFactory::CreateTestResultDataList
// Il2CppName: CreateTestResultDataList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData*> (*)(::NUnit::Framework::Interfaces::ITestResult*)>(&UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataFactory::CreateTestResultDataList)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataFactory*), "CreateTestResultDataList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
