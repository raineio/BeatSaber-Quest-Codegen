// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DelegateData
  class DelegateData;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: RuntimeType
  class RuntimeType;
  // Forward declaring type: MulticastDelegate
  class MulticastDelegate;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x61
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Delegate
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E5CBF8
  // [ClassInterfaceAttribute] Offset: E5CBF8
  class Delegate : public ::Il2CppObject/*, public System::ICloneable, public System::Runtime::Serialization::ISerializable*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.IntPtr method_ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr method_ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr invoke_impl
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr invoke_impl;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.Object m_target
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* m_target;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.IntPtr method
    // Size: 0x8
    // Offset: 0x28
    System::IntPtr method;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr delegate_trampoline
    // Size: 0x8
    // Offset: 0x30
    System::IntPtr delegate_trampoline;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr extra_arg
    // Size: 0x8
    // Offset: 0x38
    System::IntPtr extra_arg;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr method_code
    // Size: 0x8
    // Offset: 0x40
    System::IntPtr method_code;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.Reflection.MethodInfo method_info
    // Size: 0x8
    // Offset: 0x48
    System::Reflection::MethodInfo* method_info;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // private System.Reflection.MethodInfo original_method_info
    // Size: 0x8
    // Offset: 0x50
    System::Reflection::MethodInfo* original_method_info;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // private System.DelegateData data
    // Size: 0x8
    // Offset: 0x58
    System::DelegateData* data;
    // Field size check
    static_assert(sizeof(System::DelegateData*) == 0x8);
    // private System.Boolean method_is_virtual
    // Size: 0x1
    // Offset: 0x60
    bool method_is_virtual;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Get instance field reference: private System.IntPtr method_ptr
    System::IntPtr& dyn_method_ptr();
    // Get instance field reference: private System.IntPtr invoke_impl
    System::IntPtr& dyn_invoke_impl();
    // Get instance field reference: private System.Object m_target
    ::Il2CppObject*& dyn_m_target();
    // Get instance field reference: private System.IntPtr method
    System::IntPtr& dyn_method();
    // Get instance field reference: private System.IntPtr delegate_trampoline
    System::IntPtr& dyn_delegate_trampoline();
    // Get instance field reference: private System.IntPtr extra_arg
    System::IntPtr& dyn_extra_arg();
    // Get instance field reference: private System.IntPtr method_code
    System::IntPtr& dyn_method_code();
    // Get instance field reference: private System.Reflection.MethodInfo method_info
    System::Reflection::MethodInfo*& dyn_method_info();
    // Get instance field reference: private System.Reflection.MethodInfo original_method_info
    System::Reflection::MethodInfo*& dyn_original_method_info();
    // Get instance field reference: private System.DelegateData data
    System::DelegateData*& dyn_data();
    // Get instance field reference: private System.Boolean method_is_virtual
    bool& dyn_method_is_virtual();
    // public System.Reflection.MethodInfo get_Method()
    // Offset: 0x1CE88C0
    System::Reflection::MethodInfo* get_Method();
    // public System.Object get_Target()
    // Offset: 0x1CE88D0
    ::Il2CppObject* get_Target();
    // private System.Reflection.MethodInfo GetVirtualMethod_internal()
    // Offset: 0x1CE88CC
    System::Reflection::MethodInfo* GetVirtualMethod_internal();
    // static System.Delegate CreateDelegate_internal(System.Type type, System.Object target, System.Reflection.MethodInfo info, System.Boolean throwOnBindFailure)
    // Offset: 0x1CE88D8
    static System::Delegate* CreateDelegate_internal(System::Type* type, ::Il2CppObject* target, System::Reflection::MethodInfo* info, bool throwOnBindFailure);
    // static private System.Boolean arg_type_match(System.Type delArgType, System.Type argType)
    // Offset: 0x1CE88E0
    static bool arg_type_match(System::Type* delArgType, System::Type* argType);
    // static private System.Boolean arg_type_match_this(System.Type delArgType, System.Type argType, System.Boolean boxedThis)
    // Offset: 0x1CE8A9C
    static bool arg_type_match_this(System::Type* delArgType, System::Type* argType, bool boxedThis);
    // static private System.Boolean return_type_match(System.Type delReturnType, System.Type returnType)
    // Offset: 0x1CE8C18
    static bool return_type_match(System::Type* delReturnType, System::Type* returnType);
    // static public System.Delegate CreateDelegate(System.Type type, System.Object firstArgument, System.Reflection.MethodInfo method, System.Boolean throwOnBindFailure)
    // Offset: 0x1CE8E70
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method, bool throwOnBindFailure);
    // static private System.Delegate CreateDelegate(System.Type type, System.Object firstArgument, System.Reflection.MethodInfo method, System.Boolean throwOnBindFailure, System.Boolean allowClosed)
    // Offset: 0x1CE8E7C
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method, bool throwOnBindFailure, bool allowClosed);
    // static public System.Delegate CreateDelegate(System.Type type, System.Object firstArgument, System.Reflection.MethodInfo method)
    // Offset: 0x1CE9668
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method);
    // static public System.Delegate CreateDelegate(System.Type type, System.Reflection.MethodInfo method, System.Boolean throwOnBindFailure)
    // Offset: 0x1CE9674
    static System::Delegate* CreateDelegate(System::Type* type, System::Reflection::MethodInfo* method, bool throwOnBindFailure);
    // static public System.Delegate CreateDelegate(System.Type type, System.Reflection.MethodInfo method)
    // Offset: 0x1CE968C
    static System::Delegate* CreateDelegate(System::Type* type, System::Reflection::MethodInfo* method);
    // static public System.Delegate CreateDelegate(System.Type type, System.Object target, System.String method)
    // Offset: 0x1CE96A0
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* target, ::Il2CppString* method);
    // static private System.Reflection.MethodInfo GetCandidateMethod(System.Type type, System.Type target, System.String method, System.Reflection.BindingFlags bflags, System.Boolean ignoreCase, System.Boolean throwOnBindFailure)
    // Offset: 0x1CE96B8
    static System::Reflection::MethodInfo* GetCandidateMethod(System::Type* type, System::Type* target, ::Il2CppString* method, System::Reflection::BindingFlags bflags, bool ignoreCase, bool throwOnBindFailure);
    // static public System.Delegate CreateDelegate(System.Type type, System.Type target, System.String method, System.Boolean ignoreCase, System.Boolean throwOnBindFailure)
    // Offset: 0x1CE9AB0
    static System::Delegate* CreateDelegate(System::Type* type, System::Type* target, ::Il2CppString* method, bool ignoreCase, bool throwOnBindFailure);
    // static public System.Delegate CreateDelegate(System.Type type, System.Type target, System.String method)
    // Offset: 0x1CE9BD0
    static System::Delegate* CreateDelegate(System::Type* type, System::Type* target, ::Il2CppString* method);
    // static public System.Delegate CreateDelegate(System.Type type, System.Object target, System.String method, System.Boolean ignoreCase, System.Boolean throwOnBindFailure)
    // Offset: 0x1CE9BDC
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* target, ::Il2CppString* method, bool ignoreCase, bool throwOnBindFailure);
    // static public System.Delegate CreateDelegate(System.Type type, System.Object target, System.String method, System.Boolean ignoreCase)
    // Offset: 0x1CE96AC
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* target, ::Il2CppString* method, bool ignoreCase);
    // public System.Object DynamicInvoke(params System.Object[] args)
    // Offset: 0x1CE9CD8
    ::Il2CppObject* DynamicInvoke(::ArrayW<::Il2CppObject*> args);
    // private System.Void InitializeDelegateData()
    // Offset: 0x1CE9CE4
    void InitializeDelegateData();
    // protected System.Object DynamicInvokeImpl(System.Object[] args)
    // Offset: 0x1CE9DDC
    ::Il2CppObject* DynamicInvokeImpl(::ArrayW<::Il2CppObject*> args);
    // public System.Object Clone()
    // Offset: 0x1CEA0B8
    ::Il2CppObject* Clone();
    // protected System.Reflection.MethodInfo GetMethodImpl()
    // Offset: 0x1CEA308
    System::Reflection::MethodInfo* GetMethodImpl();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1CEA3D4
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Delegate[] GetInvocationList()
    // Offset: 0x1CEA600
    ::ArrayW<System::Delegate*> GetInvocationList();
    // static public System.Delegate Combine(System.Delegate a, System.Delegate b)
    // Offset: 0x1CEA6A0
    static System::Delegate* Combine(System::Delegate* a, System::Delegate* b);
    // static public System.Delegate Combine(params System.Delegate[] delegates)
    // Offset: 0x1CEA894
    static System::Delegate* Combine(::ArrayW<System::Delegate*> delegates);
    // protected System.Delegate CombineImpl(System.Delegate d)
    // Offset: 0x1CEA90C
    System::Delegate* CombineImpl(System::Delegate* d);
    // static public System.Delegate Remove(System.Delegate source, System.Delegate value)
    // Offset: 0x1CEA984
    static System::Delegate* Remove(System::Delegate* source, System::Delegate* value);
    // protected System.Delegate RemoveImpl(System.Delegate d)
    // Offset: 0x1CEAB70
    System::Delegate* RemoveImpl(System::Delegate* d);
    // static System.Delegate CreateDelegateNoSecurityCheck(System.RuntimeType type, System.Object firstArgument, System.Reflection.MethodInfo method)
    // Offset: 0x1CEABC8
    static System::Delegate* CreateDelegateNoSecurityCheck(System::RuntimeType* type, ::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method);
    // static System.MulticastDelegate AllocDelegateLike_internal(System.Delegate d)
    // Offset: 0x1CEABD0
    static System::MulticastDelegate* AllocDelegateLike_internal(System::Delegate* d);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1CEA0C0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1CEA288
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Delegate
  #pragma pack(pop)
  static check_size<sizeof(Delegate), 96 + sizeof(bool)> __System_DelegateSizeCheck;
  static_assert(sizeof(Delegate) == 0x61);
  // static public System.Boolean op_Equality(System.Delegate d1, System.Delegate d2)
  // Offset: 0x1CEABA0
  bool operator ==(System::Delegate* d1, System::Delegate& d2);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Delegate*, "System", "Delegate");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Delegate::get_Method
// Il2CppName: get_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (System::Delegate::*)()>(&System::Delegate::get_Method)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "get_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Delegate::get_Target
// Il2CppName: get_Target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Delegate::*)()>(&System::Delegate::get_Target)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "get_Target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Delegate::GetVirtualMethod_internal
// Il2CppName: GetVirtualMethod_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (System::Delegate::*)()>(&System::Delegate::GetVirtualMethod_internal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "GetVirtualMethod_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegate_internal
// Il2CppName: CreateDelegate_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Type*, ::Il2CppObject*, System::Reflection::MethodInfo*, bool)>(&System::Delegate::CreateDelegate_internal)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* throwOnBindFailure = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegate_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, target, info, throwOnBindFailure});
  }
};
// Writing MetadataGetter for method: System::Delegate::arg_type_match
// Il2CppName: arg_type_match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*, System::Type*)>(&System::Delegate::arg_type_match)> {
  static const MethodInfo* get() {
    static auto* delArgType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* argType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "arg_type_match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delArgType, argType});
  }
};
// Writing MetadataGetter for method: System::Delegate::arg_type_match_this
// Il2CppName: arg_type_match_this
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*, System::Type*, bool)>(&System::Delegate::arg_type_match_this)> {
  static const MethodInfo* get() {
    static auto* delArgType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* argType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* boxedThis = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "arg_type_match_this", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delArgType, argType, boxedThis});
  }
};
// Writing MetadataGetter for method: System::Delegate::return_type_match
// Il2CppName: return_type_match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*, System::Type*)>(&System::Delegate::return_type_match)> {
  static const MethodInfo* get() {
    static auto* delReturnType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* returnType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "return_type_match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delReturnType, returnType});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegate
// Il2CppName: CreateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Type*, ::Il2CppObject*, System::Reflection::MethodInfo*, bool)>(&System::Delegate::CreateDelegate)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* firstArgument = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* throwOnBindFailure = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, firstArgument, method, throwOnBindFailure});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegate
// Il2CppName: CreateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Type*, ::Il2CppObject*, System::Reflection::MethodInfo*, bool, bool)>(&System::Delegate::CreateDelegate)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* firstArgument = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* throwOnBindFailure = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* allowClosed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, firstArgument, method, throwOnBindFailure, allowClosed});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegate
// Il2CppName: CreateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Type*, ::Il2CppObject*, System::Reflection::MethodInfo*)>(&System::Delegate::CreateDelegate)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* firstArgument = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, firstArgument, method});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegate
// Il2CppName: CreateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Type*, System::Reflection::MethodInfo*, bool)>(&System::Delegate::CreateDelegate)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* throwOnBindFailure = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, method, throwOnBindFailure});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegate
// Il2CppName: CreateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Type*, System::Reflection::MethodInfo*)>(&System::Delegate::CreateDelegate)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, method});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegate
// Il2CppName: CreateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Type*, ::Il2CppObject*, ::Il2CppString*)>(&System::Delegate::CreateDelegate)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, target, method});
  }
};
// Writing MetadataGetter for method: System::Delegate::GetCandidateMethod
// Il2CppName: GetCandidateMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (*)(System::Type*, System::Type*, ::Il2CppString*, System::Reflection::BindingFlags, bool, bool)>(&System::Delegate::GetCandidateMethod)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bflags = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* ignoreCase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* throwOnBindFailure = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "GetCandidateMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, target, method, bflags, ignoreCase, throwOnBindFailure});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegate
// Il2CppName: CreateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Type*, System::Type*, ::Il2CppString*, bool, bool)>(&System::Delegate::CreateDelegate)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ignoreCase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* throwOnBindFailure = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, target, method, ignoreCase, throwOnBindFailure});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegate
// Il2CppName: CreateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Type*, System::Type*, ::Il2CppString*)>(&System::Delegate::CreateDelegate)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, target, method});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegate
// Il2CppName: CreateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Type*, ::Il2CppObject*, ::Il2CppString*, bool, bool)>(&System::Delegate::CreateDelegate)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ignoreCase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* throwOnBindFailure = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, target, method, ignoreCase, throwOnBindFailure});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegate
// Il2CppName: CreateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Type*, ::Il2CppObject*, ::Il2CppString*, bool)>(&System::Delegate::CreateDelegate)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ignoreCase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, target, method, ignoreCase});
  }
};
// Writing MetadataGetter for method: System::Delegate::DynamicInvoke
// Il2CppName: DynamicInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Delegate::*)(::ArrayW<::Il2CppObject*>)>(&System::Delegate::DynamicInvoke)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "DynamicInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: System::Delegate::InitializeDelegateData
// Il2CppName: InitializeDelegateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Delegate::*)()>(&System::Delegate::InitializeDelegateData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "InitializeDelegateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Delegate::DynamicInvokeImpl
// Il2CppName: DynamicInvokeImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Delegate::*)(::ArrayW<::Il2CppObject*>)>(&System::Delegate::DynamicInvokeImpl)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "DynamicInvokeImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: System::Delegate::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Delegate::*)()>(&System::Delegate::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Delegate::GetMethodImpl
// Il2CppName: GetMethodImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (System::Delegate::*)()>(&System::Delegate::GetMethodImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "GetMethodImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Delegate::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Delegate::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Delegate::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Delegate::GetInvocationList
// Il2CppName: GetInvocationList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Delegate*> (System::Delegate::*)()>(&System::Delegate::GetInvocationList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "GetInvocationList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Delegate::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Delegate*, System::Delegate*)>(&System::Delegate::Combine)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: System::Delegate::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(::ArrayW<System::Delegate*>)>(&System::Delegate::Combine)> {
  static const MethodInfo* get() {
    static auto* delegates = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Delegate"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delegates});
  }
};
// Writing MetadataGetter for method: System::Delegate::CombineImpl
// Il2CppName: CombineImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (System::Delegate::*)(System::Delegate*)>(&System::Delegate::CombineImpl)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CombineImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: System::Delegate::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Delegate*, System::Delegate*)>(&System::Delegate::Remove)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, value});
  }
};
// Writing MetadataGetter for method: System::Delegate::RemoveImpl
// Il2CppName: RemoveImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (System::Delegate::*)(System::Delegate*)>(&System::Delegate::RemoveImpl)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "RemoveImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegateNoSecurityCheck
// Il2CppName: CreateDelegateNoSecurityCheck
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::RuntimeType*, ::Il2CppObject*, System::Reflection::MethodInfo*)>(&System::Delegate::CreateDelegateNoSecurityCheck)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    static auto* firstArgument = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegateNoSecurityCheck", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, firstArgument, method});
  }
};
// Writing MetadataGetter for method: System::Delegate::AllocDelegateLike_internal
// Il2CppName: AllocDelegateLike_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::MulticastDelegate* (*)(System::Delegate*)>(&System::Delegate::AllocDelegateLike_internal)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "AllocDelegateLike_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: System::Delegate::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Delegate::*)(::Il2CppObject*)>(&System::Delegate::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Delegate::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Delegate::*)()>(&System::Delegate::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Delegate::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
