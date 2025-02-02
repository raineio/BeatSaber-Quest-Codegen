// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.AccessControl.FileSystemSecurity
#include "System/Security/AccessControl/FileSystemSecurity.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: FileSecurity
  class FileSecurity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::AccessControl::FileSecurity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::FileSecurity*, "System.Security.AccessControl", "FileSecurity");
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.AccessControl.FileSecurity
  // [TokenAttribute] Offset: FFFFFFFF
  class FileSecurity : public ::System::Security::AccessControl::FileSystemSecurity {
    public:
    // public System.Void .ctor(System.String fileName, System.Security.AccessControl.AccessControlSections includeSections)
    // Offset: 0x1BD8160
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileSecurity* New_ctor(::StringW fileName, ::System::Security::AccessControl::AccessControlSections includeSections) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::FileSecurity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileSecurity*, creationType>(fileName, includeSections)));
    }
  }; // System.Security.AccessControl.FileSecurity
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::AccessControl::FileSecurity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
