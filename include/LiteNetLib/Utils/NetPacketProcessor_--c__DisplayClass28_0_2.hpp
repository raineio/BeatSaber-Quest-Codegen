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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass28_0_2, "LiteNetLib.Utils", "NetPacketProcessor/<>c__DisplayClass28_0`2");
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // WARNING Size may be invalid!
  // Autogenerated type: LiteNetLib.Utils.NetPacketProcessor/LiteNetLib.Utils.<>c__DisplayClass28_0`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T, typename TUserData>
  class NetPacketProcessor::$$c__DisplayClass28_0_2 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public LiteNetLib.Utils.NetPacketProcessor <>4__this
    // Size: 0x8
    // Offset: 0x0
    LiteNetLib::Utils::NetPacketProcessor* $$4__this;
    // Field size check
    static_assert(sizeof(LiteNetLib::Utils::NetPacketProcessor*) == 0x8);
    // public T reference
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T reference;
    // public System.Action`2<T,TUserData> onReceive
    // Size: 0x8
    // Offset: 0x0
    System::Action_2<T, TUserData>* onReceive;
    // Field size check
    static_assert(sizeof(System::Action_2<T, TUserData>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: public LiteNetLib.Utils.NetPacketProcessor <>4__this
    LiteNetLib::Utils::NetPacketProcessor*& dyn_$$4__this() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass28_0_2::dyn_$$4__this");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
      return *reinterpret_cast<LiteNetLib::Utils::NetPacketProcessor**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public T reference
    T& dyn_reference() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass28_0_2::dyn_reference");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "reference"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action`2<T,TUserData> onReceive
    System::Action_2<T, TUserData>*& dyn_onReceive() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass28_0_2::dyn_onReceive");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "onReceive"))->offset;
      return *reinterpret_cast<System::Action_2<T, TUserData>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Void <SubscribeReusable>b__0(LiteNetLib.Utils.NetDataReader reader, System.Object userData)
    // Offset: 0xFFFFFFFF
    void $SubscribeReusable$b__0(LiteNetLib::Utils::NetDataReader* reader, ::Il2CppObject* userData) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass28_0_2::<SubscribeReusable>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<SubscribeReusable>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(reader), ::il2cpp_utils::ExtractType(userData)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, reader, userData);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetPacketProcessor::$$c__DisplayClass28_0_2<T, TUserData>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass28_0_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetPacketProcessor::$$c__DisplayClass28_0_2<T, TUserData>*, creationType>()));
    }
  }; // LiteNetLib.Utils.NetPacketProcessor/LiteNetLib.Utils.<>c__DisplayClass28_0`2
  // Could not write size check! Type: LiteNetLib.Utils.NetPacketProcessor/LiteNetLib.Utils.<>c__DisplayClass28_0`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
