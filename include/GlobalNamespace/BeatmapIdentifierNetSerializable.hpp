// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapIdentifierNetSerializable
  class BeatmapIdentifierNetSerializable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapIdentifierNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapIdentifierNetSerializable*, "", "BeatmapIdentifierNetSerializable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapIdentifierNetSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class BeatmapIdentifierNetSerializable : public ::Il2CppObject/*, public ::System::IEquatable_1<::GlobalNamespace::BeatmapIdentifierNetSerializable*>, public ::LiteNetLib::Utils::INetSerializable*/ {
    public:
    public:
    // private System.String <levelID>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW levelID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <beatmapCharacteristicSerializedName>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW beatmapCharacteristicSerializedName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private BeatmapDifficulty <difficulty>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::BeatmapDifficulty difficulty;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDifficulty) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::IEquatable_1<::GlobalNamespace::BeatmapIdentifierNetSerializable*>
    operator ::System::IEquatable_1<::GlobalNamespace::BeatmapIdentifierNetSerializable*>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::GlobalNamespace::BeatmapIdentifierNetSerializable*>*>(this);
    }
    // Creating interface conversion operator: operator ::LiteNetLib::Utils::INetSerializable
    operator ::LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<::LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Get instance field reference: private System.String <levelID>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$levelID$k__BackingField();
    // Get instance field reference: private System.String <beatmapCharacteristicSerializedName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$beatmapCharacteristicSerializedName$k__BackingField();
    // Get instance field reference: private BeatmapDifficulty <difficulty>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDifficulty& dyn_$difficulty$k__BackingField();
    // public System.String get_levelID()
    // Offset: 0x29FDD90
    ::StringW get_levelID();
    // private System.Void set_levelID(System.String value)
    // Offset: 0x29FDD98
    void set_levelID(::StringW value);
    // public System.String get_beatmapCharacteristicSerializedName()
    // Offset: 0x29FDDA0
    ::StringW get_beatmapCharacteristicSerializedName();
    // private System.Void set_beatmapCharacteristicSerializedName(System.String value)
    // Offset: 0x29FDDA8
    void set_beatmapCharacteristicSerializedName(::StringW value);
    // public BeatmapDifficulty get_difficulty()
    // Offset: 0x29FDDB0
    ::GlobalNamespace::BeatmapDifficulty get_difficulty();
    // private System.Void set_difficulty(BeatmapDifficulty value)
    // Offset: 0x29FDDB8
    void set_difficulty(::GlobalNamespace::BeatmapDifficulty value);
    // public System.Void .ctor()
    // Offset: 0x29FDDC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapIdentifierNetSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapIdentifierNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapIdentifierNetSerializable*, creationType>()));
    }
    // public System.Void .ctor(System.String levelID, System.String beatmapCharacteristicSerializedName, BeatmapDifficulty difficulty)
    // Offset: 0x29FDDC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapIdentifierNetSerializable* New_ctor(::StringW levelID, ::StringW beatmapCharacteristicSerializedName, ::GlobalNamespace::BeatmapDifficulty difficulty) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapIdentifierNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapIdentifierNetSerializable*, creationType>(levelID, beatmapCharacteristicSerializedName, difficulty)));
    }
    // private System.Void LiteNetLib.Utils.INetSerializable.Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x29FDE08
    void LiteNetLib_Utils_INetSerializable_Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // private System.Void LiteNetLib.Utils.INetSerializable.Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x29FDE70
    void LiteNetLib_Utils_INetSerializable_Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Boolean Equals(BeatmapIdentifierNetSerializable other)
    // Offset: 0x29FDEC8
    bool Equals(::GlobalNamespace::BeatmapIdentifierNetSerializable* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x29FDF3C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x29FE04C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x29FE0B4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // BeatmapIdentifierNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(BeatmapIdentifierNetSerializable), 32 + sizeof(::GlobalNamespace::BeatmapDifficulty)> __GlobalNamespace_BeatmapIdentifierNetSerializableSizeCheck;
  static_assert(sizeof(BeatmapIdentifierNetSerializable) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::get_levelID
// Il2CppName: get_levelID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::BeatmapIdentifierNetSerializable::*)()>(&GlobalNamespace::BeatmapIdentifierNetSerializable::get_levelID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "get_levelID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::set_levelID
// Il2CppName: set_levelID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapIdentifierNetSerializable::*)(::StringW)>(&GlobalNamespace::BeatmapIdentifierNetSerializable::set_levelID)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "set_levelID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::get_beatmapCharacteristicSerializedName
// Il2CppName: get_beatmapCharacteristicSerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::BeatmapIdentifierNetSerializable::*)()>(&GlobalNamespace::BeatmapIdentifierNetSerializable::get_beatmapCharacteristicSerializedName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "get_beatmapCharacteristicSerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::set_beatmapCharacteristicSerializedName
// Il2CppName: set_beatmapCharacteristicSerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapIdentifierNetSerializable::*)(::StringW)>(&GlobalNamespace::BeatmapIdentifierNetSerializable::set_beatmapCharacteristicSerializedName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "set_beatmapCharacteristicSerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::get_difficulty
// Il2CppName: get_difficulty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDifficulty (GlobalNamespace::BeatmapIdentifierNetSerializable::*)()>(&GlobalNamespace::BeatmapIdentifierNetSerializable::get_difficulty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "get_difficulty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::set_difficulty
// Il2CppName: set_difficulty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapIdentifierNetSerializable::*)(::GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::BeatmapIdentifierNetSerializable::set_difficulty)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "set_difficulty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::LiteNetLib_Utils_INetSerializable_Deserialize
// Il2CppName: LiteNetLib.Utils.INetSerializable.Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapIdentifierNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::BeatmapIdentifierNetSerializable::LiteNetLib_Utils_INetSerializable_Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "LiteNetLib.Utils.INetSerializable.Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::LiteNetLib_Utils_INetSerializable_Serialize
// Il2CppName: LiteNetLib.Utils.INetSerializable.Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapIdentifierNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::BeatmapIdentifierNetSerializable::LiteNetLib_Utils_INetSerializable_Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "LiteNetLib.Utils.INetSerializable.Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapIdentifierNetSerializable::*)(::GlobalNamespace::BeatmapIdentifierNetSerializable*)>(&GlobalNamespace::BeatmapIdentifierNetSerializable::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "BeatmapIdentifierNetSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapIdentifierNetSerializable::*)(::Il2CppObject*)>(&GlobalNamespace::BeatmapIdentifierNetSerializable::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapIdentifierNetSerializable::*)()>(&GlobalNamespace::BeatmapIdentifierNetSerializable::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializable::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::BeatmapIdentifierNetSerializable::*)()>(&GlobalNamespace::BeatmapIdentifierNetSerializable::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializable*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
