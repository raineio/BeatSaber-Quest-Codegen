// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.RuntimeParameterInfo
#include "System/Reflection/RuntimeParameterInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Skipping declaration: ParameterInfo because it is already included!
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.MonoParameterInfo
  // [ClassInterfaceAttribute] Offset: D7C594
  // [ComDefaultInterfaceAttribute] Offset: D7C594
  // [ComVisibleAttribute] Offset: D7C594
  class MonoParameterInfo : public System::Reflection::RuntimeParameterInfo {
    public:
    // Creating value type constructor for type: MonoParameterInfo
    MonoParameterInfo() noexcept {}
    // System.Void .ctor(System.Reflection.ParameterInfo pinfo, System.Reflection.MemberInfo member)
    // Offset: 0x1C80C3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoParameterInfo* New_ctor(System::Reflection::ParameterInfo* pinfo, System::Reflection::MemberInfo* member) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::MonoParameterInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoParameterInfo*, creationType>(pinfo, member)));
    }
    // public override System.Object get_DefaultValue()
    // Offset: 0x1C80CD4
    // Implemented from: System.Reflection.ParameterInfo
    // Base method: System.Object ParameterInfo::get_DefaultValue()
    ::Il2CppObject* get_DefaultValue();
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1C80F18
    // Implemented from: System.Reflection.ParameterInfo
    // Base method: System.Object[] ParameterInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1C80F98
    // Implemented from: System.Reflection.ParameterInfo
    // Base method: System.Boolean ParameterInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
  }; // System.Reflection.MonoParameterInfo
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MonoParameterInfo*, "System.Reflection", "MonoParameterInfo");
// Writing MetadataGetter for method: System::Reflection::MonoParameterInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::MonoParameterInfo::get_DefaultValue
// Il2CppName: get_DefaultValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::MonoParameterInfo::*)()>(&System::Reflection::MonoParameterInfo::get_DefaultValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoParameterInfo*), "get_DefaultValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoParameterInfo::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Reflection::MonoParameterInfo::*)(System::Type*, bool)>(&System::Reflection::MonoParameterInfo::GetCustomAttributes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoParameterInfo*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoParameterInfo::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::MonoParameterInfo::*)(System::Type*, bool)>(&System::Reflection::MonoParameterInfo::IsDefined)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoParameterInfo*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
