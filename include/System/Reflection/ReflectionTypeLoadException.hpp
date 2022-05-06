// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.SystemException
#include "System/SystemException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Skipping declaration: Exception because it is already included!
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: ReflectionTypeLoadException
  class ReflectionTypeLoadException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::ReflectionTypeLoadException);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ReflectionTypeLoadException*, "System.Reflection", "ReflectionTypeLoadException");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.ReflectionTypeLoadException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 102F934
  class ReflectionTypeLoadException : public ::System::SystemException {
    public:
    public:
    // private System.Type[] _classes
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<::System::Type*> classes;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    // private System.Exception[] _exceptions
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<::System::Exception*> exceptions;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Exception*>) == 0x8);
    public:
    // Get instance field reference: private System.Type[] _classes
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Type*>& dyn__classes();
    // Get instance field reference: private System.Exception[] _exceptions
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Exception*>& dyn__exceptions();
    // public System.Void .ctor(System.Type[] classes, System.Exception[] exceptions)
    // Offset: 0x1D79F18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionTypeLoadException* New_ctor(::ArrayW<::System::Type*> classes, ::ArrayW<::System::Exception*> exceptions) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::ReflectionTypeLoadException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionTypeLoadException*, creationType>(classes, exceptions)));
    }
    // private System.Void .ctor()
    // Offset: 0x1D79EA4
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionTypeLoadException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::ReflectionTypeLoadException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionTypeLoadException*, creationType>()));
    }
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1D79F64
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionTypeLoadException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::ReflectionTypeLoadException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionTypeLoadException*, creationType>(info, context)));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1D7A0C4
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
  }; // System.Reflection.ReflectionTypeLoadException
  #pragma pack(pop)
  static check_size<sizeof(ReflectionTypeLoadException), 144 + sizeof(::ArrayW<::System::Exception*>)> __System_Reflection_ReflectionTypeLoadExceptionSizeCheck;
  static_assert(sizeof(ReflectionTypeLoadException) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::ReflectionTypeLoadException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::ReflectionTypeLoadException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::ReflectionTypeLoadException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::ReflectionTypeLoadException::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::ReflectionTypeLoadException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Reflection::ReflectionTypeLoadException::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ReflectionTypeLoadException*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
