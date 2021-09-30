// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_MeshData
  class HEU_MeshData;
  // Forward declaring type: HEU_VertexEntry
  class HEU_VertexEntry;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_GeoGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_GeoGroup : public ::Il2CppObject/*, public System::IComparable_1<HoudiniEngineUnity::HEU_GeoGroup*>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.String _groupName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* groupName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Collections.Generic.Dictionary`2<System.Int32,HoudiniEngineUnity.HEU_MeshData> _subMeshesMap
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<int, HoudiniEngineUnity::HEU_MeshData*>* subMeshesMap;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, HoudiniEngineUnity::HEU_MeshData*>*) == 0x8);
    // public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_VertexEntry>[] _sharedNormalIndices
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VertexEntry*>*> sharedNormalIndices;
    // Field size check
    static_assert(sizeof(::ArrayW<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VertexEntry*>*>) == 0x8);
    public:
    // Creating interface conversion operator: operator System::IComparable_1<HoudiniEngineUnity::HEU_GeoGroup*>
    operator System::IComparable_1<HoudiniEngineUnity::HEU_GeoGroup*>() noexcept {
      return *reinterpret_cast<System::IComparable_1<HoudiniEngineUnity::HEU_GeoGroup*>*>(this);
    }
    // Get instance field reference: public System.String _groupName
    ::Il2CppString*& dyn__groupName();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.Int32,HoudiniEngineUnity.HEU_MeshData> _subMeshesMap
    System::Collections::Generic::Dictionary_2<int, HoudiniEngineUnity::HEU_MeshData*>*& dyn__subMeshesMap();
    // Get instance field reference: public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_VertexEntry>[] _sharedNormalIndices
    ::ArrayW<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VertexEntry*>*>& dyn__sharedNormalIndices();
    // public System.Int32 CompareTo(HoudiniEngineUnity.HEU_GeoGroup other)
    // Offset: 0x14A98B0
    int CompareTo(HoudiniEngineUnity::HEU_GeoGroup* other);
    // public System.Void SetupNormalIndices(System.Int32 indicesCount)
    // Offset: 0x14A68EC
    void SetupNormalIndices(int indicesCount);
    // public System.Void .ctor()
    // Offset: 0x14A687C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_GeoGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_GeoGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_GeoGroup*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_GeoGroup
  #pragma pack(pop)
  static check_size<sizeof(HEU_GeoGroup), 32 + sizeof(::ArrayW<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VertexEntry*>*>)> __HoudiniEngineUnity_HEU_GeoGroupSizeCheck;
  static_assert(sizeof(HEU_GeoGroup) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_GeoGroup*, "HoudiniEngineUnity", "HEU_GeoGroup");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeoGroup::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HoudiniEngineUnity::HEU_GeoGroup::*)(HoudiniEngineUnity::HEU_GeoGroup*)>(&HoudiniEngineUnity::HEU_GeoGroup::CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_GeoGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeoGroup*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeoGroup::SetupNormalIndices
// Il2CppName: SetupNormalIndices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_GeoGroup::*)(int)>(&HoudiniEngineUnity::HEU_GeoGroup::SetupNormalIndices)> {
  static const MethodInfo* get() {
    static auto* indicesCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeoGroup*), "SetupNormalIndices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{indicesCount});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeoGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
