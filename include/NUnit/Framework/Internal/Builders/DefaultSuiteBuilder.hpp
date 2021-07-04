// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.ISuiteBuilder
#include "NUnit/Framework/Interfaces/ISuiteBuilder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal::Builders
namespace NUnit::Framework::Internal::Builders {
  // Forward declaring type: NUnitTestFixtureBuilder
  class NUnitTestFixtureBuilder;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
  // Forward declaring type: IFixtureBuilder
  class IFixtureBuilder;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Builders
namespace NUnit::Framework::Internal::Builders {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Builders.DefaultSuiteBuilder
  class DefaultSuiteBuilder : public ::Il2CppObject/*, public NUnit::Framework::Interfaces::ISuiteBuilder*/ {
    public:
    // private NUnit.Framework.Internal.Builders.NUnitTestFixtureBuilder _defaultBuilder
    // Size: 0x8
    // Offset: 0x10
    NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder* defaultBuilder;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder*) == 0x8);
    // Creating value type constructor for type: DefaultSuiteBuilder
    DefaultSuiteBuilder(NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder* defaultBuilder_ = {}) noexcept : defaultBuilder{defaultBuilder_} {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::ISuiteBuilder
    operator NUnit::Framework::Interfaces::ISuiteBuilder() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::ISuiteBuilder*>(this);
    }
    // Creating conversion operator: operator NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder*
    constexpr operator NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder*() const noexcept {
      return defaultBuilder;
    }
    // public System.Boolean CanBuildFrom(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    // Offset: 0x1730BBC
    bool CanBuildFrom(NUnit::Framework::Interfaces::ITypeInfo* typeInfo);
    // public NUnit.Framework.Internal.TestSuite BuildFrom(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    // Offset: 0x1730E90
    NUnit::Framework::Internal::TestSuite* BuildFrom(NUnit::Framework::Interfaces::ITypeInfo* typeInfo);
    // private NUnit.Framework.Internal.TestSuite BuildMultipleFixtures(NUnit.Framework.Interfaces.ITypeInfo typeInfo, System.Collections.Generic.IEnumerable`1<NUnit.Framework.Internal.TestSuite> fixtures)
    // Offset: 0x17318AC
    NUnit::Framework::Internal::TestSuite* BuildMultipleFixtures(NUnit::Framework::Interfaces::ITypeInfo* typeInfo, System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>* fixtures);
    // private NUnit.Framework.Interfaces.IFixtureBuilder[] GetFixtureBuilderAttributes(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    // Offset: 0x1731528
    ::Array<NUnit::Framework::Interfaces::IFixtureBuilder*>* GetFixtureBuilderAttributes(NUnit::Framework::Interfaces::ITypeInfo* typeInfo);
    // private System.Boolean HasArguments(NUnit.Framework.Interfaces.IFixtureBuilder attr)
    // Offset: 0x1731C68
    bool HasArguments(NUnit::Framework::Interfaces::IFixtureBuilder* attr);
    // public System.Void .ctor()
    // Offset: 0x171F8C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultSuiteBuilder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultSuiteBuilder*, creationType>()));
    }
  }; // NUnit.Framework.Internal.Builders.DefaultSuiteBuilder
  #pragma pack(pop)
  static check_size<sizeof(DefaultSuiteBuilder), 16 + sizeof(NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder*)> __NUnit_Framework_Internal_Builders_DefaultSuiteBuilderSizeCheck;
  static_assert(sizeof(DefaultSuiteBuilder) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Builders::DefaultSuiteBuilder*, "NUnit.Framework.Internal.Builders", "DefaultSuiteBuilder");
// Writing MetadataGetter for method: NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::CanBuildFrom
// Il2CppName: CanBuildFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::*)(NUnit::Framework::Interfaces::ITypeInfo*)>(&NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::CanBuildFrom)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Builders::DefaultSuiteBuilder*), "CanBuildFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Interfaces::ITypeInfo*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::BuildFrom
// Il2CppName: BuildFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::TestSuite* (NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::*)(NUnit::Framework::Interfaces::ITypeInfo*)>(&NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::BuildFrom)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Builders::DefaultSuiteBuilder*), "BuildFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Interfaces::ITypeInfo*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::BuildMultipleFixtures
// Il2CppName: BuildMultipleFixtures
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::TestSuite* (NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::*)(NUnit::Framework::Interfaces::ITypeInfo*, System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>*)>(&NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::BuildMultipleFixtures)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Builders::DefaultSuiteBuilder*), "BuildMultipleFixtures", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Interfaces::ITypeInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::GetFixtureBuilderAttributes
// Il2CppName: GetFixtureBuilderAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<NUnit::Framework::Interfaces::IFixtureBuilder*>* (NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::*)(NUnit::Framework::Interfaces::ITypeInfo*)>(&NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::GetFixtureBuilderAttributes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Builders::DefaultSuiteBuilder*), "GetFixtureBuilderAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Interfaces::ITypeInfo*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::HasArguments
// Il2CppName: HasArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::*)(NUnit::Framework::Interfaces::IFixtureBuilder*)>(&NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::HasArguments)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Builders::DefaultSuiteBuilder*), "HasArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Interfaces::IFixtureBuilder*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
