// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::TestRunner::GUI
namespace UnityEngine::TestTools::TestRunner::GUI {
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestFilter
  class ITestFilter;
}
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Filters
namespace UnityEngine::TestRunner::NUnitExtensions::Filters {
  // Forward declaring type: FullNameFilter
  class FullNameFilter;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestFilter
  class TestFilter;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner.GUI
namespace UnityEngine::TestTools::TestRunner::GUI {
  // Forward declaring type: RuntimeTestRunnerFilter
  class RuntimeTestRunnerFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter*, "UnityEngine.TestTools.TestRunner.GUI", "RuntimeTestRunnerFilter");
// Type namespace: UnityEngine.TestTools.TestRunner.GUI
namespace UnityEngine::TestTools::TestRunner::GUI {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.GUI.RuntimeTestRunnerFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class RuntimeTestRunnerFilter : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::$$c
    class $$c;
    // Nested type: ::UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    public:
    // public System.String[] assemblyNames
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::StringW> assemblyNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.String[] groupNames
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::StringW> groupNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.String[] categoryNames
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::StringW> categoryNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.String[] testNames
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::StringW> testNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.Boolean synchronousOnly
    // Size: 0x1
    // Offset: 0x30
    bool synchronousOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.String[] assemblyNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_assemblyNames();
    // Get instance field reference: public System.String[] groupNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_groupNames();
    // Get instance field reference: public System.String[] categoryNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_categoryNames();
    // Get instance field reference: public System.String[] testNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_testNames();
    // Get instance field reference: public System.Boolean synchronousOnly
    [[deprecated("Use field access instead!")]] bool& dyn_synchronousOnly();
    // public System.Void .ctor()
    // Offset: 0x19BFBE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeTestRunnerFilter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeTestRunnerFilter*, creationType>()));
    }
    // public NUnit.Framework.Interfaces.ITestFilter BuildNUnitFilter()
    // Offset: 0x19BF2F4
    ::NUnit::Framework::Interfaces::ITestFilter* BuildNUnitFilter();
    // static private UnityEngine.TestRunner.NUnitExtensions.Filters.FullNameFilter OptimizedGroupFilter(System.String s)
    // Offset: 0x19BFA84
    static ::UnityEngine::TestRunner::NUnitExtensions::Filters::FullNameFilter* OptimizedGroupFilter(::StringW s);
    // static private System.Void AddFilters(System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITestFilter> filters, System.String[] values, System.Func`2<System.String,NUnit.Framework.Internal.TestFilter> builder)
    // Offset: 0x19BF638
    static void AddFilters(::System::Collections::Generic::List_1<::NUnit::Framework::Interfaces::ITestFilter*>* filters, ::ArrayW<::StringW> values, ::System::Func_2<::StringW, ::NUnit::Framework::Internal::TestFilter*>* builder);
  }; // UnityEngine.TestTools.TestRunner.GUI.RuntimeTestRunnerFilter
  #pragma pack(pop)
  static check_size<sizeof(RuntimeTestRunnerFilter), 48 + sizeof(bool)> __UnityEngine_TestTools_TestRunner_GUI_RuntimeTestRunnerFilterSizeCheck;
  static_assert(sizeof(RuntimeTestRunnerFilter) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::BuildNUnitFilter
// Il2CppName: BuildNUnitFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Interfaces::ITestFilter* (UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::*)()>(&UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::BuildNUnitFilter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter*), "BuildNUnitFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::OptimizedGroupFilter
// Il2CppName: OptimizedGroupFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TestRunner::NUnitExtensions::Filters::FullNameFilter* (*)(::StringW)>(&UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::OptimizedGroupFilter)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter*), "OptimizedGroupFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::AddFilters
// Il2CppName: AddFilters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::NUnit::Framework::Interfaces::ITestFilter*>*, ::ArrayW<::StringW>, ::System::Func_2<::StringW, ::NUnit::Framework::Internal::TestFilter*>*)>(&UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::AddFilters)> {
  static const MethodInfo* get() {
    static auto* filters = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestFilter")})->byval_arg;
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* builder = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestFilter")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter*), "AddFilters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filters, values, builder});
  }
};
