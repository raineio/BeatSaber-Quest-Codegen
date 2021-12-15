// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: __Filters
  class __Filters;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::__Filters);
DEFINE_IL2CPP_ARG_TYPE(System::__Filters*, "System", "__Filters");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.__Filters
  // [TokenAttribute] Offset: FFFFFFFF
  class __Filters : public ::Il2CppObject {
    public:
    // Get static field: static readonly System.__Filters Instance
    static System::__Filters* _get_Instance();
    // Set static field: static readonly System.__Filters Instance
    static void _set_Instance(System::__Filters* value);
    // static private System.Void .cctor()
    // Offset: 0x25D8D38
    static void _cctor();
    // System.Boolean FilterAttribute(System.Reflection.MemberInfo m, System.Object filterCriteria)
    // Offset: 0x25D8698
    bool FilterAttribute(System::Reflection::MemberInfo* m, ::Il2CppObject* filterCriteria);
    // System.Boolean FilterName(System.Reflection.MemberInfo m, System.Object filterCriteria)
    // Offset: 0x25D89F0
    bool FilterName(System::Reflection::MemberInfo* m, ::Il2CppObject* filterCriteria);
    // System.Boolean FilterIgnoreCase(System.Reflection.MemberInfo m, System.Object filterCriteria)
    // Offset: 0x25D8B88
    bool FilterIgnoreCase(System::Reflection::MemberInfo* m, ::Il2CppObject* filterCriteria);
    // public System.Void .ctor()
    // Offset: 0x25D8D30
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static __Filters* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::__Filters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<__Filters*, creationType>()));
    }
  }; // System.__Filters
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::__Filters::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::__Filters::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::__Filters*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::__Filters::FilterAttribute
// Il2CppName: FilterAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::__Filters::*)(System::Reflection::MemberInfo*, ::Il2CppObject*)>(&System::__Filters::FilterAttribute)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    static auto* filterCriteria = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::__Filters*), "FilterAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, filterCriteria});
  }
};
// Writing MetadataGetter for method: System::__Filters::FilterName
// Il2CppName: FilterName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::__Filters::*)(System::Reflection::MemberInfo*, ::Il2CppObject*)>(&System::__Filters::FilterName)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    static auto* filterCriteria = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::__Filters*), "FilterName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, filterCriteria});
  }
};
// Writing MetadataGetter for method: System::__Filters::FilterIgnoreCase
// Il2CppName: FilterIgnoreCase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::__Filters::*)(System::Reflection::MemberInfo*, ::Il2CppObject*)>(&System::__Filters::FilterIgnoreCase)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    static auto* filterCriteria = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::__Filters*), "FilterIgnoreCase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, filterCriteria});
  }
};
// Writing MetadataGetter for method: System::__Filters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
