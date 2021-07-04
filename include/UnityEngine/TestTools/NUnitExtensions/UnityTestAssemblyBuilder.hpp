// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Api.DefaultTestAssemblyBuilder
#include "NUnit/Framework/Api/DefaultTestAssemblyBuilder.hpp"
// Including type: UnityEngine.TestTools.TestPlatform
#include "UnityEngine/TestTools/TestPlatform.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::NUnitExtensions
namespace UnityEngine::TestTools::NUnitExtensions {
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.NUnitExtensions
namespace UnityEngine::TestTools::NUnitExtensions {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder
  class UnityTestAssemblyBuilder : public NUnit::Framework::Api::DefaultTestAssemblyBuilder {
    public:
    // Nested type: UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3
    class $BuildAsync$d__3;
    // private readonly System.String m_ProductName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_ProductName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: UnityTestAssemblyBuilder
    UnityTestAssemblyBuilder(::Il2CppString* m_ProductName_ = {}) noexcept : m_ProductName{m_ProductName_} {}
    // Deleting conversion operator: operator NUnit::Framework::Interfaces::ISuiteBuilder*
    constexpr operator NUnit::Framework::Interfaces::ISuiteBuilder*() const noexcept = delete;
    // public NUnit.Framework.Interfaces.ITest Build(System.Reflection.Assembly[] assemblies, UnityEngine.TestTools.TestPlatform[] testPlatforms, System.Collections.Generic.IDictionary`2<System.String,System.Object> options)
    // Offset: 0x14AF124
    NUnit::Framework::Interfaces::ITest* Build(::Array<System::Reflection::Assembly*>* assemblies, ::Array<UnityEngine::TestTools::TestPlatform>* testPlatforms, System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>* options);
    // public System.Collections.Generic.IEnumerator`1<NUnit.Framework.Interfaces.ITest> BuildAsync(System.Reflection.Assembly[] assemblies, UnityEngine.TestTools.TestPlatform[] testPlatforms, System.Collections.Generic.IDictionary`2<System.String,System.Object> options)
    // Offset: 0x14B8E48
    System::Collections::Generic::IEnumerator_1<NUnit::Framework::Interfaces::ITest*>* BuildAsync(::Array<System::Reflection::Assembly*>* assemblies, ::Array<UnityEngine::TestTools::TestPlatform>* testPlatforms, System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>* options);
    // static public System.Collections.Generic.Dictionary`2<System.String,System.Object> GetNUnitTestBuilderSettings(UnityEngine.TestTools.TestPlatform testPlatform)
    // Offset: 0x14B8F04
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>* GetNUnitTestBuilderSettings(UnityEngine::TestTools::TestPlatform testPlatform);
    // public System.Void .ctor()
    // Offset: 0x14B8DD0
    // Implemented from: NUnit.Framework.Api.DefaultTestAssemblyBuilder
    // Base method: System.Void DefaultTestAssemblyBuilder::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTestAssemblyBuilder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTestAssemblyBuilder*, creationType>()));
    }
  }; // UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder
  #pragma pack(pop)
  static check_size<sizeof(UnityTestAssemblyBuilder), 24 + sizeof(::Il2CppString*)> __UnityEngine_TestTools_NUnitExtensions_UnityTestAssemblyBuilderSizeCheck;
  static_assert(sizeof(UnityTestAssemblyBuilder) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder*, "UnityEngine.TestTools.NUnitExtensions", "UnityTestAssemblyBuilder");
// Writing MetadataGetter for method: UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::Build
// Il2CppName: Build
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ITest* (UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::*)(::Array<System::Reflection::Assembly*>*, ::Array<UnityEngine::TestTools::TestPlatform>*, System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>*)>(&UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::Build)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder*), "Build", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<System::Reflection::Assembly*>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::TestTools::TestPlatform>*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::BuildAsync
// Il2CppName: BuildAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<NUnit::Framework::Interfaces::ITest*>* (UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::*)(::Array<System::Reflection::Assembly*>*, ::Array<UnityEngine::TestTools::TestPlatform>*, System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>*)>(&UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::BuildAsync)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder*), "BuildAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<System::Reflection::Assembly*>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::TestTools::TestPlatform>*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::GetNUnitTestBuilderSettings
// Il2CppName: GetNUnitTestBuilderSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>* (*)(UnityEngine::TestTools::TestPlatform)>(&UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::GetNUnitTestBuilderSettings)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder*), "GetNUnitTestBuilderSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::TestTools::TestPlatform>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
