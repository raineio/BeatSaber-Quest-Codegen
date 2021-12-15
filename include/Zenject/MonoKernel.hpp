// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: TickableManager
  class TickableManager;
  // Forward declaring type: InitializableManager
  class InitializableManager;
  // Forward declaring type: DisposableManager
  class DisposableManager;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: MonoKernel
  class MonoKernel;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Zenject::MonoKernel);
DEFINE_IL2CPP_ARG_TYPE(Zenject::MonoKernel*, "Zenject", "MonoKernel");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x32
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.MonoKernel
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoKernel : public UnityEngine::MonoBehaviour {
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
    // [InjectLocalAttribute] Offset: 0xF03A88
    // private Zenject.TickableManager _tickableManager
    // Size: 0x8
    // Offset: 0x18
    Zenject::TickableManager* tickableManager;
    // Field size check
    static_assert(sizeof(Zenject::TickableManager*) == 0x8);
    // [InjectLocalAttribute] Offset: 0xF03A98
    // private Zenject.InitializableManager _initializableManager
    // Size: 0x8
    // Offset: 0x20
    Zenject::InitializableManager* initializableManager;
    // Field size check
    static_assert(sizeof(Zenject::InitializableManager*) == 0x8);
    // [InjectLocalAttribute] Offset: 0xF03AA8
    // private Zenject.DisposableManager _disposablesManager
    // Size: 0x8
    // Offset: 0x28
    Zenject::DisposableManager* disposablesManager;
    // Field size check
    static_assert(sizeof(Zenject::DisposableManager*) == 0x8);
    // private System.Boolean _hasInitialized
    // Size: 0x1
    // Offset: 0x30
    bool hasInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isDestroyed
    // Size: 0x1
    // Offset: 0x31
    bool isDestroyed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Zenject.TickableManager _tickableManager
    Zenject::TickableManager*& dyn__tickableManager();
    // Get instance field reference: private Zenject.InitializableManager _initializableManager
    Zenject::InitializableManager*& dyn__initializableManager();
    // Get instance field reference: private Zenject.DisposableManager _disposablesManager
    Zenject::DisposableManager*& dyn__disposablesManager();
    // Get instance field reference: private System.Boolean _hasInitialized
    bool& dyn__hasInitialized();
    // Get instance field reference: private System.Boolean _isDestroyed
    bool& dyn__isDestroyed();
    // protected System.Boolean get_IsDestroyed()
    // Offset: 0x18DB54C
    bool get_IsDestroyed();
    // public System.Void Start()
    // Offset: 0x18DB554
    void Start();
    // public System.Void Initialize()
    // Offset: 0x18DB558
    void Initialize();
    // public System.Void Update()
    // Offset: 0x18DB58C
    void Update();
    // public System.Void FixedUpdate()
    // Offset: 0x18DB5A0
    void FixedUpdate();
    // public System.Void LateUpdate()
    // Offset: 0x18DB5B4
    void LateUpdate();
    // public System.Void OnDestroy()
    // Offset: 0x18DB5C8
    void OnDestroy();
    // static private System.Void __zenFieldSetter0(System.Object P_0, System.Object P_1)
    // Offset: 0x18DB63C
    static void __zenFieldSetter0(::Il2CppObject* P_0, ::Il2CppObject* P_1);
    // static private System.Void __zenFieldSetter1(System.Object P_0, System.Object P_1)
    // Offset: 0x18DB710
    static void __zenFieldSetter1(::Il2CppObject* P_0, ::Il2CppObject* P_1);
    // static private System.Void __zenFieldSetter2(System.Object P_0, System.Object P_1)
    // Offset: 0x18DB7E4
    static void __zenFieldSetter2(::Il2CppObject* P_0, ::Il2CppObject* P_1);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x18DB8B8
    static Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
    // protected System.Void .ctor()
    // Offset: 0x18DB634
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoKernel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoKernel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoKernel*, creationType>()));
    }
  }; // Zenject.MonoKernel
  #pragma pack(pop)
  static check_size<sizeof(MonoKernel), 49 + sizeof(bool)> __Zenject_MonoKernelSizeCheck;
  static_assert(sizeof(MonoKernel) == 0x32);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::MonoKernel::get_IsDestroyed
// Il2CppName: get_IsDestroyed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::MonoKernel::*)()>(&Zenject::MonoKernel::get_IsDestroyed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MonoKernel*), "get_IsDestroyed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::MonoKernel::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MonoKernel::*)()>(&Zenject::MonoKernel::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MonoKernel*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::MonoKernel::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MonoKernel::*)()>(&Zenject::MonoKernel::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MonoKernel*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::MonoKernel::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MonoKernel::*)()>(&Zenject::MonoKernel::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MonoKernel*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::MonoKernel::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MonoKernel::*)()>(&Zenject::MonoKernel::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MonoKernel*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::MonoKernel::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MonoKernel::*)()>(&Zenject::MonoKernel::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MonoKernel*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::MonoKernel::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MonoKernel::*)()>(&Zenject::MonoKernel::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MonoKernel*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::MonoKernel::__zenFieldSetter0
// Il2CppName: __zenFieldSetter0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*)>(&Zenject::MonoKernel::__zenFieldSetter0)> {
  static const MethodInfo* get() {
    static auto* P_0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* P_1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::MonoKernel*), "__zenFieldSetter0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0, P_1});
  }
};
// Writing MetadataGetter for method: Zenject::MonoKernel::__zenFieldSetter1
// Il2CppName: __zenFieldSetter1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*)>(&Zenject::MonoKernel::__zenFieldSetter1)> {
  static const MethodInfo* get() {
    static auto* P_0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* P_1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::MonoKernel*), "__zenFieldSetter1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0, P_1});
  }
};
// Writing MetadataGetter for method: Zenject::MonoKernel::__zenFieldSetter2
// Il2CppName: __zenFieldSetter2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*)>(&Zenject::MonoKernel::__zenFieldSetter2)> {
  static const MethodInfo* get() {
    static auto* P_0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* P_1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::MonoKernel*), "__zenFieldSetter2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0, P_1});
  }
};
// Writing MetadataGetter for method: Zenject::MonoKernel::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo* (*)()>(&Zenject::MonoKernel::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MonoKernel*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::MonoKernel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
