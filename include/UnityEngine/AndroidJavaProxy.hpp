// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  class AndroidJavaProxy : public ::Il2CppObject {
    public:
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
    // Creating value type constructor for type: AndroidJavaProxy
    AndroidJavaProxy(UnityEngine::AndroidJavaClass* javaInterface_ = {}, System::IntPtr proxyObject_ = {}) noexcept : javaInterface{javaInterface_}, proxyObject{proxyObject_} {}
    // Get static field: static private readonly UnityEngine.GlobalJavaObjectRef s_JavaLangSystemClass
    static UnityEngine::GlobalJavaObjectRef* _get_s_JavaLangSystemClass();
    // Set static field: static private readonly UnityEngine.GlobalJavaObjectRef s_JavaLangSystemClass
    static void _set_s_JavaLangSystemClass(UnityEngine::GlobalJavaObjectRef* value);
    // Get static field: static private readonly System.IntPtr s_HashCodeMethodID
    static System::IntPtr _get_s_HashCodeMethodID();
    // Set static field: static private readonly System.IntPtr s_HashCodeMethodID
    static void _set_s_HashCodeMethodID(System::IntPtr value);
    // public System.Void .ctor(System.String javaInterface)
    // Offset: 0x2374BB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaProxy* New_ctor(::Il2CppString* javaInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaProxy*, creationType>(javaInterface)));
    }
    // public System.Void .ctor(UnityEngine.AndroidJavaClass javaInterface)
    // Offset: 0x2374C28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaProxy* New_ctor(UnityEngine::AndroidJavaClass* javaInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaProxy*, creationType>(javaInterface)));
    }
    // public UnityEngine.AndroidJavaObject Invoke(System.String methodName, System.Object[] args)
    // Offset: 0x2374CF4
    UnityEngine::AndroidJavaObject* Invoke(::Il2CppString* methodName, ::Array<::Il2CppObject*>* args);
    // public UnityEngine.AndroidJavaObject Invoke(System.String methodName, UnityEngine.AndroidJavaObject[] javaArgs)
    // Offset: 0x2375E40
    UnityEngine::AndroidJavaObject* Invoke(::Il2CppString* methodName, ::Array<UnityEngine::AndroidJavaObject*>* javaArgs);
    // public System.Boolean equals(UnityEngine.AndroidJavaObject obj)
    // Offset: 0x23765FC
    bool equals(UnityEngine::AndroidJavaObject* obj);
    // public System.Int32 hashCode()
    // Offset: 0x2376688
    int hashCode();
    // public System.String toString()
    // Offset: 0x2376744
    ::Il2CppString* toString();
    // UnityEngine.AndroidJavaObject GetProxyObject()
    // Offset: 0x23767A4
    UnityEngine::AndroidJavaObject* GetProxyObject();
    // System.IntPtr GetRawProxy()
    // Offset: 0x2375C04
    System::IntPtr GetRawProxy();
    // static private System.Void .cctor()
    // Offset: 0x2376818
    static void _cctor();
    // protected override System.Void Finalize()
    // Offset: 0x2374C88
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.AndroidJavaProxy
  #pragma pack(pop)
  static check_size<sizeof(AndroidJavaProxy), 24 + sizeof(System::IntPtr)> __UnityEngine_AndroidJavaProxySizeCheck;
  static_assert(sizeof(AndroidJavaProxy) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJavaProxy*, "UnityEngine", "AndroidJavaProxy");
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AndroidJavaObject* (UnityEngine::AndroidJavaProxy::*)(::Il2CppString*, ::Array<::Il2CppObject*>*)>(&UnityEngine::AndroidJavaProxy::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppObject*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AndroidJavaObject* (UnityEngine::AndroidJavaProxy::*)(::Il2CppString*, ::Array<UnityEngine::AndroidJavaObject*>*)>(&UnityEngine::AndroidJavaProxy::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::AndroidJavaObject*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::equals
// Il2CppName: equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AndroidJavaProxy::*)(UnityEngine::AndroidJavaObject*)>(&UnityEngine::AndroidJavaProxy::equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), "equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::AndroidJavaObject*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::hashCode
// Il2CppName: hashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AndroidJavaProxy::*)()>(&UnityEngine::AndroidJavaProxy::hashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), "hashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::toString
// Il2CppName: toString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::AndroidJavaProxy::*)()>(&UnityEngine::AndroidJavaProxy::toString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), "toString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::GetProxyObject
// Il2CppName: GetProxyObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AndroidJavaObject* (UnityEngine::AndroidJavaProxy::*)()>(&UnityEngine::AndroidJavaProxy::GetProxyObject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), "GetProxyObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::GetRawProxy
// Il2CppName: GetRawProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (UnityEngine::AndroidJavaProxy::*)()>(&UnityEngine::AndroidJavaProxy::GetRawProxy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), "GetRawProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::AndroidJavaProxy::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaProxy::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AndroidJavaProxy::*)()>(&UnityEngine::AndroidJavaProxy::Finalize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaProxy*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
