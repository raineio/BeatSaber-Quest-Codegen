// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.jvalue
#include "UnityEngine/jvalue.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AndroidJavaProxy
  class AndroidJavaProxy;
  // Forward declaring type: AndroidJavaRunnable
  class AndroidJavaRunnable;
  // Forward declaring type: AndroidJavaObject
  class AndroidJavaObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: _AndroidJNIHelper
  class _AndroidJNIHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::_AndroidJNIHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::_AndroidJNIHelper*, "UnityEngine", "_AndroidJNIHelper");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine._AndroidJNIHelper
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 106FC1C
  class _AndroidJNIHelper : public ::Il2CppObject {
    public:
    // public System.Void .ctor()
    // Offset: 0x2A64204
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static _AndroidJNIHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::_AndroidJNIHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<_AndroidJNIHelper*, creationType>()));
    }
    // static public System.IntPtr CreateJavaProxy(System.IntPtr delegateHandle, UnityEngine.AndroidJavaProxy proxy)
    // Offset: 0x2A5A510
    static ::System::IntPtr CreateJavaProxy(::System::IntPtr delegateHandle, ::UnityEngine::AndroidJavaProxy* proxy);
    // static public System.IntPtr CreateJavaRunnable(UnityEngine.AndroidJavaRunnable jrunnable)
    // Offset: 0x2A5A3B4
    static ::System::IntPtr CreateJavaRunnable(::UnityEngine::AndroidJavaRunnable* jrunnable);
    // static public System.IntPtr InvokeJavaProxyMethod(UnityEngine.AndroidJavaProxy proxy, System.IntPtr jmethodName, System.IntPtr jargs)
    // Offset: 0x2A6383C
    static ::System::IntPtr InvokeJavaProxyMethod(::UnityEngine::AndroidJavaProxy* proxy, ::System::IntPtr jmethodName, ::System::IntPtr jargs);
    // static public UnityEngine.jvalue[] CreateJNIArgArray(System.Object[] args)
    // Offset: 0x2A5ADE0
    static ::ArrayW<::UnityEngine::jvalue> CreateJNIArgArray(::ArrayW<::Il2CppObject*> args);
    // static public System.Object UnboxArray(UnityEngine.AndroidJavaObject obj)
    // Offset: 0x2A63C0C
    static ::Il2CppObject* UnboxArray(::UnityEngine::AndroidJavaObject* obj);
    // static public System.Object Unbox(UnityEngine.AndroidJavaObject obj)
    // Offset: 0x2A621A8
    static ::Il2CppObject* Unbox(::UnityEngine::AndroidJavaObject* obj);
    // static public UnityEngine.AndroidJavaObject Box(System.Object obj)
    // Offset: 0x2A61554
    static ::UnityEngine::AndroidJavaObject* Box(::Il2CppObject* obj);
    // static public System.Void DeleteJNIArgArray(System.Object[] args, UnityEngine.jvalue[] jniArgs)
    // Offset: 0x2A5B2B8
    static void DeleteJNIArgArray(::ArrayW<::Il2CppObject*> args, ::ArrayW<::UnityEngine::jvalue> jniArgs);
    // static public System.IntPtr ConvertToJNIArray(System.Array array)
    // Offset: 0x2A5A5A4
    static ::System::IntPtr ConvertToJNIArray(::System::Array* array);
    // static public ArrayType ConvertFromJNIArray(System.IntPtr array)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class ArrayType>
    static ArrayType ConvertFromJNIArray(::System::IntPtr array) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::_AndroidJNIHelper::ConvertFromJNIArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "_AndroidJNIHelper", "ConvertFromJNIArray", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayType>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<ArrayType, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, array);
    }
    // static public System.IntPtr GetConstructorID(System.IntPtr jclass, System.Object[] args)
    // Offset: 0x2A5B404
    static ::System::IntPtr GetConstructorID(::System::IntPtr jclass, ::ArrayW<::Il2CppObject*> args);
    // static public System.IntPtr GetMethodID(System.IntPtr jclass, System.String methodName, System.Object[] args, System.Boolean isStatic)
    // Offset: 0x2A5B474
    static ::System::IntPtr GetMethodID(::System::IntPtr jclass, ::StringW methodName, ::ArrayW<::Il2CppObject*> args, bool isStatic);
    // static public System.IntPtr GetMethodID(System.IntPtr jclass, System.String methodName, System.Object[] args, System.Boolean isStatic)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class ReturnType>
    static ::System::IntPtr GetMethodID(::System::IntPtr jclass, ::StringW methodName, ::ArrayW<::Il2CppObject*> args, bool isStatic) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::_AndroidJNIHelper::GetMethodID");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "_AndroidJNIHelper", "GetMethodID", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(jclass), ::il2cpp_utils::ExtractType(methodName), ::il2cpp_utils::ExtractType(args), ::il2cpp_utils::ExtractType(isStatic)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::IntPtr, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, jclass, methodName, args, isStatic);
    }
    // static public System.IntPtr GetFieldID(System.IntPtr jclass, System.String fieldName, System.Boolean isStatic)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class ReturnType>
    static ::System::IntPtr GetFieldID(::System::IntPtr jclass, ::StringW fieldName, bool isStatic) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::_AndroidJNIHelper::GetFieldID");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "_AndroidJNIHelper", "GetFieldID", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(jclass), ::il2cpp_utils::ExtractType(fieldName), ::il2cpp_utils::ExtractType(isStatic)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::IntPtr, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, jclass, fieldName, isStatic);
    }
    // static public System.IntPtr GetConstructorID(System.IntPtr jclass, System.String signature)
    // Offset: 0x2A59CA4
    static ::System::IntPtr GetConstructorID(::System::IntPtr jclass, ::StringW signature);
    // static public System.IntPtr GetMethodID(System.IntPtr jclass, System.String methodName, System.String signature, System.Boolean isStatic)
    // Offset: 0x2A59EC8
    static ::System::IntPtr GetMethodID(::System::IntPtr jclass, ::StringW methodName, ::StringW signature, bool isStatic);
    // static private System.IntPtr GetMethodIDFallback(System.IntPtr jclass, System.String methodName, System.String signature, System.Boolean isStatic)
    // Offset: 0x2A64108
    static ::System::IntPtr GetMethodIDFallback(::System::IntPtr jclass, ::StringW methodName, ::StringW signature, bool isStatic);
    // static public System.IntPtr GetFieldID(System.IntPtr jclass, System.String fieldName, System.String signature, System.Boolean isStatic)
    // Offset: 0x2A5A100
    static ::System::IntPtr GetFieldID(::System::IntPtr jclass, ::StringW fieldName, ::StringW signature, bool isStatic);
    // static public System.String GetSignature(System.Object obj)
    // Offset: 0x2A5B4BC
    static ::StringW GetSignature(::Il2CppObject* obj);
    // static public System.String GetSignature(System.Object[] args)
    // Offset: 0x2A5C05C
    static ::StringW GetSignature(::ArrayW<::Il2CppObject*> args);
    // static public System.String GetSignature(System.Object[] args)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class ReturnType>
    static ::StringW GetSignature(::ArrayW<::Il2CppObject*> args) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::_AndroidJNIHelper::GetSignature");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "_AndroidJNIHelper", "GetSignature", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(args)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, args);
    }
  }; // UnityEngine._AndroidJNIHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::CreateJavaProxy
