// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ISite
  class ISite;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: IComponent
  class IComponent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::IComponent);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IComponent*, "System.ComponentModel", "IComponent");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.IComponent
  // [TokenAttribute] Offset: FFFFFFFF
  // [DesignerAttribute] Offset: 10826A4
  // [RootDesignerSerializerAttribute] Offset: 10826A4
  // [ComVisibleAttribute] Offset: 10826A4
  // [TypeConverterAttribute] Offset: 10826A4
  // [DesignerAttribute] Offset: 10826A4
  class IComponent/*, public ::System::IDisposable*/ {
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // public System.ComponentModel.ISite get_Site()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ComponentModel::ISite* get_Site();
  }; // System.ComponentModel.IComponent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::IComponent::get_Site
// Il2CppName: get_Site
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ISite* (System::ComponentModel::IComponent::*)()>(&System::ComponentModel::IComponent::get_Site)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IComponent*), "get_Site", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
