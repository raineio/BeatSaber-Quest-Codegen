// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ReflectionProbeDataSO
  class ReflectionProbeDataSO : public GlobalNamespace::PersistentScriptableObject {
    public:
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
    // Creating value type constructor for type: ReflectionProbeDataSO
    ReflectionProbeDataSO(UnityEngine::Cubemap* reflectionProbeCubemap1_ = {}, UnityEngine::Cubemap* reflectionProbeCubemap2_ = {}) noexcept : reflectionProbeCubemap1{reflectionProbeCubemap1_}, reflectionProbeCubemap2{reflectionProbeCubemap2_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Cubemap get_reflectionProbeCubemap1()
    // Offset: 0x10AF204
    UnityEngine::Cubemap* get_reflectionProbeCubemap1();
    // public System.Void set_reflectionProbeCubemap1(UnityEngine.Cubemap value)
    // Offset: 0x10AF20C
    void set_reflectionProbeCubemap1(UnityEngine::Cubemap* value);
    // public UnityEngine.Cubemap get_reflectionProbeCubemap2()
    // Offset: 0x10AF214
    UnityEngine::Cubemap* get_reflectionProbeCubemap2();
    // public System.Void set_reflectionProbeCubemap2(UnityEngine.Cubemap value)
    // Offset: 0x10AF21C
    void set_reflectionProbeCubemap2(UnityEngine::Cubemap* value);
    // public System.Void .ctor()
    // Offset: 0x10AF224
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
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ReflectionProbeDataSO*, "", "ReflectionProbeDataSO");
// Writing MetadataGetter for method: GlobalNamespace::ReflectionProbeDataSO::get_reflectionProbeCubemap1
// Il2CppName: get_reflectionProbeCubemap1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Cubemap* (GlobalNamespace::ReflectionProbeDataSO::*)()>(&GlobalNamespace::ReflectionProbeDataSO::get_reflectionProbeCubemap1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReflectionProbeDataSO*), "get_reflectionProbeCubemap1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReflectionProbeDataSO::set_reflectionProbeCubemap1
// Il2CppName: set_reflectionProbeCubemap1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReflectionProbeDataSO::*)(UnityEngine::Cubemap*)>(&GlobalNamespace::ReflectionProbeDataSO::set_reflectionProbeCubemap1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReflectionProbeDataSO*), "set_reflectionProbeCubemap1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Cubemap*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReflectionProbeDataSO::get_reflectionProbeCubemap2
// Il2CppName: get_reflectionProbeCubemap2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Cubemap* (GlobalNamespace::ReflectionProbeDataSO::*)()>(&GlobalNamespace::ReflectionProbeDataSO::get_reflectionProbeCubemap2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReflectionProbeDataSO*), "get_reflectionProbeCubemap2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReflectionProbeDataSO::set_reflectionProbeCubemap2
// Il2CppName: set_reflectionProbeCubemap2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReflectionProbeDataSO::*)(UnityEngine::Cubemap*)>(&GlobalNamespace::ReflectionProbeDataSO::set_reflectionProbeCubemap2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReflectionProbeDataSO*), "set_reflectionProbeCubemap2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Cubemap*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReflectionProbeDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
