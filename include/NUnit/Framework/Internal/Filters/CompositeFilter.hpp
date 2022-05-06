// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.TestFilter
#include "NUnit/Framework/Internal/TestFilter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Skipping declaration: ITestFilter because it is already included!
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: TNode
  class TNode;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Filters
namespace NUnit::Framework::Internal::Filters {
  // Forward declaring type: CompositeFilter
  class CompositeFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::Filters::CompositeFilter);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::Filters::CompositeFilter*, "NUnit.Framework.Internal.Filters", "CompositeFilter");
// Type namespace: NUnit.Framework.Internal.Filters
namespace NUnit::Framework::Internal::Filters {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Filters.CompositeFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class CompositeFilter : public ::NUnit::Framework::Internal::TestFilter {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x10C9DD0
    // private System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITestFilter> <Filters>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::IList_1<::NUnit::Framework::Interfaces::ITestFilter*>* Filters;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IList_1<::NUnit::Framework::Interfaces::ITestFilter*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::IList_1<::NUnit::Framework::Interfaces::ITestFilter*>*
    constexpr operator ::System::Collections::Generic::IList_1<::NUnit::Framework::Interfaces::ITestFilter*>*() const noexcept {
      return Filters;
    }
    // Get instance field reference: private System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITestFilter> <Filters>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IList_1<::NUnit::Framework::Interfaces::ITestFilter*>*& dyn_$Filters$k__BackingField();
    // public System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITestFilter> get_Filters()
    // Offset: 0x1CAA398
    ::System::Collections::Generic::IList_1<::NUnit::Framework::Interfaces::ITestFilter*>* get_Filters();
    // private System.Void set_Filters(System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITestFilter> value)
    // Offset: 0x1CAA3A0
    void set_Filters(::System::Collections::Generic::IList_1<::NUnit::Framework::Interfaces::ITestFilter*>* value);
    // protected System.String get_ElementName()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_ElementName();
    // public System.Void .ctor(params NUnit.Framework.Interfaces.ITestFilter[] filters)
    // Offset: 0x1CA9448
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompositeFilter* New_ctor(::ArrayW<::NUnit::Framework::Interfaces::ITestFilter*> filters) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::Filters::CompositeFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompositeFilter*, creationType>(filters)));
    }
    // public System.Void .ctor()
    // Offset: 0x1CA93B0
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Void TestFilter::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompositeFilter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::Filters::CompositeFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompositeFilter*, creationType>()));
    }
    // public override System.Boolean Pass(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Boolean TestFilter::Pass(NUnit.Framework.Interfaces.ITest test)
    bool Pass(::NUnit::Framework::Interfaces::ITest* test);
    // public override System.Boolean Match(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Boolean TestFilter::Match(NUnit.Framework.Interfaces.ITest test)
    bool Match(::NUnit::Framework::Interfaces::ITest* test);
    // public override System.Boolean IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Boolean TestFilter::IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    bool IsExplicitMatch(::NUnit::Framework::Interfaces::ITest* test);
    // public override NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0x1CAA3A8
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: NUnit.Framework.Interfaces.TNode TestFilter::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    ::NUnit::Framework::Interfaces::TNode* AddToXml(::NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
  }; // NUnit.Framework.Internal.Filters.CompositeFilter
  #pragma pack(pop)
  static check_size<sizeof(CompositeFilter), 16 + sizeof(::System::Collections::Generic::IList_1<::NUnit::Framework::Interfaces::ITestFilter*>*)> __NUnit_Framework_Internal_Filters_CompositeFilterSizeCheck;
  static_assert(sizeof(CompositeFilter) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::CompositeFilter::get_Filters
// Il2CppName: get_Filters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::NUnit::Framework::Interfaces::ITestFilter*>* (NUnit::Framework::Internal::Filters::CompositeFilter::*)()>(&NUnit::Framework::Internal::Filters::CompositeFilter::get_Filters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::CompositeFilter*), "get_Filters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::CompositeFilter::set_Filters
// Il2CppName: set_Filters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Filters::CompositeFilter::*)(::System::Collections::Generic::IList_1<::NUnit::Framework::Interfaces::ITestFilter*>*)>(&NUnit::Framework::Internal::Filters::CompositeFilter::set_Filters)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestFilter")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::CompositeFilter*), "set_Filters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::CompositeFilter::get_ElementName
// Il2CppName: get_ElementName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Internal::Filters::CompositeFilter::*)()>(&NUnit::Framework::Internal::Filters::CompositeFilter::get_ElementName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::CompositeFilter*), "get_ElementName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::CompositeFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::CompositeFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::CompositeFilter::Pass
// Il2CppName: Pass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::Filters::CompositeFilter::*)(::NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::Filters::CompositeFilter::Pass)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::CompositeFilter*), "Pass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::CompositeFilter::Match
// Il2CppName: Match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::Filters::CompositeFilter::*)(::NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::Filters::CompositeFilter::Match)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::CompositeFilter*), "Match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::CompositeFilter::IsExplicitMatch
// Il2CppName: IsExplicitMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::Filters::CompositeFilter::*)(::NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::Filters::CompositeFilter::IsExplicitMatch)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::CompositeFilter*), "IsExplicitMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::CompositeFilter::AddToXml
// Il2CppName: AddToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Internal::Filters::CompositeFilter::*)(::NUnit::Framework::Interfaces::TNode*, bool)>(&NUnit::Framework::Internal::Filters::CompositeFilter::AddToXml)> {
  static const MethodInfo* get() {
    static auto* parentNode = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "TNode")->byval_arg;
    static auto* recursive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::CompositeFilter*), "AddToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentNode, recursive});
  }
};
