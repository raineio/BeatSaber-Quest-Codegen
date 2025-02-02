// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
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
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: CurveNodeData
  class CurveNodeData;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_AssetSerializedMetaData
  class HEU_AssetSerializedMetaData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetSerializedMetaData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetSerializedMetaData*, "HoudiniEngineUnity", "HEU_AssetSerializedMetaData");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_AssetSerializedMetaData
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_AssetSerializedMetaData : public ::UnityEngine::ScriptableObject/*, public ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>*/ {
    public:
    public:
    // private System.Boolean _softDeleted
    // Size: 0x1
    // Offset: 0x18
    bool softDeleted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: softDeleted and: savedCurveNodeData
    char __padding0[0x7] = {};
    // private System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<HoudiniEngineUnity.CurveNodeData>> _savedCurveNodeData
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>* savedCurveNodeData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>
    operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>*>(this);
    }
    // Creating interface conversion operator: i_HEU_AssetSerializedMetaData
    inline ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>* i_HEU_AssetSerializedMetaData() noexcept {
      return reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean _softDeleted
    [[deprecated("Use field access instead!")]] bool& dyn__softDeleted();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<HoudiniEngineUnity.CurveNodeData>> _savedCurveNodeData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>*& dyn__savedCurveNodeData();
    // public System.Boolean get_SoftDeleted()
    // Offset: 0x1736FE8
    bool get_SoftDeleted();
    // public System.Void set_SoftDeleted(System.Boolean value)
    // Offset: 0x1736FF0
    void set_SoftDeleted(bool value);
    // public System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<HoudiniEngineUnity.CurveNodeData>> get_SavedCurveNodeData()
    // Offset: 0x1736FFC
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>* get_SavedCurveNodeData();
    // public System.Void .ctor()
    // Offset: 0x17370B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_AssetSerializedMetaData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_AssetSerializedMetaData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_AssetSerializedMetaData*, creationType>()));
    }
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.HEU_AssetSerializedMetaData other)
    // Offset: 0x1737004
    bool IsEquivalentTo(::HoudiniEngineUnity::HEU_AssetSerializedMetaData* other);
  }; // HoudiniEngineUnity.HEU_AssetSerializedMetaData
  #pragma pack(pop)
  static check_size<sizeof(HEU_AssetSerializedMetaData), 32 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>*)> __HoudiniEngineUnity_HEU_AssetSerializedMetaDataSizeCheck;
  static_assert(sizeof(HEU_AssetSerializedMetaData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetSerializedMetaData::get_SoftDeleted
// Il2CppName: get_SoftDeleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_AssetSerializedMetaData::*)()>(&HoudiniEngineUnity::HEU_AssetSerializedMetaData::get_SoftDeleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetSerializedMetaData*), "get_SoftDeleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetSerializedMetaData::set_SoftDeleted
// Il2CppName: set_SoftDeleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_AssetSerializedMetaData::*)(bool)>(&HoudiniEngineUnity::HEU_AssetSerializedMetaData::set_SoftDeleted)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetSerializedMetaData*), "set_SoftDeleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetSerializedMetaData::get_SavedCurveNodeData
// Il2CppName: get_SavedCurveNodeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>* (HoudiniEngineUnity::HEU_AssetSerializedMetaData::*)()>(&HoudiniEngineUnity::HEU_AssetSerializedMetaData::get_SavedCurveNodeData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetSerializedMetaData*), "get_SavedCurveNodeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetSerializedMetaData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetSerializedMetaData::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_AssetSerializedMetaData::*)(::HoudiniEngineUnity::HEU_AssetSerializedMetaData*)>(&HoudiniEngineUnity::HEU_AssetSerializedMetaData::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_AssetSerializedMetaData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetSerializedMetaData*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
