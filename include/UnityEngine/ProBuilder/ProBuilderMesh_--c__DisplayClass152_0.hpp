// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.ProBuilderMesh
#include "UnityEngine/ProBuilder/ProBuilderMesh.hpp"
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
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: <>c__DisplayClass152_0
  class $$c__DisplayClass152_0;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::ProBuilder::ProBuilderMesh::$$c__DisplayClass152_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ProBuilderMesh::$$c__DisplayClass152_0*, "UnityEngine.ProBuilder", "ProBuilderMesh/<>c__DisplayClass152_0");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.ProBuilderMesh/UnityEngine.ProBuilder.<>c__DisplayClass152_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ProBuilderMesh::$$c__DisplayClass152_0 : public ::Il2CppObject {
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
    // public System.Int32 i
    // Size: 0x4
    // Offset: 0x10
    int i;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return i;
    }
    // Get instance field reference: public System.Int32 i
    int& dyn_i();
    // System.Boolean <UnusedElementGroup>b__0(UnityEngine.ProBuilder.Face element)
    // Offset: 0x16F4BB4
    bool $UnusedElementGroup$b__0(UnityEngine::ProBuilder::Face* element);
    // public System.Void .ctor()
    // Offset: 0x16F1750
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProBuilderMesh::$$c__DisplayClass152_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ProBuilderMesh::$$c__DisplayClass152_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProBuilderMesh::$$c__DisplayClass152_0*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.ProBuilderMesh/UnityEngine.ProBuilder.<>c__DisplayClass152_0
  #pragma pack(pop)
  static check_size<sizeof(ProBuilderMesh::$$c__DisplayClass152_0), 16 + sizeof(int)> __UnityEngine_ProBuilder_ProBuilderMesh_$$c__DisplayClass152_0SizeCheck;
  static_assert(sizeof(ProBuilderMesh::$$c__DisplayClass152_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ProBuilderMesh::$$c__DisplayClass152_0::$UnusedElementGroup$b__0
// Il2CppName: <UnusedElementGroup>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::ProBuilderMesh::$$c__DisplayClass152_0::*)(UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::ProBuilderMesh::$$c__DisplayClass152_0::$UnusedElementGroup$b__0)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ProBuilderMesh::$$c__DisplayClass152_0*), "<UnusedElementGroup>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ProBuilderMesh::$$c__DisplayClass152_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
