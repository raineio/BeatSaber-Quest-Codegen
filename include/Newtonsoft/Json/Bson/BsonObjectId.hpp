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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Forward declaring type: BsonObjectId
  class BsonObjectId;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonObjectId);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonObjectId*, "Newtonsoft.Json.Bson", "BsonObjectId");
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Bson.BsonObjectId
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class BsonObjectId : public ::Il2CppObject {
    public:
    public:
    // private System.Byte[] <Value>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> Value;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<uint8_t>
    constexpr operator ::ArrayW<uint8_t>() const noexcept {
      return Value;
    }
    // Get instance field reference: private System.Byte[] <Value>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_$Value$k__BackingField();
    // public System.Byte[] get_Value()
    // Offset: 0x1802DBC
    ::ArrayW<uint8_t> get_Value();
    // private System.Void set_Value(System.Byte[] value)
    // Offset: 0x1802DC4
    void set_Value(::ArrayW<uint8_t> value);
    // public System.Void .ctor(System.Byte[] value)
    // Offset: 0x1802DCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BsonObjectId* New_ctor(::ArrayW<uint8_t> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Bson::BsonObjectId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BsonObjectId*, creationType>(value)));
    }
  }; // Newtonsoft.Json.Bson.BsonObjectId
  #pragma pack(pop)
  static check_size<sizeof(BsonObjectId), 16 + sizeof(::ArrayW<uint8_t>)> __Newtonsoft_Json_Bson_BsonObjectIdSizeCheck;
  static_assert(sizeof(BsonObjectId) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonObjectId::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Newtonsoft::Json::Bson::BsonObjectId::*)()>(&Newtonsoft::Json::Bson::BsonObjectId::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonObjectId*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonObjectId::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonObjectId::*)(::ArrayW<uint8_t>)>(&Newtonsoft::Json::Bson::BsonObjectId::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonObjectId*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonObjectId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
