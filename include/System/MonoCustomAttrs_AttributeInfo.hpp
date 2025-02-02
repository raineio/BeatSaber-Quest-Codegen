// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MonoCustomAttrs
#include "System/MonoCustomAttrs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AttributeUsageAttribute
  class AttributeUsageAttribute;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::MonoCustomAttrs::AttributeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoCustomAttrs::AttributeInfo*, "System", "MonoCustomAttrs/AttributeInfo");
// Type namespace: System
namespace System {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.MonoCustomAttrs/System.AttributeInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoCustomAttrs::AttributeInfo : public ::Il2CppObject {
    public:
    public:
    // private System.AttributeUsageAttribute _usage
    // Size: 0x8
    // Offset: 0x10
    ::System::AttributeUsageAttribute* usage;
    // Field size check
    static_assert(sizeof(::System::AttributeUsageAttribute*) == 0x8);
    // private System.Int32 _inheritanceLevel
    // Size: 0x4
    // Offset: 0x18
    int inheritanceLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.AttributeUsageAttribute _usage
    [[deprecated("Use field access instead!")]] ::System::AttributeUsageAttribute*& dyn__usage();
    // Get instance field reference: private System.Int32 _inheritanceLevel
    [[deprecated("Use field access instead!")]] int& dyn__inheritanceLevel();
    // public System.AttributeUsageAttribute get_Usage()
    // Offset: 0x1C4EE64
    ::System::AttributeUsageAttribute* get_Usage();
    // public System.Int32 get_InheritanceLevel()
    // Offset: 0x1C4EE6C
    int get_InheritanceLevel();
    // public System.Void .ctor(System.AttributeUsageAttribute usage, System.Int32 inheritanceLevel)
    // Offset: 0x1C4E1E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoCustomAttrs::AttributeInfo* New_ctor(::System::AttributeUsageAttribute* usage, int inheritanceLevel) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::MonoCustomAttrs::AttributeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoCustomAttrs::AttributeInfo*, creationType>(usage, inheritanceLevel)));
    }
  }; // System.MonoCustomAttrs/System.AttributeInfo
  #pragma pack(pop)
  static check_size<sizeof(MonoCustomAttrs::AttributeInfo), 24 + sizeof(int)> __System_MonoCustomAttrs_AttributeInfoSizeCheck;
  static_assert(sizeof(MonoCustomAttrs::AttributeInfo) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::MonoCustomAttrs::AttributeInfo::get_Usage
// Il2CppName: get_Usage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::AttributeUsageAttribute* (System::MonoCustomAttrs::AttributeInfo::*)()>(&System::MonoCustomAttrs::AttributeInfo::get_Usage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::MonoCustomAttrs::AttributeInfo*), "get_Usage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::MonoCustomAttrs::AttributeInfo::get_InheritanceLevel
// Il2CppName: get_InheritanceLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::MonoCustomAttrs::AttributeInfo::*)()>(&System::MonoCustomAttrs::AttributeInfo::get_InheritanceLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::MonoCustomAttrs::AttributeInfo*), "get_InheritanceLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::MonoCustomAttrs::AttributeInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
