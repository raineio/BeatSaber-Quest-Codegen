// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.RuntimeFieldInfo
#include "System/Reflection/RuntimeFieldInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TypedReference
  struct TypedReference;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.RtFieldInfo
  class RtFieldInfo : public System::Reflection::RuntimeFieldInfo {
    public:
    // Creating value type constructor for type: RtFieldInfo
    RtFieldInfo() noexcept {}
    // System.Object UnsafeGetValue(System.Object obj)
    // Offset: 0x1C83848
    ::Il2CppObject* UnsafeGetValue(::Il2CppObject* obj);
    // System.Void CheckConsistency(System.Object target)
    // Offset: 0x1C8384C
    void CheckConsistency(::Il2CppObject* target);
    // System.Void UnsafeSetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Globalization.CultureInfo culture)
    // Offset: 0x1C83A04
    void UnsafeSetValue(::Il2CppObject* obj, ::Il2CppObject* value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, System::Globalization::CultureInfo* culture);
    // public override System.Void SetValueDirect(System.TypedReference obj, System.Object value)
    // Offset: 0x1C83A6C
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Void FieldInfo::SetValueDirect(System.TypedReference obj, System.Object value)
    void SetValueDirect(System::TypedReference obj, ::Il2CppObject* value);
    // protected System.Void .ctor()
    // Offset: 0x1C7FD50
    // Implemented from: System.Reflection.RuntimeFieldInfo
    // Base method: System.Void RuntimeFieldInfo::.ctor()
    // Base method: System.Void FieldInfo::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RtFieldInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::RtFieldInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RtFieldInfo*, creationType>()));
    }
  }; // System.Reflection.RtFieldInfo
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::RtFieldInfo*, "System.Reflection", "RtFieldInfo");
// Writing MetadataGetter for method: System::Reflection::RtFieldInfo::UnsafeGetValue
// Il2CppName: UnsafeGetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::RtFieldInfo::*)(::Il2CppObject*)>(&System::Reflection::RtFieldInfo::UnsafeGetValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RtFieldInfo*), "UnsafeGetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Reflection::RtFieldInfo::CheckConsistency
// Il2CppName: CheckConsistency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::RtFieldInfo::*)(::Il2CppObject*)>(&System::Reflection::RtFieldInfo::CheckConsistency)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RtFieldInfo*), "CheckConsistency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Reflection::RtFieldInfo::UnsafeSetValue
// Il2CppName: UnsafeSetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::RtFieldInfo::*)(::Il2CppObject*, ::Il2CppObject*, System::Reflection::BindingFlags, System::Reflection::Binder*, System::Globalization::CultureInfo*)>(&System::Reflection::RtFieldInfo::UnsafeSetValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RtFieldInfo*), "UnsafeSetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Reflection::BindingFlags>(), ::il2cpp_utils::ExtractIndependentType<System::Reflection::Binder*>(), ::il2cpp_utils::ExtractIndependentType<System::Globalization::CultureInfo*>()});
  }
};
// Writing MetadataGetter for method: System::Reflection::RtFieldInfo::SetValueDirect
// Il2CppName: SetValueDirect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::RtFieldInfo::*)(System::TypedReference, ::Il2CppObject*)>(&System::Reflection::RtFieldInfo::SetValueDirect)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RtFieldInfo*), "SetValueDirect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::TypedReference>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Reflection::RtFieldInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
