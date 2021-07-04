// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.TestCommandBuilder
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/TestCommandBuilder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestBuilder
  class ITestBuilder;
  // Forward declaring type: ISimpleTestBuilder
  class ISimpleTestBuilder;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.TestCommandBuilder/<>c
  // [CompilerGeneratedAttribute] Offset: E3D8AC
  class TestCommandBuilder::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.TestRunner.NUnitExtensions.Runner.TestCommandBuilder/<>c <>9
    static UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TestRunner.NUnitExtensions.Runner.TestCommandBuilder/<>c <>9
    static void _set_$$9(UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::$$c* value);
    // Get static field: static public System.Func`2<NUnit.Framework.Interfaces.ITestBuilder,System.String> <>9__1_0
    static System::Func_2<NUnit::Framework::Interfaces::ITestBuilder*, ::Il2CppString*>* _get_$$9__1_0();
    // Set static field: static public System.Func`2<NUnit.Framework.Interfaces.ITestBuilder,System.String> <>9__1_0
    static void _set_$$9__1_0(System::Func_2<NUnit::Framework::Interfaces::ITestBuilder*, ::Il2CppString*>* value);
    // Get static field: static public System.Func`2<NUnit.Framework.Interfaces.ISimpleTestBuilder,System.String> <>9__1_1
    static System::Func_2<NUnit::Framework::Interfaces::ISimpleTestBuilder*, ::Il2CppString*>* _get_$$9__1_1();
    // Set static field: static public System.Func`2<NUnit.Framework.Interfaces.ISimpleTestBuilder,System.String> <>9__1_1
    static void _set_$$9__1_1(System::Func_2<NUnit::Framework::Interfaces::ISimpleTestBuilder*, ::Il2CppString*>* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>> <>9__1_2
    static System::Func_2<System::Collections::Generic::IEnumerable_1<::Il2CppString*>*, System::Collections::Generic::IEnumerable_1<::Il2CppString*>*>* _get_$$9__1_2();
    // Set static field: static public System.Func`2<System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>> <>9__1_2
    static void _set_$$9__1_2(System::Func_2<System::Collections::Generic::IEnumerable_1<::Il2CppString*>*, System::Collections::Generic::IEnumerable_1<::Il2CppString*>*>* value);
    // static private System.Void .cctor()
    // Offset: 0x14AD4C0
    static void _cctor();
    // System.String <GetTestBuilderName>b__1_0(NUnit.Framework.Interfaces.ITestBuilder attribute)
    // Offset: 0x14AD52C
    ::Il2CppString* $GetTestBuilderName$b__1_0(NUnit::Framework::Interfaces::ITestBuilder* attribute);
    // System.String <GetTestBuilderName>b__1_1(NUnit.Framework.Interfaces.ISimpleTestBuilder attribute)
    // Offset: 0x14AD55C
    ::Il2CppString* $GetTestBuilderName$b__1_1(NUnit::Framework::Interfaces::ISimpleTestBuilder* attribute);
    // System.Collections.Generic.IEnumerable`1<System.String> <GetTestBuilderName>b__1_2(System.Collections.Generic.IEnumerable`1<System.String> v)
    // Offset: 0x14AD58C
    System::Collections::Generic::IEnumerable_1<::Il2CppString*>* $GetTestBuilderName$b__1_2(System::Collections::Generic::IEnumerable_1<::Il2CppString*>* v);
    // public System.Void .ctor()
    // Offset: 0x14AD524
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestCommandBuilder::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestCommandBuilder::$$c*, creationType>()));
    }
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.TestCommandBuilder/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::$$c*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "TestCommandBuilder/<>c");
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::$$c::$GetTestBuilderName$b__1_0
// Il2CppName: <GetTestBuilderName>b__1_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::$$c::*)(NUnit::Framework::Interfaces::ITestBuilder*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::$$c::$GetTestBuilderName$b__1_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::$$c*), "<GetTestBuilderName>b__1_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Interfaces::ITestBuilder*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::$$c::$GetTestBuilderName$b__1_1
// Il2CppName: <GetTestBuilderName>b__1_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::$$c::*)(NUnit::Framework::Interfaces::ISimpleTestBuilder*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::$$c::$GetTestBuilderName$b__1_1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::$$c*), "<GetTestBuilderName>b__1_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Interfaces::ISimpleTestBuilder*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::$$c::$GetTestBuilderName$b__1_2
// Il2CppName: <GetTestBuilderName>b__1_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<::Il2CppString*>* (UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::$$c::*)(System::Collections::Generic::IEnumerable_1<::Il2CppString*>*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::$$c::$GetTestBuilderName$b__1_2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::$$c*), "<GetTestBuilderName>b__1_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IEnumerable_1<::Il2CppString*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
