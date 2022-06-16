// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: DataMemberAttribute
  class DataMemberAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::DataMemberAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::DataMemberAttribute*, "System.Runtime.Serialization", "DataMemberAttribute");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x1E
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.DataMemberAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 108FB84
  class DataMemberAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 order
    // Size: 0x4
    // Offset: 0x18
    int order;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean isRequired
    // Size: 0x1
    // Offset: 0x1C
    bool isRequired;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean emitDefaultValue
    // Size: 0x1
    // Offset: 0x1D
    bool emitDefaultValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: private System.Int32 order
    [[deprecated("Use field access instead!")]] int& dyn_order();
    // Get instance field reference: private System.Boolean isRequired
    [[deprecated("Use field access instead!")]] bool& dyn_isRequired();
    // Get instance field reference: private System.Boolean emitDefaultValue
    [[deprecated("Use field access instead!")]] bool& dyn_emitDefaultValue();
    // public System.String get_Name()
    // Offset: 0x2AE90E8
    ::StringW get_Name();
    // public System.Int32 get_Order()
    // Offset: 0x2AE90F0
    int get_Order();
    // public System.Boolean get_IsRequired()
    // Offset: 0x2AE90F8
    bool get_IsRequired();
    // public System.Boolean get_EmitDefaultValue()
    // Offset: 0x2AE9100
    bool get_EmitDefaultValue();
  }; // System.Runtime.Serialization.DataMemberAttribute
  #pragma pack(pop)
  static check_size<sizeof(DataMemberAttribute), 29 + sizeof(bool)> __System_Runtime_Serialization_DataMemberAttributeSizeCheck;
  static_assert(sizeof(DataMemberAttribute) == 0x1E);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::DataMemberAttribute::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Serialization::DataMemberAttribute::*)()>(&System::Runtime::Serialization::DataMemberAttribute::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::DataMemberAttribute*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::DataMemberAttribute::get_Order
// Il2CppName: get_Order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Serialization::DataMemberAttribute::*)()>(&System::Runtime::Serialization::DataMemberAttribute::get_Order)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::DataMemberAttribute*), "get_Order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::DataMemberAttribute::get_IsRequired
// Il2CppName: get_IsRequired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::DataMemberAttribute::*)()>(&System::Runtime::Serialization::DataMemberAttribute::get_IsRequired)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::DataMemberAttribute*), "get_IsRequired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::DataMemberAttribute::get_EmitDefaultValue
// Il2CppName: get_EmitDefaultValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::DataMemberAttribute::*)()>(&System::Runtime::Serialization::DataMemberAttribute::get_EmitDefaultValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::DataMemberAttribute*), "get_EmitDefaultValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
