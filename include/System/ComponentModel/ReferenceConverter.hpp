// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.TypeConverter
#include "System/ComponentModel/TypeConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ReferenceConverter
  class ReferenceConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::ComponentModel::ReferenceConverter);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::ReferenceConverter*, "System.ComponentModel", "ReferenceConverter");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ReferenceConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class ReferenceConverter : public System::ComponentModel::TypeConverter {
    public:
    // Get static field: static private readonly System.String none
    static ::StringW _get_none();
    // Set static field: static private readonly System.String none
    static void _set_none(::StringW value);
    // static private System.Void .cctor()
    // Offset: 0x1A2738C
    static void _cctor();
  }; // System.ComponentModel.ReferenceConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ReferenceConverter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::ReferenceConverter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReferenceConverter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
