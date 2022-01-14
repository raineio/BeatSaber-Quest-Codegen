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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: InvalidPacketException
  class InvalidPacketException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(LiteNetLib::InvalidPacketException);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::InvalidPacketException*, "LiteNetLib", "InvalidPacketException");
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.InvalidPacketException
  // [TokenAttribute] Offset: FFFFFFFF
  class InvalidPacketException : public System::ArgumentException {
    public:
    // public System.Void .ctor()
    // Offset: 0x1DC49AC
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidPacketException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::InvalidPacketException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidPacketException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1DC49B4
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidPacketException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::InvalidPacketException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidPacketException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x1DC49BC
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor(System.String message, System.Exception innerException)
    // Base method: System.Void SystemException::.ctor(System.String message, System.Exception innerException)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception innerException)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidPacketException* New_ctor(::StringW message, System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::InvalidPacketException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidPacketException*, creationType>(message, innerException)));
    }
  }; // LiteNetLib.InvalidPacketException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::InvalidPacketException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::InvalidPacketException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::InvalidPacketException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
