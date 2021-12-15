// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityWorkItem
  class UnityWorkItem;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: ITestFilter
  class ITestFilter;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: WorkItemFactory
  class WorkItemFactory;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "WorkItemFactory");
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class WorkItemFactory : public ::Il2CppObject {
    public:
    // public UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem Create(NUnit.Framework.Interfaces.ITest loadedTest, NUnit.Framework.Interfaces.ITestFilter filter)
    // Offset: 0x16BF9C8
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* Create(NUnit::Framework::Interfaces::ITest* loadedTest, NUnit::Framework::Interfaces::ITestFilter* filter);
    // protected UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem Create(NUnit.Framework.Internal.TestMethod method, NUnit.Framework.Interfaces.ITestFilter filter, NUnit.Framework.Interfaces.ITest loadedTest)
    // Offset: 0xFFFFFFFF
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* Create(NUnit::Framework::Internal::TestMethod* method, NUnit::Framework::Interfaces::ITestFilter* filter, NUnit::Framework::Interfaces::ITest* loadedTest);
    // protected System.Void .ctor()
    // Offset: 0x16C44D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WorkItemFactory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WorkItemFactory*, creationType>()));
    }
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* (UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory::*)(NUnit::Framework::Interfaces::ITest*, NUnit::Framework::Interfaces::ITestFilter*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory::Create)> {
  static const MethodInfo* get() {
    static auto* loadedTest = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    static auto* filter = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestFilter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loadedTest, filter});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* (UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory::*)(NUnit::Framework::Internal::TestMethod*, NUnit::Framework::Interfaces::ITestFilter*, NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory::Create)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestMethod")->byval_arg;
    static auto* filter = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestFilter")->byval_arg;
    static auto* loadedTest = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, filter, loadedTest});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
