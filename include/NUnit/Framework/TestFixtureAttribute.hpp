// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.NUnitAttribute
#include "NUnit/Framework/NUnitAttribute.hpp"
// Including type: NUnit.Framework.Interfaces.IFixtureBuilder
#include "NUnit/Framework/Interfaces/IFixtureBuilder.hpp"
// Including type: NUnit.Framework.Interfaces.ITestFixtureData
#include "NUnit/Framework/Interfaces/ITestFixtureData.hpp"
// Including type: NUnit.Framework.Interfaces.RunState
#include "NUnit/Framework/Interfaces/RunState.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework
namespace NUnit::Framework {
}
// Forward declaring namespace: NUnit::Framework::Internal::Builders
namespace NUnit::Framework::Internal::Builders {
  // Forward declaring type: NUnitTestFixtureBuilder
  class NUnitTestFixtureBuilder;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IPropertyBag
  class IPropertyBag;
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.TestFixtureAttribute
  // [AttributeUsageAttribute] Offset: E04D54
  class TestFixtureAttribute : public NUnit::Framework::NUnitAttribute/*, public NUnit::Framework::Interfaces::IFixtureBuilder, public NUnit::Framework::Interfaces::ITestFixtureData*/ {
    public:
    // Nested type: NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48
    class $BuildFrom$d__48;
    // private readonly NUnit.Framework.Internal.Builders.NUnitTestFixtureBuilder _builder
    // Size: 0x8
    // Offset: 0x10
    NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder* builder;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE04FD4
    // [DebuggerBrowsableAttribute] Offset: 0xE04FD4
    // private NUnit.Framework.Interfaces.RunState <RunState>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    NUnit::Framework::Interfaces::RunState RunState;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::RunState) == 0x4);
    // Padding between fields: RunState and: Arguments
    char __padding1[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE05010
    // [DebuggerBrowsableAttribute] Offset: 0xE05010
    // private System.Object[] <Arguments>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppObject*>* Arguments;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE0504C
    // [DebuggerBrowsableAttribute] Offset: 0xE0504C
    // private NUnit.Framework.Interfaces.IPropertyBag <Properties>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    NUnit::Framework::Interfaces::IPropertyBag* Properties;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::IPropertyBag*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE05088
    // [CompilerGeneratedAttribute] Offset: 0xE05088
    // private System.Type[] <TypeArgs>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::Array<System::Type*>* TypeArgs;
    // Field size check
    static_assert(sizeof(::Array<System::Type*>*) == 0x8);
    // Creating value type constructor for type: TestFixtureAttribute
    TestFixtureAttribute(NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder* builder_ = {}, NUnit::Framework::Interfaces::RunState RunState_ = {}, ::Array<::Il2CppObject*>* Arguments_ = {}, NUnit::Framework::Interfaces::IPropertyBag* Properties_ = {}, ::Array<System::Type*>* TypeArgs_ = {}) noexcept : builder{builder_}, RunState{RunState_}, Arguments{Arguments_}, Properties{Properties_}, TypeArgs{TypeArgs_} {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::IFixtureBuilder
    operator NUnit::Framework::Interfaces::IFixtureBuilder() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::IFixtureBuilder*>(this);
    }
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::ITestFixtureData
    operator NUnit::Framework::Interfaces::ITestFixtureData() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::ITestFixtureData*>(this);
    }
    // public NUnit.Framework.Interfaces.RunState get_RunState()
    // Offset: 0x22B848C
    NUnit::Framework::Interfaces::RunState get_RunState();
    // public System.Object[] get_Arguments()
    // Offset: 0x22B8494
    ::Array<::Il2CppObject*>* get_Arguments();
    // public NUnit.Framework.Interfaces.IPropertyBag get_Properties()
    // Offset: 0x22B849C
    NUnit::Framework::Interfaces::IPropertyBag* get_Properties();
    // public System.Type[] get_TypeArgs()
    // Offset: 0x22B84A4
    ::Array<System::Type*>* get_TypeArgs();
    // public System.Collections.Generic.IEnumerable`1<NUnit.Framework.Internal.TestSuite> BuildFrom(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    // Offset: 0x22B84AC
    System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>* BuildFrom(NUnit::Framework::Interfaces::ITypeInfo* typeInfo);
  }; // NUnit.Framework.TestFixtureAttribute
  #pragma pack(pop)
  static check_size<sizeof(TestFixtureAttribute), 48 + sizeof(::Array<System::Type*>*)> __NUnit_Framework_TestFixtureAttributeSizeCheck;
  static_assert(sizeof(TestFixtureAttribute) == 0x38);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::TestFixtureAttribute*, "NUnit.Framework", "TestFixtureAttribute");
// Writing MetadataGetter for method: NUnit::Framework::TestFixtureAttribute::get_RunState
// Il2CppName: get_RunState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::RunState (NUnit::Framework::TestFixtureAttribute::*)()>(&NUnit::Framework::TestFixtureAttribute::get_RunState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::TestFixtureAttribute*), "get_RunState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::TestFixtureAttribute::get_Arguments
// Il2CppName: get_Arguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (NUnit::Framework::TestFixtureAttribute::*)()>(&NUnit::Framework::TestFixtureAttribute::get_Arguments)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::TestFixtureAttribute*), "get_Arguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::TestFixtureAttribute::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::IPropertyBag* (NUnit::Framework::TestFixtureAttribute::*)()>(&NUnit::Framework::TestFixtureAttribute::get_Properties)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::TestFixtureAttribute*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::TestFixtureAttribute::get_TypeArgs
// Il2CppName: get_TypeArgs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Type*>* (NUnit::Framework::TestFixtureAttribute::*)()>(&NUnit::Framework::TestFixtureAttribute::get_TypeArgs)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::TestFixtureAttribute*), "get_TypeArgs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::TestFixtureAttribute::BuildFrom
// Il2CppName: BuildFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>* (NUnit::Framework::TestFixtureAttribute::*)(NUnit::Framework::Interfaces::ITypeInfo*)>(&NUnit::Framework::TestFixtureAttribute::BuildFrom)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::TestFixtureAttribute*), "BuildFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Interfaces::ITypeInfo*>()});
  }
};
