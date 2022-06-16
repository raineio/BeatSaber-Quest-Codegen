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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskSchedulerException
  class TaskSchedulerException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Tasks::TaskSchedulerException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskSchedulerException*, "System.Threading.Tasks", "TaskSchedulerException");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.TaskSchedulerException
  // [TokenAttribute] Offset: FFFFFFFF
  class TaskSchedulerException : public ::System::Exception {
    public:
    // public System.Void .ctor(System.Exception innerException)
    // Offset: 0x1D22240
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskSchedulerException* New_ctor(::System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::TaskSchedulerException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskSchedulerException*, creationType>(innerException)));
    }
    // public System.Void .ctor()
    // Offset: 0x1D24A70
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskSchedulerException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::TaskSchedulerException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskSchedulerException*, creationType>()));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1D24AF8
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskSchedulerException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::TaskSchedulerException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskSchedulerException*, creationType>(info, context)));
    }
  }; // System.Threading.Tasks.TaskSchedulerException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::TaskSchedulerException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskSchedulerException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskSchedulerException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
