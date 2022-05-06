// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IVersionedPacketPool`1
#include "GlobalNamespace/IVersionedPacketPool_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPoolablePacket
  class IPoolablePacket;
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VersionedPacketPool`2<T, T2>
  template<typename T, typename T2>
  class VersionedPacketPool_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::VersionedPacketPool_2, "", "VersionedPacketPool`2");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: VersionedPacketPool`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T, typename T2>
  class VersionedPacketPool_2 : public ::Il2CppObject/*, public ::GlobalNamespace::IVersionedPacketPool_1<T>*/ {
    public:
    public:
    // private readonly PacketPool`1<T> _basePool
    // Size: 0x8
    // Offset: 0x0
    ::GlobalNamespace::PacketPool_1<T>* basePool;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PacketPool_1<T>*) == 0x8);
    // private readonly PacketPool`1<T2> _overridePool
    // Size: 0x8
    // Offset: 0x0
    ::GlobalNamespace::PacketPool_1<T2>* overridePool;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PacketPool_1<T2>*) == 0x8);
    // private readonly System.UInt32 _overrideVersion
    // Size: 0x4
    // Offset: 0x0
    uint overrideVersion;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IVersionedPacketPool_1<T>
    operator ::GlobalNamespace::IVersionedPacketPool_1<T>() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IVersionedPacketPool_1<T>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly PacketPool`1<T> _basePool
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PacketPool_1<T>*& dyn__basePool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VersionedPacketPool_2::dyn__basePool");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_basePool"))->offset;
      return *reinterpret_cast<::GlobalNamespace::PacketPool_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly PacketPool`1<T2> _overridePool
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PacketPool_1<T2>*& dyn__overridePool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VersionedPacketPool_2::dyn__overridePool");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_overridePool"))->offset;
      return *reinterpret_cast<::GlobalNamespace::PacketPool_1<T2>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.UInt32 _overrideVersion
    [[deprecated("Use field access instead!")]] uint& dyn__overrideVersion() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VersionedPacketPool_2::dyn__overrideVersion");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_overrideVersion"))->offset;
      return *reinterpret_cast<uint*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.UInt32 overrideVersion)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VersionedPacketPool_2<T, T2>* New_ctor(uint overrideVersion) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VersionedPacketPool_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VersionedPacketPool_2<T, T2>*, creationType>(overrideVersion)));
    }
    // public T Obtain(System.UInt32 version)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Obtain(uint version) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VersionedPacketPool_2::Obtain");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Obtain", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(version)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, version);
    }
    // public System.Void Release(T packet)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Release(T packet) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VersionedPacketPool_2::Release");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Release", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(packet)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, packet);
    }
    // public System.Void Release(System.Object o)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Release(::Il2CppObject* o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VersionedPacketPool_2::Release");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Release", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(o)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, o);
    }
    // public System.Void Fill()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Fill() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VersionedPacketPool_2::Fill");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Fill", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VersionedPacketPool_2::Clear");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // VersionedPacketPool`2
  // Could not write size check! Type: VersionedPacketPool`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
