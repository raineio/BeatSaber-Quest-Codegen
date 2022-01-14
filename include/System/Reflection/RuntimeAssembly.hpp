// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.Assembly
#include "System/Reflection/Assembly.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Policy
namespace System::Security::Policy {
  // Forward declaring type: Evidence
  class Evidence;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: StackCrawlMark
  struct StackCrawlMark;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: AssemblyName
  class AssemblyName;
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
  // Forward declaring type: RuntimeAssembly
  class RuntimeAssembly;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Reflection::RuntimeAssembly);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::RuntimeAssembly*, "System.Reflection", "RuntimeAssembly");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.RuntimeAssembly
  // [TokenAttribute] Offset: FFFFFFFF
  class RuntimeAssembly : public System::Reflection::Assembly {
    public:
    // static System.Reflection.RuntimeAssembly LoadWithPartialNameInternal(System.String partialName, System.Security.Policy.Evidence securityEvidence, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0x1E9DD24
    static System::Reflection::RuntimeAssembly* LoadWithPartialNameInternal(::StringW partialName, System::Security::Policy::Evidence* securityEvidence, ByRef<System::Threading::StackCrawlMark> stackMark);
    // static System.Reflection.RuntimeAssembly LoadWithPartialNameInternal(System.Reflection.AssemblyName an, System.Security.Policy.Evidence securityEvidence, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0x1E9DDBC
    static System::Reflection::RuntimeAssembly* LoadWithPartialNameInternal(System::Reflection::AssemblyName* an, System::Security::Policy::Evidence* securityEvidence, ByRef<System::Threading::StackCrawlMark> stackMark);
    // protected System.Void .ctor()
    // Offset: 0x1E98504
    // Implemented from: System.Reflection.Assembly
    // Base method: System.Void Assembly::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeAssembly* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::RuntimeAssembly::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeAssembly*, creationType>()));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1E9DC74
    // Implemented from: System.Reflection.Assembly
    // Base method: System.Void Assembly::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Reflection.AssemblyName GetName(System.Boolean copiedName)
    // Offset: 0x1E9DDF0
    // Implemented from: System.Reflection.Assembly
    // Base method: System.Reflection.AssemblyName Assembly::GetName(System.Boolean copiedName)
    System::Reflection::AssemblyName* GetName(bool copiedName);
  }; // System.Reflection.RuntimeAssembly
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::RuntimeAssembly::LoadWithPartialNameInternal
// Il2CppName: LoadWithPartialNameInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::RuntimeAssembly* (*)(::StringW, System::Security::Policy::Evidence*, ByRef<System::Threading::StackCrawlMark>)>(&System::Reflection::RuntimeAssembly::LoadWithPartialNameInternal)> {
  static const MethodInfo* get() {
    static auto* partialName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* securityEvidence = &::il2cpp_utils::GetClassFromName("System.Security.Policy", "Evidence")->byval_arg;
    static auto* stackMark = &::il2cpp_utils::GetClassFromName("System.Threading", "StackCrawlMark")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeAssembly*), "LoadWithPartialNameInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{partialName, securityEvidence, stackMark});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeAssembly::LoadWithPartialNameInternal
// Il2CppName: LoadWithPartialNameInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::RuntimeAssembly* (*)(System::Reflection::AssemblyName*, System::Security::Policy::Evidence*, ByRef<System::Threading::StackCrawlMark>)>(&System::Reflection::RuntimeAssembly::LoadWithPartialNameInternal)> {
  static const MethodInfo* get() {
    static auto* an = &::il2cpp_utils::GetClassFromName("System.Reflection", "AssemblyName")->byval_arg;
    static auto* securityEvidence = &::il2cpp_utils::GetClassFromName("System.Security.Policy", "Evidence")->byval_arg;
    static auto* stackMark = &::il2cpp_utils::GetClassFromName("System.Threading", "StackCrawlMark")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeAssembly*), "LoadWithPartialNameInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{an, securityEvidence, stackMark});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeAssembly::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::RuntimeAssembly::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::RuntimeAssembly::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Reflection::RuntimeAssembly::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeAssembly*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeAssembly::GetName
// Il2CppName: GetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::AssemblyName* (System::Reflection::RuntimeAssembly::*)(bool)>(&System::Reflection::RuntimeAssembly::GetName)> {
  static const MethodInfo* get() {
    static auto* copiedName = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeAssembly*), "GetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{copiedName});
  }
};
