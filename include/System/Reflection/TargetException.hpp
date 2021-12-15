// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ApplicationException
#include "System/ApplicationException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: TargetException
  class TargetException;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Reflection::TargetException);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::TargetException*, "System.Reflection", "TargetException");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.TargetException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E9F034
  class TargetException : public System::ApplicationException {
    public:
    // public System.Void .ctor()
    // Offset: 0x161854C
    // Implemented from: System.ApplicationException
    // Base method: System.Void ApplicationException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TargetException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::TargetException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TargetException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1618580
    // Implemented from: System.ApplicationException
    // Base method: System.Void ApplicationException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TargetException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::TargetException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TargetException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x16185B4
    // Implemented from: System.ApplicationException
    // Base method: System.Void ApplicationException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TargetException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::TargetException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TargetException*, creationType>(info, context)));
    }
  }; // System.Reflection.TargetException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::TargetException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::TargetException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::TargetException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
