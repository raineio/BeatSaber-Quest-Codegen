// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetImmutableSerializable`1
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerAvatarData
  struct MultiplayerAvatarData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerAvatarData, "", "MultiplayerAvatarData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: MultiplayerAvatarData
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct MultiplayerAvatarData/*, public System::ValueType, public LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::MultiplayerAvatarData>, public System::IEquatable_1<GlobalNamespace::MultiplayerAvatarData>*/ {
    public:
    public:
    // public readonly System.String headTopId
    // Size: 0x8
    // Offset: 0x0
    ::StringW headTopId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly UnityEngine.Color32 headTopPrimaryColor
    // Size: 0x4
    // Offset: 0x8
    UnityEngine::Color32 headTopPrimaryColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // public readonly UnityEngine.Color32 headTopSecondaryColor
    // Size: 0x4
    // Offset: 0xC
    UnityEngine::Color32 headTopSecondaryColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // public readonly System.String glassesId
    // Size: 0x8
    // Offset: 0x10
    ::StringW glassesId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly UnityEngine.Color32 glassesColor
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::Color32 glassesColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // Padding between fields: glassesColor and: facialHairId
    char __padding4[0x4] = {};
    // public readonly System.String facialHairId
    // Size: 0x8
    // Offset: 0x20
    ::StringW facialHairId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly UnityEngine.Color32 facialHairColor
    // Size: 0x4
    // Offset: 0x28
    UnityEngine::Color32 facialHairColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // Padding between fields: facialHairColor and: handsId
    char __padding6[0x4] = {};
    // public readonly System.String handsId
    // Size: 0x8
    // Offset: 0x30
    ::StringW handsId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly UnityEngine.Color32 handsColor
    // Size: 0x4
    // Offset: 0x38
    UnityEngine::Color32 handsColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // Padding between fields: handsColor and: clothesId
    char __padding8[0x4] = {};
    // public readonly System.String clothesId
    // Size: 0x8
    // Offset: 0x40
    ::StringW clothesId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly UnityEngine.Color32 clothesPrimaryColor
    // Size: 0x4
    // Offset: 0x48
    UnityEngine::Color32 clothesPrimaryColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // public readonly UnityEngine.Color32 clothesSecondaryColor
    // Size: 0x4
    // Offset: 0x4C
    UnityEngine::Color32 clothesSecondaryColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // public readonly UnityEngine.Color32 clothesDetailColor
    // Size: 0x4
    // Offset: 0x50
    UnityEngine::Color32 clothesDetailColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // Padding between fields: clothesDetailColor and: skinColorId
    char __padding12[0x4] = {};
    // public readonly System.String skinColorId
    // Size: 0x8
    // Offset: 0x58
    ::StringW skinColorId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String eyesId
    // Size: 0x8
    // Offset: 0x60
    ::StringW eyesId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String mouthId
    // Size: 0x8
    // Offset: 0x68
    ::StringW mouthId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: MultiplayerAvatarData
    constexpr MultiplayerAvatarData(::StringW headTopId_ = {}, UnityEngine::Color32 headTopPrimaryColor_ = {}, UnityEngine::Color32 headTopSecondaryColor_ = {}, ::StringW glassesId_ = {}, UnityEngine::Color32 glassesColor_ = {}, ::StringW facialHairId_ = {}, UnityEngine::Color32 facialHairColor_ = {}, ::StringW handsId_ = {}, UnityEngine::Color32 handsColor_ = {}, ::StringW clothesId_ = {}, UnityEngine::Color32 clothesPrimaryColor_ = {}, UnityEngine::Color32 clothesSecondaryColor_ = {}, UnityEngine::Color32 clothesDetailColor_ = {}, ::StringW skinColorId_ = {}, ::StringW eyesId_ = {}, ::StringW mouthId_ = {}) noexcept : headTopId{headTopId_}, headTopPrimaryColor{headTopPrimaryColor_}, headTopSecondaryColor{headTopSecondaryColor_}, glassesId{glassesId_}, glassesColor{glassesColor_}, facialHairId{facialHairId_}, facialHairColor{facialHairColor_}, handsId{handsId_}, handsColor{handsColor_}, clothesId{clothesId_}, clothesPrimaryColor{clothesPrimaryColor_}, clothesSecondaryColor{clothesSecondaryColor_}, clothesDetailColor{clothesDetailColor_}, skinColorId{skinColorId_}, eyesId{eyesId_}, mouthId{mouthId_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::MultiplayerAvatarData>
    operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::MultiplayerAvatarData>() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::MultiplayerAvatarData>*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::MultiplayerAvatarData>
    operator System::IEquatable_1<GlobalNamespace::MultiplayerAvatarData>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::MultiplayerAvatarData>*>(this);
    }
    // Get instance field reference: public readonly System.String headTopId
    ::StringW& dyn_headTopId();
    // Get instance field reference: public readonly UnityEngine.Color32 headTopPrimaryColor
    UnityEngine::Color32& dyn_headTopPrimaryColor();
    // Get instance field reference: public readonly UnityEngine.Color32 headTopSecondaryColor
    UnityEngine::Color32& dyn_headTopSecondaryColor();
    // Get instance field reference: public readonly System.String glassesId
    ::StringW& dyn_glassesId();
    // Get instance field reference: public readonly UnityEngine.Color32 glassesColor
    UnityEngine::Color32& dyn_glassesColor();
    // Get instance field reference: public readonly System.String facialHairId
    ::StringW& dyn_facialHairId();
    // Get instance field reference: public readonly UnityEngine.Color32 facialHairColor
    UnityEngine::Color32& dyn_facialHairColor();
    // Get instance field reference: public readonly System.String handsId
    ::StringW& dyn_handsId();
    // Get instance field reference: public readonly UnityEngine.Color32 handsColor
    UnityEngine::Color32& dyn_handsColor();
    // Get instance field reference: public readonly System.String clothesId
    ::StringW& dyn_clothesId();
    // Get instance field reference: public readonly UnityEngine.Color32 clothesPrimaryColor
    UnityEngine::Color32& dyn_clothesPrimaryColor();
    // Get instance field reference: public readonly UnityEngine.Color32 clothesSecondaryColor
    UnityEngine::Color32& dyn_clothesSecondaryColor();
    // Get instance field reference: public readonly UnityEngine.Color32 clothesDetailColor
    UnityEngine::Color32& dyn_clothesDetailColor();
    // Get instance field reference: public readonly System.String skinColorId
    ::StringW& dyn_skinColorId();
    // Get instance field reference: public readonly System.String eyesId
    ::StringW& dyn_eyesId();
    // Get instance field reference: public readonly System.String mouthId
    ::StringW& dyn_mouthId();
    // public System.Void .ctor(System.String headTopId, UnityEngine.Color32 headTopPrimaryColor, UnityEngine.Color32 headTopSecondaryColor, System.String glassesId, UnityEngine.Color32 glassesColor, System.String facialHairId, UnityEngine.Color32 facialHairColor, System.String handsId, UnityEngine.Color32 handsColor, System.String clothesId, UnityEngine.Color32 clothesPrimaryColor, UnityEngine.Color32 clothesSecondaryColor, UnityEngine.Color32 clothesDetailColor, System.String skinColorId, System.String eyesId, System.String mouthId)
    // Offset: 0x2622114
    // ABORTED: conflicts with another method.  MultiplayerAvatarData(::StringW headTopId, UnityEngine::Color32 headTopPrimaryColor, UnityEngine::Color32 headTopSecondaryColor, ::StringW glassesId, UnityEngine::Color32 glassesColor, ::StringW facialHairId, UnityEngine::Color32 facialHairColor, ::StringW handsId, UnityEngine::Color32 handsColor, ::StringW clothesId, UnityEngine::Color32 clothesPrimaryColor, UnityEngine::Color32 clothesSecondaryColor, UnityEngine::Color32 clothesDetailColor, ::StringW skinColorId, ::StringW eyesId, ::StringW mouthId);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x2622160
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public MultiplayerAvatarData CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x26222C4
    GlobalNamespace::MultiplayerAvatarData CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
    // static public MultiplayerAvatarData Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x26222CC
    static GlobalNamespace::MultiplayerAvatarData Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean Equals(MultiplayerAvatarData other)
    // Offset: 0x26224A0
    bool Equals(GlobalNamespace::MultiplayerAvatarData other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2622890
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2622930
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // MultiplayerAvatarData
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerAvatarData), 104 + sizeof(::StringW)> __GlobalNamespace_MultiplayerAvatarDataSizeCheck;
  static_assert(sizeof(MultiplayerAvatarData) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarData::MultiplayerAvatarData
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarData::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerAvatarData::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::MultiplayerAvatarData::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerAvatarData), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarData::CreateFromSerializedData
// Il2CppName: CreateFromSerializedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerAvatarData (GlobalNamespace::MultiplayerAvatarData::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::MultiplayerAvatarData::CreateFromSerializedData)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerAvatarData), "CreateFromSerializedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarData::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerAvatarData (*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::MultiplayerAvatarData::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerAvatarData), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarData::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerAvatarData::*)(GlobalNamespace::MultiplayerAvatarData)>(&GlobalNamespace::MultiplayerAvatarData::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "MultiplayerAvatarData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerAvatarData), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarData::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerAvatarData::*)(::Il2CppObject*)>(&GlobalNamespace::MultiplayerAvatarData::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerAvatarData), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarData::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MultiplayerAvatarData::*)()>(&GlobalNamespace::MultiplayerAvatarData::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerAvatarData), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
