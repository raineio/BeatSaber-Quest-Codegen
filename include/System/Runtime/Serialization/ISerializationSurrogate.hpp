// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
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
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.ISerializationSurrogate
  // [ComVisibleAttribute] Offset: D7DD10
  class ISerializationSurrogate {
    public:
    // Creating value type constructor for type: ISerializationSurrogate
    ISerializationSurrogate() noexcept {}
    // public System.Void GetObjectData(System.Object obj, System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xFFFFFFFF
    void GetObjectData(::Il2CppObject* obj, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Object SetObjectData(System.Object obj, System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.ISurrogateSelector selector)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* SetObjectData(::Il2CppObject* obj, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::ISurrogateSelector* selector);
  }; // System.Runtime.Serialization.ISerializationSurrogate
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::ISerializationSurrogate*, "System.Runtime.Serialization", "ISerializationSurrogate");
// Writing MetadataGetter for method: System::Runtime::Serialization::ISerializationSurrogate::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ISerializationSurrogate::*)(::Il2CppObject*, System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Serialization::ISerializationSurrogate::GetObjectData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ISerializationSurrogate*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ISerializationSurrogate::SetObjectData
// Il2CppName: SetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::ISerializationSurrogate::*)(::Il2CppObject*, System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext, System::Runtime::Serialization::ISurrogateSelector*)>(&System::Runtime::Serialization::ISerializationSurrogate::SetObjectData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ISerializationSurrogate*), "SetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::ISurrogateSelector*>()});
  }
};
