// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.BeforeAfterTestCommandBase`1
#include "UnityEngine/TestTools/BeforeAfterTestCommandBase_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: BeforeAfterTestCommandState
  class BeforeAfterTestCommandState;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
}
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityTestExecutionContext
  class UnityTestExecutionContext;
}
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Skipping declaration: TestCommand because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.TestTools.EnumerableSetUpTearDownCommand
  class EnumerableSetUpTearDownCommand : public UnityEngine::TestTools::BeforeAfterTestCommandBase_1<System::Reflection::MethodInfo*> {
    public:
    // Nested type: UnityEngine::TestTools::EnumerableSetUpTearDownCommand::$$c
    class $$c;
    // Creating value type constructor for type: EnumerableSetUpTearDownCommand
    EnumerableSetUpTearDownCommand() noexcept {}
    // static private System.Reflection.MethodInfo[] GetMethodsWithAttributeFromFixture(System.Type fixtureType, System.Type setUpType)
    // Offset: 0x14B634C
    static ::Array<System::Reflection::MethodInfo*>* GetMethodsWithAttributeFromFixture(System::Type* fixtureType, System::Type* setUpType);
    // protected System.Collections.IEnumerator InvokeBefore(System.Reflection.MethodInfo action, NUnit.Framework.Internal.Test test, UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0x14B648C
    System::Collections::IEnumerator* InvokeBefore(System::Reflection::MethodInfo* action, NUnit::Framework::Internal::Test* test, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context);
    // protected System.Collections.IEnumerator InvokeAfter(System.Reflection.MethodInfo action, NUnit.Framework.Internal.Test test, UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0x14B6540
    System::Collections::IEnumerator* InvokeAfter(System::Reflection::MethodInfo* action, NUnit::Framework::Internal::Test* test, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context);
    // public System.Void .ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand)
    // Offset: 0x14ACE18
    // Implemented from: NUnit.Framework.Internal.Commands.DelegatingTestCommand
    // Base method: System.Void DelegatingTestCommand::.ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumerableSetUpTearDownCommand* New_ctor(NUnit::Framework::Internal::Commands::TestCommand* innerCommand) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::EnumerableSetUpTearDownCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumerableSetUpTearDownCommand*, creationType>(innerCommand)));
    }
    // protected override UnityEngine.TestTools.BeforeAfterTestCommandState GetState(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0x14B65F4
    // Implemented from: UnityEngine.TestTools.BeforeAfterTestCommandBase`1
    // Base method: UnityEngine.TestTools.BeforeAfterTestCommandState BeforeAfterTestCommandBase_1::GetState(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    UnityEngine::TestTools::BeforeAfterTestCommandState* GetState(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context);
  }; // UnityEngine.TestTools.EnumerableSetUpTearDownCommand
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::EnumerableSetUpTearDownCommand*, "UnityEngine.TestTools", "EnumerableSetUpTearDownCommand");
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableSetUpTearDownCommand::GetMethodsWithAttributeFromFixture
// Il2CppName: GetMethodsWithAttributeFromFixture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Reflection::MethodInfo*>* (*)(System::Type*, System::Type*)>(&UnityEngine::TestTools::EnumerableSetUpTearDownCommand::GetMethodsWithAttributeFromFixture)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableSetUpTearDownCommand*), "GetMethodsWithAttributeFromFixture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableSetUpTearDownCommand::InvokeBefore
// Il2CppName: InvokeBefore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::TestTools::EnumerableSetUpTearDownCommand::*)(System::Reflection::MethodInfo*, NUnit::Framework::Internal::Test*, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*)>(&UnityEngine::TestTools::EnumerableSetUpTearDownCommand::InvokeBefore)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableSetUpTearDownCommand*), "InvokeBefore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Reflection::MethodInfo*>(), ::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Internal::Test*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableSetUpTearDownCommand::InvokeAfter
// Il2CppName: InvokeAfter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::TestTools::EnumerableSetUpTearDownCommand::*)(System::Reflection::MethodInfo*, NUnit::Framework::Internal::Test*, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*)>(&UnityEngine::TestTools::EnumerableSetUpTearDownCommand::InvokeAfter)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableSetUpTearDownCommand*), "InvokeAfter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Reflection::MethodInfo*>(), ::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Internal::Test*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableSetUpTearDownCommand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableSetUpTearDownCommand::GetState
// Il2CppName: GetState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TestTools::BeforeAfterTestCommandState* (UnityEngine::TestTools::EnumerableSetUpTearDownCommand::*)(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*)>(&UnityEngine::TestTools::EnumerableSetUpTearDownCommand::GetState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableSetUpTearDownCommand*), "GetState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*>()});
  }
};
