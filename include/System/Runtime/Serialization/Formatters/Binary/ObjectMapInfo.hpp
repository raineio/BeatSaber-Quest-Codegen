// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ObjectMapInfo
  class ObjectMapInfo : public ::Il2CppObject {
    public:
    // System.Int32 objectId
    // Size: 0x4
    // Offset: 0x10
    int objectId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 numMembers
    // Size: 0x4
    // Offset: 0x14
    int numMembers;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String[] memberNames
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppString*>* memberNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.Type[] memberTypes
    // Size: 0x8
    // Offset: 0x20
    ::Array<System::Type*>* memberTypes;
    // Field size check
    static_assert(sizeof(::Array<System::Type*>*) == 0x8);
    // Creating value type constructor for type: ObjectMapInfo
    ObjectMapInfo(int objectId_ = {}, int numMembers_ = {}, ::Array<::Il2CppString*>* memberNames_ = {}, ::Array<System::Type*>* memberTypes_ = {}) noexcept : objectId{objectId_}, numMembers{numMembers_}, memberNames{memberNames_}, memberTypes{memberTypes_} {}
    // System.Void .ctor(System.Int32 objectId, System.Int32 numMembers, System.String[] memberNames, System.Type[] memberTypes)
    // Offset: 0x160D1C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectMapInfo* New_ctor(int objectId, int numMembers, ::Array<::Il2CppString*>* memberNames, ::Array<System::Type*>* memberTypes) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectMapInfo*, creationType>(objectId, numMembers, memberNames, memberTypes)));
    }
    // System.Boolean isCompatible(System.Int32 numMembers, System.String[] memberNames, System.Type[] memberTypes)
    // Offset: 0x160D214
    bool isCompatible(int numMembers, ::Array<::Il2CppString*>* memberNames, ::Array<System::Type*>* memberTypes);
  }; // System.Runtime.Serialization.Formatters.Binary.ObjectMapInfo
  #pragma pack(pop)
  static check_size<sizeof(ObjectMapInfo), 32 + sizeof(::Array<System::Type*>*)> __System_Runtime_Serialization_Formatters_Binary_ObjectMapInfoSizeCheck;
  static_assert(sizeof(ObjectMapInfo) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo*, "System.Runtime.Serialization.Formatters.Binary", "ObjectMapInfo");
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::isCompatible
// Il2CppName: isCompatible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::*)(int, ::Array<::Il2CppString*>*, ::Array<System::Type*>*)>(&System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::isCompatible)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo*), "isCompatible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppString*>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<System::Type*>*>()});
  }
};
