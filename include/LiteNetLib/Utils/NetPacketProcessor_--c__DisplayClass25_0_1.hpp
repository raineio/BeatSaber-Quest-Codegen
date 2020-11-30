// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.NetPacketProcessor
#include "LiteNetLib/Utils/NetPacketProcessor.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Autogenerated type: LiteNetLib.Utils.NetPacketProcessor/<>c__DisplayClass25_0`1
  template<typename T>
  class NetPacketProcessor::$$c__DisplayClass25_0_1 : public ::Il2CppObject {
    public:
    // public System.Func`1<T> packetConstructor
    // Offset: 0x0
    System::Func_1<T>* packetConstructor;
    // public LiteNetLib.Utils.NetPacketProcessor <>4__this
    // Offset: 0x0
    LiteNetLib::Utils::NetPacketProcessor* $$4__this;
    // public System.Action`1<T> onReceive
    // Offset: 0x0
    System::Action_1<T>* onReceive;
    // System.Void <Subscribe>b__0(LiteNetLib.Utils.NetDataReader reader, System.Object userData)
    // Offset: 0xFFFFFFFF
    void $Subscribe$b__0(LiteNetLib::Utils::NetDataReader* reader, ::Il2CppObject* userData) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib::Utils").WithContext("$$c__DisplayClass25_0_1").WithContext("<Subscribe>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "<Subscribe>b__0", {}, ::il2cpp_utils::ExtractTypes(reader, userData))));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, reader, userData);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static NetPacketProcessor::$$c__DisplayClass25_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib::Utils").WithContext("$$c__DisplayClass25_0_1").WithContext(".ctor");
      return THROW_UNLESS(::il2cpp_utils::New<NetPacketProcessor::$$c__DisplayClass25_0_1<T>*>());
    }
  }; // LiteNetLib.Utils.NetPacketProcessor/<>c__DisplayClass25_0`1
  // Could not write size check! Type: LiteNetLib.Utils.NetPacketProcessor/<>c__DisplayClass25_0`1 is generic!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass25_0_1, "LiteNetLib.Utils", "NetPacketProcessor/<>c__DisplayClass25_0`1");
#pragma pack(pop)