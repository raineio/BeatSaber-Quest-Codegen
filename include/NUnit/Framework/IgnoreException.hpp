// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.ResultStateException
#include "NUnit/Framework/ResultStateException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ResultState
  class ResultState;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Forward declaring type: IgnoreException
  class IgnoreException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::IgnoreException);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::IgnoreException*, "NUnit.Framework", "IgnoreException");
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.IgnoreException
  // [TokenAttribute] Offset: FFFFFFFF
  class IgnoreException : public ::NUnit::Framework::ResultStateException {
    public:
    // public override NUnit.Framework.Interfaces.ResultState get_ResultState()
    // Offset: 0x1C9E914
    // Implemented from: NUnit.Framework.ResultStateException
    // Base method: NUnit.Framework.Interfaces.ResultState ResultStateException::get_ResultState()
    ::NUnit::Framework::Interfaces::ResultState* get_ResultState();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1C9E90C
    // Implemented from: NUnit.Framework.ResultStateException
    // Base method: System.Void ResultStateException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IgnoreException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::IgnoreException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IgnoreException*, creationType>(info, context)));
    }
  }; // NUnit.Framework.IgnoreException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::IgnoreException::get_ResultState
// Il2CppName: get_ResultState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Interfaces::ResultState* (NUnit::Framework::IgnoreException::*)()>(&NUnit::Framework::IgnoreException::get_ResultState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::IgnoreException*), "get_ResultState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::IgnoreException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
