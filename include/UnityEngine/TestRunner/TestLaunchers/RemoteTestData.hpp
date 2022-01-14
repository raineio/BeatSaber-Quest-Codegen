// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Interfaces.RunState
#include "NUnit/Framework/Interfaces/RunState.hpp"
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
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Forward declaring type: RemoteTestData
  class RemoteTestData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::TestRunner::TestLaunchers::RemoteTestData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::TestLaunchers::RemoteTestData*, "UnityEngine.TestRunner.TestLaunchers", "RemoteTestData");
// Type namespace: UnityEngine.TestRunner.TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.TestLaunchers.RemoteTestData
  // [TokenAttribute] Offset: FFFFFFFF
  class RemoteTestData : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::TestRunner::TestLaunchers::RemoteTestData::$$c
    class $$c;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.String id
    // Size: 0x8
    // Offset: 0x10
    ::StringW id;
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
    // public System.Int32 testCaseCount
    // Size: 0x4
    // Offset: 0x28
    int testCaseCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 ChildIndex
    // Size: 0x4
    // Offset: 0x2C
    int ChildIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean hasChildren
    // Size: 0x1
    // Offset: 0x30
    bool hasChildren;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isSuite
    // Size: 0x1
    // Offset: 0x31
    bool isSuite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isSuite and: childrenIds
    char __padding6[0x6] = {};
    // public System.String[] childrenIds
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::StringW> childrenIds;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.Int32 testCaseTimeout
    // Size: 0x4
    // Offset: 0x40
    int testCaseTimeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: testCaseTimeout and: Categories
    char __padding8[0x4] = {};
    // public System.String[] Categories
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::StringW> Categories;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.Boolean IsTestAssembly
    // Size: 0x1
    // Offset: 0x50
    bool IsTestAssembly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsTestAssembly and: RunState
    char __padding10[0x3] = {};
    // public NUnit.Framework.Interfaces.RunState RunState
    // Size: 0x4
    // Offset: 0x54
    NUnit::Framework::Interfaces::RunState RunState;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::RunState) == 0x4);
    // public System.String Description
    // Size: 0x8
    // Offset: 0x58
    ::StringW Description;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String SkipReason
    // Size: 0x8
    // Offset: 0x60
    ::StringW SkipReason;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String ParentId
    // Size: 0x8
    // Offset: 0x68
    ::StringW ParentId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String UniqueName
    // Size: 0x8
    // Offset: 0x70
    ::StringW UniqueName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String ParentUniqueName
    // Size: 0x8
    // Offset: 0x78
    ::StringW ParentUniqueName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String ParentFullName
    // Size: 0x8
    // Offset: 0x80
    ::StringW ParentFullName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String id
    ::StringW& dyn_id();
    // Get instance field reference: public System.String name
    ::StringW& dyn_name();
    // Get instance field reference: public System.String fullName
    ::StringW& dyn_fullName();
    // Get instance field reference: public System.Int32 testCaseCount
    int& dyn_testCaseCount();
    // Get instance field reference: public System.Int32 ChildIndex
    int& dyn_ChildIndex();
    // Get instance field reference: public System.Boolean hasChildren
    bool& dyn_hasChildren();
    // Get instance field reference: public System.Boolean isSuite
    bool& dyn_isSuite();
    // Get instance field reference: public System.String[] childrenIds
    ::ArrayW<::StringW>& dyn_childrenIds();
    // Get instance field reference: public System.Int32 testCaseTimeout
    int& dyn_testCaseTimeout();
    // Get instance field reference: public System.String[] Categories
    ::ArrayW<::StringW>& dyn_Categories();
    // Get instance field reference: public System.Boolean IsTestAssembly
    bool& dyn_IsTestAssembly();
    // Get instance field reference: public NUnit.Framework.Interfaces.RunState RunState
    NUnit::Framework::Interfaces::RunState& dyn_RunState();
    // Get instance field reference: public System.String Description
    ::StringW& dyn_Description();
    // Get instance field reference: public System.String SkipReason
    ::StringW& dyn_SkipReason();
    // Get instance field reference: public System.String ParentId
    ::StringW& dyn_ParentId();
    // Get instance field reference: public System.String UniqueName
    ::StringW& dyn_UniqueName();
    // Get instance field reference: public System.String ParentUniqueName
    ::StringW& dyn_ParentUniqueName();
    // Get instance field reference: public System.String ParentFullName
    ::StringW& dyn_ParentFullName();
    // System.Void .ctor(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x16CA124
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteTestData* New_ctor(NUnit::Framework::Interfaces::ITest* test) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::TestLaunchers::RemoteTestData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteTestData*, creationType>(test)));
    }
  }; // UnityEngine.TestRunner.TestLaunchers.RemoteTestData
  #pragma pack(pop)
  static check_size<sizeof(RemoteTestData), 128 + sizeof(::StringW)> __UnityEngine_TestRunner_TestLaunchers_RemoteTestDataSizeCheck;
  static_assert(sizeof(RemoteTestData) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::TestLaunchers::RemoteTestData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
