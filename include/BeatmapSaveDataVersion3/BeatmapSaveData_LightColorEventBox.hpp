// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData
#include "BeatmapSaveDataVersion3/BeatmapSaveData.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox
#include "BeatmapSaveDataVersion3/BeatmapSaveData_EventBox.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EaseType
#include "BeatmapSaveDataVersion3/BeatmapSaveData_EaseType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox*, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightColorEventBox");
// Type namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightColorEventBox
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData::LightColorEventBox : public ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox {
    public:
    public:
    // private System.Single r
    // Size: 0x4
    // Offset: 0x20
    float r;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox/BeatmapSaveDataVersion3.DistributionParamType t
    // Size: 0x4
    // Offset: 0x24
    ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType t;
    // Field size check
    static_assert(sizeof(::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType) == 0x4);
    // private System.Int32 b
    // Size: 0x4
    // Offset: 0x28
    int b;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EaseType i
    // Size: 0x4
    // Offset: 0x2C
    ::BeatmapSaveDataVersion3::BeatmapSaveData::EaseType i;
    // Field size check
    static_assert(sizeof(::BeatmapSaveDataVersion3::BeatmapSaveData::EaseType) == 0x4);
    // private System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightColorBaseData> e
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorBaseData*>* e;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorBaseData*>*) == 0x8);
    public:
    // Get instance field reference: private System.Single r
    [[deprecated("Use field access instead!")]] float& dyn_r();
    // Get instance field reference: private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox/BeatmapSaveDataVersion3.DistributionParamType t
    [[deprecated("Use field access instead!")]] ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType& dyn_t();
    // Get instance field reference: private System.Int32 b
    [[deprecated("Use field access instead!")]] int& dyn_b();
    // Get instance field reference: private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EaseType i
    [[deprecated("Use field access instead!")]] ::BeatmapSaveDataVersion3::BeatmapSaveData::EaseType& dyn_i();
    // Get instance field reference: private System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightColorBaseData> e
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorBaseData*>*& dyn_e();
    // public System.Single get_brightnessDistributionParam()
    // Offset: 0x26EFD68
    float get_brightnessDistributionParam();
    // public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox/BeatmapSaveDataVersion3.DistributionParamType get_brightnessDistributionParamType()
    // Offset: 0x26EFD70
    ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType get_brightnessDistributionParamType();
    // public System.Boolean get_brightnessDistributionShouldAffectFirstBaseEvent()
    // Offset: 0x26EFD78
    bool get_brightnessDistributionShouldAffectFirstBaseEvent();
    // public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EaseType get_brightnessDistributionEaseType()
    // Offset: 0x26EFD88
    ::BeatmapSaveDataVersion3::BeatmapSaveData::EaseType get_brightnessDistributionEaseType();
    // public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightColorBaseData> get_lightColorBaseDataList()
    // Offset: 0x26EFD90
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorBaseData*>* get_lightColorBaseDataList();
    // public System.Void .ctor(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter indexFilter, System.Single beatDistributionParam, BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox/BeatmapSaveDataVersion3.DistributionParamType beatDistributionParamType, System.Single brightnessDistributionParam, System.Boolean brightnessDistributionShouldAffectFirstBaseEvent, BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox/BeatmapSaveDataVersion3.DistributionParamType brightnessDistributionParamType, BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EaseType brightnessDistributionEaseType, System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightColorBaseData> lightColorBaseDataList)
    // Offset: 0x26EFD98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::LightColorEventBox* New_ctor(::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter* indexFilter, float beatDistributionParam, ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType beatDistributionParamType, float brightnessDistributionParam, bool brightnessDistributionShouldAffectFirstBaseEvent, ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType brightnessDistributionParamType, ::BeatmapSaveDataVersion3::BeatmapSaveData::EaseType brightnessDistributionEaseType, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorBaseData*>* lightColorBaseDataList) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::LightColorEventBox*, creationType>(indexFilter, beatDistributionParam, beatDistributionParamType, brightnessDistributionParam, brightnessDistributionShouldAffectFirstBaseEvent, brightnessDistributionParamType, brightnessDistributionEaseType, lightColorBaseDataList)));
    }
  }; // BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightColorEventBox
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::LightColorEventBox), 48 + sizeof(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorBaseData*>*)> __BeatmapSaveDataVersion3_BeatmapSaveData_LightColorEventBoxSizeCheck;
  static_assert(sizeof(BeatmapSaveData::LightColorEventBox) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox::get_brightnessDistributionParam
// Il2CppName: get_brightnessDistributionParam
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox::get_brightnessDistributionParam)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox*), "get_brightnessDistributionParam", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox::get_brightnessDistributionParamType
// Il2CppName: get_brightnessDistributionParamType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType (BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox::get_brightnessDistributionParamType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox*), "get_brightnessDistributionParamType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox::get_brightnessDistributionShouldAffectFirstBaseEvent
// Il2CppName: get_brightnessDistributionShouldAffectFirstBaseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox::get_brightnessDistributionShouldAffectFirstBaseEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox*), "get_brightnessDistributionShouldAffectFirstBaseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox::get_brightnessDistributionEaseType
// Il2CppName: get_brightnessDistributionEaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData::EaseType (BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox::get_brightnessDistributionEaseType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox*), "get_brightnessDistributionEaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox::get_lightColorBaseDataList
// Il2CppName: get_lightColorBaseDataList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorBaseData*>* (BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox::get_lightColorBaseDataList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox*), "get_lightColorBaseDataList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
