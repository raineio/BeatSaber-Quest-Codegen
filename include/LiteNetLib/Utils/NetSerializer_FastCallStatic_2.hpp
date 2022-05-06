// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.NetSerializer
#include "LiteNetLib/Utils/NetSerializer.hpp"
// Including type: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCallSpecific`2
#include "LiteNetLib/Utils/NetSerializer_FastCallSpecific_2.hpp"
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
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::NetSerializer::FastCallStatic_2, "LiteNetLib.Utils", "NetSerializer/FastCallStatic`2");
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // WARNING Size may be invalid!
  // Autogenerated type: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCallStatic`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TClass, typename TProperty>
  class NetSerializer::FastCallStatic_2 : public ::LiteNetLib::Utils::NetSerializer::FastCallSpecific_2<TClass, TProperty> {
    public:
    public:
    // private readonly System.Action`2<LiteNetLib.Utils.NetDataWriter,TProperty> _writer
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* writer;
    // Field size check
    static_assert(sizeof(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>*) == 0x8);
    // private readonly System.Func`2<LiteNetLib.Utils.NetDataReader,TProperty> _reader
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* reader;
    // Field size check
    static_assert(sizeof(::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Action`2<LiteNetLib.Utils.NetDataWriter,TProperty> _writer
    [[deprecated("Use field access instead!")]] ::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>*& dyn__writer() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::FastCallStatic_2::dyn__writer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_writer"))->offset;
      return *reinterpret_cast<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Func`2<LiteNetLib.Utils.NetDataReader,TProperty> _reader
    [[deprecated("Use field access instead!")]] ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>*& dyn__reader() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::FastCallStatic_2::dyn__reader");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_reader"))->offset;
      return *reinterpret_cast<::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Action`2<LiteNetLib.Utils.NetDataWriter,TProperty> write, System.Func`2<LiteNetLib.Utils.NetDataReader,TProperty> read)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSerializer::FastCallStatic_2<TClass, TProperty>* New_ctor(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* write, ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* read) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::FastCallStatic_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSerializer::FastCallStatic_2<TClass, TProperty>*, creationType>(write, read)));
    }
    // public override System.Void Read(TClass inf, LiteNetLib.Utils.NetDataReader r)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCall`1
    // Base method: System.Void FastCall_1::Read(TClass inf, LiteNetLib.Utils.NetDataReader r)
    void Read(TClass inf, ::LiteNetLib::Utils::NetDataReader* r) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::FastCallStatic_2::Read");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Read", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inf), ::il2cpp_utils::ExtractType(r)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, inf, r);
    }
    // public override System.Void Write(TClass inf, LiteNetLib.Utils.NetDataWriter w)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCall`1
    // Base method: System.Void FastCall_1::Write(TClass inf, LiteNetLib.Utils.NetDataWriter w)
    void Write(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::FastCallStatic_2::Write");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Write", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inf), ::il2cpp_utils::ExtractType(w)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, inf, w);
    }
    // public override System.Void ReadArray(TClass inf, LiteNetLib.Utils.NetDataReader r)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCall`1
    // Base method: System.Void FastCall_1::ReadArray(TClass inf, LiteNetLib.Utils.NetDataReader r)
    void ReadArray(TClass inf, ::LiteNetLib::Utils::NetDataReader* r) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::FastCallStatic_2::ReadArray");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ReadArray", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inf), ::il2cpp_utils::ExtractType(r)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, inf, r);
    }
    // public override System.Void WriteArray(TClass inf, LiteNetLib.Utils.NetDataWriter w)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCall`1
    // Base method: System.Void FastCall_1::WriteArray(TClass inf, LiteNetLib.Utils.NetDataWriter w)
    void WriteArray(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::FastCallStatic_2::WriteArray");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WriteArray", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inf), ::il2cpp_utils::ExtractType(w)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, inf, w);
    }
  }; // LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCallStatic`2
  // Could not write size check! Type: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCallStatic`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
