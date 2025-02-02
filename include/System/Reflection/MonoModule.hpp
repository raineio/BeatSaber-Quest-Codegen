// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.RuntimeModule
#include "System/Reflection/RuntimeModule.hpp"
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
  // Forward declaring type: RuntimeAssembly
  class RuntimeAssembly;
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: MonoModule
  class MonoModule;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::MonoModule);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MonoModule*, "System.Reflection", "MonoModule");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.MonoModule
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1075648
  // [ClassInterfaceAttribute] Offset: 1075648
  // [ComDefaultInterfaceAttribute] Offset: 1075648
  class MonoModule : public ::System::Reflection::RuntimeModule {
    public:
    // System.Reflection.RuntimeAssembly GetRuntimeAssembly()
    // Offset: 0x1E2FDA4
    ::System::Reflection::RuntimeAssembly* GetRuntimeAssembly();
    // public override System.Reflection.Assembly get_Assembly()
    // Offset: 0x1E2FB4C
    // Implemented from: System.Reflection.Module
    // Base method: System.Reflection.Assembly Module::get_Assembly()
    ::System::Reflection::Assembly* get_Assembly();
    // public override System.String get_ScopeName()
    // Offset: 0x1E2FB54
    // Implemented from: System.Reflection.Module
    // Base method: System.String Module::get_ScopeName()
    ::StringW get_ScopeName();
    // public override System.Guid get_ModuleVersionId()
    // Offset: 0x1E2FB5C
    // Implemented from: System.Reflection.Module
    // Base method: System.Guid Module::get_ModuleVersionId()
    ::System::Guid get_ModuleVersionId();
    // public System.Void .ctor()
    // Offset: 0x1E2FE24
    // Implemented from: System.Reflection.RuntimeModule
    // Base method: System.Void RuntimeModule::.ctor()
    // Base method: System.Void Module::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoModule* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::MonoModule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoModule*, creationType>()));
    }
    // public override System.Boolean IsResource()
    // Offset: 0x1E2FB68
    // Implemented from: System.Reflection.Module
    // Base method: System.Boolean Module::IsResource()
    bool IsResource();
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x1E2FB70
    // Implemented from: System.Reflection.Module
    // Base method: System.Object[] Module::GetCustomAttributes(System.Boolean inherit)
    ::ArrayW<::Il2CppObject*> GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1E2FBE8
    // Implemented from: System.Reflection.Module
    // Base method: System.Object[] Module::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::ArrayW<::Il2CppObject*> GetCustomAttributes(::System::Type* attributeType, bool inherit);
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1E2FC68
    // Implemented from: System.Reflection.Module
    // Base method: System.Boolean Module::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(::System::Type* attributeType, bool inherit);
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1E2FCE8
    // Implemented from: System.Reflection.Module
    // Base method: System.Void Module::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
  }; // System.Reflection.MonoModule
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::MonoModule::GetRuntimeAssembly
// Il2CppName: GetRuntimeAssembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::RuntimeAssembly* (System::Reflection::MonoModule::*)()>(&System::Reflection::MonoModule::GetRuntimeAssembly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoModule*), "GetRuntimeAssembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoModule::get_Assembly
// Il2CppName: get_Assembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (System::Reflection::MonoModule::*)()>(&System::Reflection::MonoModule::get_Assembly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoModule*), "get_Assembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoModule::get_ScopeName
// Il2CppName: get_ScopeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::MonoModule::*)()>(&System::Reflection::MonoModule::get_ScopeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoModule*), "get_ScopeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoModule::get_ModuleVersionId
// Il2CppName: get_ModuleVersionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (System::Reflection::MonoModule::*)()>(&System::Reflection::MonoModule::get_ModuleVersionId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoModule*), "get_ModuleVersionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoModule::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::MonoModule::IsResource
// Il2CppName: IsResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::MonoModule::*)()>(&System::Reflection::MonoModule::IsResource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoModule*), "IsResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoModule::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Reflection::MonoModule::*)(bool)>(&System::Reflection::MonoModule::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoModule*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoModule::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Reflection::MonoModule::*)(::System::Type*, bool)>(&System::Reflection::MonoModule::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoModule*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoModule::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::MonoModule::*)(::System::Type*, bool)>(&System::Reflection::MonoModule::IsDefined)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoModule*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoModule::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::MonoModule::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Reflection::MonoModule::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoModule*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
