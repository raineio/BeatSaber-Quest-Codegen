// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: ColorNoAlphaSerializable
#include "GlobalNamespace/ColorNoAlphaSerializable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Color because it is already included!
}
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
  // Forward declaring type: ColorSchemeNetSerializable
  struct ColorSchemeNetSerializable;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemeNetSerializable, "", "ColorSchemeNetSerializable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ColorSchemeNetSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  struct ColorSchemeNetSerializable/*, public System::ValueType, public LiteNetLib::Utils::INetSerializable*/ {
    public:
    public:
    // public ColorNoAlphaSerializable saberAColor
    // Size: 0x10
    // Offset: 0x0
    GlobalNamespace::ColorNoAlphaSerializable saberAColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorNoAlphaSerializable) == 0x10);
    // public ColorNoAlphaSerializable saberBColor
    // Size: 0x10
    // Offset: 0x10
    GlobalNamespace::ColorNoAlphaSerializable saberBColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorNoAlphaSerializable) == 0x10);
    // public ColorNoAlphaSerializable obstaclesColor
    // Size: 0x10
    // Offset: 0x20
    GlobalNamespace::ColorNoAlphaSerializable obstaclesColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorNoAlphaSerializable) == 0x10);
    // public ColorNoAlphaSerializable environmentColor0
    // Size: 0x10
    // Offset: 0x30
    GlobalNamespace::ColorNoAlphaSerializable environmentColor0;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorNoAlphaSerializable) == 0x10);
    // public ColorNoAlphaSerializable environmentColor1
    // Size: 0x10
    // Offset: 0x40
    GlobalNamespace::ColorNoAlphaSerializable environmentColor1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorNoAlphaSerializable) == 0x10);
    // public ColorNoAlphaSerializable environmentColor0Boost
    // Size: 0x10
    // Offset: 0x50
    GlobalNamespace::ColorNoAlphaSerializable environmentColor0Boost;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorNoAlphaSerializable) == 0x10);
    // public ColorNoAlphaSerializable environmentColor1Boost
    // Size: 0x10
    // Offset: 0x60
    GlobalNamespace::ColorNoAlphaSerializable environmentColor1Boost;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorNoAlphaSerializable) == 0x10);
    public:
    // Creating value type constructor for type: ColorSchemeNetSerializable
    constexpr ColorSchemeNetSerializable(GlobalNamespace::ColorNoAlphaSerializable saberAColor_ = {}, GlobalNamespace::ColorNoAlphaSerializable saberBColor_ = {}, GlobalNamespace::ColorNoAlphaSerializable obstaclesColor_ = {}, GlobalNamespace::ColorNoAlphaSerializable environmentColor0_ = {}, GlobalNamespace::ColorNoAlphaSerializable environmentColor1_ = {}, GlobalNamespace::ColorNoAlphaSerializable environmentColor0Boost_ = {}, GlobalNamespace::ColorNoAlphaSerializable environmentColor1Boost_ = {}) noexcept : saberAColor{saberAColor_}, saberBColor{saberBColor_}, obstaclesColor{obstaclesColor_}, environmentColor0{environmentColor0_}, environmentColor1{environmentColor1_}, environmentColor0Boost{environmentColor0Boost_}, environmentColor1Boost{environmentColor1Boost_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Get instance field reference: public ColorNoAlphaSerializable saberAColor
    GlobalNamespace::ColorNoAlphaSerializable& dyn_saberAColor();
    // Get instance field reference: public ColorNoAlphaSerializable saberBColor
    GlobalNamespace::ColorNoAlphaSerializable& dyn_saberBColor();
    // Get instance field reference: public ColorNoAlphaSerializable obstaclesColor
    GlobalNamespace::ColorNoAlphaSerializable& dyn_obstaclesColor();
    // Get instance field reference: public ColorNoAlphaSerializable environmentColor0
    GlobalNamespace::ColorNoAlphaSerializable& dyn_environmentColor0();
    // Get instance field reference: public ColorNoAlphaSerializable environmentColor1
    GlobalNamespace::ColorNoAlphaSerializable& dyn_environmentColor1();
    // Get instance field reference: public ColorNoAlphaSerializable environmentColor0Boost
    GlobalNamespace::ColorNoAlphaSerializable& dyn_environmentColor0Boost();
    // Get instance field reference: public ColorNoAlphaSerializable environmentColor1Boost
    GlobalNamespace::ColorNoAlphaSerializable& dyn_environmentColor1Boost();
    // public System.Void .ctor(UnityEngine.Color saberAColor, UnityEngine.Color saberBColor, UnityEngine.Color obstaclesColor, UnityEngine.Color environmentColor0, UnityEngine.Color environmentColor1, UnityEngine.Color environmentColor0Boost, UnityEngine.Color environmentColor1Boost)
    // Offset: 0x155D294
    ColorSchemeNetSerializable(UnityEngine::Color saberAColor, UnityEngine::Color saberBColor, UnityEngine::Color obstaclesColor, UnityEngine::Color environmentColor0, UnityEngine::Color environmentColor1, UnityEngine::Color environmentColor0Boost, UnityEngine::Color environmentColor1Boost);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x155D420
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x155D4A4
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
  }; // ColorSchemeNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(ColorSchemeNetSerializable), 96 + sizeof(GlobalNamespace::ColorNoAlphaSerializable)> __GlobalNamespace_ColorSchemeNetSerializableSizeCheck;
  static_assert(sizeof(ColorSchemeNetSerializable) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeNetSerializable::ColorSchemeNetSerializable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeNetSerializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeNetSerializable::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::ColorSchemeNetSerializable::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeNetSerializable), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeNetSerializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeNetSerializable::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::ColorSchemeNetSerializable::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeNetSerializable), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
