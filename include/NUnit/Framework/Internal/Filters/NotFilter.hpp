// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.TestFilter
#include "NUnit/Framework/Internal/TestFilter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: TNode
  class TNode;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Filters
namespace NUnit::Framework::Internal::Filters {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Filters.NotFilter
  // [] Offset: FFFFFFFF
  class NotFilter : public NUnit::Framework::Internal::TestFilter {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD105A8
    // [DebuggerBrowsableAttribute] Offset: 0xD105A8
    // private NUnit.Framework.Internal.TestFilter <BaseFilter>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    NUnit::Framework::Internal::TestFilter* BaseFilter;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::TestFilter*) == 0x8);
    // Creating value type constructor for type: NotFilter
    NotFilter(NUnit::Framework::Internal::TestFilter* BaseFilter_ = {}) noexcept : BaseFilter{BaseFilter_} {}
    // Creating conversion operator: operator NUnit::Framework::Internal::TestFilter*
    constexpr operator NUnit::Framework::Internal::TestFilter*() const noexcept {
      return BaseFilter;
    }
    // public System.Void .ctor(NUnit.Framework.Internal.TestFilter baseFilter)
    // Offset: 0x15B8AC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NotFilter* New_ctor(NUnit::Framework::Internal::TestFilter* baseFilter) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Filters::NotFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NotFilter*, creationType>(baseFilter)));
    }
    // public NUnit.Framework.Internal.TestFilter get_BaseFilter()
    // Offset: 0x15B8B40
    NUnit::Framework::Internal::TestFilter* get_BaseFilter();
    // private System.Void set_BaseFilter(NUnit.Framework.Internal.TestFilter value)
    // Offset: 0x15B8B48
    void set_BaseFilter(NUnit::Framework::Internal::TestFilter* value);
    // public override System.Boolean Pass(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x15B8B50
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Boolean TestFilter::Pass(NUnit.Framework.Interfaces.ITest test)
    bool Pass(NUnit::Framework::Interfaces::ITest* test);
    // public override System.Boolean Match(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x15B8BB0
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Boolean TestFilter::Match(NUnit.Framework.Interfaces.ITest test)
    bool Match(NUnit::Framework::Interfaces::ITest* test);
    // public override System.Boolean IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x15B8BE0
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Boolean TestFilter::IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    bool IsExplicitMatch(NUnit::Framework::Interfaces::ITest* test);
    // public override NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0x15B8BE8
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: NUnit.Framework.Interfaces.TNode TestFilter::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
  }; // NUnit.Framework.Internal.Filters.NotFilter
  #pragma pack(pop)
  static check_size<sizeof(NotFilter), 16 + sizeof(NUnit::Framework::Internal::TestFilter*)> __NUnit_Framework_Internal_Filters_NotFilterSizeCheck;
  static_assert(sizeof(NotFilter) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Filters::NotFilter*, "NUnit.Framework.Internal.Filters", "NotFilter");