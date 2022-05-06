// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: PropertyChangedEventArgs
  class PropertyChangedEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::PropertyChangedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::PropertyChangedEventArgs*, "System.ComponentModel", "PropertyChangedEventArgs");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.PropertyChangedEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class PropertyChangedEventArgs : public ::System::EventArgs {
    public:
    public:
    // private readonly System.String propertyName
    // Size: 0x8
    // Offset: 0x10
    ::StringW propertyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return propertyName;
    }
    // Get instance field reference: private readonly System.String propertyName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_propertyName();
    // public System.Void .ctor(System.String propertyName)
    // Offset: 0x1D9DC80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertyChangedEventArgs* New_ctor(::StringW propertyName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::PropertyChangedEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertyChangedEventArgs*, creationType>(propertyName)));
    }
  }; // System.ComponentModel.PropertyChangedEventArgs
  #pragma pack(pop)
  static check_size<sizeof(PropertyChangedEventArgs), 16 + sizeof(::StringW)> __System_ComponentModel_PropertyChangedEventArgsSizeCheck;
  static_assert(sizeof(PropertyChangedEventArgs) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::PropertyChangedEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
