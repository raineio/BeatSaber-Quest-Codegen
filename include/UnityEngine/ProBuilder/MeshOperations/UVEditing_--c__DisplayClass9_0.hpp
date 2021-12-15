// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.UVEditing
#include "UnityEngine/ProBuilder/MeshOperations/UVEditing.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: WingedEdge
  class WingedEdge;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c__DisplayClass9_0*, "UnityEngine.ProBuilder.MeshOperations", "UVEditing/<>c__DisplayClass9_0");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.UVEditing/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass9_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UVEditing::$$c__DisplayClass9_0 : public ::Il2CppObject {
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
    // public UnityEngine.ProBuilder.Face f1
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::ProBuilder::Face* f1;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Face*) == 0x8);
    // public UnityEngine.ProBuilder.Face f2
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::ProBuilder::Face* f2;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Face*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.ProBuilder.Face f1
    UnityEngine::ProBuilder::Face*& dyn_f1();
    // Get instance field reference: public UnityEngine.ProBuilder.Face f2
    UnityEngine::ProBuilder::Face*& dyn_f2();
    // System.Boolean <AutoStitch>b__0(UnityEngine.ProBuilder.WingedEdge x)
    // Offset: 0x190FCAC
    bool $AutoStitch$b__0(UnityEngine::ProBuilder::WingedEdge* x);
    // public System.Void .ctor()
    // Offset: 0x190C998
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UVEditing::$$c__DisplayClass9_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c__DisplayClass9_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UVEditing::$$c__DisplayClass9_0*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.UVEditing/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass9_0
  #pragma pack(pop)
  static check_size<sizeof(UVEditing::$$c__DisplayClass9_0), 24 + sizeof(UnityEngine::ProBuilder::Face*)> __UnityEngine_ProBuilder_MeshOperations_UVEditing_$$c__DisplayClass9_0SizeCheck;
  static_assert(sizeof(UVEditing::$$c__DisplayClass9_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c__DisplayClass9_0::$AutoStitch$b__0
// Il2CppName: <AutoStitch>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c__DisplayClass9_0::*)(UnityEngine::ProBuilder::WingedEdge*)>(&UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c__DisplayClass9_0::$AutoStitch$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c__DisplayClass9_0*), "<AutoStitch>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c__DisplayClass9_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
