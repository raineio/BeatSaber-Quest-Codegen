// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.MessageEnum
#include "System/Runtime/Serialization/Formatters/Binary/MessageEnum.hpp"
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
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: BinaryMethodCall
  class BinaryMethodCall;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*, "System.Runtime.Serialization.Formatters.Binary", "BinaryMethodCall");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall
  // [TokenAttribute] Offset: FFFFFFFF
  class BinaryMethodCall : public ::Il2CppObject {
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
    // private System.String methodName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* methodName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String typeName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* typeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Object[] args
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::Il2CppObject*> args;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // private System.Object callContext
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* callContext;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Type[] argTypes
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<System::Type*> argTypes;
    // Field size check
    static_assert(sizeof(::ArrayW<System::Type*>) == 0x8);
    // private System.Boolean bArgsPrimitive
    // Size: 0x1
    // Offset: 0x38
    bool bArgsPrimitive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bArgsPrimitive and: messageEnum
    char __padding5[0x3] = {};
    // private System.Runtime.Serialization.Formatters.Binary.MessageEnum messageEnum
    // Size: 0x4
    // Offset: 0x3C
    System::Runtime::Serialization::Formatters::Binary::MessageEnum messageEnum;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::MessageEnum) == 0x4);
    public:
    // Get instance field reference: private System.String methodName
    ::Il2CppString*& dyn_methodName();
    // Get instance field reference: private System.String typeName
    ::Il2CppString*& dyn_typeName();
    // Get instance field reference: private System.Object[] args
    ::ArrayW<::Il2CppObject*>& dyn_args();
    // Get instance field reference: private System.Object callContext
    ::Il2CppObject*& dyn_callContext();
    // Get instance field reference: private System.Type[] argTypes
    ::ArrayW<System::Type*>& dyn_argTypes();
    // Get instance field reference: private System.Boolean bArgsPrimitive
    bool& dyn_bArgsPrimitive();
    // Get instance field reference: private System.Runtime.Serialization.Formatters.Binary.MessageEnum messageEnum
    System::Runtime::Serialization::Formatters::Binary::MessageEnum& dyn_messageEnum();
    // System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x185DBEC
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // System.Void Dump()
    // Offset: 0x185DEC4
    void Dump();
    // public System.Void .ctor()
    // Offset: 0x185DEC8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryMethodCall* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryMethodCall*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall
  #pragma pack(pop)
  static check_size<sizeof(BinaryMethodCall), 60 + sizeof(System::Runtime::Serialization::Formatters::Binary::MessageEnum)> __System_Runtime_Serialization_Formatters_Binary_BinaryMethodCallSizeCheck;
  static_assert(sizeof(BinaryMethodCall) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::*)(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::Write)> {
  static const MethodInfo* get() {
    static auto* sout = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "__BinaryWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sout});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::Dump
// Il2CppName: Dump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::*)()>(&System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::Dump)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*), "Dump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
