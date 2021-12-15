// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Globalization.HebrewNumber
#include "System/Globalization/HebrewNumber.hpp"
// Including type: System.Globalization.HebrewNumber/System.Globalization.HebrewToken
#include "System/Globalization/HebrewNumber_HebrewToken.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: HebrewValue
  class HebrewValue;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Globalization::HebrewNumber::HebrewValue);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::HebrewNumber::HebrewValue*, "System.Globalization", "HebrewNumber/HebrewValue");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.HebrewNumber/System.Globalization.HebrewValue
  // [TokenAttribute] Offset: FFFFFFFF
  class HebrewNumber::HebrewValue : public ::Il2CppObject {
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
    // System.Globalization.HebrewNumber/System.Globalization.HebrewToken token
    // Size: 0x4
    // Offset: 0x10
    System::Globalization::HebrewNumber::HebrewToken token;
    // Field size check
    static_assert(sizeof(System::Globalization::HebrewNumber::HebrewToken) == 0x4);
    // System.Int32 value
    // Size: 0x4
    // Offset: 0x14
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: System.Globalization.HebrewNumber/System.Globalization.HebrewToken token
    System::Globalization::HebrewNumber::HebrewToken& dyn_token();
    // Get instance field reference: System.Int32 value
    int& dyn_value();
    // System.Void .ctor(System.Globalization.HebrewNumber/System.Globalization.HebrewToken token, System.Int32 value)
    // Offset: 0x1C3B650
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HebrewNumber::HebrewValue* New_ctor(System::Globalization::HebrewNumber::HebrewToken token, int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::HebrewNumber::HebrewValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HebrewNumber::HebrewValue*, creationType>(token, value)));
    }
  }; // System.Globalization.HebrewNumber/System.Globalization.HebrewValue
  #pragma pack(pop)
  static check_size<sizeof(HebrewNumber::HebrewValue), 20 + sizeof(int)> __System_Globalization_HebrewNumber_HebrewValueSizeCheck;
  static_assert(sizeof(HebrewNumber::HebrewValue) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::HebrewNumber::HebrewValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
