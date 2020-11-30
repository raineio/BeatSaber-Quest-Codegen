// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.NetSerializer
#include "LiteNetLib/Utils/NetSerializer.hpp"
// Including type: LiteNetLib.Utils.NetSerializer/FastCallSpecificAuto`2
#include "LiteNetLib/Utils/NetSerializer_FastCallSpecificAuto_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Autogenerated type: LiteNetLib.Utils.NetSerializer/CharSerializer`1
  template<typename T>
  class NetSerializer::CharSerializer_1 : public LiteNetLib::Utils::NetSerializer::FastCallSpecificAuto_2<T, ::Il2CppChar> {
    public:
    // protected System.Void ElementWrite(LiteNetLib.Utils.NetDataWriter w, ref System.Char prop)
    // Offset: 0xFFFFFFFF
    void ElementWrite(LiteNetLib::Utils::NetDataWriter* w, ::Il2CppChar& prop) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib::Utils").WithContext("CharSerializer_1").WithContext("ElementWrite");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ElementWrite", {}, ::il2cpp_utils::ExtractTypes(w, prop)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, w, prop);
    }
    // protected System.Void ElementRead(LiteNetLib.Utils.NetDataReader r, out System.Char prop)
    // Offset: 0xFFFFFFFF
    void ElementRead(LiteNetLib::Utils::NetDataReader* r, ::Il2CppChar& prop) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib::Utils").WithContext("CharSerializer_1").WithContext("ElementRead");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ElementRead", {}, ::il2cpp_utils::ExtractTypes(r, prop)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, r, prop);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/FastCallSpecificAuto`2
    // Base method: System.Void FastCallSpecificAuto_2::.ctor()
    // Base method: System.Void FastCallSpecific_2::.ctor()
    // Base method: System.Void FastCall_1::.ctor()
    // Base method: System.Void Object::.ctor()
    static NetSerializer::CharSerializer_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib::Utils").WithContext("CharSerializer_1").WithContext(".ctor");
      return THROW_UNLESS(::il2cpp_utils::New<NetSerializer::CharSerializer_1<T>*>());
    }
  }; // LiteNetLib.Utils.NetSerializer/CharSerializer`1
  // Could not write size check! Type: LiteNetLib.Utils.NetSerializer/CharSerializer`1 is generic!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::NetSerializer::CharSerializer_1, "LiteNetLib.Utils", "NetSerializer/CharSerializer`1");
#pragma pack(pop)