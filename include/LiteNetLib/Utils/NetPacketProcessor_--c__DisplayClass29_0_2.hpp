// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.NetPacketProcessor
#include "LiteNetLib/Utils/NetPacketProcessor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: INetSerializable
  class INetSerializable;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass29_0_2, "LiteNetLib.Utils", "NetPacketProcessor/<>c__DisplayClass29_0`2");
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // WARNING Size may be invalid!
  // Autogenerated type: LiteNetLib.Utils.NetPacketProcessor/LiteNetLib.Utils.<>c__DisplayClass29_0`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T, typename TUserData>
  class NetPacketProcessor::$$c__DisplayClass29_0_2 : public ::Il2CppObject {
    public:
    public:
    // public System.Func`1<T> packetConstructor
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_1<T>* packetConstructor;
    // Field size check
    static_assert(sizeof(::System::Func_1<T>*) == 0x8);
    // public System.Action`2<T,TUserData> onReceive
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_2<T, TUserData>* onReceive;
    // Field size check
    static_assert(sizeof(::System::Action_2<T, TUserData>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: public System.Func`1<T> packetConstructor
    [[deprecated("Use field access instead!")]] ::System::Func_1<T>*& dyn_packetConstructor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass29_0_2::dyn_packetConstructor");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "packetConstructor"))->offset;
      return *reinterpret_cast<::System::Func_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action`2<T,TUserData> onReceive
    [[deprecated("Use field access instead!")]] ::System::Action_2<T, TUserData>*& dyn_onReceive() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass29_0_2::dyn_onReceive");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "onReceive"))->offset;
      return *reinterpret_cast<::System::Action_2<T, TUserData>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetPacketProcessor::$$c__DisplayClass29_0_2<T, TUserData>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass29_0_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetPacketProcessor::$$c__DisplayClass29_0_2<T, TUserData>*, creationType>()));
    }
    // System.Void <SubscribeNetSerializable>b__0(LiteNetLib.Utils.NetDataReader reader, System.Object userData)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $SubscribeNetSerializable$b__0(::LiteNetLib::Utils::NetDataReader* reader, ::Il2CppObject* userData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass29_0_2::<SubscribeNetSerializable>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<SubscribeNetSerializable>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(reader), ::il2cpp_utils::ExtractType(userData)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, reader, userData);
    }
  }; // LiteNetLib.Utils.NetPacketProcessor/LiteNetLib.Utils.<>c__DisplayClass29_0`2
  // Could not write size check! Type: LiteNetLib.Utils.NetPacketProcessor/LiteNetLib.Utils.<>c__DisplayClass29_0`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
