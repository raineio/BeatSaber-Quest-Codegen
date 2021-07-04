// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IConstructionReturnMessage
  class IConstructionReturnMessage;
  // Forward declaring type: IConstructionCallMessage
  class IConstructionCallMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Activation
namespace System::Runtime::Remoting::Activation {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Activation.IActivator
  // [ComVisibleAttribute] Offset: D7E43C
  class IActivator {
    public:
    // Creating value type constructor for type: IActivator
    IActivator() noexcept {}
    // public System.Runtime.Remoting.Activation.IActivator get_NextActivator()
    // Offset: 0xFFFFFFFF
    System::Runtime::Remoting::Activation::IActivator* get_NextActivator();
    // public System.Runtime.Remoting.Activation.IConstructionReturnMessage Activate(System.Runtime.Remoting.Activation.IConstructionCallMessage msg)
    // Offset: 0xFFFFFFFF
    System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);
  }; // System.Runtime.Remoting.Activation.IActivator
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Activation::IActivator*, "System.Runtime.Remoting.Activation", "IActivator");
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::IActivator::get_NextActivator
// Il2CppName: get_NextActivator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Activation::IActivator* (System::Runtime::Remoting::Activation::IActivator::*)()>(&System::Runtime::Remoting::Activation::IActivator::get_NextActivator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::IActivator*), "get_NextActivator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::IActivator::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Activation::IConstructionReturnMessage* (System::Runtime::Remoting::Activation::IActivator::*)(System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&System::Runtime::Remoting::Activation::IActivator::Activate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::IActivator*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Remoting::Activation::IConstructionCallMessage*>()});
  }
};
