// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PerceivedLoudnessPerLevelSO
  class PerceivedLoudnessPerLevelSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PerceivedLoudnessPerLevelModel
  class PerceivedLoudnessPerLevelModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PerceivedLoudnessPerLevelModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerceivedLoudnessPerLevelModel*, "", "PerceivedLoudnessPerLevelModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PerceivedLoudnessPerLevelModel
  // [TokenAttribute] Offset: FFFFFFFF
  class PerceivedLoudnessPerLevelModel : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Collections.Generic.Dictionary`2<System.String,System.Single> _loudnessLevelPerLevelId
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::StringW, float>* loudnessLevelPerLevelId;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, float>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::Dictionary_2<::StringW, float>*
    constexpr operator ::System::Collections::Generic::Dictionary_2<::StringW, float>*() const noexcept {
      return loudnessLevelPerLevelId;
    }
    // static field const value: static private System.Single kDefaultLoudness
    static constexpr const float kDefaultLoudness = -6;
    // Get static field: static private System.Single kDefaultLoudness
    static float _get_kDefaultLoudness();
    // Set static field: static private System.Single kDefaultLoudness
    static void _set_kDefaultLoudness(float value);
    // static field const value: static private System.Single kPerceivedLoudnessTarget
    static constexpr const float kPerceivedLoudnessTarget = -11;
    // Get static field: static private System.Single kPerceivedLoudnessTarget
    static float _get_kPerceivedLoudnessTarget();
    // Set static field: static private System.Single kPerceivedLoudnessTarget
    static void _set_kPerceivedLoudnessTarget(float value);
    // static field const value: static private System.Single kPerceivedLoudnessToMaxSfxLevelDifference
    static constexpr const float kPerceivedLoudnessToMaxSfxLevelDifference = -10;
    // Get static field: static private System.Single kPerceivedLoudnessToMaxSfxLevelDifference
    static float _get_kPerceivedLoudnessToMaxSfxLevelDifference();
    // Set static field: static private System.Single kPerceivedLoudnessToMaxSfxLevelDifference
    static void _set_kPerceivedLoudnessToMaxSfxLevelDifference(float value);
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.String,System.Single> _loudnessLevelPerLevelId
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, float>*& dyn__loudnessLevelPerLevelId();
    // public System.Void .ctor(PerceivedLoudnessPerLevelSO loudnessPerLeveData)
    // Offset: 0x157D780
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PerceivedLoudnessPerLevelModel* New_ctor(::GlobalNamespace::PerceivedLoudnessPerLevelSO* loudnessPerLeveData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PerceivedLoudnessPerLevelModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PerceivedLoudnessPerLevelModel*, creationType>(loudnessPerLeveData)));
    }
    // public System.Boolean ContainsLevelId(System.String levelId)
    // Offset: 0x157D870
    bool ContainsLevelId(::StringW levelId);
    // public System.Single GetLoudnessCorrectionByLevelId(System.String levelId)
    // Offset: 0x157D8D8
    float GetLoudnessCorrectionByLevelId(::StringW levelId);
    // public System.Single GetMaxSfxVolumeByLevelId(System.String levelId)
    // Offset: 0x157D9F0
    float GetMaxSfxVolumeByLevelId(::StringW levelId);
    // private System.Single GetLoudnessByLevelId(System.String levelId)
    // Offset: 0x157D96C
    float GetLoudnessByLevelId(::StringW levelId);
  }; // PerceivedLoudnessPerLevelModel
  #pragma pack(pop)
  static check_size<sizeof(PerceivedLoudnessPerLevelModel), 16 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, float>*)> __GlobalNamespace_PerceivedLoudnessPerLevelModelSizeCheck;
  static_assert(sizeof(PerceivedLoudnessPerLevelModel) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PerceivedLoudnessPerLevelModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PerceivedLoudnessPerLevelModel::ContainsLevelId
// Il2CppName: ContainsLevelId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PerceivedLoudnessPerLevelModel::*)(::StringW)>(&GlobalNamespace::PerceivedLoudnessPerLevelModel::ContainsLevelId)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerceivedLoudnessPerLevelModel*), "ContainsLevelId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerceivedLoudnessPerLevelModel::GetLoudnessCorrectionByLevelId
// Il2CppName: GetLoudnessCorrectionByLevelId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PerceivedLoudnessPerLevelModel::*)(::StringW)>(&GlobalNamespace::PerceivedLoudnessPerLevelModel::GetLoudnessCorrectionByLevelId)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerceivedLoudnessPerLevelModel*), "GetLoudnessCorrectionByLevelId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerceivedLoudnessPerLevelModel::GetMaxSfxVolumeByLevelId
// Il2CppName: GetMaxSfxVolumeByLevelId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PerceivedLoudnessPerLevelModel::*)(::StringW)>(&GlobalNamespace::PerceivedLoudnessPerLevelModel::GetMaxSfxVolumeByLevelId)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerceivedLoudnessPerLevelModel*), "GetMaxSfxVolumeByLevelId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerceivedLoudnessPerLevelModel::GetLoudnessByLevelId
// Il2CppName: GetLoudnessByLevelId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PerceivedLoudnessPerLevelModel::*)(::StringW)>(&GlobalNamespace::PerceivedLoudnessPerLevelModel::GetLoudnessByLevelId)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerceivedLoudnessPerLevelModel*), "GetLoudnessByLevelId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId});
  }
};
