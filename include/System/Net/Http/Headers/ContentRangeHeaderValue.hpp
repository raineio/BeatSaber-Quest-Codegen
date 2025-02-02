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
  // Forward declaring type: ContentRangeHeaderValue
  class ContentRangeHeaderValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::Headers::ContentRangeHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::ContentRangeHeaderValue*, "System.Net.Http.Headers", "ContentRangeHeaderValue");
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Http.Headers.ContentRangeHeaderValue
  // [TokenAttribute] Offset: FFFFFFFF
  class ContentRangeHeaderValue : public ::Il2CppObject/*, public ::System::ICloneable*/ {
    public:
    public:
    // private System.String unit
    // Size: 0x8
    // Offset: 0x10
    ::StringW unit;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Nullable`1<System.Int64> <From>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::System::Nullable_1<int64_t> From;
    // private System.Nullable`1<System.Int64> <Length>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::System::Nullable_1<int64_t> Length;
    // private System.Nullable`1<System.Int64> <To>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    ::System::Nullable_1<int64_t> To;
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: i_ICloneable
    inline ::System::ICloneable* i_ICloneable() noexcept {
      return reinterpret_cast<::System::ICloneable*>(this);
    }
    // Get instance field reference: private System.String unit
    [[deprecated("Use field access instead!")]] ::StringW& dyn_unit();
    // Get instance field reference: private System.Nullable`1<System.Int64> <From>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int64_t>& dyn_$From$k__BackingField();
    // Get instance field reference: private System.Nullable`1<System.Int64> <Length>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int64_t>& dyn_$Length$k__BackingField();
    // Get instance field reference: private System.Nullable`1<System.Int64> <To>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int64_t>& dyn_$To$k__BackingField();
    // public System.Nullable`1<System.Int64> get_From()
    // Offset: 0x19F07D8
    ::System::Nullable_1<int64_t> get_From();
    // private System.Void set_From(System.Nullable`1<System.Int64> value)
    // Offset: 0x19F07E4
    void set_From(::System::Nullable_1<int64_t> value);
    // public System.Nullable`1<System.Int64> get_Length()
    // Offset: 0x19F07EC
    ::System::Nullable_1<int64_t> get_Length();
    // private System.Void set_Length(System.Nullable`1<System.Int64> value)
    // Offset: 0x19F07F8
    void set_Length(::System::Nullable_1<int64_t> value);
    // public System.Nullable`1<System.Int64> get_To()
    // Offset: 0x19F0800
    ::System::Nullable_1<int64_t> get_To();
    // private System.Void set_To(System.Nullable`1<System.Int64> value)
    // Offset: 0x19F080C
    void set_To(::System::Nullable_1<int64_t> value);
    // public System.String get_Unit()
    // Offset: 0x19F0814
    ::StringW get_Unit();
    // private System.Void .ctor()
    // Offset: 0x19F0780
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContentRangeHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::ContentRangeHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContentRangeHeaderValue*, creationType>()));
    }
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x19F081C
    ::Il2CppObject* System_ICloneable_Clone();
    // static public System.Boolean TryParse(System.String input, out System.Net.Http.Headers.ContentRangeHeaderValue parsedValue)
    // Offset: 0x19F0A64
    static bool TryParse(::StringW input, ByRef<::System::Net::Http::Headers::ContentRangeHeaderValue*> parsedValue);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x19F0824
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x19F0968
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x19F0F88
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Net.Http.Headers.ContentRangeHeaderValue
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentRangeHeaderValue::get_From
// Il2CppName: get_From
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int64_t> (System::Net::Http::Headers::ContentRangeHeaderValue::*)()>(&System::Net::Http::Headers::ContentRangeHeaderValue::get_From)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentRangeHeaderValue*), "get_From", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentRangeHeaderValue::set_From
// Il2CppName: set_From
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::ContentRangeHeaderValue::*)(::System::Nullable_1<int64_t>)>(&System::Net::Http::Headers::ContentRangeHeaderValue::set_From)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int64")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentRangeHeaderValue*), "set_From", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentRangeHeaderValue::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int64_t> (System::Net::Http::Headers::ContentRangeHeaderValue::*)()>(&System::Net::Http::Headers::ContentRangeHeaderValue::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentRangeHeaderValue*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentRangeHeaderValue::set_Length
// Il2CppName: set_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::ContentRangeHeaderValue::*)(::System::Nullable_1<int64_t>)>(&System::Net::Http::Headers::ContentRangeHeaderValue::set_Length)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int64")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentRangeHeaderValue*), "set_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentRangeHeaderValue::get_To
// Il2CppName: get_To
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int64_t> (System::Net::Http::Headers::ContentRangeHeaderValue::*)()>(&System::Net::Http::Headers::ContentRangeHeaderValue::get_To)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentRangeHeaderValue*), "get_To", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentRangeHeaderValue::set_To
// Il2CppName: set_To
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::ContentRangeHeaderValue::*)(::System::Nullable_1<int64_t>)>(&System::Net::Http::Headers::ContentRangeHeaderValue::set_To)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int64")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentRangeHeaderValue*), "set_To", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentRangeHeaderValue::get_Unit
// Il2CppName: get_Unit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::ContentRangeHeaderValue::*)()>(&System::Net::Http::Headers::ContentRangeHeaderValue::get_Unit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentRangeHeaderValue*), "get_Unit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentRangeHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentRangeHeaderValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::ContentRangeHeaderValue::*)()>(&System::Net::Http::Headers::ContentRangeHeaderValue::System_ICloneable_Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentRangeHeaderValue*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentRangeHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::System::Net::Http::Headers::ContentRangeHeaderValue*>)>(&System::Net::Http::Headers::ContentRangeHeaderValue::TryParse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parsedValue = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "ContentRangeHeaderValue")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentRangeHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, parsedValue});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentRangeHeaderValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::ContentRangeHeaderValue::*)(::Il2CppObject*)>(&System::Net::Http::Headers::ContentRangeHeaderValue::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentRangeHeaderValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentRangeHeaderValue::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::ContentRangeHeaderValue::*)()>(&System::Net::Http::Headers::ContentRangeHeaderValue::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentRangeHeaderValue*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentRangeHeaderValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::ContentRangeHeaderValue::*)()>(&System::Net::Http::Headers::ContentRangeHeaderValue::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentRangeHeaderValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
