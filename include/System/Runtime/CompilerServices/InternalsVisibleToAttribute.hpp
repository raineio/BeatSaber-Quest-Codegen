// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: InternalsVisibleToAttribute
  class InternalsVisibleToAttribute;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Runtime::CompilerServices::InternalsVisibleToAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::InternalsVisibleToAttribute*, "System.Runtime.CompilerServices", "InternalsVisibleToAttribute");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.InternalsVisibleToAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: EA1C6C
  class InternalsVisibleToAttribute : public System::Attribute {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String _assemblyName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* assemblyName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _allInternalsVisible
    // Size: 0x1
    // Offset: 0x18
    bool allInternalsVisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.String _assemblyName
    ::Il2CppString*& dyn__assemblyName();
    // Get instance field reference: private System.Boolean _allInternalsVisible
    bool& dyn__allInternalsVisible();
    // public System.String get_AssemblyName()
    // Offset: 0x16215F8
    ::Il2CppString* get_AssemblyName();
    // public System.Boolean get_AllInternalsVisible()
    // Offset: 0x1621600
    bool get_AllInternalsVisible();
    // public System.Void set_AllInternalsVisible(System.Boolean value)
    // Offset: 0x1621608
    void set_AllInternalsVisible(bool value);
    // public System.Void .ctor(System.String assemblyName)
    // Offset: 0x16215C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InternalsVisibleToAttribute* New_ctor(::Il2CppString* assemblyName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::InternalsVisibleToAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InternalsVisibleToAttribute*, creationType>(assemblyName)));
    }
  }; // System.Runtime.CompilerServices.InternalsVisibleToAttribute
  #pragma pack(pop)
  static check_size<sizeof(InternalsVisibleToAttribute), 24 + sizeof(bool)> __System_Runtime_CompilerServices_InternalsVisibleToAttributeSizeCheck;
  static_assert(sizeof(InternalsVisibleToAttribute) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::InternalsVisibleToAttribute::get_AssemblyName
// Il2CppName: get_AssemblyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::CompilerServices::InternalsVisibleToAttribute::*)()>(&System::Runtime::CompilerServices::InternalsVisibleToAttribute::get_AssemblyName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::InternalsVisibleToAttribute*), "get_AssemblyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::InternalsVisibleToAttribute::get_AllInternalsVisible
// Il2CppName: get_AllInternalsVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::InternalsVisibleToAttribute::*)()>(&System::Runtime::CompilerServices::InternalsVisibleToAttribute::get_AllInternalsVisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::InternalsVisibleToAttribute*), "get_AllInternalsVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::InternalsVisibleToAttribute::set_AllInternalsVisible
// Il2CppName: set_AllInternalsVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::InternalsVisibleToAttribute::*)(bool)>(&System::Runtime::CompilerServices::InternalsVisibleToAttribute::set_AllInternalsVisible)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::InternalsVisibleToAttribute*), "set_AllInternalsVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::InternalsVisibleToAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
