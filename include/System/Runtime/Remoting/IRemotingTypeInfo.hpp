// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.IRemotingTypeInfo
  // [ComVisibleAttribute] Offset: D7E0A4
  class IRemotingTypeInfo {
    public:
    // Creating value type constructor for type: IRemotingTypeInfo
    IRemotingTypeInfo() noexcept {}
    // public System.String get_TypeName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_TypeName();
    // public System.Boolean CanCastTo(System.Type fromType, System.Object o)
    // Offset: 0xFFFFFFFF
    bool CanCastTo(System::Type* fromType, ::Il2CppObject* o);
  }; // System.Runtime.Remoting.IRemotingTypeInfo
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::IRemotingTypeInfo*, "System.Runtime.Remoting", "IRemotingTypeInfo");
// Writing MetadataGetter for method: System::Runtime::Remoting::IRemotingTypeInfo::get_TypeName
// Il2CppName: get_TypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::IRemotingTypeInfo::*)()>(&System::Runtime::Remoting::IRemotingTypeInfo::get_TypeName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::IRemotingTypeInfo*), "get_TypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::IRemotingTypeInfo::CanCastTo
// Il2CppName: CanCastTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::IRemotingTypeInfo::*)(System::Type*, ::Il2CppObject*)>(&System::Runtime::Remoting::IRemotingTypeInfo::CanCastTo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::IRemotingTypeInfo*), "CanCastTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
