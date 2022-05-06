// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
// Including type: Vector3Serializable
#include "GlobalNamespace/Vector3Serializable.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ObstacleSpawnInfoNetSerializable
  class ObstacleSpawnInfoNetSerializable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ObstacleSpawnInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleSpawnInfoNetSerializable*, "", "ObstacleSpawnInfoNetSerializable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: ObstacleSpawnInfoNetSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  class ObstacleSpawnInfoNetSerializable : public ::Il2CppObject/*, public ::LiteNetLib::Utils::INetSerializable*/ {
    public:
    public:
    // public System.Single time
    // Size: 0x4
    // Offset: 0x10
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 lineIndex
    // Size: 0x4
    // Offset: 0x14
    int lineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public NoteLineLayer lineLayer
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::NoteLineLayer lineLayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteLineLayer) == 0x4);
    // public System.Single duration
    // Size: 0x4
    // Offset: 0x1C
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 width
    // Size: 0x4
    // Offset: 0x20
    int width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 height
    // Size: 0x4
    // Offset: 0x24
    int height;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public Vector3Serializable moveStartPos
    // Size: 0xC
    // Offset: 0x28
    ::GlobalNamespace::Vector3Serializable moveStartPos;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3Serializable) == 0xC);
    // public Vector3Serializable moveEndPos
    // Size: 0xC
    // Offset: 0x34
    ::GlobalNamespace::Vector3Serializable moveEndPos;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3Serializable) == 0xC);
    // public Vector3Serializable jumpEndPos
    // Size: 0xC
    // Offset: 0x40
    ::GlobalNamespace::Vector3Serializable jumpEndPos;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3Serializable) == 0xC);
    // public System.Single obstacleHeight
    // Size: 0x4
    // Offset: 0x4C
    float obstacleHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single moveDuration
    // Size: 0x4
    // Offset: 0x50
    float moveDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single jumpDuration
    // Size: 0x4
    // Offset: 0x54
    float jumpDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single noteLinesDistance
    // Size: 0x4
    // Offset: 0x58
    float noteLinesDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotation
    // Size: 0x4
    // Offset: 0x5C
    float rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::LiteNetLib::Utils::INetSerializable
    operator ::LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<::LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Get instance field reference: public System.Single time
    [[deprecated("Use field access instead!")]] float& dyn_time();
    // Get instance field reference: public System.Int32 lineIndex
    [[deprecated("Use field access instead!")]] int& dyn_lineIndex();
    // Get instance field reference: public NoteLineLayer lineLayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteLineLayer& dyn_lineLayer();
    // Get instance field reference: public System.Single duration
    [[deprecated("Use field access instead!")]] float& dyn_duration();
    // Get instance field reference: public System.Int32 width
    [[deprecated("Use field access instead!")]] int& dyn_width();
    // Get instance field reference: public System.Int32 height
    [[deprecated("Use field access instead!")]] int& dyn_height();
    // Get instance field reference: public Vector3Serializable moveStartPos
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3Serializable& dyn_moveStartPos();
    // Get instance field reference: public Vector3Serializable moveEndPos
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3Serializable& dyn_moveEndPos();
    // Get instance field reference: public Vector3Serializable jumpEndPos
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3Serializable& dyn_jumpEndPos();
    // Get instance field reference: public System.Single obstacleHeight
    [[deprecated("Use field access instead!")]] float& dyn_obstacleHeight();
    // Get instance field reference: public System.Single moveDuration
    [[deprecated("Use field access instead!")]] float& dyn_moveDuration();
    // Get instance field reference: public System.Single jumpDuration
    [[deprecated("Use field access instead!")]] float& dyn_jumpDuration();
    // Get instance field reference: public System.Single noteLinesDistance
    [[deprecated("Use field access instead!")]] float& dyn_noteLinesDistance();
    // Get instance field reference: public System.Single rotation
    [[deprecated("Use field access instead!")]] float& dyn_rotation();
    // public System.Void .ctor(System.Single time, System.Int32 lineIndex, NoteLineLayer lineLayer, System.Single duration, System.Int32 width, System.Int32 height, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single obstacleHeight, System.Single moveDuration, System.Single jumpDuration, System.Single noteLinesDistance, System.Single rotation)
    // Offset: 0x2A03ABC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObstacleSpawnInfoNetSerializable* New_ctor(float time, int lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer, float duration, int width, int height, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float obstacleHeight, float moveDuration, float jumpDuration, float noteLinesDistance, float rotation) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ObstacleSpawnInfoNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObstacleSpawnInfoNetSerializable*, creationType>(time, lineIndex, lineLayer, duration, width, height, moveStartPos, moveEndPos, jumpEndPos, obstacleHeight, moveDuration, jumpDuration, noteLinesDistance, rotation)));
    }
    // public System.Void .ctor()
    // Offset: 0x2A03C2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObstacleSpawnInfoNetSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ObstacleSpawnInfoNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObstacleSpawnInfoNetSerializable*, creationType>()));
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x2A03C34
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2A03D78
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
  }; // ObstacleSpawnInfoNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(ObstacleSpawnInfoNetSerializable), 92 + sizeof(float)> __GlobalNamespace_ObstacleSpawnInfoNetSerializableSizeCheck;
  static_assert(sizeof(ObstacleSpawnInfoNetSerializable) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSpawnInfoNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSpawnInfoNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSpawnInfoNetSerializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSpawnInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::ObstacleSpawnInfoNetSerializable::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSpawnInfoNetSerializable*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSpawnInfoNetSerializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSpawnInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::ObstacleSpawnInfoNetSerializable::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSpawnInfoNetSerializable*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
