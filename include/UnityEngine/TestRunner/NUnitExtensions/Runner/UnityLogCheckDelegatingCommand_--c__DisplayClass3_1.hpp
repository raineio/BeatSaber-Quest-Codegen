// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/UnityLogCheckDelegatingCommand.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand/<>c__DisplayClass3_1
  // [CompilerGeneratedAttribute] Offset: E3D8DC
  class UnityLogCheckDelegatingCommand::$$c__DisplayClass3_1 : public ::Il2CppObject {
    public:
    // public System.Collections.IEnumerable executeEnumerable
    // Size: 0x8
    // Offset: 0x10
    System::Collections::IEnumerable* executeEnumerable;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerable*) == 0x8);
    // public UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand/<>c__DisplayClass3_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass3_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass3_0*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass3_1
    $$c__DisplayClass3_1(System::Collections::IEnumerable* executeEnumerable_ = {}, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass3_0* CS$$$8__locals1_ = {}) noexcept : executeEnumerable{executeEnumerable_}, CS$$$8__locals1{CS$$$8__locals1_} {}
    // System.Void <ExecuteEnumerable>b__0()
    // Offset: 0x14AE254
    void $ExecuteEnumerable$b__0();
    // public System.Void .ctor()
    // Offset: 0x14AE24C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityLogCheckDelegatingCommand::$$c__DisplayClass3_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass3_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityLogCheckDelegatingCommand::$$c__DisplayClass3_1*, creationType>()));
    }
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand/<>c__DisplayClass3_1
  #pragma pack(pop)
  static check_size<sizeof(UnityLogCheckDelegatingCommand::$$c__DisplayClass3_1), 24 + sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass3_0*)> __UnityEngine_TestRunner_NUnitExtensions_Runner_UnityLogCheckDelegatingCommand_$$c__DisplayClass3_1SizeCheck;
  static_assert(sizeof(UnityLogCheckDelegatingCommand::$$c__DisplayClass3_1) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass3_1*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityLogCheckDelegatingCommand/<>c__DisplayClass3_1");
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass3_1::$ExecuteEnumerable$b__0
// Il2CppName: <ExecuteEnumerable>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass3_1::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass3_1::$ExecuteEnumerable$b__0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass3_1*), "<ExecuteEnumerable>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass3_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
