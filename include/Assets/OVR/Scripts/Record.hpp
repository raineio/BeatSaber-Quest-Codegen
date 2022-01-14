// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Assets.OVR.Scripts
namespace Assets::OVR::Scripts {
  // Forward declaring type: Record
  class Record;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Assets::OVR::Scripts::Record);
DEFINE_IL2CPP_ARG_TYPE(Assets::OVR::Scripts::Record*, "Assets.OVR.Scripts", "Record");
// Type namespace: Assets.OVR.Scripts
namespace Assets::OVR::Scripts {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Assets.OVR.Scripts.Record
  // [TokenAttribute] Offset: FFFFFFFF
  class Record : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.String category
    // Size: 0x8
    // Offset: 0x10
    ::StringW category;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String message
    // Size: 0x8
    // Offset: 0x18
    ::StringW message;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String category
    ::StringW& dyn_category();
    // Get instance field reference: public System.String message
    ::StringW& dyn_message();
    // public System.Void .ctor(System.String cat, System.String msg)
    // Offset: 0x17CFCB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Record* New_ctor(::StringW cat, ::StringW msg) {
      static auto ___internal__logger = ::Logger::get().WithContext("Assets::OVR::Scripts::Record::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Record*, creationType>(cat, msg)));
    }
  }; // Assets.OVR.Scripts.Record
  #pragma pack(pop)
  static check_size<sizeof(Record), 24 + sizeof(::StringW)> __Assets_OVR_Scripts_RecordSizeCheck;
  static_assert(sizeof(Record) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Assets::OVR::Scripts::Record::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
