// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: IActivator
  class IActivator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Activation::IActivator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::IActivator*, "System.Runtime.Remoting.Activation", "IActivator");
// Type namespace: System.Runtime.Remoting.Activation
namespace System::Runtime::Remoting::Activation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Activation.IActivator
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1031FA8
  class IActivator {
    public:
    // public System.Runtime.Remoting.Activation.IActivator get_NextActivator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Runtime::Remoting::Activation::IActivator* get_NextActivator();
    // public System.Runtime.Remoting.Activation.IConstructionReturnMessage Activate(System.Runtime.Remoting.Activation.IConstructionCallMessage msg)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);
  }; // System.Runtime.Remoting.Activation.IActivator
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::IActivator::get_NextActivator
// Il2CppName: get_NextActivator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IActivator* (System::Runtime::Remoting::Activation::IActivator::*)()>(&System::Runtime::Remoting::Activation::IActivator::get_NextActivator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::IActivator*), "get_NextActivator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::IActivator::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IConstructionReturnMessage* (System::Runtime::Remoting::Activation::IActivator::*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&System::Runtime::Remoting::Activation::IActivator::Activate)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Activation", "IConstructionCallMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::IActivator*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
