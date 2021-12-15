// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Cubemap
  class Cubemap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ReflectionProbeDataSO
  class ReflectionProbeDataSO;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::ReflectionProbeDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ReflectionProbeDataSO*, "", "ReflectionProbeDataSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ReflectionProbeDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class ReflectionProbeDataSO : public GlobalNamespace::PersistentScriptableObject {
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
    // private UnityEngine.Cubemap _reflectionProbeCubemap1
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Cubemap* reflectionProbeCubemap1;
    // Field size check
    static_assert(sizeof(UnityEngine::Cubemap*) == 0x8);
    // private UnityEngine.Cubemap _reflectionProbeCubemap2
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Cubemap* reflectionProbeCubemap2;
    // Field size check
    static_assert(sizeof(UnityEngine::Cubemap*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Cubemap _reflectionProbeCubemap1
    UnityEngine::Cubemap*& dyn__reflectionProbeCubemap1();
    // Get instance field reference: private UnityEngine.Cubemap _reflectionProbeCubemap2
    UnityEngine::Cubemap*& dyn__reflectionProbeCubemap2();
    // public UnityEngine.Cubemap get_reflectionProbeCubemap1()
    // Offset: 0x11B41F4
    UnityEngine::Cubemap* get_reflectionProbeCubemap1();
    // public System.Void set_reflectionProbeCubemap1(UnityEngine.Cubemap value)
    // Offset: 0x11B41FC
    void set_reflectionProbeCubemap1(UnityEngine::Cubemap* value);
    // public UnityEngine.Cubemap get_reflectionProbeCubemap2()
    // Offset: 0x11B4204
    UnityEngine::Cubemap* get_reflectionProbeCubemap2();
    // public System.Void set_reflectionProbeCubemap2(UnityEngine.Cubemap value)
    // Offset: 0x11B420C
    void set_reflectionProbeCubemap2(UnityEngine::Cubemap* value);
    // public System.Void .ctor()
    // Offset: 0x11B4214
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionProbeDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ReflectionProbeDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionProbeDataSO*, creationType>()));
    }
  }; // ReflectionProbeDataSO
  #pragma pack(pop)
  static check_size<sizeof(ReflectionProbeDataSO), 32 + sizeof(UnityEngine::Cubemap*)> __GlobalNamespace_ReflectionProbeDataSOSizeCheck;
  static_assert(sizeof(ReflectionProbeDataSO) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ReflectionProbeDataSO::get_reflectionProbeCubemap1
// Il2CppName: get_reflectionProbeCubemap1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Cubemap* (GlobalNamespace::ReflectionProbeDataSO::*)()>(&GlobalNamespace::ReflectionProbeDataSO::get_reflectionProbeCubemap1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReflectionProbeDataSO*), "get_reflectionProbeCubemap1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReflectionProbeDataSO::set_reflectionProbeCubemap1
// Il2CppName: set_reflectionProbeCubemap1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReflectionProbeDataSO::*)(UnityEngine::Cubemap*)>(&GlobalNamespace::ReflectionProbeDataSO::set_reflectionProbeCubemap1)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Cubemap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReflectionProbeDataSO*), "set_reflectionProbeCubemap1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReflectionProbeDataSO::get_reflectionProbeCubemap2
// Il2CppName: get_reflectionProbeCubemap2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Cubemap* (GlobalNamespace::ReflectionProbeDataSO::*)()>(&GlobalNamespace::ReflectionProbeDataSO::get_reflectionProbeCubemap2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReflectionProbeDataSO*), "get_reflectionProbeCubemap2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReflectionProbeDataSO::set_reflectionProbeCubemap2
// Il2CppName: set_reflectionProbeCubemap2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReflectionProbeDataSO::*)(UnityEngine::Cubemap*)>(&GlobalNamespace::ReflectionProbeDataSO::set_reflectionProbeCubemap2)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Cubemap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReflectionProbeDataSO*), "set_reflectionProbeCubemap2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReflectionProbeDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
