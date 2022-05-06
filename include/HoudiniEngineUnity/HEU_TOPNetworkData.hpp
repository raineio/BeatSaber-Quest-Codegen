// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_TOPNodeData
  class HEU_TOPNodeData;
  // Forward declaring type: TOPNodeTags
  class TOPNodeTags;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_TOPNetworkData
  class HEU_TOPNetworkData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_TOPNetworkData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_TOPNetworkData*, "HoudiniEngineUnity", "HEU_TOPNetworkData");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_TOPNetworkData
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_TOPNetworkData : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 _nodeID
    // Size: 0x4
    // Offset: 0x10
    int nodeID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: nodeID and: nodeName
    char __padding0[0x4] = {};
    // public System.String _nodeName
    // Size: 0x8
    // Offset: 0x18
    ::StringW nodeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_TOPNodeData> _topNodes
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNodeData*>* topNodes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNodeData*>*) == 0x8);
    // public System.String[] _topNodeNames
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::StringW> topNodeNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.Int32 _selectedTOPIndex
    // Size: 0x4
    // Offset: 0x30
    int selectedTOPIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: selectedTOPIndex and: parentName
    char __padding4[0x4] = {};
    // public System.String _parentName
    // Size: 0x8
    // Offset: 0x38
    ::StringW parentName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public HoudiniEngineUnity.TOPNodeTags _tags
    // Size: 0x8
    // Offset: 0x40
    ::HoudiniEngineUnity::TOPNodeTags* tags;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::TOPNodeTags*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 _nodeID
    [[deprecated("Use field access instead!")]] int& dyn__nodeID();
    // Get instance field reference: public System.String _nodeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__nodeName();
    // Get instance field reference: public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_TOPNodeData> _topNodes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNodeData*>*& dyn__topNodes();
    // Get instance field reference: public System.String[] _topNodeNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn__topNodeNames();
    // Get instance field reference: public System.Int32 _selectedTOPIndex
    [[deprecated("Use field access instead!")]] int& dyn__selectedTOPIndex();
    // Get instance field reference: public System.String _parentName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__parentName();
    // Get instance field reference: public HoudiniEngineUnity.TOPNodeTags _tags
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::TOPNodeTags*& dyn__tags();
    // public System.Void .ctor()
    // Offset: 0x1B0B2B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_TOPNetworkData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_TOPNetworkData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_TOPNetworkData*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_TOPNetworkData
  #pragma pack(pop)
  static check_size<sizeof(HEU_TOPNetworkData), 64 + sizeof(::HoudiniEngineUnity::TOPNodeTags*)> __HoudiniEngineUnity_HEU_TOPNetworkDataSizeCheck;
  static_assert(sizeof(HEU_TOPNetworkData) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TOPNetworkData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
