// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.UVEditing
#include "UnityEngine/ProBuilder/MeshOperations/UVEditing.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: KeyValuePair`2<TKey, TValue>
  template<typename TKey, typename TValue>
  struct KeyValuePair_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.UVEditing/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass13_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UVEditing::$$c__DisplayClass13_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Int32 b
    // Size: 0x4
    // Offset: 0x10
    int b;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return b;
    }
    // Get instance field reference: public System.Int32 b
    int& dyn_b();
    // System.Boolean <SewUVs>b__0(System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> x)
    // Offset: 0x19040CC
    bool $SewUVs$b__0(System::Collections::Generic::KeyValuePair_2<int, int> x);
    // public System.Void .ctor()
    // Offset: 0x19026BC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UVEditing::$$c__DisplayClass13_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c__DisplayClass13_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UVEditing::$$c__DisplayClass13_0*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.UVEditing/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass13_0
  #pragma pack(pop)
  static check_size<sizeof(UVEditing::$$c__DisplayClass13_0), 16 + sizeof(int)> __UnityEngine_ProBuilder_MeshOperations_UVEditing_$$c__DisplayClass13_0SizeCheck;
  static_assert(sizeof(UVEditing::$$c__DisplayClass13_0) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c__DisplayClass13_0*, "UnityEngine.ProBuilder.MeshOperations", "UVEditing/<>c__DisplayClass13_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c__DisplayClass13_0::$SewUVs$b__0
// Il2CppName: <SewUVs>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c__DisplayClass13_0::*)(System::Collections::Generic::KeyValuePair_2<int, int>)>(&UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c__DisplayClass13_0::$SewUVs$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c__DisplayClass13_0*), "<SewUVs>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c__DisplayClass13_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
