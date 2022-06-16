// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Interfaces.TestStatus
#include "NUnit/Framework/Interfaces/TestStatus.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Forward declaring type: RemoteTestResultData
  class RemoteTestResultData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData*, "UnityEngine.TestRunner.TestLaunchers", "RemoteTestResultData");
// Type namespace: UnityEngine.TestRunner.TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.TestLaunchers.RemoteTestResultData
  // [TokenAttribute] Offset: FFFFFFFF
  class RemoteTestResultData : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData::$$c
    class $$c;
    public:
    // public System.String testId
    // Size: 0x8
    // Offset: 0x10
    ::StringW testId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String name
    // Size: 0x8
    // Offset: 0x18
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String fullName
    // Size: 0x8
    // Offset: 0x20
    ::StringW fullName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String resultState
    // Size: 0x8
    // Offset: 0x28
    ::StringW resultState;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public NUnit.Framework.Interfaces.TestStatus testStatus
    // Size: 0x4
    // Offset: 0x30
    ::NUnit::Framework::Interfaces::TestStatus testStatus;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Interfaces::TestStatus) == 0x4);
    // Padding between fields: testStatus and: duration
    char __padding4[0x4] = {};
    // public System.Double duration
    // Size: 0x8
    // Offset: 0x38
    double duration;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.DateTime startTime
    // Size: 0x8
    // Offset: 0x40
    ::System::DateTime startTime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public System.DateTime endTime
    // Size: 0x8
    // Offset: 0x48
    ::System::DateTime endTime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public System.String message
    // Size: 0x8
    // Offset: 0x50
    ::StringW message;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String stackTrace
    // Size: 0x8
    // Offset: 0x58
    ::StringW stackTrace;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 assertCount
    // Size: 0x4
    // Offset: 0x60
    int assertCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 failCount
    // Size: 0x4
    // Offset: 0x64
    int failCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 passCount
    // Size: 0x4
    // Offset: 0x68
    int passCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 skipCount
    // Size: 0x4
    // Offset: 0x6C
    int skipCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 inconclusiveCount
    // Size: 0x4
    // Offset: 0x70
    int inconclusiveCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean hasChildren
    // Size: 0x1
    // Offset: 0x74
    bool hasChildren;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasChildren and: output
    char __padding15[0x3] = {};
    // public System.String output
    // Size: 0x8
    // Offset: 0x78
    ::StringW output;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String xml
    // Size: 0x8
    // Offset: 0x80
    ::StringW xml;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String[] childrenIds
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<::StringW> childrenIds;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Get instance field reference: public System.String testId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_testId();
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public System.String fullName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_fullName();
    // Get instance field reference: public System.String resultState
    [[deprecated("Use field access instead!")]] ::StringW& dyn_resultState();
    // Get instance field reference: public NUnit.Framework.Interfaces.TestStatus testStatus
    [[deprecated("Use field access instead!")]] ::NUnit::Framework::Interfaces::TestStatus& dyn_testStatus();
    // Get instance field reference: public System.Double duration
    [[deprecated("Use field access instead!")]] double& dyn_duration();
    // Get instance field reference: public System.DateTime startTime
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_startTime();
    // Get instance field reference: public System.DateTime endTime
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_endTime();
    // Get instance field reference: public System.String message
    [[deprecated("Use field access instead!")]] ::StringW& dyn_message();
    // Get instance field reference: public System.String stackTrace
    [[deprecated("Use field access instead!")]] ::StringW& dyn_stackTrace();
    // Get instance field reference: public System.Int32 assertCount
    [[deprecated("Use field access instead!")]] int& dyn_assertCount();
    // Get instance field reference: public System.Int32 failCount
    [[deprecated("Use field access instead!")]] int& dyn_failCount();
    // Get instance field reference: public System.Int32 passCount
    [[deprecated("Use field access instead!")]] int& dyn_passCount();
    // Get instance field reference: public System.Int32 skipCount
    [[deprecated("Use field access instead!")]] int& dyn_skipCount();
    // Get instance field reference: public System.Int32 inconclusiveCount
    [[deprecated("Use field access instead!")]] int& dyn_inconclusiveCount();
    // Get instance field reference: public System.Boolean hasChildren
    [[deprecated("Use field access instead!")]] bool& dyn_hasChildren();
    // Get instance field reference: public System.String output
    [[deprecated("Use field access instead!")]] ::StringW& dyn_output();
    // Get instance field reference: public System.String xml
    [[deprecated("Use field access instead!")]] ::StringW& dyn_xml();
    // Get instance field reference: public System.String[] childrenIds
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_childrenIds();
    // System.Void .ctor(NUnit.Framework.Interfaces.ITestResult result, System.Boolean isTopLevel)
    // Offset: 0x197A0E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteTestResultData* New_ctor(::NUnit::Framework::Interfaces::ITestResult* result, bool isTopLevel) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteTestResultData*, creationType>(result, isTopLevel)));
    }
  }; // UnityEngine.TestRunner.TestLaunchers.RemoteTestResultData
  #pragma pack(pop)
  static check_size<sizeof(RemoteTestResultData), 136 + sizeof(::ArrayW<::StringW>)> __UnityEngine_TestRunner_TestLaunchers_RemoteTestResultDataSizeCheck;
  static_assert(sizeof(RemoteTestResultData) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
