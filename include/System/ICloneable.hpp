// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: ICloneable
  class ICloneable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ICloneable);
DEFINE_IL2CPP_ARG_TYPE(::System::ICloneable*, "System", "ICloneable");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ICloneable
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 102E0F4
  class ICloneable {
    public:
    // public System.Object Clone()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* Clone();
  }; // System.ICloneable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ICloneable::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ICloneable::*)()>(&System::ICloneable::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ICloneable*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
