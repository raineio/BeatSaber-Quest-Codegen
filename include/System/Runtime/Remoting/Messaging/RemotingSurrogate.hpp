// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.ISerializationSurrogate
#include "System/Runtime/Serialization/ISerializationSurrogate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
  // Forward declaring type: ISurrogateSelector
  class ISurrogateSelector;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.RemotingSurrogate
  class RemotingSurrogate : public ::Il2CppObject/*, public System::Runtime::Serialization::ISerializationSurrogate*/ {
    public:
    // Creating value type constructor for type: RemotingSurrogate
    RemotingSurrogate() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializationSurrogate
    operator System::Runtime::Serialization::ISerializationSurrogate() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializationSurrogate*>(this);
    }
    // public System.Void GetObjectData(System.Object obj, System.Runtime.Serialization.SerializationInfo si, System.Runtime.Serialization.StreamingContext sc)
    // Offset: 0x1A43A50
    void GetObjectData(::Il2CppObject* obj, System::Runtime::Serialization::SerializationInfo* si, System::Runtime::Serialization::StreamingContext sc);
    // public System.Object SetObjectData(System.Object obj, System.Runtime.Serialization.SerializationInfo si, System.Runtime.Serialization.StreamingContext sc, System.Runtime.Serialization.ISurrogateSelector selector)
    // Offset: 0x1A43C5C
    ::Il2CppObject* SetObjectData(::Il2CppObject* obj, System::Runtime::Serialization::SerializationInfo* si, System::Runtime::Serialization::StreamingContext sc, System::Runtime::Serialization::ISurrogateSelector* selector);
    // public System.Void .ctor()
    // Offset: 0x1A43CBC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemotingSurrogate* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::RemotingSurrogate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemotingSurrogate*, creationType>()));
    }
  }; // System.Runtime.Remoting.Messaging.RemotingSurrogate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::RemotingSurrogate*, "System.Runtime.Remoting.Messaging", "RemotingSurrogate");
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::RemotingSurrogate::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::RemotingSurrogate::*)(::Il2CppObject*, System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Remoting::Messaging::RemotingSurrogate::GetObjectData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::RemotingSurrogate*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::RemotingSurrogate::SetObjectData
// Il2CppName: SetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::RemotingSurrogate::*)(::Il2CppObject*, System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext, System::Runtime::Serialization::ISurrogateSelector*)>(&System::Runtime::Remoting::Messaging::RemotingSurrogate::SetObjectData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::RemotingSurrogate*), "SetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::ISurrogateSelector*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::RemotingSurrogate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
