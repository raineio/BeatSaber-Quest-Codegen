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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentLightGroups
  class EnvironmentLightGroups;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnvironmentLightGroups);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentLightGroups*, "", "EnvironmentLightGroups");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentLightGroups
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvironmentLightGroups : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::EnvironmentLightGroups::LightGroupData
    class LightGroupData;
    public:
    // private EnvironmentLightGroups/LightGroupData[] _lightGroupDataList
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::GlobalNamespace::EnvironmentLightGroups::LightGroupData*> lightGroupDataList;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::EnvironmentLightGroups::LightGroupData*>) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,EnvironmentLightGroups/LightGroupData> _lightGroupDataDict
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::EnvironmentLightGroups::LightGroupData*>* lightGroupDataDict;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::EnvironmentLightGroups::LightGroupData*>*) == 0x8);
    // private EnvironmentLightGroups/LightGroupData[] _lightGroupDataListForLightGroupDataDict
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::EnvironmentLightGroups::LightGroupData*> lightGroupDataListForLightGroupDataDict;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::EnvironmentLightGroups::LightGroupData*>) == 0x8);
    public:
    // Get instance field reference: private EnvironmentLightGroups/LightGroupData[] _lightGroupDataList
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::EnvironmentLightGroups::LightGroupData*>& dyn__lightGroupDataList();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,EnvironmentLightGroups/LightGroupData> _lightGroupDataDict
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::EnvironmentLightGroups::LightGroupData*>*& dyn__lightGroupDataDict();
    // Get instance field reference: private EnvironmentLightGroups/LightGroupData[] _lightGroupDataListForLightGroupDataDict
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::EnvironmentLightGroups::LightGroupData*>& dyn__lightGroupDataListForLightGroupDataDict();
    // public System.Collections.Generic.IReadOnlyList`1<EnvironmentLightGroups/LightGroupData> get_lightGroupDataList()
    // Offset: 0x1395E14
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::EnvironmentLightGroups::LightGroupData*>* get_lightGroupDataList();
    // public System.Void .ctor()
    // Offset: 0x1395F64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentLightGroups* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnvironmentLightGroups::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentLightGroups*, creationType>()));
    }
    // public EnvironmentLightGroups/LightGroupData GetDataForGroup(System.Int32 groupId)
    // Offset: 0x1395E1C
    ::GlobalNamespace::EnvironmentLightGroups::LightGroupData* GetDataForGroup(int groupId);
  }; // EnvironmentLightGroups
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentLightGroups), 32 + sizeof(::ArrayW<::GlobalNamespace::EnvironmentLightGroups::LightGroupData*>)> __GlobalNamespace_EnvironmentLightGroupsSizeCheck;
  static_assert(sizeof(EnvironmentLightGroups) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentLightGroups::get_lightGroupDataList
// Il2CppName: get_lightGroupDataList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::EnvironmentLightGroups::LightGroupData*>* (GlobalNamespace::EnvironmentLightGroups::*)()>(&GlobalNamespace::EnvironmentLightGroups::get_lightGroupDataList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentLightGroups*), "get_lightGroupDataList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentLightGroups::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentLightGroups::GetDataForGroup
// Il2CppName: GetDataForGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentLightGroups::LightGroupData* (GlobalNamespace::EnvironmentLightGroups::*)(int)>(&GlobalNamespace::EnvironmentLightGroups::GetDataForGroup)> {
  static const MethodInfo* get() {
    static auto* groupId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentLightGroups*), "GetDataForGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{groupId});
  }
};
