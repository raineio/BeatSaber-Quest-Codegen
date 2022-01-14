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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: TypeLoadException
  class TypeLoadException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::TypeLoadException);
DEFINE_IL2CPP_ARG_TYPE(System::TypeLoadException*, "System", "TypeLoadException");
// Type namespace: System
namespace System {
  // Size: 0xA4
  #pragma pack(push, 1)
  // Autogenerated type: System.TypeLoadException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E9E024
  class TypeLoadException : public System::SystemException {
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
    // private System.String ClassName
    // Size: 0x8
    // Offset: 0x88
    ::StringW ClassName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String AssemblyName
    // Size: 0x8
    // Offset: 0x90
    ::StringW AssemblyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String MessageArg
    // Size: 0x8
    // Offset: 0x98
    ::StringW MessageArg;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Int32 ResourceId
    // Size: 0x4
    // Offset: 0xA0
    int ResourceId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.String ClassName
    ::StringW& dyn_ClassName();
    // Get instance field reference: private System.String AssemblyName
    ::StringW& dyn_AssemblyName();
    // Get instance field reference: private System.String MessageArg
    ::StringW& dyn_MessageArg();
    // Get instance field reference: System.Int32 ResourceId
    int& dyn_ResourceId();
    // private System.Void .ctor(System.String className, System.String assemblyName)
    // Offset: 0x25CE990
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeLoadException* New_ctor(::StringW className, ::StringW assemblyName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TypeLoadException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeLoadException*, creationType>(className, assemblyName)));
    }
    // private System.Void .ctor(System.String className, System.String assemblyName, System.String messageArg, System.Int32 resourceId)
    // Offset: 0x25CE99C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeLoadException* New_ctor(::StringW className, ::StringW assemblyName, ::StringW messageArg, int resourceId) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TypeLoadException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeLoadException*, creationType>(className, assemblyName, messageArg, resourceId)));
    }
    // private System.Void SetMessageField()
    // Offset: 0x25CE88C
    void SetMessageField();
    // public override System.String get_Message()
    // Offset: 0x25CE868
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::StringW get_Message();
    // public System.Void .ctor()
    // Offset: 0x25CE7F4
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeLoadException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TypeLoadException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeLoadException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x25CE0C8
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeLoadException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TypeLoadException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeLoadException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x25CEA08
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeLoadException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TypeLoadException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeLoadException*, creationType>(info, context)));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x25CEB2C
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.TypeLoadException
  #pragma pack(pop)
  static check_size<sizeof(TypeLoadException), 160 + sizeof(int)> __System_TypeLoadExceptionSizeCheck;
  static_assert(sizeof(TypeLoadException) == 0xA4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::TypeLoadException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TypeLoadException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TypeLoadException::SetMessageField
// Il2CppName: SetMessageField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::TypeLoadException::*)()>(&System::TypeLoadException::SetMessageField)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TypeLoadException*), "SetMessageField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TypeLoadException::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::TypeLoadException::*)()>(&System::TypeLoadException::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TypeLoadException*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TypeLoadException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TypeLoadException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TypeLoadException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TypeLoadException::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::TypeLoadException::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::TypeLoadException::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TypeLoadException*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
