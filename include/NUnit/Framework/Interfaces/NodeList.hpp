// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: TNode
  class TNode;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: NodeList
  class NodeList;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(NUnit::Framework::Interfaces::NodeList);
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::NodeList*, "NUnit.Framework.Interfaces", "NodeList");
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // WARNING Size may be invalid!
  // Autogenerated type: NUnit.Framework.Interfaces.NodeList
  // [TokenAttribute] Offset: FFFFFFFF
  class NodeList : public System::Collections::Generic::List_1<NUnit::Framework::Interfaces::TNode*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1941478
    // Implemented from: System.Collections.Generic.List`1
    // Base method: System.Void List_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NodeList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Interfaces::NodeList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NodeList*, creationType>()));
    }
  }; // NUnit.Framework.Interfaces.NodeList
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::NodeList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
