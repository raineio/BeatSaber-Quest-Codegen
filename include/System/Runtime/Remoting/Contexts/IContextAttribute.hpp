// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IConstructionCallMessage
  class IConstructionCallMessage;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: Context
  class Context;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Contexts.IContextAttribute
  // [ComVisibleAttribute] Offset: D7E274
  class IContextAttribute {
    public:
    // Creating value type constructor for type: IContextAttribute
    IContextAttribute() noexcept {}
    // public System.Void GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage msg)
    // Offset: 0xFFFFFFFF
    void GetPropertiesForNewContext(System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);
    // public System.Boolean IsContextOK(System.Runtime.Remoting.Contexts.Context ctx, System.Runtime.Remoting.Activation.IConstructionCallMessage msg)
    // Offset: 0xFFFFFFFF
    bool IsContextOK(System::Runtime::Remoting::Contexts::Context* ctx, System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);
  }; // System.Runtime.Remoting.Contexts.IContextAttribute
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::IContextAttribute*, "System.Runtime.Remoting.Contexts", "IContextAttribute");
// Writing MetadataGetter for method: System::Runtime::Remoting::Contexts::IContextAttribute::GetPropertiesForNewContext
// Il2CppName: GetPropertiesForNewContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Contexts::IContextAttribute::*)(System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&System::Runtime::Remoting::Contexts::IContextAttribute::GetPropertiesForNewContext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Contexts::IContextAttribute*), "GetPropertiesForNewContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Remoting::Activation::IConstructionCallMessage*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Contexts::IContextAttribute::IsContextOK
// Il2CppName: IsContextOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Contexts::IContextAttribute::*)(System::Runtime::Remoting::Contexts::Context*, System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&System::Runtime::Remoting::Contexts::IContextAttribute::IsContextOK)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Contexts::IContextAttribute*), "IsContextOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Remoting::Contexts::Context*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Remoting::Activation::IConstructionCallMessage*>()});
  }
};
