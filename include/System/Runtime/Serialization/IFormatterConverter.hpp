// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: IFormatterConverter
  class IFormatterConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Runtime::Serialization::IFormatterConverter);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::IFormatterConverter*, "System.Runtime.Serialization", "IFormatterConverter");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.IFormatterConverter
  // [TokenAttribute] Offset: FFFFFFFF
  // [CLSCompliantAttribute] Offset: EA0CE8
  // [ComVisibleAttribute] Offset: EA0CE8
  class IFormatterConverter {
    public:
    // public System.Object Convert(System.Object value, System.Type type)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* Convert(::Il2CppObject* value, System::Type* type);
    // public System.Boolean ToBoolean(System.Object value)
    // Offset: 0xFFFFFFFF
    bool ToBoolean(::Il2CppObject* value);
    // public System.Int32 ToInt32(System.Object value)
    // Offset: 0xFFFFFFFF
    int ToInt32(::Il2CppObject* value);
    // public System.Int64 ToInt64(System.Object value)
    // Offset: 0xFFFFFFFF
    int64_t ToInt64(::Il2CppObject* value);
    // public System.Single ToSingle(System.Object value)
    // Offset: 0xFFFFFFFF
    float ToSingle(::Il2CppObject* value);
    // public System.String ToString(System.Object value)
    // Offset: 0xFFFFFFFF
    ::StringW ToString(::Il2CppObject* value);
  }; // System.Runtime.Serialization.IFormatterConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::IFormatterConverter::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::IFormatterConverter::*)(::Il2CppObject*, System::Type*)>(&System::Runtime::Serialization::IFormatterConverter::Convert)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::IFormatterConverter*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, type});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::IFormatterConverter::ToBoolean
// Il2CppName: ToBoolean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::IFormatterConverter::*)(::Il2CppObject*)>(&System::Runtime::Serialization::IFormatterConverter::ToBoolean)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::IFormatterConverter*), "ToBoolean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::IFormatterConverter::ToInt32
// Il2CppName: ToInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Serialization::IFormatterConverter::*)(::Il2CppObject*)>(&System::Runtime::Serialization::IFormatterConverter::ToInt32)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::IFormatterConverter*), "ToInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::IFormatterConverter::ToInt64
// Il2CppName: ToInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Runtime::Serialization::IFormatterConverter::*)(::Il2CppObject*)>(&System::Runtime::Serialization::IFormatterConverter::ToInt64)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::IFormatterConverter*), "ToInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::IFormatterConverter::ToSingle
// Il2CppName: ToSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (System::Runtime::Serialization::IFormatterConverter::*)(::Il2CppObject*)>(&System::Runtime::Serialization::IFormatterConverter::ToSingle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::IFormatterConverter*), "ToSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::IFormatterConverter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Serialization::IFormatterConverter::*)(::Il2CppObject*)>(&System::Runtime::Serialization::IFormatterConverter::ToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::IFormatterConverter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
