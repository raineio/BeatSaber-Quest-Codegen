// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RemoteProcedureCall
#include "GlobalNamespace/RemoteProcedureCall.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Vector3Serializable
#include "GlobalNamespace/Vector3Serializable.hpp"
// Including type: Vector4Serializable
#include "GlobalNamespace/Vector4Serializable.hpp"
// Including type: QuaternionSerializable
#include "GlobalNamespace/QuaternionSerializable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Enum
  class Enum;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Skipping declaration: INetSerializable because it is already included!
  // Forward declaring type: INetImmutableSerializable`1<T>
  template<typename T>
  class INetImmutableSerializable_1;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(GlobalNamespace::RemoteProcedureCall::TypeWrapper_1, "", "RemoteProcedureCall/TypeWrapper`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: RemoteProcedureCall/TypeWrapper`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  struct RemoteProcedureCall::TypeWrapper_1/*, public System::ValueType*/ {
    public:
    public:
    // private System.Object _v
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* v;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating value type constructor for type: TypeWrapper_1
    constexpr TypeWrapper_1(::Il2CppObject* v_ = {}) noexcept : v{v_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept {
      return v;
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Object _v
    ::Il2CppObject*& dyn__v() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::dyn__v");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_v"))->offset;
      return *reinterpret_cast<::Il2CppObject**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // private System.Enum get_e()
    // Offset: 0xFFFFFFFF
    System::Enum* get_e() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::get_e");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_e", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Enum*, false>(this, ___internal__method);
    }
    // private System.Void set_e(System.Enum value)
    // Offset: 0xFFFFFFFF
    void set_e(System::Enum* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::set_e");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_e", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // private System.Int32 get_i()
    // Offset: 0xFFFFFFFF
    int get_i() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::get_i");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_i", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // private System.Void set_i(System.Int32 value)
    // Offset: 0xFFFFFFFF
    void set_i(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::set_i");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_i", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // private System.Int64 get_l()
    // Offset: 0xFFFFFFFF
    int64_t get_l() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::get_l");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_l", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int64_t, false>(this, ___internal__method);
    }
    // private System.Void set_l(System.Int64 value)
    // Offset: 0xFFFFFFFF
    void set_l(int64_t value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::set_l");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_l", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // private System.Single get_f()
    // Offset: 0xFFFFFFFF
    float get_f() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::get_f");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_f", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
    }
    // private System.Void set_f(System.Single value)
    // Offset: 0xFFFFFFFF
    void set_f(float value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::set_f");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_f", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // private System.Byte get_c()
    // Offset: 0xFFFFFFFF
    uint8_t get_c() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::get_c");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_c", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<uint8_t, false>(this, ___internal__method);
    }
    // private System.Void set_c(System.Byte value)
    // Offset: 0xFFFFFFFF
    void set_c(uint8_t value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::set_c");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_c", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // private System.Boolean get_b()
    // Offset: 0xFFFFFFFF
    bool get_b() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::get_b");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_b", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // private System.Void set_b(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_b(bool value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::set_b");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_b", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // private System.String get_s()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_s() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::get_s");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_s", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
    }
    // private System.Void set_s(System.String value)
    // Offset: 0xFFFFFFFF
    void set_s(::Il2CppString* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::set_s");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_s", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // private System.Int32[] get_ia()
    // Offset: 0xFFFFFFFF
    ::ArrayW<int> get_ia() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::get_ia");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_ia", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::ArrayW<int>, false>(this, ___internal__method);
    }
    // private System.Void set_ia(System.Int32[] value)
    // Offset: 0xFFFFFFFF
    void set_ia(::ArrayW<int> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::set_ia");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_ia", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // private System.Int64[] get_la()
    // Offset: 0xFFFFFFFF
    ::ArrayW<int64_t> get_la() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::get_la");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_la", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::ArrayW<int64_t>, false>(this, ___internal__method);
    }
    // private System.Void set_la(System.Int64[] value)
    // Offset: 0xFFFFFFFF
    void set_la(::ArrayW<int64_t> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::set_la");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_la", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // private System.Single[] get_fa()
    // Offset: 0xFFFFFFFF
    ::ArrayW<float> get_fa() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::get_fa");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_fa", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::ArrayW<float>, false>(this, ___internal__method);
    }
    // private System.Void set_fa(System.Single[] value)
    // Offset: 0xFFFFFFFF
    void set_fa(::ArrayW<float> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::set_fa");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_fa", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // private System.Byte[] get_ca()
    // Offset: 0xFFFFFFFF
    ::ArrayW<uint8_t> get_ca() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::get_ca");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_ca", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::ArrayW<uint8_t>, false>(this, ___internal__method);
    }
    // private System.Void set_ca(System.Byte[] value)
    // Offset: 0xFFFFFFFF
    void set_ca(::ArrayW<uint8_t> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::set_ca");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_ca", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // private System.Boolean[] get_ba()
    // Offset: 0xFFFFFFFF
    ::ArrayW<bool> get_ba() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::get_ba");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_ba", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::ArrayW<bool>, false>(this, ___internal__method);
    }
    // private System.Void set_ba(System.Boolean[] value)
    // Offset: 0xFFFFFFFF
    void set_ba(::ArrayW<bool> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::set_ba");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_ba", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // private System.String[] get_sa()
    // Offset: 0xFFFFFFFF
    ::ArrayW<::Il2CppString*> get_sa() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::get_sa");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_sa", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::ArrayW<::Il2CppString*>, false>(this, ___internal__method);
    }
    // private System.Void set_sa(System.String[] value)
    // Offset: 0xFFFFFFFF
    void set_sa(::ArrayW<::Il2CppString*> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::set_sa");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_sa", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // private Vector3Serializable get_v3()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::Vector3Serializable get_v3() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::get_v3");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_v3", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::Vector3Serializable, false>(this, ___internal__method);
    }
    // private System.Void set_v3(Vector3Serializable value)
    // Offset: 0xFFFFFFFF
    void set_v3(GlobalNamespace::Vector3Serializable value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::set_v3");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_v3", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // private Vector4Serializable get_v4()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::Vector4Serializable get_v4() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::get_v4");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_v4", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::Vector4Serializable, false>(this, ___internal__method);
    }
    // private System.Void set_v4(Vector4Serializable value)
    // Offset: 0xFFFFFFFF
    void set_v4(GlobalNamespace::Vector4Serializable value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::set_v4");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_v4", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // private QuaternionSerializable get_q()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::QuaternionSerializable get_q() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::get_q");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_q", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::QuaternionSerializable, false>(this, ___internal__method);
    }
    // private System.Void set_q(QuaternionSerializable value)
    // Offset: 0xFFFFFFFF
    void set_q(GlobalNamespace::QuaternionSerializable value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::set_q");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_q", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // private LiteNetLib.Utils.INetSerializable get_ns()
    // Offset: 0xFFFFFFFF
    LiteNetLib::Utils::INetSerializable* get_ns() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::get_ns");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_ns", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<LiteNetLib::Utils::INetSerializable*, false>(this, ___internal__method);
    }
    // private System.Void set_ns(LiteNetLib.Utils.INetSerializable value)
    // Offset: 0xFFFFFFFF
    void set_ns(LiteNetLib::Utils::INetSerializable* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::set_ns");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_ns", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // private LiteNetLib.Utils.INetImmutableSerializable`1<T> get_ins()
    // Offset: 0xFFFFFFFF
    LiteNetLib::Utils::INetImmutableSerializable_1<T>* get_ins() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::get_ins");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_ins", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<LiteNetLib::Utils::INetImmutableSerializable_1<T>*, false>(this, ___internal__method);
    }
    // private System.Void set_ins(LiteNetLib.Utils.INetImmutableSerializable`1<T> value)
    // Offset: 0xFFFFFFFF
    void set_ins(LiteNetLib::Utils::INetImmutableSerializable_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::set_ins");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_ins", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor(T v)
    // Offset: 0xFFFFFFFF
    TypeWrapper_1(T v) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(v)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, v);
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xFFFFFFFF
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::Serialize");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Serialize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(writer)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, writer);
    }
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xFFFFFFFF
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::TypeWrapper_1::Deserialize");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Deserialize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(reader)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, reader);
    }
  }; // RemoteProcedureCall/TypeWrapper`1
  // Could not write size check! Type: RemoteProcedureCall/TypeWrapper`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
