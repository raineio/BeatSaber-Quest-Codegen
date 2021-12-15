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
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: ObjectMapInfo
  class ObjectMapInfo;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo*, "System.Runtime.Serialization.Formatters.Binary", "ObjectMapInfo");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ObjectMapInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectMapInfo : public ::Il2CppObject {
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
    ::ArrayW<::Il2CppString*> memberNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppString*>) == 0x8);
    // private System.Type[] memberTypes
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<System::Type*> memberTypes;
    // Field size check
    static_assert(sizeof(::ArrayW<System::Type*>) == 0x8);
    public:
    // Get instance field reference: System.Int32 objectId
    int& dyn_objectId();
    // Get instance field reference: private System.Int32 numMembers
    int& dyn_numMembers();
    // Get instance field reference: private System.String[] memberNames
    ::ArrayW<::Il2CppString*>& dyn_memberNames();
    // Get instance field reference: private System.Type[] memberTypes
    ::ArrayW<System::Type*>& dyn_memberTypes();
    // System.Void .ctor(System.Int32 objectId, System.Int32 numMembers, System.String[] memberNames, System.Type[] memberTypes)
    // Offset: 0x1861C1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectMapInfo* New_ctor(int objectId, int numMembers, ::ArrayW<::Il2CppString*> memberNames, ::ArrayW<System::Type*> memberTypes) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectMapInfo*, creationType>(objectId, numMembers, memberNames, memberTypes)));
    }
    // System.Boolean isCompatible(System.Int32 numMembers, System.String[] memberNames, System.Type[] memberTypes)
    // Offset: 0x1861C68
    bool isCompatible(int numMembers, ::ArrayW<::Il2CppString*> memberNames, ::ArrayW<System::Type*> memberTypes);
  }; // System.Runtime.Serialization.Formatters.Binary.ObjectMapInfo
  #pragma pack(pop)
  static check_size<sizeof(ObjectMapInfo), 32 + sizeof(::ArrayW<System::Type*>)> __System_Runtime_Serialization_Formatters_Binary_ObjectMapInfoSizeCheck;
  static_assert(sizeof(ObjectMapInfo) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::isCompatible
// Il2CppName: isCompatible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::*)(int, ::ArrayW<::Il2CppString*>, ::ArrayW<System::Type*>)>(&System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::isCompatible)> {
  static const MethodInfo* get() {
    static auto* numMembers = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* memberNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* memberTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo*), "isCompatible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{numMembers, memberNames, memberTypes});
  }
};
