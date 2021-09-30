// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: PlatformEnviroment because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: PlatformUserAuthTokenData
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformUserAuthTokenData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::PlatformUserAuthTokenData::PlatformEnviroment
    struct PlatformEnviroment;
    // Size: 0x1
    #pragma pack(push, 1)
    // Autogenerated type: PlatformUserAuthTokenData/PlatformEnviroment
    // [TokenAttribute] Offset: FFFFFFFF
    struct PlatformEnviroment/*, public System::Enum*/ {
      public:
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      private:
      #endif
      // public System.Byte value__
      // Size: 0x1
      // Offset: 0x0
      uint8_t value;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      public:
      // Creating value type constructor for type: PlatformEnviroment
      constexpr PlatformEnviroment(uint8_t value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return value;
      }
      // static field const value: static public PlatformUserAuthTokenData/PlatformEnviroment Development
      static constexpr const uint8_t Development = 0u;
      // Get static field: static public PlatformUserAuthTokenData/PlatformEnviroment Development
      static GlobalNamespace::PlatformUserAuthTokenData::PlatformEnviroment _get_Development();
      // Set static field: static public PlatformUserAuthTokenData/PlatformEnviroment Development
      static void _set_Development(GlobalNamespace::PlatformUserAuthTokenData::PlatformEnviroment value);
      // static field const value: static public PlatformUserAuthTokenData/PlatformEnviroment Certification
      static constexpr const uint8_t Certification = 1u;
      // Get static field: static public PlatformUserAuthTokenData/PlatformEnviroment Certification
      static GlobalNamespace::PlatformUserAuthTokenData::PlatformEnviroment _get_Certification();
      // Set static field: static public PlatformUserAuthTokenData/PlatformEnviroment Certification
      static void _set_Certification(GlobalNamespace::PlatformUserAuthTokenData::PlatformEnviroment value);
      // static field const value: static public PlatformUserAuthTokenData/PlatformEnviroment Production
      static constexpr const uint8_t Production = 2u;
      // Get static field: static public PlatformUserAuthTokenData/PlatformEnviroment Production
      static GlobalNamespace::PlatformUserAuthTokenData::PlatformEnviroment _get_Production();
      // Set static field: static public PlatformUserAuthTokenData/PlatformEnviroment Production
      static void _set_Production(GlobalNamespace::PlatformUserAuthTokenData::PlatformEnviroment value);
      // Get instance field reference: public System.Byte value__
      uint8_t& dyn_value__();
    }; // PlatformUserAuthTokenData/PlatformEnviroment
    #pragma pack(pop)
    static check_size<sizeof(PlatformUserAuthTokenData::PlatformEnviroment), 0 + sizeof(uint8_t)> __GlobalNamespace_PlatformUserAuthTokenData_PlatformEnviromentSizeCheck;
    static_assert(sizeof(PlatformUserAuthTokenData::PlatformEnviroment) == 0x1);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.String <token>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* token;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private PlatformUserAuthTokenData/PlatformEnviroment <validPlatformEnvironment>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    GlobalNamespace::PlatformUserAuthTokenData::PlatformEnviroment validPlatformEnvironment;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformUserAuthTokenData::PlatformEnviroment) == 0x1);
    public:
    // Get instance field reference: private System.String <token>k__BackingField
    ::Il2CppString*& dyn_$token$k__BackingField();
    // Get instance field reference: private PlatformUserAuthTokenData/PlatformEnviroment <validPlatformEnvironment>k__BackingField
    GlobalNamespace::PlatformUserAuthTokenData::PlatformEnviroment& dyn_$validPlatformEnvironment$k__BackingField();
    // public System.String get_token()
    // Offset: 0x12B3A08
    ::Il2CppString* get_token();
    // private System.Void set_token(System.String value)
    // Offset: 0x12B3A10
    void set_token(::Il2CppString* value);
    // public PlatformUserAuthTokenData/PlatformEnviroment get_validPlatformEnvironment()
    // Offset: 0x12B3A18
    GlobalNamespace::PlatformUserAuthTokenData::PlatformEnviroment get_validPlatformEnvironment();
    // private System.Void set_validPlatformEnvironment(PlatformUserAuthTokenData/PlatformEnviroment value)
    // Offset: 0x12B3A20
    void set_validPlatformEnvironment(GlobalNamespace::PlatformUserAuthTokenData::PlatformEnviroment value);
    // public System.Void .ctor(System.String token, PlatformUserAuthTokenData/PlatformEnviroment validPlatformEnvironment)
    // Offset: 0x12B3A28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformUserAuthTokenData* New_ctor(::Il2CppString* token, GlobalNamespace::PlatformUserAuthTokenData::PlatformEnviroment validPlatformEnvironment) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlatformUserAuthTokenData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformUserAuthTokenData*, creationType>(token, validPlatformEnvironment)));
    }
  }; // PlatformUserAuthTokenData
  #pragma pack(pop)
  static check_size<sizeof(PlatformUserAuthTokenData), 24 + sizeof(GlobalNamespace::PlatformUserAuthTokenData::PlatformEnviroment)> __GlobalNamespace_PlatformUserAuthTokenDataSizeCheck;
  static_assert(sizeof(PlatformUserAuthTokenData) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformUserAuthTokenData*, "", "PlatformUserAuthTokenData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformUserAuthTokenData::PlatformEnviroment, "", "PlatformUserAuthTokenData/PlatformEnviroment");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlatformUserAuthTokenData::get_token
// Il2CppName: get_token
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PlatformUserAuthTokenData::*)()>(&GlobalNamespace::PlatformUserAuthTokenData::get_token)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformUserAuthTokenData*), "get_token", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformUserAuthTokenData::set_token
// Il2CppName: set_token
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformUserAuthTokenData::*)(::Il2CppString*)>(&GlobalNamespace::PlatformUserAuthTokenData::set_token)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformUserAuthTokenData*), "set_token", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformUserAuthTokenData::get_validPlatformEnvironment
// Il2CppName: get_validPlatformEnvironment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlatformUserAuthTokenData::PlatformEnviroment (GlobalNamespace::PlatformUserAuthTokenData::*)()>(&GlobalNamespace::PlatformUserAuthTokenData::get_validPlatformEnvironment)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformUserAuthTokenData*), "get_validPlatformEnvironment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformUserAuthTokenData::set_validPlatformEnvironment
// Il2CppName: set_validPlatformEnvironment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformUserAuthTokenData::*)(GlobalNamespace::PlatformUserAuthTokenData::PlatformEnviroment)>(&GlobalNamespace::PlatformUserAuthTokenData::set_validPlatformEnvironment)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "PlatformUserAuthTokenData/PlatformEnviroment")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformUserAuthTokenData*), "set_validPlatformEnvironment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformUserAuthTokenData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
