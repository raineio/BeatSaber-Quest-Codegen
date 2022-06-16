// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.InvalidPacketException
#include "LiteNetLib/InvalidPacketException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: TooBigPacketException
  class TooBigPacketException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LiteNetLib::TooBigPacketException);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::TooBigPacketException*, "LiteNetLib", "TooBigPacketException");
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.TooBigPacketException
  // [TokenAttribute] Offset: FFFFFFFF
  class TooBigPacketException : public ::LiteNetLib::InvalidPacketException {
    public:
    // public System.Void .ctor()
    // Offset: 0x21B3CCC
    // Implemented from: LiteNetLib.InvalidPacketException
    // Base method: System.Void InvalidPacketException::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TooBigPacketException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::TooBigPacketException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TooBigPacketException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x21AFCD4
    // Implemented from: LiteNetLib.InvalidPacketException
    // Base method: System.Void InvalidPacketException::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TooBigPacketException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::TooBigPacketException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TooBigPacketException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x21B3CD4
    // Implemented from: LiteNetLib.InvalidPacketException
    // Base method: System.Void InvalidPacketException::.ctor(System.String message, System.Exception innerException)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TooBigPacketException* New_ctor(::StringW message, ::System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::TooBigPacketException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TooBigPacketException*, creationType>(message, innerException)));
    }
  }; // LiteNetLib.TooBigPacketException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::TooBigPacketException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::TooBigPacketException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::TooBigPacketException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
