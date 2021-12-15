// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DelegateSerializationHolder
#include "System/DelegateSerializationHolder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: DelegateEntry
  class DelegateEntry;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::DelegateSerializationHolder::DelegateEntry);
DEFINE_IL2CPP_ARG_TYPE(System::DelegateSerializationHolder::DelegateEntry*, "System", "DelegateSerializationHolder/DelegateEntry");
// Type namespace: System
namespace System {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.DelegateSerializationHolder/System.DelegateEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class DelegateSerializationHolder::DelegateEntry : public ::Il2CppObject {
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
    // private System.String type
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* type;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String assembly
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* assembly;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Object target
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* target;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.String targetTypeAssembly
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* targetTypeAssembly;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String targetTypeName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* targetTypeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String methodName
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* methodName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.DelegateSerializationHolder/System.DelegateEntry delegateEntry
    // Size: 0x8
    // Offset: 0x40
    System::DelegateSerializationHolder::DelegateEntry* delegateEntry;
    // Field size check
    static_assert(sizeof(System::DelegateSerializationHolder::DelegateEntry*) == 0x8);
    public:
    // Get instance field reference: private System.String type
    ::Il2CppString*& dyn_type();
    // Get instance field reference: private System.String assembly
    ::Il2CppString*& dyn_assembly();
    // Get instance field reference: private System.Object target
    ::Il2CppObject*& dyn_target();
    // Get instance field reference: private System.String targetTypeAssembly
    ::Il2CppString*& dyn_targetTypeAssembly();
    // Get instance field reference: private System.String targetTypeName
    ::Il2CppString*& dyn_targetTypeName();
    // Get instance field reference: private System.String methodName
    ::Il2CppString*& dyn_methodName();
    // Get instance field reference: public System.DelegateSerializationHolder/System.DelegateEntry delegateEntry
    System::DelegateSerializationHolder::DelegateEntry*& dyn_delegateEntry();
    // public System.Void .ctor(System.Delegate del, System.String targetLabel)
    // Offset: 0x1D53734
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DelegateSerializationHolder::DelegateEntry* New_ctor(System::Delegate* del, ::Il2CppString* targetLabel) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::DelegateSerializationHolder::DelegateEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DelegateSerializationHolder::DelegateEntry*, creationType>(del, targetLabel)));
    }
    // public System.Delegate DeserializeDelegate(System.Runtime.Serialization.SerializationInfo info, System.Int32 index)
    // Offset: 0x1D534C0
    System::Delegate* DeserializeDelegate(System::Runtime::Serialization::SerializationInfo* info, int index);
  }; // System.DelegateSerializationHolder/System.DelegateEntry
  #pragma pack(pop)
  static check_size<sizeof(DelegateSerializationHolder::DelegateEntry), 64 + sizeof(System::DelegateSerializationHolder::DelegateEntry*)> __System_DelegateSerializationHolder_DelegateEntrySizeCheck;
  static_assert(sizeof(DelegateSerializationHolder::DelegateEntry) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::DelegateSerializationHolder::DelegateEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::DelegateSerializationHolder::DelegateEntry::DeserializeDelegate
// Il2CppName: DeserializeDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (System::DelegateSerializationHolder::DelegateEntry::*)(System::Runtime::Serialization::SerializationInfo*, int)>(&System::DelegateSerializationHolder::DelegateEntry::DeserializeDelegate)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DelegateSerializationHolder::DelegateEntry*), "DeserializeDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, index});
  }
};
