// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: RangeItemHeaderValue
  class RangeItemHeaderValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Net::Http::Headers::RangeItemHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::RangeItemHeaderValue*, "System.Net.Http.Headers", "RangeItemHeaderValue");
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Http.Headers.RangeItemHeaderValue
  // [TokenAttribute] Offset: FFFFFFFF
  class RangeItemHeaderValue : public ::Il2CppObject/*, public System::ICloneable*/ {
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
    // private System.Nullable`1<System.Int64> <From>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    System::Nullable_1<int64_t> From;
    // private System.Nullable`1<System.Int64> <To>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    System::Nullable_1<int64_t> To;
    public:
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Get instance field reference: private System.Nullable`1<System.Int64> <From>k__BackingField
    System::Nullable_1<int64_t>& dyn_$From$k__BackingField();
    // Get instance field reference: private System.Nullable`1<System.Int64> <To>k__BackingField
    System::Nullable_1<int64_t>& dyn_$To$k__BackingField();
    // public System.Nullable`1<System.Int64> get_From()
    // Offset: 0x17C68D8
    System::Nullable_1<int64_t> get_From();
    // private System.Void set_From(System.Nullable`1<System.Int64> value)
    // Offset: 0x17C68E4
    void set_From(System::Nullable_1<int64_t> value);
    // public System.Nullable`1<System.Int64> get_To()
    // Offset: 0x17C68EC
    System::Nullable_1<int64_t> get_To();
    // private System.Void set_To(System.Nullable`1<System.Int64> value)
    // Offset: 0x17C68F8
    void set_To(System::Nullable_1<int64_t> value);
    // public System.Void .ctor(System.Nullable`1<System.Int64> from, System.Nullable`1<System.Int64> to)
    // Offset: 0x17C662C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RangeItemHeaderValue* New_ctor(System::Nullable_1<int64_t> from, System::Nullable_1<int64_t> to) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::RangeItemHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RangeItemHeaderValue*, creationType>(from, to)));
    }
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x17C6900
    ::Il2CppObject* System_ICloneable_Clone();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x17C6908
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x17C69FC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x17C6A84
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Net.Http.Headers.RangeItemHeaderValue
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::RangeItemHeaderValue::get_From
// Il2CppName: get_From
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<int64_t> (System::Net::Http::Headers::RangeItemHeaderValue::*)()>(&System::Net::Http::Headers::RangeItemHeaderValue::get_From)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RangeItemHeaderValue*), "get_From", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RangeItemHeaderValue::set_From
// Il2CppName: set_From
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::RangeItemHeaderValue::*)(System::Nullable_1<int64_t>)>(&System::Net::Http::Headers::RangeItemHeaderValue::set_From)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int64")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RangeItemHeaderValue*), "set_From", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RangeItemHeaderValue::get_To
// Il2CppName: get_To
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<int64_t> (System::Net::Http::Headers::RangeItemHeaderValue::*)()>(&System::Net::Http::Headers::RangeItemHeaderValue::get_To)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RangeItemHeaderValue*), "get_To", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RangeItemHeaderValue::set_To
// Il2CppName: set_To
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::RangeItemHeaderValue::*)(System::Nullable_1<int64_t>)>(&System::Net::Http::Headers::RangeItemHeaderValue::set_To)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int64")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RangeItemHeaderValue*), "set_To", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RangeItemHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::RangeItemHeaderValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::RangeItemHeaderValue::*)()>(&System::Net::Http::Headers::RangeItemHeaderValue::System_ICloneable_Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RangeItemHeaderValue*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RangeItemHeaderValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::RangeItemHeaderValue::*)(::Il2CppObject*)>(&System::Net::Http::Headers::RangeItemHeaderValue::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RangeItemHeaderValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RangeItemHeaderValue::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::RangeItemHeaderValue::*)()>(&System::Net::Http::Headers::RangeItemHeaderValue::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RangeItemHeaderValue*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RangeItemHeaderValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::RangeItemHeaderValue::*)()>(&System::Net::Http::Headers::RangeItemHeaderValue::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RangeItemHeaderValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
