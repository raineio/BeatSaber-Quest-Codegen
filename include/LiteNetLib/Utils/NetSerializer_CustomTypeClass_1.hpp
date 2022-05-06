// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.NetSerializer
#include "LiteNetLib/Utils/NetSerializer.hpp"
// Including type: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.CustomType
#include "LiteNetLib/Utils/NetSerializer_CustomType.hpp"
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
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::NetSerializer::CustomTypeClass_1, "LiteNetLib.Utils", "NetSerializer/CustomTypeClass`1");
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // WARNING Size may be invalid!
  // Autogenerated type: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.CustomTypeClass`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TProperty>
  class NetSerializer::CustomTypeClass_1 : public ::LiteNetLib::Utils::NetSerializer::CustomType {
    public:
    public:
    // private readonly System.Func`1<TProperty> _constructor
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_1<TProperty>* constructor;
    // Field size check
    static_assert(sizeof(::System::Func_1<TProperty>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Func_1<TProperty>*
    constexpr operator ::System::Func_1<TProperty>*() const noexcept {
      return constructor;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Func`1<TProperty> _constructor
    [[deprecated("Use field access instead!")]] ::System::Func_1<TProperty>*& dyn__constructor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::CustomTypeClass_1::dyn__constructor");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_constructor"))->offset;
      return *reinterpret_cast<::System::Func_1<TProperty>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Func`1<TProperty> constructor)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSerializer::CustomTypeClass_1<TProperty>* New_ctor(::System::Func_1<TProperty>* constructor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::CustomTypeClass_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSerializer::CustomTypeClass_1<TProperty>*, creationType>(constructor)));
    }
    // public override LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCall`1<T> Get()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.CustomType
    // Base method: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCall`1<T> CustomType::Get()
    template<class T>
    ::LiteNetLib::Utils::NetSerializer::FastCall_1<T>* Get() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::CustomTypeClass_1::Get");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Get", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::LiteNetLib::Utils::NetSerializer::FastCall_1<T>*, false>(this, ___generic__method);
    }
  }; // LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.CustomTypeClass`1
  // Could not write size check! Type: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.CustomTypeClass`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
