// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AndroidJavaClass
  class AndroidJavaClass;
  // Forward declaring type: GlobalJavaObjectRef
  class GlobalJavaObjectRef;
  // Forward declaring type: AndroidJavaObject
  class AndroidJavaObject;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AndroidJavaProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class AndroidJavaProxy : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public readonly UnityEngine.AndroidJavaClass javaInterface
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AndroidJavaClass* javaInterface;
    // Field size check
    static_assert(sizeof(UnityEngine::AndroidJavaClass*) == 0x8);
    // System.IntPtr proxyObject
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr proxyObject;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    public:
    // Get static field: static private readonly UnityEngine.GlobalJavaObjectRef s_JavaLangSystemClass
    static UnityEngine::GlobalJavaObjectRef* _get_s_JavaLangSystemClass();
    // Set static field: static private readonly UnityEngine.GlobalJavaObjectRef s_JavaLangSystemClass
    static void _set_s_JavaLangSystemClass(UnityEngine::GlobalJavaObjectRef* value);
    // Get static field: static private readonly System.IntPtr s_HashCodeMethodID
    static System::IntPtr _get_s_HashCodeMethodID();
    // Set static field: static private readonly System.IntPtr s_HashCodeMethodID
    static void _set_s_HashCodeMethodID(System::IntPtr value);
    // Get instance field reference: public readonly UnityEngine.AndroidJavaClass javaInterface
    UnityEngine::AndroidJavaClass*& dyn_javaInterface();
    // Get instance field reference: System.IntPtr proxyObject
    System::IntPtr& dyn_proxyObject();
    // public System.Void .ctor(System.String javaInterface)
    // Offset: 0x25AE6B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaProxy* New_ctor(::Il2CppString* javaInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaProxy*, creationType>(javaInterface)));
    }
    // public System.Void .ctor(UnityEngine.AndroidJavaClass javaInterface)
    // Offset: 0x25AE724
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaProxy* New_ctor(UnityEngine::AndroidJavaClass* javaInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaProxy*, creationType>(javaInterface)));
    }
    // static private System.Void .cctor()
    // Offset: 0x25B0314
    static void _cctor();
    // public UnityEngine.AndroidJavaObject Invoke(System.String methodName, System.Object[] args)
    // Offset: 0x25AE7F0
    UnityEngine::AndroidJavaObject* Invoke(::Il2CppString* methodName, ::ArrayW<::Il2CppObject*> args);
    // public UnityEngine.AndroidJavaObject Invoke(System.String methodName, UnityEngine.AndroidJavaObject[] javaArgs)
    // Offset: 0x25AF93C
    UnityEngine::AndroidJavaObject* Invoke(::Il2CppString* methodName, ::ArrayW<UnityEngine::AndroidJavaObject*> javaArgs);
    // public System.Boolean equals(UnityEngine.AndroidJavaObject obj)
    // Offset: 0x25B00F8
    bool equals(UnityEngine::AndroidJavaObject* obj);
    // public System.Int32 hashCode()
    // Offset: 0x25B0184
    int hashCode();
    // public System.String toString()
    // Offset: 0x25B0240
    ::Il2CppString* toString();
    // UnityEngine.AndroidJavaObject GetProxyObject()
    // Offset: 0x25B02A0
    UnityEngine::AndroidJavaObject* GetProxyObject();
    // System.IntPtr GetRawProxy()
    // Offset: 0x25AF700
    System::IntPtr GetRawProxy();
    // protected override System.Void Finalize()
    // Offset: 0x25AE784
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.AndroidJavaProxy
  #pragma pack(pop)
  static check_size<sizeof(AndroidJavaProxy), 24 + sizeof(System::IntPtr)> __UnityEngine_AndroidJavaProxySizeCheck;
  static_assert(sizeof(AndroidJavaProxy) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJavaProxy*, "UnityEngine", "AndroidJavaProxy");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::AndroidJavaProxy::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AndroidJavaObject* (UnityEngine::AndroidJavaProxy::*)(::Il2CppString*, ::ArrayW<::Il2CppObject*>)>(&UnityEngine::AndroidJavaProxy::Invoke)> {
  static const MethodInfo* get() {
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodName, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AndroidJavaObject* (UnityEngine::AndroidJavaProxy::*)(::Il2CppString*, ::ArrayW<UnityEngine::AndroidJavaObject*>)>(&UnityEngine::AndroidJavaProxy::Invoke)> {
  static const MethodInfo* get() {
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* javaArgs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "AndroidJavaObject"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodName, javaArgs});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::equals
// Il2CppName: equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AndroidJavaProxy::*)(UnityEngine::AndroidJavaObject*)>(&UnityEngine::AndroidJavaProxy::equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "AndroidJavaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), "equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::hashCode
// Il2CppName: hashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AndroidJavaProxy::*)()>(&UnityEngine::AndroidJavaProxy::hashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), "hashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::toString
// Il2CppName: toString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::AndroidJavaProxy::*)()>(&UnityEngine::AndroidJavaProxy::toString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), "toString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::GetProxyObject
// Il2CppName: GetProxyObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AndroidJavaObject* (UnityEngine::AndroidJavaProxy::*)()>(&UnityEngine::AndroidJavaProxy::GetProxyObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), "GetProxyObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::GetRawProxy
// Il2CppName: GetRawProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (UnityEngine::AndroidJavaProxy::*)()>(&UnityEngine::AndroidJavaProxy::GetRawProxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), "GetRawProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AndroidJavaProxy::*)()>(&UnityEngine::AndroidJavaProxy::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
