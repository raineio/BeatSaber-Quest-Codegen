// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IWebProxy
  class IWebProxy;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: GlobalProxySelection
  class GlobalProxySelection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::GlobalProxySelection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::GlobalProxySelection*, "System.Net", "GlobalProxySelection");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.GlobalProxySelection
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: 103DCE0
  class GlobalProxySelection : public ::Il2CppObject {
    public:
    // static public System.Net.IWebProxy get_Select()
    // Offset: 0x1A7C3DC
    static ::System::Net::IWebProxy* get_Select();
    // static public System.Net.IWebProxy GetEmptyWebProxy()
    // Offset: 0x1A81620
    static ::System::Net::IWebProxy* GetEmptyWebProxy();
  }; // System.Net.GlobalProxySelection
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::GlobalProxySelection::get_Select
// Il2CppName: get_Select
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebProxy* (*)()>(&System::Net::GlobalProxySelection::get_Select)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::GlobalProxySelection*), "get_Select", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::GlobalProxySelection::GetEmptyWebProxy
// Il2CppName: GetEmptyWebProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebProxy* (*)()>(&System::Net::GlobalProxySelection::GetEmptyWebProxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::GlobalProxySelection*), "GetEmptyWebProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
