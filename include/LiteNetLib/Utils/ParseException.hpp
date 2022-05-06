// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: ParseException
  class ParseException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LiteNetLib::Utils::ParseException);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::ParseException*, "LiteNetLib.Utils", "ParseException");
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.Utils.ParseException
  // [TokenAttribute] Offset: FFFFFFFF
  class ParseException : public ::System::Exception {
    public:
    // public System.Void .ctor(System.String message)
    // Offset: 0x2ADE368
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParseException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::ParseException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParseException*, creationType>(message)));
    }
  }; // LiteNetLib.Utils.ParseException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::Utils::ParseException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
