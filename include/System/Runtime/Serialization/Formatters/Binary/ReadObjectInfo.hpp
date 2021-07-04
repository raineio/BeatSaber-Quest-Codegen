// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
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
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: ObjectManager
  class ObjectManager;
  // Forward declaring type: ISerializationSurrogate
  class ISerializationSurrogate;
  // Forward declaring type: IFormatterConverter
  class IFormatterConverter;
  // Forward declaring type: ISurrogateSelector
  class ISurrogateSelector;
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: SerObjectInfoCache
  class SerObjectInfoCache;
  // Forward declaring type: SerObjectInfoInit
  class SerObjectInfoInit;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo
  class ReadObjectInfo : public ::Il2CppObject {
    public:
    // System.Int32 objectInfoId
    // Size: 0x4
    // Offset: 0x10
    int objectInfoId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: objectInfoId and: objectType
    char __padding0[0x4] = {};
    // System.Type objectType
    // Size: 0x8
    // Offset: 0x18
    System::Type* objectType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // System.Runtime.Serialization.ObjectManager objectManager
    // Size: 0x8
    // Offset: 0x20
    System::Runtime::Serialization::ObjectManager* objectManager;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::ObjectManager*) == 0x8);
    // System.Int32 count
    // Size: 0x4
    // Offset: 0x28
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean isSi
    // Size: 0x1
    // Offset: 0x2C
    bool isSi;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean isNamed
    // Size: 0x1
    // Offset: 0x2D
    bool isNamed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean isTyped
    // Size: 0x1
    // Offset: 0x2E
    bool isTyped;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean bSimpleAssembly
    // Size: 0x1
    // Offset: 0x2F
    bool bSimpleAssembly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache
    // Size: 0x8
    // Offset: 0x30
    System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*) == 0x8);
    // System.String[] wireMemberNames
    // Size: 0x8
    // Offset: 0x38
    ::Array<::Il2CppString*>* wireMemberNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.Type[] wireMemberTypes
    // Size: 0x8
    // Offset: 0x40
    ::Array<System::Type*>* wireMemberTypes;
    // Field size check
    static_assert(sizeof(::Array<System::Type*>*) == 0x8);
    // private System.Int32 lastPosition
    // Size: 0x4
    // Offset: 0x48
    int lastPosition;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: lastPosition and: serializationSurrogate
    char __padding11[0x4] = {};
    // System.Runtime.Serialization.ISerializationSurrogate serializationSurrogate
    // Size: 0x8
    // Offset: 0x50
    System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::ISerializationSurrogate*) == 0x8);
    // System.Runtime.Serialization.StreamingContext context
    // Size: 0xC
    // Offset: 0x58
    System::Runtime::Serialization::StreamingContext context;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::StreamingContext) == 0xC);
    // Padding between fields: context and: memberTypesList
    char __padding13[0x4] = {};
    // System.Collections.Generic.List`1<System.Type> memberTypesList
    // Size: 0x8
    // Offset: 0x68
    System::Collections::Generic::List_1<System::Type*>* memberTypesList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Type*>*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit
    // Size: 0x8
    // Offset: 0x70
    System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*) == 0x8);
    // System.Runtime.Serialization.IFormatterConverter formatterConverter
    // Size: 0x8
    // Offset: 0x78
    System::Runtime::Serialization::IFormatterConverter* formatterConverter;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::IFormatterConverter*) == 0x8);
    // Creating value type constructor for type: ReadObjectInfo
    ReadObjectInfo(int objectInfoId_ = {}, System::Type* objectType_ = {}, System::Runtime::Serialization::ObjectManager* objectManager_ = {}, int count_ = {}, bool isSi_ = {}, bool isNamed_ = {}, bool isTyped_ = {}, bool bSimpleAssembly_ = {}, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache_ = {}, ::Array<::Il2CppString*>* wireMemberNames_ = {}, ::Array<System::Type*>* wireMemberTypes_ = {}, int lastPosition_ = {}, System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate_ = {}, System::Runtime::Serialization::StreamingContext context_ = {}, System::Collections::Generic::List_1<System::Type*>* memberTypesList_ = {}, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit_ = {}, System::Runtime::Serialization::IFormatterConverter* formatterConverter_ = {}) noexcept : objectInfoId{objectInfoId_}, objectType{objectType_}, objectManager{objectManager_}, count{count_}, isSi{isSi_}, isNamed{isNamed_}, isTyped{isTyped_}, bSimpleAssembly{bSimpleAssembly_}, cache{cache_}, wireMemberNames{wireMemberNames_}, wireMemberTypes{wireMemberTypes_}, lastPosition{lastPosition_}, serializationSurrogate{serializationSurrogate_}, context{context_}, memberTypesList{memberTypesList_}, serObjectInfoInit{serObjectInfoInit_}, formatterConverter{formatterConverter_} {}
    // Get static field: static System.Int32 readObjectInfoCounter
    static int _get_readObjectInfoCounter();
    // Set static field: static System.Int32 readObjectInfoCounter
    static void _set_readObjectInfoCounter(int value);
    // System.Void ObjectEnd()
    // Offset: 0x160FDDC
    void ObjectEnd();
    // System.Void PrepareForReuse()
    // Offset: 0x160D05C
    void PrepareForReuse();
    // static System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo Create(System.Type objectType, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Boolean bSimpleAssembly)
    // Offset: 0x160E24C
    static System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* Create(System::Type* objectType, System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::ObjectManager* objectManager, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);
    // System.Void Init(System.Type objectType, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Boolean bSimpleAssembly)
    // Offset: 0x16141F4
    void Init(System::Type* objectType, System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::ObjectManager* objectManager, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);
    // static System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo Create(System.Type objectType, System.String[] memberNames, System.Type[] memberTypes, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Boolean bSimpleAssembly)
    // Offset: 0x160E2E0
    static System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* Create(System::Type* objectType, ::Array<::Il2CppString*>* memberNames, ::Array<System::Type*>* memberTypes, System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::ObjectManager* objectManager, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);
    // System.Void Init(System.Type objectType, System.String[] memberNames, System.Type[] memberTypes, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Boolean bSimpleAssembly)
    // Offset: 0x16143C8
    void Init(System::Type* objectType, ::Array<::Il2CppString*>* memberNames, ::Array<System::Type*>* memberTypes, System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::ObjectManager* objectManager, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);
    // private System.Void InitReadConstructor(System.Type objectType, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1614210
    void InitReadConstructor(System::Type* objectType, System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, System::Runtime::Serialization::StreamingContext context);
    // private System.Void InitSiRead()
    // Offset: 0x1614484
    void InitSiRead();
    // private System.Void InitNoMembers()
    // Offset: 0x1614418
    void InitNoMembers();
    // private System.Void InitMemberInfo()
    // Offset: 0x16144F8
    void InitMemberInfo();
    // System.Reflection.MemberInfo GetMemberInfo(System.String name)
    // Offset: 0x1610FFC
    System::Reflection::MemberInfo* GetMemberInfo(::Il2CppString* name);
    // System.Type GetType(System.String name)
    // Offset: 0x1610B9C
    System::Type* GetType(::Il2CppString* name);
    // System.Void AddValue(System.String name, System.Object value, ref System.Runtime.Serialization.SerializationInfo si, ref System.Object[] memberData)
    // Offset: 0x1610D20
    void AddValue(::Il2CppString* name, ::Il2CppObject* value, System::Runtime::Serialization::SerializationInfo*& si, ::Array<::Il2CppObject*>*& memberData);
    // System.Void InitDataStore(ref System.Runtime.Serialization.SerializationInfo si, ref System.Object[] memberData)
    // Offset: 0x160CF94
    void InitDataStore(System::Runtime::Serialization::SerializationInfo*& si, ::Array<::Il2CppObject*>*& memberData);
    // System.Void RecordFixup(System.Int64 objectId, System.String name, System.Int64 idRef)
    // Offset: 0x1610E18
    void RecordFixup(int64_t objectId, ::Il2CppString* name, int64_t idRef);
    // System.Void PopulateObjectMembers(System.Object obj, System.Object[] memberData)
    // Offset: 0x160FA48
    void PopulateObjectMembers(::Il2CppObject* obj, ::Array<::Il2CppObject*>* memberData);
    // private System.Int32 Position(System.String name)
    // Offset: 0x1614904
    int Position(::Il2CppString* name);
    // System.Type[] GetMemberTypes(System.String[] inMemberNames, System.Type objectType)
    // Offset: 0x160C6C0
    ::Array<System::Type*>* GetMemberTypes(::Array<::Il2CppString*>* inMemberNames, System::Type* objectType);
    // System.Type GetMemberType(System.Reflection.MemberInfo objMember)
    // Offset: 0x16147A0
    System::Type* GetMemberType(System::Reflection::MemberInfo* objMember);
    // static private System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo GetObjectInfo(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit)
    // Offset: 0x161417C
    static System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* GetObjectInfo(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit);
    // System.Void .ctor()
    // Offset: 0x1614174
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReadObjectInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReadObjectInfo*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo
  #pragma pack(pop)
  static check_size<sizeof(ReadObjectInfo), 120 + sizeof(System::Runtime::Serialization::IFormatterConverter*)> __System_Runtime_Serialization_Formatters_Binary_ReadObjectInfoSizeCheck;
  static_assert(sizeof(ReadObjectInfo) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*, "System.Runtime.Serialization.Formatters.Binary", "ReadObjectInfo");
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::ObjectEnd
// Il2CppName: ObjectEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::ObjectEnd)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "ObjectEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::PrepareForReuse
// Il2CppName: PrepareForReuse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::PrepareForReuse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "PrepareForReuse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* (*)(System::Type*, System::Runtime::Serialization::ISurrogateSelector*, System::Runtime::Serialization::StreamingContext, System::Runtime::Serialization::ObjectManager*, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, System::Runtime::Serialization::IFormatterConverter*, bool)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Create)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::ISurrogateSelector*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::ObjectManager*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::IFormatterConverter*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(System::Type*, System::Runtime::Serialization::ISurrogateSelector*, System::Runtime::Serialization::StreamingContext, System::Runtime::Serialization::ObjectManager*, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, System::Runtime::Serialization::IFormatterConverter*, bool)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::ISurrogateSelector*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::ObjectManager*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::IFormatterConverter*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* (*)(System::Type*, ::Array<::Il2CppString*>*, ::Array<System::Type*>*, System::Runtime::Serialization::ISurrogateSelector*, System::Runtime::Serialization::StreamingContext, System::Runtime::Serialization::ObjectManager*, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, System::Runtime::Serialization::IFormatterConverter*, bool)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Create)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppString*>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<System::Type*>*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::ISurrogateSelector*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::ObjectManager*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::IFormatterConverter*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(System::Type*, ::Array<::Il2CppString*>*, ::Array<System::Type*>*, System::Runtime::Serialization::ISurrogateSelector*, System::Runtime::Serialization::StreamingContext, System::Runtime::Serialization::ObjectManager*, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, System::Runtime::Serialization::IFormatterConverter*, bool)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppString*>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<System::Type*>*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::ISurrogateSelector*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::ObjectManager*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::IFormatterConverter*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitReadConstructor
// Il2CppName: InitReadConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(System::Type*, System::Runtime::Serialization::ISurrogateSelector*, System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitReadConstructor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "InitReadConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::ISurrogateSelector*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitSiRead
// Il2CppName: InitSiRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitSiRead)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "InitSiRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitNoMembers
// Il2CppName: InitNoMembers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitNoMembers)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "InitNoMembers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitMemberInfo
// Il2CppName: InitMemberInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitMemberInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "InitMemberInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberInfo
// Il2CppName: GetMemberInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MemberInfo* (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::Il2CppString*)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "GetMemberInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetType
// Il2CppName: GetType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::Il2CppString*)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "GetType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::AddValue
// Il2CppName: AddValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::Il2CppString*, ::Il2CppObject*, System::Runtime::Serialization::SerializationInfo*&, ::Array<::Il2CppObject*>*&)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::AddValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "AddValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*&>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppObject*>*&>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitDataStore
// Il2CppName: InitDataStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(System::Runtime::Serialization::SerializationInfo*&, ::Array<::Il2CppObject*>*&)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitDataStore)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "InitDataStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*&>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppObject*>*&>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::RecordFixup
// Il2CppName: RecordFixup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(int64_t, ::Il2CppString*, int64_t)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::RecordFixup)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "RecordFixup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int64_t>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::PopulateObjectMembers
// Il2CppName: PopulateObjectMembers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::Il2CppObject*, ::Array<::Il2CppObject*>*)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::PopulateObjectMembers)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "PopulateObjectMembers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppObject*>*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Position
// Il2CppName: Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::Il2CppString*)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Position)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberTypes
// Il2CppName: GetMemberTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Type*>* (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::Array<::Il2CppString*>*, System::Type*)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberTypes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "GetMemberTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppString*>*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberType
// Il2CppName: GetMemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(System::Reflection::MemberInfo*)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "GetMemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Reflection::MemberInfo*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetObjectInfo
// Il2CppName: GetObjectInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* (*)(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetObjectInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "GetObjectInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
