// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.DescriptionAttribute
#include "System/ComponentModel/DescriptionAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: IODescriptionAttribute
  class IODescriptionAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::IODescriptionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::IODescriptionAttribute*, "System.IO", "IODescriptionAttribute");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.IODescriptionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 103D180
  class IODescriptionAttribute : public ::System::ComponentModel::DescriptionAttribute {
    public:
    // public override System.String get_Description()
    // Offset: 0x1CF3958
    // Implemented from: System.ComponentModel.DescriptionAttribute
    // Base method: System.String DescriptionAttribute::get_Description()
    ::StringW get_Description();
    // public System.Void .ctor(System.String description)
    // Offset: 0x1CF38E0
    // Implemented from: System.ComponentModel.DescriptionAttribute
    // Base method: System.Void DescriptionAttribute::.ctor(System.String description)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IODescriptionAttribute* New_ctor(::StringW description) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::IODescriptionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IODescriptionAttribute*, creationType>(description)));
    }
  }; // System.IO.IODescriptionAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::IODescriptionAttribute::get_Description
// Il2CppName: get_Description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::IODescriptionAttribute::*)()>(&System::IO::IODescriptionAttribute::get_Description)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::IODescriptionAttribute*), "get_Description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::IODescriptionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
