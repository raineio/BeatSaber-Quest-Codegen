// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.MergeElements
#include "UnityEngine/ProBuilder/MeshOperations/MergeElements.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MergeElements::$$c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MergeElements::$$c__DisplayClass0_0*, "UnityEngine.ProBuilder.MeshOperations", "MergeElements/<>c__DisplayClass0_0");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.MergeElements/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass0_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MergeElements::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> remove
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* remove;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*
    constexpr operator ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*() const noexcept {
      return remove;
    }
    // Get instance field reference: public System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> remove
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*& dyn_remove();
    // public System.Void .ctor()
    // Offset: 0x1C3C4F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MergeElements::$$c__DisplayClass0_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::MeshOperations::MergeElements::$$c__DisplayClass0_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MergeElements::$$c__DisplayClass0_0*, creationType>()));
    }
    // System.Boolean <MergePairs>b__0(UnityEngine.ProBuilder.Face x)
    // Offset: 0x1C3CF94
    bool $MergePairs$b__0(::UnityEngine::ProBuilder::Face* x);
  }; // UnityEngine.ProBuilder.MeshOperations.MergeElements/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass0_0
  #pragma pack(pop)
  static check_size<sizeof(MergeElements::$$c__DisplayClass0_0), 16 + sizeof(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*)> __UnityEngine_ProBuilder_MeshOperations_MergeElements_$$c__DisplayClass0_0SizeCheck;
  static_assert(sizeof(MergeElements::$$c__DisplayClass0_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MergeElements::$$c__DisplayClass0_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MergeElements::$$c__DisplayClass0_0::$MergePairs$b__0
// Il2CppName: <MergePairs>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::MergeElements::$$c__DisplayClass0_0::*)(::UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::MeshOperations::MergeElements::$$c__DisplayClass0_0::$MergePairs$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MergeElements::$$c__DisplayClass0_0*), "<MergePairs>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