// Il2CppName: CreateJavaProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::UnityEngine::AndroidJavaProxy*)>(&UnityEngine::_AndroidJNIHelper::CreateJavaProxy)> {
  static const MethodInfo* get() {
    static auto* delegateHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* proxy = &::il2cpp_utils::GetClassFromName("UnityEngine", "AndroidJavaProxy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "CreateJavaProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delegateHandle, proxy});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::CreateJavaRunnable
// Il2CppName: CreateJavaRunnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::UnityEngine::AndroidJavaRunnable*)>(&UnityEngine::_AndroidJNIHelper::CreateJavaRunnable)> {
  static const MethodInfo* get() {
    static auto* jrunnable = &::il2cpp_utils::GetClassFromName("UnityEngine", "AndroidJavaRunnable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "CreateJavaRunnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jrunnable});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::InvokeJavaProxyMethod
// Il2CppName: InvokeJavaProxyMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::UnityEngine::AndroidJavaProxy*, ::System::IntPtr, ::System::IntPtr)>(&UnityEngine::_AndroidJNIHelper::InvokeJavaProxyMethod)> {
  static const MethodInfo* get() {
    static auto* proxy = &::il2cpp_utils::GetClassFromName("UnityEngine", "AndroidJavaProxy")->byval_arg;
    static auto* jmethodName = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* jargs = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "InvokeJavaProxyMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{proxy, jmethodName, jargs});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::CreateJNIArgArray
// Il2CppName: CreateJNIArgArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::jvalue> (*)(::ArrayW<::Il2CppObject*>)>(&UnityEngine::_AndroidJNIHelper::CreateJNIArgArray)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "CreateJNIArgArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::UnboxArray
// Il2CppName: UnboxArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::UnityEngine::AndroidJavaObject*)>(&UnityEngine::_AndroidJNIHelper::UnboxArray)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "AndroidJavaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "UnboxArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::Unbox
// Il2CppName: Unbox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::UnityEngine::AndroidJavaObject*)>(&UnityEngine::_AndroidJNIHelper::Unbox)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "AndroidJavaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "Unbox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::Box
// Il2CppName: Box
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (*)(::Il2CppObject*)>(&UnityEngine::_AndroidJNIHelper::Box)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "Box", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::DeleteJNIArgArray
// Il2CppName: DeleteJNIArgArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::Il2CppObject*>, ::ArrayW<::UnityEngine::jvalue>)>(&UnityEngine::_AndroidJNIHelper::DeleteJNIArgArray)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* jniArgs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "jvalue"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "DeleteJNIArgArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args, jniArgs});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::ConvertToJNIArray
// Il2CppName: ConvertToJNIArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::Array*)>(&UnityEngine::_AndroidJNIHelper::ConvertToJNIArray)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "ConvertToJNIArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::ConvertFromJNIArray
// Il2CppName: ConvertFromJNIArray
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::GetConstructorID
// Il2CppName: GetConstructorID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::ArrayW<::Il2CppObject*>)>(&UnityEngine::_AndroidJNIHelper::GetConstructorID)> {
  static const MethodInfo* get() {
    static auto* jclass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "GetConstructorID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jclass, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::GetMethodID
// Il2CppName: GetMethodID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::ArrayW<::Il2CppObject*>, bool)>(&UnityEngine::_AndroidJNIHelper::GetMethodID)> {
  static const MethodInfo* get() {
    static auto* jclass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* isStatic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "GetMethodID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jclass, methodName, args, isStatic});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::GetMethodID
// Il2CppName: GetMethodID
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::GetFieldID
// Il2CppName: GetFieldID
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::GetConstructorID
// Il2CppName: GetConstructorID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW)>(&UnityEngine::_AndroidJNIHelper::GetConstructorID)> {
  static const MethodInfo* get() {
    static auto* jclass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "GetConstructorID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jclass, signature});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::GetMethodID
// Il2CppName: GetMethodID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW, bool)>(&UnityEngine::_AndroidJNIHelper::GetMethodID)> {
  static const MethodInfo* get() {
    static auto* jclass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isStatic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "GetMethodID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jclass, methodName, signature, isStatic});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::GetMethodIDFallback
// Il2CppName: GetMethodIDFallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW, bool)>(&UnityEngine::_AndroidJNIHelper::GetMethodIDFallback)> {
  static const MethodInfo* get() {
    static auto* jclass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isStatic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "GetMethodIDFallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jclass, methodName, signature, isStatic});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::GetFieldID
// Il2CppName: GetFieldID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW, bool)>(&UnityEngine::_AndroidJNIHelper::GetFieldID)> {
  static const MethodInfo* get() {
    static auto* jclass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* fieldName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isStatic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "GetFieldID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jclass, fieldName, signature, isStatic});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::GetSignature
// Il2CppName: GetSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Il2CppObject*)>(&UnityEngine::_AndroidJNIHelper::GetSignature)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "GetSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::GetSignature
// Il2CppName: GetSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<::Il2CppObject*>)>(&UnityEngine::_AndroidJNIHelper::GetSignature)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "GetSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::GetSignature
// Il2CppName: GetSignature
// Cannot write MetadataGetter for generic methods!
