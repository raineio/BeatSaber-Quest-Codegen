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
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: ZenjectException
  class ZenjectException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Zenject::ZenjectException);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenjectException*, "Zenject", "ZenjectException");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ZenjectException
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerStepThroughAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class ZenjectException : public System::Exception {
    public:
    // public System.Void .ctor(System.String message)
    // Offset: 0x219C81C
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenjectException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ZenjectException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenjectException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x219C894
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception innerException)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenjectException* New_ctor(::StringW message, System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ZenjectException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenjectException*, creationType>(message, innerException)));
    }
  }; // Zenject.ZenjectException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ZenjectException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ZenjectException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
