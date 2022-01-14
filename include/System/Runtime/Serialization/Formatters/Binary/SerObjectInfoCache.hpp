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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: SerObjectInfoCache
  class SerObjectInfoCache;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*, "System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoCache");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache
  // [TokenAttribute] Offset: FFFFFFFF
  class SerObjectInfoCache : public ::Il2CppObject {
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
    // System.String fullTypeName
    // Size: 0x8
    // Offset: 0x10
    ::StringW fullTypeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String assemblyString
    // Size: 0x8
    // Offset: 0x18
    ::StringW assemblyString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Boolean hasTypeForwardedFrom
    // Size: 0x1
    // Offset: 0x20
    bool hasTypeForwardedFrom;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasTypeForwardedFrom and: memberInfos
    char __padding2[0x7] = {};
    // System.Reflection.MemberInfo[] memberInfos
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<System::Reflection::MemberInfo*> memberInfos;
    // Field size check
    static_assert(sizeof(::ArrayW<System::Reflection::MemberInfo*>) == 0x8);
    // System.String[] memberNames
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::StringW> memberNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.Type[] memberTypes
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<System::Type*> memberTypes;
    // Field size check
    static_assert(sizeof(::ArrayW<System::Type*>) == 0x8);
    public:
    // Get instance field reference: System.String fullTypeName
    ::StringW& dyn_fullTypeName();
    // Get instance field reference: System.String assemblyString
    ::StringW& dyn_assemblyString();
    // Get instance field reference: System.Boolean hasTypeForwardedFrom
    bool& dyn_hasTypeForwardedFrom();
    // Get instance field reference: System.Reflection.MemberInfo[] memberInfos
    ::ArrayW<System::Reflection::MemberInfo*>& dyn_memberInfos();
    // Get instance field reference: System.String[] memberNames
    ::ArrayW<::StringW>& dyn_memberNames();
    // Get instance field reference: System.Type[] memberTypes
    ::ArrayW<System::Type*>& dyn_memberTypes();
    // System.Void .ctor(System.String typeName, System.String assemblyName, System.Boolean hasTypeForwardedFrom)
    // Offset: 0x1869490
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerObjectInfoCache* New_ctor(::StringW typeName, ::StringW assemblyName, bool hasTypeForwardedFrom) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerObjectInfoCache*, creationType>(typeName, assemblyName, hasTypeForwardedFrom)));
    }
    // System.Void .ctor(System.Type type)
    // Offset: 0x1869154
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerObjectInfoCache* New_ctor(System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerObjectInfoCache*, creationType>(type)));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache
  #pragma pack(pop)
  static check_size<sizeof(SerObjectInfoCache), 56 + sizeof(::ArrayW<System::Type*>)> __System_Runtime_Serialization_Formatters_Binary_SerObjectInfoCacheSizeCheck;
  static_assert(sizeof(SerObjectInfoCache) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
