// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.NetSerializer
#include "LiteNetLib/Utils/NetSerializer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::NetSerializer::FastCall_1, "LiteNetLib.Utils", "NetSerializer/FastCall`1");
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // WARNING Size may be invalid!
  // Autogenerated type: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCall`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class NetSerializer::FastCall_1 : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean IsArray
    // Size: 0x1
    // Offset: 0x0
    bool IsArray;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return IsArray;
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Boolean IsArray
    [[deprecated("Use field access instead!")]] bool& dyn_IsArray() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::FastCall_1::dyn_IsArray");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "IsArray"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSerializer::FastCall_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::FastCall_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSerializer::FastCall_1<T>*, creationType>()));
    }
    // public System.Void Init(System.Reflection.MethodInfo getMethod, System.Reflection.MethodInfo setMethod, System.Boolean isArray)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Init(::System::Reflection::MethodInfo* getMethod, ::System::Reflection::MethodInfo* setMethod, bool isArray) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::FastCall_1::Init");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Init", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(getMethod), ::il2cpp_utils::ExtractType(setMethod), ::il2cpp_utils::ExtractType(isArray)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, getMethod, setMethod, isArray);
    }
    // public System.Void Read(T inf, LiteNetLib.Utils.NetDataReader r)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::FastCall_1::Read");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Read", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inf), ::il2cpp_utils::ExtractType(r)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, inf, r);
    }
    // public System.Void Write(T inf, LiteNetLib.Utils.NetDataWriter w)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::FastCall_1::Write");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Write", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inf), ::il2cpp_utils::ExtractType(w)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, inf, w);
    }
    // public System.Void ReadArray(T inf, LiteNetLib.Utils.NetDataReader r)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::FastCall_1::ReadArray");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ReadArray", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inf), ::il2cpp_utils::ExtractType(r)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, inf, r);
    }
    // public System.Void WriteArray(T inf, LiteNetLib.Utils.NetDataWriter w)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::FastCall_1::WriteArray");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WriteArray", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inf), ::il2cpp_utils::ExtractType(w)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, inf, w);
    }
  }; // LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCall`1
  // Could not write size check! Type: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCall`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
