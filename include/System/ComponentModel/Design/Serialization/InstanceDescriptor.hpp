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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ICollection
  class ICollection;
}
// Completed forward declares
// Type namespace: System.ComponentModel.Design.Serialization
namespace System::ComponentModel::Design::Serialization {
  // Forward declaring type: InstanceDescriptor
  class InstanceDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::Design::Serialization::InstanceDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::Serialization::InstanceDescriptor*, "System.ComponentModel.Design.Serialization", "InstanceDescriptor");
// Type namespace: System.ComponentModel.Design.Serialization
namespace System::ComponentModel::Design::Serialization {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.Design.Serialization.InstanceDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  class InstanceDescriptor : public ::Il2CppObject {
    public:
    public:
    // private System.Reflection.MemberInfo member
    // Size: 0x8
    // Offset: 0x10
    ::System::Reflection::MemberInfo* member;
    // Field size check
    static_assert(sizeof(::System::Reflection::MemberInfo*) == 0x8);
    // private System.Collections.ICollection arguments
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::ICollection* arguments;
    // Field size check
    static_assert(sizeof(::System::Collections::ICollection*) == 0x8);
    // private System.Boolean isComplete
    // Size: 0x1
    // Offset: 0x20
    bool isComplete;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Reflection.MemberInfo member
    [[deprecated("Use field access instead!")]] ::System::Reflection::MemberInfo*& dyn_member();
    // Get instance field reference: private System.Collections.ICollection arguments
    [[deprecated("Use field access instead!")]] ::System::Collections::ICollection*& dyn_arguments();
    // Get instance field reference: private System.Boolean isComplete
    [[deprecated("Use field access instead!")]] bool& dyn_isComplete();
    // public System.Void .ctor(System.Reflection.MemberInfo member, System.Collections.ICollection arguments)
    // Offset: 0x1D8AC44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstanceDescriptor* New_ctor(::System::Reflection::MemberInfo* member, ::System::Collections::ICollection* arguments) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::Design::Serialization::InstanceDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstanceDescriptor*, creationType>(member, arguments)));
    }
    // public System.Void .ctor(System.Reflection.MemberInfo member, System.Collections.ICollection arguments, System.Boolean isComplete)
    // Offset: 0x1D8B7FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstanceDescriptor* New_ctor(::System::Reflection::MemberInfo* member, ::System::Collections::ICollection* arguments, bool isComplete) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::Design::Serialization::InstanceDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstanceDescriptor*, creationType>(member, arguments, isComplete)));
    }
    // public System.Object Invoke()
    // Offset: 0x1D8BC90
    ::Il2CppObject* Invoke();
  }; // System.ComponentModel.Design.Serialization.InstanceDescriptor
  #pragma pack(pop)
  static check_size<sizeof(InstanceDescriptor), 32 + sizeof(bool)> __System_ComponentModel_Design_Serialization_InstanceDescriptorSizeCheck;
  static_assert(sizeof(InstanceDescriptor) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::Design::Serialization::InstanceDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::Design::Serialization::InstanceDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::Design::Serialization::InstanceDescriptor::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::Design::Serialization::InstanceDescriptor::*)()>(&System::ComponentModel::Design::Serialization::InstanceDescriptor::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Design::Serialization::InstanceDescriptor*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
