// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Commands.DelegatingTestCommand
#include "NUnit/Framework/Internal/Commands/DelegatingTestCommand.hpp"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.IEnumerableTestMethodCommand
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/IEnumerableTestMethodCommand.hpp"
// Including type: NUnit.Framework.RetryAttribute
#include "NUnit/Framework/RetryAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools
namespace UnityEngine::TestTools {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
  // Forward declaring type: TestResult
  class TestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.EnumerableRetryTestCommand
  class EnumerableRetryTestCommand : public NUnit::Framework::Internal::Commands::DelegatingTestCommand/*, public UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand*/ {
    public:
    // Nested type: UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3
    class $ExecuteEnumerable$d__3;
    // private System.Int32 retryCount
    // Size: 0x4
    // Offset: 0x20
    int retryCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EnumerableRetryTestCommand
    EnumerableRetryTestCommand(int retryCount_ = {}) noexcept : retryCount{retryCount_} {}
    // Creating interface conversion operator: operator UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand
    operator UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand() noexcept {
      return *reinterpret_cast<UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand*>(this);
    }
    // public System.Void .ctor(NUnit.Framework.RetryAttribute/RetryCommand commandToReplace)
    // Offset: 0x14AD3A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumerableRetryTestCommand* New_ctor(NUnit::Framework::RetryAttribute::RetryCommand* commandToReplace) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::EnumerableRetryTestCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumerableRetryTestCommand*, creationType>(commandToReplace)));
    }
    // public System.Collections.IEnumerable ExecuteEnumerable(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x14B5AB0
    System::Collections::IEnumerable* ExecuteEnumerable(NUnit::Framework::Internal::ITestExecutionContext* context);
    // public override NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x14B5A44
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: NUnit.Framework.Internal.TestResult TestCommand::Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    NUnit::Framework::Internal::TestResult* Execute(NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // UnityEngine.TestTools.EnumerableRetryTestCommand
  #pragma pack(pop)
  static check_size<sizeof(EnumerableRetryTestCommand), 32 + sizeof(int)> __UnityEngine_TestTools_EnumerableRetryTestCommandSizeCheck;
  static_assert(sizeof(EnumerableRetryTestCommand) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::EnumerableRetryTestCommand*, "UnityEngine.TestTools", "EnumerableRetryTestCommand");
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableRetryTestCommand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableRetryTestCommand::ExecuteEnumerable
// Il2CppName: ExecuteEnumerable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable* (UnityEngine::TestTools::EnumerableRetryTestCommand::*)(NUnit::Framework::Internal::ITestExecutionContext*)>(&UnityEngine::TestTools::EnumerableRetryTestCommand::ExecuteEnumerable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableRetryTestCommand*), "ExecuteEnumerable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Internal::ITestExecutionContext*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableRetryTestCommand::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::TestResult* (UnityEngine::TestTools::EnumerableRetryTestCommand::*)(NUnit::Framework::Internal::ITestExecutionContext*)>(&UnityEngine::TestTools::EnumerableRetryTestCommand::Execute)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableRetryTestCommand*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Internal::ITestExecutionContext*>()});
  }
};
