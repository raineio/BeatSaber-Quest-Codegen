// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Coroutine
  class Coroutine;
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::MonoBehaviour);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MonoBehaviour*, "UnityEngine", "MonoBehaviour");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.MonoBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: EB4F40
  // [ExtensionOfNativeClassAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: EB4F40
  // [RequiredByNativeCodeAttribute] Offset: EB4F40
  class MonoBehaviour : public UnityEngine::Behaviour {
    public:
    // public System.Boolean get_useGUILayout()
    // Offset: 0x1DA6758
    bool get_useGUILayout();
    // public System.Void set_useGUILayout(System.Boolean value)
    // Offset: 0x1DA6798
    void set_useGUILayout(bool value);
    // public System.Boolean IsInvoking()
    // Offset: 0x1DA5D04
    bool IsInvoking();
    // public System.Void CancelInvoke()
    // Offset: 0x1DA5D84
    void CancelInvoke();
    // public System.Void Invoke(System.String methodName, System.Single time)
    // Offset: 0x1DA5E04
    void Invoke(::StringW methodName, float time);
    // public System.Void InvokeRepeating(System.String methodName, System.Single time, System.Single repeatRate)
    // Offset: 0x1DA5ED0
    void InvokeRepeating(::StringW methodName, float time, float repeatRate);
    // public System.Void CancelInvoke(System.String methodName)
    // Offset: 0x1DA5FB0
    void CancelInvoke(::StringW methodName);
    // public System.Boolean IsInvoking(System.String methodName)
    // Offset: 0x1DA6050
    bool IsInvoking(::StringW methodName);
    // public UnityEngine.Coroutine StartCoroutine(System.String methodName)
    // Offset: 0x1DA60F0
    UnityEngine::Coroutine* StartCoroutine(::StringW methodName);
    // public UnityEngine.Coroutine StartCoroutine(System.String methodName, System.Object value)
    // Offset: 0x1DA60F8
    UnityEngine::Coroutine* StartCoroutine(::StringW methodName, ::Il2CppObject* value);
    // public UnityEngine.Coroutine StartCoroutine(System.Collections.IEnumerator routine)
    // Offset: 0x1DA62B0
    UnityEngine::Coroutine* StartCoroutine(System::Collections::IEnumerator* routine);
    // public UnityEngine.Coroutine StartCoroutine_Auto(System.Collections.IEnumerator routine)
    // Offset: 0x1DA640C
    UnityEngine::Coroutine* StartCoroutine_Auto(System::Collections::IEnumerator* routine);
    // public System.Void StopCoroutine(System.Collections.IEnumerator routine)
    // Offset: 0x1DA6410
    void StopCoroutine(System::Collections::IEnumerator* routine);
    // public System.Void StopCoroutine(UnityEngine.Coroutine routine)
    // Offset: 0x1DA656C
    void StopCoroutine(UnityEngine::Coroutine* routine);
    // public System.Void StopCoroutine(System.String methodName)
    // Offset: 0x1DA66C8
    void StopCoroutine(::StringW methodName);
    // public System.Void StopAllCoroutines()
    // Offset: 0x1DA6718
    void StopAllCoroutines();
    // static public System.Void print(System.Object message)
    // Offset: 0x1DA67E8
    static void print(::Il2CppObject* message);
    // static private System.Void Internal_CancelInvokeAll(UnityEngine.MonoBehaviour self)
    // Offset: 0x1DA5DC4
    static void Internal_CancelInvokeAll(UnityEngine::MonoBehaviour* self);
    // static private System.Boolean Internal_IsInvokingAll(UnityEngine.MonoBehaviour self)
    // Offset: 0x1DA5D44
    static bool Internal_IsInvokingAll(UnityEngine::MonoBehaviour* self);
    // static private System.Void InvokeDelayed(UnityEngine.MonoBehaviour self, System.String methodName, System.Single time, System.Single repeatRate)
    // Offset: 0x1DA5E68
    static void InvokeDelayed(UnityEngine::MonoBehaviour* self, ::StringW methodName, float time, float repeatRate);
    // static private System.Void CancelInvoke(UnityEngine.MonoBehaviour self, System.String methodName)
    // Offset: 0x1DA6000
    static void CancelInvoke(UnityEngine::MonoBehaviour* self, ::StringW methodName);
    // static private System.Boolean IsInvoking(UnityEngine.MonoBehaviour self, System.String methodName)
    // Offset: 0x1DA60A0
    static bool IsInvoking(UnityEngine::MonoBehaviour* self, ::StringW methodName);
    // static private System.Boolean IsObjectMonoBehaviour(UnityEngine.Object obj)
    // Offset: 0x1DA6218
    static bool IsObjectMonoBehaviour(UnityEngine::Object* obj);
    // private UnityEngine.Coroutine StartCoroutineManaged(System.String methodName, System.Object value)
    // Offset: 0x1DA6258
    UnityEngine::Coroutine* StartCoroutineManaged(::StringW methodName, ::Il2CppObject* value);
    // private UnityEngine.Coroutine StartCoroutineManaged2(System.Collections.IEnumerator enumerator)
    // Offset: 0x1DA63BC
    UnityEngine::Coroutine* StartCoroutineManaged2(System::Collections::IEnumerator* enumerator);
    // private System.Void StopCoroutineManaged(UnityEngine.Coroutine routine)
    // Offset: 0x1DA6678
    void StopCoroutineManaged(UnityEngine::Coroutine* routine);
    // private System.Void StopCoroutineFromEnumeratorManaged(System.Collections.IEnumerator routine)
    // Offset: 0x1DA651C
    void StopCoroutineFromEnumeratorManaged(System::Collections::IEnumerator* routine);
    // System.String GetScriptClassName()
    // Offset: 0x1DA6850
    ::StringW GetScriptClassName();
    // public System.Void .ctor()
    // Offset: 0x1DA6890
    // Implemented from: UnityEngine.Behaviour
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::MonoBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoBehaviour*, creationType>()));
    }
  }; // UnityEngine.MonoBehaviour
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::get_useGUILayout
// Il2CppName: get_useGUILayout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::MonoBehaviour::*)()>(&UnityEngine::MonoBehaviour::get_useGUILayout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "get_useGUILayout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::set_useGUILayout
// Il2CppName: set_useGUILayout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MonoBehaviour::*)(bool)>(&UnityEngine::MonoBehaviour::set_useGUILayout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "set_useGUILayout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::IsInvoking
// Il2CppName: IsInvoking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::MonoBehaviour::*)()>(&UnityEngine::MonoBehaviour::IsInvoking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "IsInvoking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::CancelInvoke
// Il2CppName: CancelInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MonoBehaviour::*)()>(&UnityEngine::MonoBehaviour::CancelInvoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "CancelInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MonoBehaviour::*)(::StringW, float)>(&UnityEngine::MonoBehaviour::Invoke)> {
  static const MethodInfo* get() {
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodName, time});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::InvokeRepeating
// Il2CppName: InvokeRepeating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MonoBehaviour::*)(::StringW, float, float)>(&UnityEngine::MonoBehaviour::InvokeRepeating)> {
  static const MethodInfo* get() {
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* repeatRate = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "InvokeRepeating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodName, time, repeatRate});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::CancelInvoke
// Il2CppName: CancelInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MonoBehaviour::*)(::StringW)>(&UnityEngine::MonoBehaviour::CancelInvoke)> {
  static const MethodInfo* get() {
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "CancelInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodName});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::IsInvoking
// Il2CppName: IsInvoking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::MonoBehaviour::*)(::StringW)>(&UnityEngine::MonoBehaviour::IsInvoking)> {
  static const MethodInfo* get() {
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "IsInvoking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodName});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StartCoroutine
// Il2CppName: StartCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Coroutine* (UnityEngine::MonoBehaviour::*)(::StringW)>(&UnityEngine::MonoBehaviour::StartCoroutine)> {
  static const MethodInfo* get() {
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StartCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodName});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StartCoroutine
// Il2CppName: StartCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Coroutine* (UnityEngine::MonoBehaviour::*)(::StringW, ::Il2CppObject*)>(&UnityEngine::MonoBehaviour::StartCoroutine)> {
  static const MethodInfo* get() {
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StartCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodName, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StartCoroutine
// Il2CppName: StartCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Coroutine* (UnityEngine::MonoBehaviour::*)(System::Collections::IEnumerator*)>(&UnityEngine::MonoBehaviour::StartCoroutine)> {
  static const MethodInfo* get() {
    static auto* routine = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StartCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{routine});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StartCoroutine_Auto
// Il2CppName: StartCoroutine_Auto
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Coroutine* (UnityEngine::MonoBehaviour::*)(System::Collections::IEnumerator*)>(&UnityEngine::MonoBehaviour::StartCoroutine_Auto)> {
  static const MethodInfo* get() {
    static auto* routine = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StartCoroutine_Auto", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{routine});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StopCoroutine
// Il2CppName: StopCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MonoBehaviour::*)(System::Collections::IEnumerator*)>(&UnityEngine::MonoBehaviour::StopCoroutine)> {
  static const MethodInfo* get() {
    static auto* routine = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StopCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{routine});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StopCoroutine
// Il2CppName: StopCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MonoBehaviour::*)(UnityEngine::Coroutine*)>(&UnityEngine::MonoBehaviour::StopCoroutine)> {
  static const MethodInfo* get() {
    static auto* routine = &::il2cpp_utils::GetClassFromName("UnityEngine", "Coroutine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StopCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{routine});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StopCoroutine
// Il2CppName: StopCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MonoBehaviour::*)(::StringW)>(&UnityEngine::MonoBehaviour::StopCoroutine)> {
  static const MethodInfo* get() {
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StopCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodName});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StopAllCoroutines
// Il2CppName: StopAllCoroutines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MonoBehaviour::*)()>(&UnityEngine::MonoBehaviour::StopAllCoroutines)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StopAllCoroutines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::print
// Il2CppName: print
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&UnityEngine::MonoBehaviour::print)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "print", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::Internal_CancelInvokeAll
// Il2CppName: Internal_CancelInvokeAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::MonoBehaviour*)>(&UnityEngine::MonoBehaviour::Internal_CancelInvokeAll)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "Internal_CancelInvokeAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::Internal_IsInvokingAll
// Il2CppName: Internal_IsInvokingAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::MonoBehaviour*)>(&UnityEngine::MonoBehaviour::Internal_IsInvokingAll)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "Internal_IsInvokingAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::InvokeDelayed
// Il2CppName: InvokeDelayed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::MonoBehaviour*, ::StringW, float, float)>(&UnityEngine::MonoBehaviour::InvokeDelayed)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")->byval_arg;
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* repeatRate = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "InvokeDelayed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self, methodName, time, repeatRate});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::CancelInvoke
// Il2CppName: CancelInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::MonoBehaviour*, ::StringW)>(&UnityEngine::MonoBehaviour::CancelInvoke)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")->byval_arg;
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "CancelInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self, methodName});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::IsInvoking
// Il2CppName: IsInvoking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::MonoBehaviour*, ::StringW)>(&UnityEngine::MonoBehaviour::IsInvoking)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")->byval_arg;
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "IsInvoking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self, methodName});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::IsObjectMonoBehaviour
// Il2CppName: IsObjectMonoBehaviour
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Object*)>(&UnityEngine::MonoBehaviour::IsObjectMonoBehaviour)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "IsObjectMonoBehaviour", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StartCoroutineManaged
// Il2CppName: StartCoroutineManaged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Coroutine* (UnityEngine::MonoBehaviour::*)(::StringW, ::Il2CppObject*)>(&UnityEngine::MonoBehaviour::StartCoroutineManaged)> {
  static const MethodInfo* get() {
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StartCoroutineManaged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodName, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StartCoroutineManaged2
// Il2CppName: StartCoroutineManaged2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Coroutine* (UnityEngine::MonoBehaviour::*)(System::Collections::IEnumerator*)>(&UnityEngine::MonoBehaviour::StartCoroutineManaged2)> {
  static const MethodInfo* get() {
    static auto* enumerator = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StartCoroutineManaged2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enumerator});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StopCoroutineManaged
// Il2CppName: StopCoroutineManaged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MonoBehaviour::*)(UnityEngine::Coroutine*)>(&UnityEngine::MonoBehaviour::StopCoroutineManaged)> {
  static const MethodInfo* get() {
    static auto* routine = &::il2cpp_utils::GetClassFromName("UnityEngine", "Coroutine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StopCoroutineManaged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{routine});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StopCoroutineFromEnumeratorManaged
// Il2CppName: StopCoroutineFromEnumeratorManaged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MonoBehaviour::*)(System::Collections::IEnumerator*)>(&UnityEngine::MonoBehaviour::StopCoroutineFromEnumeratorManaged)> {
  static const MethodInfo* get() {
    static auto* routine = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StopCoroutineFromEnumeratorManaged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{routine});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::GetScriptClassName
// Il2CppName: GetScriptClassName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::MonoBehaviour::*)()>(&UnityEngine::MonoBehaviour::GetScriptClassName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "GetScriptClassName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
