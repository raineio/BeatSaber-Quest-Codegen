// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ArgumentException
#include "System/ArgumentException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: InvalidTypeException
  class InvalidTypeException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LiteNetLib::Utils::InvalidTypeException);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::InvalidTypeException*, "LiteNetLib.Utils", "InvalidTypeException");
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.Utils.InvalidTypeException
  // [TokenAttribute] Offset: FFFFFFFF
  class InvalidTypeException : public ::System::ArgumentException {
    public:
    // public System.Void .ctor(System.String message)
    // Offset: 0x21B3FB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidTypeException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::InvalidTypeException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidTypeException*, creationType>(message)));
    }
  }; // LiteNetLib.Utils.InvalidTypeException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::Utils::InvalidTypeException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
