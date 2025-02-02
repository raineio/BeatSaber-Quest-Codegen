// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: HoudiniEngineUnity.HAPI_ParmType
#include "HoudiniEngineUnity/HAPI_ParmType.hpp"
// Including type: HoudiniEngineUnity.HAPI_PrmScriptType
#include "HoudiniEngineUnity/HAPI_PrmScriptType.hpp"
// Including type: HoudiniEngineUnity.HAPI_Permissions
#include "HoudiniEngineUnity/HAPI_Permissions.hpp"
// Including type: HoudiniEngineUnity.HAPI_ChoiceListType
#include "HoudiniEngineUnity/HAPI_ChoiceListType.hpp"
// Including type: HoudiniEngineUnity.HAPI_NodeType
#include "HoudiniEngineUnity/HAPI_NodeType.hpp"
// Including type: HoudiniEngineUnity.HAPI_NodeFlags
#include "HoudiniEngineUnity/HAPI_NodeFlags.hpp"
// Including type: HoudiniEngineUnity.HAPI_RampType
#include "HoudiniEngineUnity/HAPI_RampType.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HAPI_ParmInfo
  struct HAPI_ParmInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ParmInfo, "HoudiniEngineUnity", "HAPI_ParmInfo");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x90
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: HoudiniEngineUnity.HAPI_ParmInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_ParmInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 id
    // Size: 0x4
    // Offset: 0x0
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 parentId
    // Size: 0x4
    // Offset: 0x4
    int parentId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 childIndex
    // Size: 0x4
    // Offset: 0x8
    int childIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public HoudiniEngineUnity.HAPI_ParmType type
    // Size: 0x4
    // Offset: 0xC
    ::HoudiniEngineUnity::HAPI_ParmType type;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_ParmType) == 0x4);
    // public HoudiniEngineUnity.HAPI_PrmScriptType scriptType
    // Size: 0x4
    // Offset: 0x10
    ::HoudiniEngineUnity::HAPI_PrmScriptType scriptType;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_PrmScriptType) == 0x4);
    // public System.Int32 typeInfoSH
    // Size: 0x4
    // Offset: 0x14
    int typeInfoSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public HoudiniEngineUnity.HAPI_Permissions permissions
    // Size: 0x4
    // Offset: 0x18
    ::HoudiniEngineUnity::HAPI_Permissions permissions;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_Permissions) == 0x4);
    // public System.Int32 tagCount
    // Size: 0x4
    // Offset: 0x1C
    int tagCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 size
    // Size: 0x4
    // Offset: 0x20
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public HoudiniEngineUnity.HAPI_ChoiceListType choiceListType
    // Size: 0x4
    // Offset: 0x24
    ::HoudiniEngineUnity::HAPI_ChoiceListType choiceListType;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_ChoiceListType) == 0x4);
    // public System.Int32 choiceCount
    // Size: 0x4
    // Offset: 0x28
    int choiceCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 nameSH
    // Size: 0x4
    // Offset: 0x2C
    int nameSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 labelSH
    // Size: 0x4
    // Offset: 0x30
    int labelSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 templateNameSH
    // Size: 0x4
    // Offset: 0x34
    int templateNameSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 helpSH
    // Size: 0x4
    // Offset: 0x38
    int helpSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean hasMin
    // Size: 0x1
    // Offset: 0x3C
    bool hasMin;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean hasMax
    // Size: 0x1
    // Offset: 0x3D
    bool hasMax;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean hasUIMin
    // Size: 0x1
    // Offset: 0x3E
    bool hasUIMin;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean hasUIMax
    // Size: 0x1
    // Offset: 0x3F
    bool hasUIMax;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Single min
    // Size: 0x4
    // Offset: 0x40
    float min;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single max
    // Size: 0x4
    // Offset: 0x44
    float max;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single UIMin
    // Size: 0x4
    // Offset: 0x48
    float UIMin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single UIMax
    // Size: 0x4
    // Offset: 0x4C
    float UIMax;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean invisible
    // Size: 0x1
    // Offset: 0x50
    bool invisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean disabled
    // Size: 0x1
    // Offset: 0x51
    bool disabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean spare
    // Size: 0x1
    // Offset: 0x52
    bool spare;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean joinNext
    // Size: 0x1
    // Offset: 0x53
    bool joinNext;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean labelNone
    // Size: 0x1
    // Offset: 0x54
    bool labelNone;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: labelNone and: intValuesIndex
    char __padding27[0x3] = {};
    // public System.Int32 intValuesIndex
    // Size: 0x4
    // Offset: 0x58
    int intValuesIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 floatValuesIndex
    // Size: 0x4
    // Offset: 0x5C
    int floatValuesIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 stringValuesIndex
    // Size: 0x4
    // Offset: 0x60
    int stringValuesIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 choiceIndex
    // Size: 0x4
    // Offset: 0x64
    int choiceIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public HoudiniEngineUnity.HAPI_NodeType inputNodeType
    // Size: 0x4
    // Offset: 0x68
    ::HoudiniEngineUnity::HAPI_NodeType inputNodeType;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_NodeType) == 0x4);
    // public HoudiniEngineUnity.HAPI_NodeFlags inputNodeFlag
    // Size: 0x4
    // Offset: 0x6C
    ::HoudiniEngineUnity::HAPI_NodeFlags inputNodeFlag;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_NodeFlags) == 0x4);
    // public System.Boolean isChildOfMultiParm
    // Size: 0x1
    // Offset: 0x70
    bool isChildOfMultiParm;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isChildOfMultiParm and: instanceNum
    char __padding34[0x3] = {};
    // public System.Int32 instanceNum
    // Size: 0x4
    // Offset: 0x74
    int instanceNum;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 instanceLength
    // Size: 0x4
    // Offset: 0x78
    int instanceLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 instanceCount
    // Size: 0x4
    // Offset: 0x7C
    int instanceCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 instanceStartOffset
    // Size: 0x4
    // Offset: 0x80
    int instanceStartOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public HoudiniEngineUnity.HAPI_RampType rampType
    // Size: 0x4
    // Offset: 0x84
    ::HoudiniEngineUnity::HAPI_RampType rampType;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_RampType) == 0x4);
    // public System.Int32 visibilityConditionSH
    // Size: 0x4
    // Offset: 0x88
    int visibilityConditionSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 disabledConditionSH
    // Size: 0x4
    // Offset: 0x8C
    int disabledConditionSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_ParmInfo
    constexpr HAPI_ParmInfo(int id_ = {}, int parentId_ = {}, int childIndex_ = {}, ::HoudiniEngineUnity::HAPI_ParmType type_ = {}, ::HoudiniEngineUnity::HAPI_PrmScriptType scriptType_ = {}, int typeInfoSH_ = {}, ::HoudiniEngineUnity::HAPI_Permissions permissions_ = {}, int tagCount_ = {}, int size_ = {}, ::HoudiniEngineUnity::HAPI_ChoiceListType choiceListType_ = {}, int choiceCount_ = {}, int nameSH_ = {}, int labelSH_ = {}, int templateNameSH_ = {}, int helpSH_ = {}, bool hasMin_ = {}, bool hasMax_ = {}, bool hasUIMin_ = {}, bool hasUIMax_ = {}, float min_ = {}, float max_ = {}, float UIMin_ = {}, float UIMax_ = {}, bool invisible_ = {}, bool disabled_ = {}, bool spare_ = {}, bool joinNext_ = {}, bool labelNone_ = {}, int intValuesIndex_ = {}, int floatValuesIndex_ = {}, int stringValuesIndex_ = {}, int choiceIndex_ = {}, ::HoudiniEngineUnity::HAPI_NodeType inputNodeType_ = {}, ::HoudiniEngineUnity::HAPI_NodeFlags inputNodeFlag_ = {}, bool isChildOfMultiParm_ = {}, int instanceNum_ = {}, int instanceLength_ = {}, int instanceCount_ = {}, int instanceStartOffset_ = {}, ::HoudiniEngineUnity::HAPI_RampType rampType_ = {}, int visibilityConditionSH_ = {}, int disabledConditionSH_ = {}) noexcept : id{id_}, parentId{parentId_}, childIndex{childIndex_}, type{type_}, scriptType{scriptType_}, typeInfoSH{typeInfoSH_}, permissions{permissions_}, tagCount{tagCount_}, size{size_}, choiceListType{choiceListType_}, choiceCount{choiceCount_}, nameSH{nameSH_}, labelSH{labelSH_}, templateNameSH{templateNameSH_}, helpSH{helpSH_}, hasMin{hasMin_}, hasMax{hasMax_}, hasUIMin{hasUIMin_}, hasUIMax{hasUIMax_}, min{min_}, max{max_}, UIMin{UIMin_}, UIMax{UIMax_}, invisible{invisible_}, disabled{disabled_}, spare{spare_}, joinNext{joinNext_}, labelNone{labelNone_}, intValuesIndex{intValuesIndex_}, floatValuesIndex{floatValuesIndex_}, stringValuesIndex{stringValuesIndex_}, choiceIndex{choiceIndex_}, inputNodeType{inputNodeType_}, inputNodeFlag{inputNodeFlag_}, isChildOfMultiParm{isChildOfMultiParm_}, instanceNum{instanceNum_}, instanceLength{instanceLength_}, instanceCount{instanceCount_}, instanceStartOffset{instanceStartOffset_}, rampType{rampType_}, visibilityConditionSH{visibilityConditionSH_}, disabledConditionSH{disabledConditionSH_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 id
    [[deprecated("Use field access instead!")]] int& dyn_id();
    // Get instance field reference: public System.Int32 parentId
    [[deprecated("Use field access instead!")]] int& dyn_parentId();
    // Get instance field reference: public System.Int32 childIndex
    [[deprecated("Use field access instead!")]] int& dyn_childIndex();
    // Get instance field reference: public HoudiniEngineUnity.HAPI_ParmType type
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_ParmType& dyn_type();
    // Get instance field reference: public HoudiniEngineUnity.HAPI_PrmScriptType scriptType
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_PrmScriptType& dyn_scriptType();
    // Get instance field reference: public System.Int32 typeInfoSH
    [[deprecated("Use field access instead!")]] int& dyn_typeInfoSH();
    // Get instance field reference: public HoudiniEngineUnity.HAPI_Permissions permissions
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_Permissions& dyn_permissions();
    // Get instance field reference: public System.Int32 tagCount
    [[deprecated("Use field access instead!")]] int& dyn_tagCount();
    // Get instance field reference: public System.Int32 size
    [[deprecated("Use field access instead!")]] int& dyn_size();
    // Get instance field reference: public HoudiniEngineUnity.HAPI_ChoiceListType choiceListType
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_ChoiceListType& dyn_choiceListType();
    // Get instance field reference: public System.Int32 choiceCount
    [[deprecated("Use field access instead!")]] int& dyn_choiceCount();
    // Get instance field reference: public System.Int32 nameSH
    [[deprecated("Use field access instead!")]] int& dyn_nameSH();
    // Get instance field reference: public System.Int32 labelSH
    [[deprecated("Use field access instead!")]] int& dyn_labelSH();
    // Get instance field reference: public System.Int32 templateNameSH
    [[deprecated("Use field access instead!")]] int& dyn_templateNameSH();
    // Get instance field reference: public System.Int32 helpSH
    [[deprecated("Use field access instead!")]] int& dyn_helpSH();
    // Get instance field reference: public System.Boolean hasMin
    [[deprecated("Use field access instead!")]] bool& dyn_hasMin();
    // Get instance field reference: public System.Boolean hasMax
    [[deprecated("Use field access instead!")]] bool& dyn_hasMax();
    // Get instance field reference: public System.Boolean hasUIMin
    [[deprecated("Use field access instead!")]] bool& dyn_hasUIMin();
    // Get instance field reference: public System.Boolean hasUIMax
    [[deprecated("Use field access instead!")]] bool& dyn_hasUIMax();
    // Get instance field reference: public System.Single min
    [[deprecated("Use field access instead!")]] float& dyn_min();
    // Get instance field reference: public System.Single max
    [[deprecated("Use field access instead!")]] float& dyn_max();
    // Get instance field reference: public System.Single UIMin
    [[deprecated("Use field access instead!")]] float& dyn_UIMin();
    // Get instance field reference: public System.Single UIMax
    [[deprecated("Use field access instead!")]] float& dyn_UIMax();
    // Get instance field reference: public System.Boolean invisible
    [[deprecated("Use field access instead!")]] bool& dyn_invisible();
    // Get instance field reference: public System.Boolean disabled
    [[deprecated("Use field access instead!")]] bool& dyn_disabled();
    // Get instance field reference: public System.Boolean spare
    [[deprecated("Use field access instead!")]] bool& dyn_spare();
    // Get instance field reference: public System.Boolean joinNext
    [[deprecated("Use field access instead!")]] bool& dyn_joinNext();
    // Get instance field reference: public System.Boolean labelNone
    [[deprecated("Use field access instead!")]] bool& dyn_labelNone();
    // Get instance field reference: public System.Int32 intValuesIndex
    [[deprecated("Use field access instead!")]] int& dyn_intValuesIndex();
    // Get instance field reference: public System.Int32 floatValuesIndex
    [[deprecated("Use field access instead!")]] int& dyn_floatValuesIndex();
    // Get instance field reference: public System.Int32 stringValuesIndex
    [[deprecated("Use field access instead!")]] int& dyn_stringValuesIndex();
    // Get instance field reference: public System.Int32 choiceIndex
    [[deprecated("Use field access instead!")]] int& dyn_choiceIndex();
    // Get instance field reference: public HoudiniEngineUnity.HAPI_NodeType inputNodeType
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_NodeType& dyn_inputNodeType();
    // Get instance field reference: public HoudiniEngineUnity.HAPI_NodeFlags inputNodeFlag
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_NodeFlags& dyn_inputNodeFlag();
    // Get instance field reference: public System.Boolean isChildOfMultiParm
    [[deprecated("Use field access instead!")]] bool& dyn_isChildOfMultiParm();
    // Get instance field reference: public System.Int32 instanceNum
    [[deprecated("Use field access instead!")]] int& dyn_instanceNum();
    // Get instance field reference: public System.Int32 instanceLength
    [[deprecated("Use field access instead!")]] int& dyn_instanceLength();
    // Get instance field reference: public System.Int32 instanceCount
    [[deprecated("Use field access instead!")]] int& dyn_instanceCount();
    // Get instance field reference: public System.Int32 instanceStartOffset
    [[deprecated("Use field access instead!")]] int& dyn_instanceStartOffset();
    // Get instance field reference: public HoudiniEngineUnity.HAPI_RampType rampType
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_RampType& dyn_rampType();
    // Get instance field reference: public System.Int32 visibilityConditionSH
    [[deprecated("Use field access instead!")]] int& dyn_visibilityConditionSH();
    // Get instance field reference: public System.Int32 disabledConditionSH
    [[deprecated("Use field access instead!")]] int& dyn_disabledConditionSH();
    // public System.Boolean isInt()
    // Offset: 0x173412C
    bool isInt();
    // public System.Boolean isFloat()
    // Offset: 0x173414C
    bool isFloat();
    // public System.Boolean isString()
    // Offset: 0x1734160
    bool isString();
    // public System.Boolean isPath()
    // Offset: 0x1734190
    bool isPath();
    // public System.Boolean isNode()
    // Offset: 0x17341B0
    bool isNode();
    // public System.Boolean isNonValue()
    // Offset: 0x17341C0
    bool isNonValue();
  }; // HoudiniEngineUnity.HAPI_ParmInfo
  #pragma pack(pop)
  static check_size<sizeof(HAPI_ParmInfo), 140 + sizeof(int)> __HoudiniEngineUnity_HAPI_ParmInfoSizeCheck;
  static_assert(sizeof(HAPI_ParmInfo) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HAPI_ParmInfo::isInt
// Il2CppName: isInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HAPI_ParmInfo::*)()>(&HoudiniEngineUnity::HAPI_ParmInfo::isInt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HAPI_ParmInfo), "isInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HAPI_ParmInfo::isFloat
// Il2CppName: isFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HAPI_ParmInfo::*)()>(&HoudiniEngineUnity::HAPI_ParmInfo::isFloat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HAPI_ParmInfo), "isFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HAPI_ParmInfo::isString
// Il2CppName: isString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HAPI_ParmInfo::*)()>(&HoudiniEngineUnity::HAPI_ParmInfo::isString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HAPI_ParmInfo), "isString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HAPI_ParmInfo::isPath
// Il2CppName: isPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HAPI_ParmInfo::*)()>(&HoudiniEngineUnity::HAPI_ParmInfo::isPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HAPI_ParmInfo), "isPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HAPI_ParmInfo::isNode
// Il2CppName: isNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HAPI_ParmInfo::*)()>(&HoudiniEngineUnity::HAPI_ParmInfo::isNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HAPI_ParmInfo), "isNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HAPI_ParmInfo::isNonValue
// Il2CppName: isNonValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HAPI_ParmInfo::*)()>(&HoudiniEngineUnity::HAPI_ParmInfo::isNonValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HAPI_ParmInfo), "isNonValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
