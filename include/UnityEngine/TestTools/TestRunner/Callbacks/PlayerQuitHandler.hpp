// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking::PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Forward declaring type: MessageEventArgs
  class MessageEventArgs;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner.Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Forward declaring type: PlayerQuitHandler
  class PlayerQuitHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler*, "UnityEngine.TestTools.TestRunner.Callbacks", "PlayerQuitHandler");
// Type namespace: UnityEngine.TestTools.TestRunner.Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.Callbacks.PlayerQuitHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerQuitHandler : public ::UnityEngine::MonoBehaviour {
    public:
    // public System.Void .ctor()
    // Offset: 0x19864D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerQuitHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerQuitHandler*, creationType>()));
    }
    // public System.Void Start()
    // Offset: 0x19863C4
    void Start();
    // private System.Void ProcessPlayerQuiteMessage(UnityEngine.Networking.PlayerConnection.MessageEventArgs arg0)
    // Offset: 0x198647C
    void ProcessPlayerQuiteMessage(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* arg0);
    // public System.Void RunStarted(NUnit.Framework.Interfaces.ITest testsToRun)
    // Offset: 0x19864C0
    void RunStarted(::NUnit::Framework::Interfaces::ITest* testsToRun);
    // public System.Void RunFinished(NUnit.Framework.Interfaces.ITestResult testResults)
    // Offset: 0x19864C4
    void RunFinished(::NUnit::Framework::Interfaces::ITestResult* testResults);
    // public System.Void TestStarted(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x19864C8
    void TestStarted(::NUnit::Framework::Interfaces::ITest* test);
    // public System.Void TestFinished(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0x19864CC
    void TestFinished(::NUnit::Framework::Interfaces::ITestResult* result);
  }; // UnityEngine.TestTools.TestRunner.Callbacks.PlayerQuitHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler::*)()>(&UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler::ProcessPlayerQuiteMessage
// Il2CppName: ProcessPlayerQuiteMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler::*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*)>(&UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler::ProcessPlayerQuiteMessage)> {
  static const MethodInfo* get() {
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking.PlayerConnection", "MessageEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler*), "ProcessPlayerQuiteMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg0});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler::RunStarted
// Il2CppName: RunStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler::*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler::RunStarted)> {
  static const MethodInfo* get() {
    static auto* testsToRun = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler*), "RunStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{testsToRun});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler::RunFinished
// Il2CppName: RunFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler::*)(::NUnit::Framework::Interfaces::ITestResult*)>(&UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler::RunFinished)> {
  static const MethodInfo* get() {
    static auto* testResults = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler*), "RunFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{testResults});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler::TestStarted
// Il2CppName: TestStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler::*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler::TestStarted)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler*), "TestStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler::TestFinished
// Il2CppName: TestFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler::*)(::NUnit::Framework::Interfaces::ITestResult*)>(&UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler::TestFinished)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler*), "TestFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
