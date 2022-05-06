// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.ISerializationSurrogate
#include "System/Runtime/Serialization/ISerializationSurrogate.hpp"
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
  // Forward declaring type: StreamingContext
  struct StreamingContext;
  // Forward declaring type: ISurrogateSelector
  class ISurrogateSelector;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_Vector2SerializationSurrogate
  class HEU_Vector2SerializationSurrogate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Vector2SerializationSurrogate);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Vector2SerializationSurrogate*, "HoudiniEngineUnity", "HEU_Vector2SerializationSurrogate");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_Vector2SerializationSurrogate
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_Vector2SerializationSurrogate : public ::Il2CppObject/*, public ::System::Runtime::Serialization::ISerializationSurrogate*/ {
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializationSurrogate
    operator ::System::Runtime::Serialization::ISerializationSurrogate() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializationSurrogate*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x1A0EB84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_Vector2SerializationSurrogate* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_Vector2SerializationSurrogate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_Vector2SerializationSurrogate*, creationType>()));
    }
    // private System.Void System.Runtime.Serialization.ISerializationSurrogate.GetObjectData(System.Object obj, System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1A0E95C
    void System_Runtime_Serialization_ISerializationSurrogate_GetObjectData(::Il2CppObject* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // private System.Object System.Runtime.Serialization.ISerializationSurrogate.SetObjectData(System.Object obj, System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.ISurrogateSelector selector)
    // Offset: 0x1A0EA1C
    ::Il2CppObject* System_Runtime_Serialization_ISerializationSurrogate_SetObjectData(::Il2CppObject* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ISurrogateSelector* selector);
  }; // HoudiniEngineUnity.HEU_Vector2SerializationSurrogate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Vector2SerializationSurrogate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Vector2SerializationSurrogate::System_Runtime_Serialization_ISerializationSurrogate_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializationSurrogate.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Vector2SerializationSurrogate::*)(::Il2CppObject*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&HoudiniEngineUnity::HEU_Vector2SerializationSurrogate::System_Runtime_Serialization_ISerializationSurrogate_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Vector2SerializationSurrogate*), "System.Runtime.Serialization.ISerializationSurrogate.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, info, context});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Vector2SerializationSurrogate::System_Runtime_Serialization_ISerializationSurrogate_SetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializationSurrogate.SetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (HoudiniEngineUnity::HEU_Vector2SerializationSurrogate::*)(::Il2CppObject*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ISurrogateSelector*)>(&HoudiniEngineUnity::HEU_Vector2SerializationSurrogate::System_Runtime_Serialization_ISerializationSurrogate_SetObjectData)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* selector = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ISurrogateSelector")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Vector2SerializationSurrogate*), "System.Runtime.Serialization.ISerializationSurrogate.SetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, info, context, selector});
  }
};
