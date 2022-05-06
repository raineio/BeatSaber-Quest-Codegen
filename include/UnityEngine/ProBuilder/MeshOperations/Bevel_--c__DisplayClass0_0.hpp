// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.Bevel
#include "UnityEngine/ProBuilder/MeshOperations/Bevel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: SharedVertex
  class SharedVertex;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0*, "UnityEngine.ProBuilder.MeshOperations", "Bevel/<>c__DisplayClass0_0");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.Bevel/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass0_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Bevel::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.Face,System.Collections.Generic.List`1<System.Int32>> ignore
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<int>*>* ignore;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<int>*>*) == 0x8);
    // public UnityEngine.ProBuilder.SharedVertex[] sharedIndexes
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> sharedIndexes;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>) == 0x8);
    // public System.Func`2<System.Int32,System.Int32> <>9__7
    // Size: 0x8
    // Offset: 0x20
    ::System::Func_2<int, int>* $$9__7;
    // Field size check
    static_assert(sizeof(::System::Func_2<int, int>*) == 0x8);
    // public System.Func`2<System.Int32,System.Int32> <>9__8
    // Size: 0x8
    // Offset: 0x28
    ::System::Func_2<int, int>* $$9__8;
    // Field size check
    static_assert(sizeof(::System::Func_2<int, int>*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.Face,System.Collections.Generic.List`1<System.Int32>> ignore
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<int>*>*& dyn_ignore();
    // Get instance field reference: public UnityEngine.ProBuilder.SharedVertex[] sharedIndexes
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>& dyn_sharedIndexes();
    // Get instance field reference: public System.Func`2<System.Int32,System.Int32> <>9__7
    [[deprecated("Use field access instead!")]] ::System::Func_2<int, int>*& dyn_$$9__7();
    // Get instance field reference: public System.Func`2<System.Int32,System.Int32> <>9__8
    [[deprecated("Use field access instead!")]] ::System::Func_2<int, int>*& dyn_$$9__8();
    // public System.Void .ctor()
    // Offset: 0x1A1FC1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Bevel::$$c__DisplayClass0_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Bevel::$$c__DisplayClass0_0*, creationType>()));
    }
    // System.Int32 <BevelEdges>b__7(System.Int32 x)
    // Offset: 0x1A2095C
    int $BevelEdges$b__7(int x);
    // System.Int32 <BevelEdges>b__8(System.Int32 x)
    // Offset: 0x1A209A4
    int $BevelEdges$b__8(int x);
  }; // UnityEngine.ProBuilder.MeshOperations.Bevel/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass0_0
  #pragma pack(pop)
  static check_size<sizeof(Bevel::$$c__DisplayClass0_0), 40 + sizeof(::System::Func_2<int, int>*)> __UnityEngine_ProBuilder_MeshOperations_Bevel_$$c__DisplayClass0_0SizeCheck;
  static_assert(sizeof(Bevel::$$c__DisplayClass0_0) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0::$BevelEdges$b__7
// Il2CppName: <BevelEdges>b__7
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0::*)(int)>(&UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0::$BevelEdges$b__7)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0*), "<BevelEdges>b__7", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0::$BevelEdges$b__8
// Il2CppName: <BevelEdges>b__8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0::*)(int)>(&UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0::$BevelEdges$b__8)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0*), "<BevelEdges>b__8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
