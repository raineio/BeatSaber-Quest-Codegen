// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.BaseNumberConverter
#include "System/ComponentModel/BaseNumberConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: Int64Converter
  class Int64Converter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::Int64Converter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Int64Converter*, "System.ComponentModel", "Int64Converter");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.Int64Converter
  // [TokenAttribute] Offset: FFFFFFFF
  class Int64Converter : public ::System::ComponentModel::BaseNumberConverter {
    public:
    // override System.Type get_TargetType()
    // Offset: 0x1D9C514
    // Implemented from: System.ComponentModel.BaseNumberConverter
    // Base method: System.Type BaseNumberConverter::get_TargetType()
    ::System::Type* get_TargetType();
    // public System.Void .ctor()
    // Offset: 0x1D9C740
    // Implemented from: System.ComponentModel.BaseNumberConverter
    // Base method: System.Void BaseNumberConverter::.ctor()
    // Base method: System.Void TypeConverter::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Int64Converter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::Int64Converter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Int64Converter*, creationType>()));
    }
    // override System.Object FromString(System.String value, System.Int32 radix)
    // Offset: 0x1D9C584
    // Implemented from: System.ComponentModel.BaseNumberConverter
    // Base method: System.Object BaseNumberConverter::FromString(System.String value, System.Int32 radix)
    ::Il2CppObject* FromString(::StringW value, int radix);
    // override System.Object FromString(System.String value, System.Globalization.NumberFormatInfo formatInfo)
    // Offset: 0x1D9C61C
    // Implemented from: System.ComponentModel.BaseNumberConverter
    // Base method: System.Object BaseNumberConverter::FromString(System.String value, System.Globalization.NumberFormatInfo formatInfo)
    ::Il2CppObject* FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo);
    // override System.String ToString(System.Object value, System.Globalization.NumberFormatInfo formatInfo)
    // Offset: 0x1D9C698
    // Implemented from: System.ComponentModel.BaseNumberConverter
    // Base method: System.String BaseNumberConverter::ToString(System.Object value, System.Globalization.NumberFormatInfo formatInfo)
    ::StringW ToString(::Il2CppObject* value, ::System::Globalization::NumberFormatInfo* formatInfo);
  }; // System.ComponentModel.Int64Converter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::Int64Converter::get_TargetType
// Il2CppName: get_TargetType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::Int64Converter::*)()>(&System::ComponentModel::Int64Converter::get_TargetType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Int64Converter*), "get_TargetType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Int64Converter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::Int64Converter::FromString
// Il2CppName: FromString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::Int64Converter::*)(::StringW, int)>(&System::ComponentModel::Int64Converter::FromString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* radix = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Int64Converter*), "FromString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, radix});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Int64Converter::FromString
// Il2CppName: FromString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::Int64Converter::*)(::StringW, ::System::Globalization::NumberFormatInfo*)>(&System::ComponentModel::Int64Converter::FromString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatInfo = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Int64Converter*), "FromString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, formatInfo});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Int64Converter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::Int64Converter::*)(::Il2CppObject*, ::System::Globalization::NumberFormatInfo*)>(&System::ComponentModel::Int64Converter::ToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* formatInfo = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Int64Converter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, formatInfo});
  }
};
