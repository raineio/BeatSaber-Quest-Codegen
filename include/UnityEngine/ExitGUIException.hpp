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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ExitGUIException
  class ExitGUIException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ExitGUIException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExitGUIException*, "UnityEngine", "ExitGUIException");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ExitGUIException
  // [TokenAttribute] Offset: FFFFFFFF
  class ExitGUIException : public ::System::Exception {
    public:
    // System.Void .ctor(System.String message)
    // Offset: 0x20A7C34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExitGUIException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ExitGUIException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExitGUIException*, creationType>(message)));
    }
  }; // UnityEngine.ExitGUIException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ExitGUIException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
