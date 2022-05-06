// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PosesSerializer
#include "GlobalNamespace/PosesSerializer.hpp"
// Including type: System.Runtime.Serialization.SerializationBinder
#include "System/Runtime/Serialization/SerializationBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PosesSerializer::TypeSerializationBinder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesSerializer::TypeSerializationBinder*, "", "PosesSerializer/TypeSerializationBinder");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PosesSerializer/TypeSerializationBinder
  // [TokenAttribute] Offset: FFFFFFFF
  class PosesSerializer::TypeSerializationBinder : public ::System::Runtime::Serialization::SerializationBinder {
    public:
    // public System.Void .ctor()
    // Offset: 0x13DE0D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PosesSerializer::TypeSerializationBinder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PosesSerializer::TypeSerializationBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PosesSerializer::TypeSerializationBinder*, creationType>()));
    }
    // public override System.Type BindToType(System.String assemblyName, System.String typeName)
    // Offset: 0x13DE258
    // Implemented from: System.Runtime.Serialization.SerializationBinder
    // Base method: System.Type SerializationBinder::BindToType(System.String assemblyName, System.String typeName)
    ::System::Type* BindToType(::StringW assemblyName, ::StringW typeName);
  }; // PosesSerializer/TypeSerializationBinder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PosesSerializer::TypeSerializationBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PosesSerializer::TypeSerializationBinder::BindToType
// Il2CppName: BindToType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (GlobalNamespace::PosesSerializer::TypeSerializationBinder::*)(::StringW, ::StringW)>(&GlobalNamespace::PosesSerializer::TypeSerializationBinder::BindToType)> {
  static const MethodInfo* get() {
    static auto* assemblyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* typeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosesSerializer::TypeSerializationBinder*), "BindToType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assemblyName, typeName});
  }
};
