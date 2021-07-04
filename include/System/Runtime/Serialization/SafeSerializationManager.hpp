// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.IObjectReference
#include "System/Runtime/Serialization/IObjectReference.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: SafeSerializationEventArgs
  class SafeSerializationEventArgs;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
  // Forward declaring type: EventHandler`1<TEventArgs>
  template<typename TEventArgs>
  class EventHandler_1;
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.SafeSerializationManager
  class SafeSerializationManager : public ::Il2CppObject/*, public System::Runtime::Serialization::IObjectReference, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // private System.Collections.Generic.IList`1<System.Object> m_serializedStates
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::IList_1<::Il2CppObject*>* m_serializedStates;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<::Il2CppObject*>*) == 0x8);
    // private System.Runtime.Serialization.SerializationInfo m_savedSerializationInfo
    // Size: 0x8
    // Offset: 0x18
    System::Runtime::Serialization::SerializationInfo* m_savedSerializationInfo;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::SerializationInfo*) == 0x8);
    // private System.Object m_realObject
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* m_realObject;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.RuntimeType m_realType
    // Size: 0x8
    // Offset: 0x28
    System::RuntimeType* m_realType;
    // Field size check
    static_assert(sizeof(System::RuntimeType*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD82170
    // private System.EventHandler`1<System.Runtime.Serialization.SafeSerializationEventArgs> SerializeObjectState
    // Size: 0x8
    // Offset: 0x30
    System::EventHandler_1<System::Runtime::Serialization::SafeSerializationEventArgs*>* SerializeObjectState;
    // Field size check
    static_assert(sizeof(System::EventHandler_1<System::Runtime::Serialization::SafeSerializationEventArgs*>*) == 0x8);
    // Creating value type constructor for type: SafeSerializationManager
    SafeSerializationManager(System::Collections::Generic::IList_1<::Il2CppObject*>* m_serializedStates_ = {}, System::Runtime::Serialization::SerializationInfo* m_savedSerializationInfo_ = {}, ::Il2CppObject* m_realObject_ = {}, System::RuntimeType* m_realType_ = {}, System::EventHandler_1<System::Runtime::Serialization::SafeSerializationEventArgs*>* SerializeObjectState_ = {}) noexcept : m_serializedStates{m_serializedStates_}, m_savedSerializationInfo{m_savedSerializationInfo_}, m_realObject{m_realObject_}, m_realType{m_realType_}, SerializeObjectState{SerializeObjectState_} {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::IObjectReference
    operator System::Runtime::Serialization::IObjectReference() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::IObjectReference*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // static field const value: static private System.String RealTypeSerializationName
    static constexpr const char* RealTypeSerializationName = "CLR_SafeSerializationManager_RealType";
    // Get static field: static private System.String RealTypeSerializationName
    static ::Il2CppString* _get_RealTypeSerializationName();
    // Set static field: static private System.String RealTypeSerializationName
    static void _set_RealTypeSerializationName(::Il2CppString* value);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1698AE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SafeSerializationManager* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::SafeSerializationManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SafeSerializationManager*, creationType>(info, context)));
    }
    // System.Boolean get_IsActive()
    // Offset: 0x1698FAC
    bool get_IsActive();
    // System.Void CompleteSerialization(System.Object serializedObject, System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1698FBC
    void CompleteSerialization(::Il2CppObject* serializedObject, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.Void CompleteDeserialization(System.Object deserializedObject)
    // Offset: 0x1699344
    void CompleteDeserialization(::Il2CppObject* deserializedObject);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1699660
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Object System.Runtime.Serialization.IObjectReference.GetRealObject(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1699708
    ::Il2CppObject* System_Runtime_Serialization_IObjectReference_GetRealObject(System::Runtime::Serialization::StreamingContext context);
    // private System.Void OnDeserialized(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x16999A4
    void OnDeserialized(System::Runtime::Serialization::StreamingContext context);
    // System.Void .ctor()
    // Offset: 0x1698AD8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SafeSerializationManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::SafeSerializationManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SafeSerializationManager*, creationType>()));
    }
  }; // System.Runtime.Serialization.SafeSerializationManager
  #pragma pack(pop)
  static check_size<sizeof(SafeSerializationManager), 48 + sizeof(System::EventHandler_1<System::Runtime::Serialization::SafeSerializationEventArgs*>*)> __System_Runtime_Serialization_SafeSerializationManagerSizeCheck;
  static_assert(sizeof(SafeSerializationManager) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SafeSerializationManager*, "System.Runtime.Serialization", "SafeSerializationManager");
// Writing MetadataGetter for method: System::Runtime::Serialization::SafeSerializationManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::SafeSerializationManager::get_IsActive
// Il2CppName: get_IsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::SafeSerializationManager::*)()>(&System::Runtime::Serialization::SafeSerializationManager::get_IsActive)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SafeSerializationManager*), "get_IsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SafeSerializationManager::CompleteSerialization
// Il2CppName: CompleteSerialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SafeSerializationManager::*)(::Il2CppObject*, System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Serialization::SafeSerializationManager::CompleteSerialization)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SafeSerializationManager*), "CompleteSerialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SafeSerializationManager::CompleteDeserialization
// Il2CppName: CompleteDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SafeSerializationManager::*)(::Il2CppObject*)>(&System::Runtime::Serialization::SafeSerializationManager::CompleteDeserialization)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SafeSerializationManager*), "CompleteDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SafeSerializationManager::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SafeSerializationManager::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Serialization::SafeSerializationManager::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SafeSerializationManager*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SafeSerializationManager::System_Runtime_Serialization_IObjectReference_GetRealObject
// Il2CppName: System.Runtime.Serialization.IObjectReference.GetRealObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::SafeSerializationManager::*)(System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Serialization::SafeSerializationManager::System_Runtime_Serialization_IObjectReference_GetRealObject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SafeSerializationManager*), "System.Runtime.Serialization.IObjectReference.GetRealObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SafeSerializationManager::OnDeserialized
// Il2CppName: OnDeserialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SafeSerializationManager::*)(System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Serialization::SafeSerializationManager::OnDeserialized)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SafeSerializationManager*), "OnDeserialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SafeSerializationManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
