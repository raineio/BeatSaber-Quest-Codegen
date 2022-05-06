// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlBaseConverter
#include "System/Xml/Schema/XmlBaseConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Skipping declaration: XmlValueConverter because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: DateTimeOffset
  struct DateTimeOffset;
  // Forward declaring type: Decimal
  struct Decimal;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: IXmlNamespaceResolver
  class IXmlNamespaceResolver;
}
// Forward declaring namespace: System::Xml::XPath
namespace System::Xml::XPath {
  // Forward declaring type: XPathNavigator
  class XPathNavigator;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlAnyConverter
  class XmlAnyConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlAnyConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlAnyConverter*, "System.Xml.Schema", "XmlAnyConverter");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlAnyConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlAnyConverter : public ::System::Xml::Schema::XmlBaseConverter {
    public:
    // Get static field: static public readonly System.Xml.Schema.XmlValueConverter Item
    static ::System::Xml::Schema::XmlValueConverter* _get_Item();
    // Set static field: static public readonly System.Xml.Schema.XmlValueConverter Item
    static void _set_Item(::System::Xml::Schema::XmlValueConverter* value);
    // Get static field: static public readonly System.Xml.Schema.XmlValueConverter AnyAtomic
    static ::System::Xml::Schema::XmlValueConverter* _get_AnyAtomic();
    // Set static field: static public readonly System.Xml.Schema.XmlValueConverter AnyAtomic
    static void _set_AnyAtomic(::System::Xml::Schema::XmlValueConverter* value);
    // private System.Object ChangeTypeWildcardDestination(System.Object value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x1C65F18
    ::Il2CppObject* ChangeTypeWildcardDestination(::Il2CppObject* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);
    // private System.Object ChangeTypeWildcardSource(System.Object value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x1C66F14
    ::Il2CppObject* ChangeTypeWildcardSource(::Il2CppObject* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);
    // private System.Xml.XPath.XPathNavigator ToNavigator(System.Xml.XPath.XPathNavigator nav)
    // Offset: 0x1C6985C
    ::System::Xml::XPath::XPathNavigator* ToNavigator(::System::Xml::XPath::XPathNavigator* nav);
    // protected System.Void .ctor(System.Xml.Schema.XmlTypeCode typeCode)
    // Offset: 0x1C65BF0
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Void XmlBaseConverter::.ctor(System.Xml.Schema.XmlTypeCode typeCode)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlAnyConverter* New_ctor(::System::Xml::Schema::XmlTypeCode typeCode) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlAnyConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlAnyConverter*, creationType>(typeCode)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1C69B48
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Void XmlBaseConverter::.cctor()
    static void _cctor();
    // public override System.Boolean ToBoolean(System.Object value)
    // Offset: 0x1C65D6C
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Boolean XmlBaseConverter::ToBoolean(System.Object value)
    bool ToBoolean(::Il2CppObject* value);
    // public override System.DateTime ToDateTime(System.Object value)
    // Offset: 0x1C66054
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.DateTime XmlBaseConverter::ToDateTime(System.Object value)
    ::System::DateTime ToDateTime(::Il2CppObject* value);
    // public override System.DateTimeOffset ToDateTimeOffset(System.Object value)
    // Offset: 0x1C66200
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.DateTimeOffset XmlBaseConverter::ToDateTimeOffset(System.Object value)
    ::System::DateTimeOffset ToDateTimeOffset(::Il2CppObject* value);
    // public override System.Decimal ToDecimal(System.Object value)
    // Offset: 0x1C663D0
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Decimal XmlBaseConverter::ToDecimal(System.Object value)
    ::System::Decimal ToDecimal(::Il2CppObject* value);
    // public override System.Double ToDouble(System.Object value)
    // Offset: 0x1C665A0
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Double XmlBaseConverter::ToDouble(System.Object value)
    double ToDouble(::Il2CppObject* value);
    // public override System.Int32 ToInt32(System.Object value)
    // Offset: 0x1C6674C
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Int32 XmlBaseConverter::ToInt32(System.Object value)
    int ToInt32(::Il2CppObject* value);
    // public override System.Int64 ToInt64(System.Object value)
    // Offset: 0x1C668F8
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Int64 XmlBaseConverter::ToInt64(System.Object value)
    int64_t ToInt64(::Il2CppObject* value);
    // public override System.Single ToSingle(System.Object value)
    // Offset: 0x1C66AA4
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Single XmlBaseConverter::ToSingle(System.Object value)
    float ToSingle(::Il2CppObject* value);
    // public override System.Object ChangeType(System.Boolean value, System.Type destinationType)
    // Offset: 0x1C66C70
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Object XmlBaseConverter::ChangeType(System.Boolean value, System.Type destinationType)
    ::Il2CppObject* ChangeType(bool value, ::System::Type* destinationType);
    // public override System.Object ChangeType(System.DateTime value, System.Type destinationType)
    // Offset: 0x1C67080
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Object XmlBaseConverter::ChangeType(System.DateTime value, System.Type destinationType)
    ::Il2CppObject* ChangeType(::System::DateTime value, ::System::Type* destinationType);
    // public override System.Object ChangeType(System.Decimal value, System.Type destinationType)
    // Offset: 0x1C6731C
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Object XmlBaseConverter::ChangeType(System.Decimal value, System.Type destinationType)
    ::Il2CppObject* ChangeType(::System::Decimal value, ::System::Type* destinationType);
    // public override System.Object ChangeType(System.Double value, System.Type destinationType)
    // Offset: 0x1C675F4
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Object XmlBaseConverter::ChangeType(System.Double value, System.Type destinationType)
    ::Il2CppObject* ChangeType(double value, ::System::Type* destinationType);
    // public override System.Object ChangeType(System.Int32 value, System.Type destinationType)
    // Offset: 0x1C678A0
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Object XmlBaseConverter::ChangeType(System.Int32 value, System.Type destinationType)
    ::Il2CppObject* ChangeType(int value, ::System::Type* destinationType);
    // public override System.Object ChangeType(System.Int64 value, System.Type destinationType)
    // Offset: 0x1C67B3C
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Object XmlBaseConverter::ChangeType(System.Int64 value, System.Type destinationType)
    ::Il2CppObject* ChangeType(int64_t value, ::System::Type* destinationType);
    // public override System.Object ChangeType(System.String value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x1C67DD8
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Object XmlBaseConverter::ChangeType(System.String value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    ::Il2CppObject* ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);
    // public override System.Object ChangeType(System.Object value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x1C680A0
    // Implemented from: System.Xml.Schema.XmlValueConverter
    // Base method: System.Object XmlValueConverter::ChangeType(System.Object value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    ::Il2CppObject* ChangeType(::Il2CppObject* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);
  }; // System.Xml.Schema.XmlAnyConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlAnyConverter::ChangeTypeWildcardDestination
// Il2CppName: ChangeTypeWildcardDestination
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlAnyConverter::*)(::Il2CppObject*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlAnyConverter::ChangeTypeWildcardDestination)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAnyConverter*), "ChangeTypeWildcardDestination", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType, nsResolver});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAnyConverter::ChangeTypeWildcardSource
// Il2CppName: ChangeTypeWildcardSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlAnyConverter::*)(::Il2CppObject*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlAnyConverter::ChangeTypeWildcardSource)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAnyConverter*), "ChangeTypeWildcardSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType, nsResolver});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAnyConverter::ToNavigator
// Il2CppName: ToNavigator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XPath::XPathNavigator* (System::Xml::Schema::XmlAnyConverter::*)(::System::Xml::XPath::XPathNavigator*)>(&System::Xml::Schema::XmlAnyConverter::ToNavigator)> {
  static const MethodInfo* get() {
    static auto* nav = &::il2cpp_utils::GetClassFromName("System.Xml.XPath", "XPathNavigator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAnyConverter*), "ToNavigator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nav});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAnyConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlAnyConverter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::Schema::XmlAnyConverter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAnyConverter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAnyConverter::ToBoolean
// Il2CppName: ToBoolean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XmlAnyConverter::*)(::Il2CppObject*)>(&System::Xml::Schema::XmlAnyConverter::ToBoolean)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAnyConverter*), "ToBoolean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAnyConverter::ToDateTime
// Il2CppName: ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Xml::Schema::XmlAnyConverter::*)(::Il2CppObject*)>(&System::Xml::Schema::XmlAnyConverter::ToDateTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAnyConverter*), "ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAnyConverter::ToDateTimeOffset
// Il2CppName: ToDateTimeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTimeOffset (System::Xml::Schema::XmlAnyConverter::*)(::Il2CppObject*)>(&System::Xml::Schema::XmlAnyConverter::ToDateTimeOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAnyConverter*), "ToDateTimeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAnyConverter::ToDecimal
// Il2CppName: ToDecimal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (System::Xml::Schema::XmlAnyConverter::*)(::Il2CppObject*)>(&System::Xml::Schema::XmlAnyConverter::ToDecimal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAnyConverter*), "ToDecimal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAnyConverter::ToDouble
// Il2CppName: ToDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::Xml::Schema::XmlAnyConverter::*)(::Il2CppObject*)>(&System::Xml::Schema::XmlAnyConverter::ToDouble)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAnyConverter*), "ToDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAnyConverter::ToInt32
// Il2CppName: ToInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XmlAnyConverter::*)(::Il2CppObject*)>(&System::Xml::Schema::XmlAnyConverter::ToInt32)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAnyConverter*), "ToInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAnyConverter::ToInt64
// Il2CppName: ToInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Xml::Schema::XmlAnyConverter::*)(::Il2CppObject*)>(&System::Xml::Schema::XmlAnyConverter::ToInt64)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAnyConverter*), "ToInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAnyConverter::ToSingle
// Il2CppName: ToSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (System::Xml::Schema::XmlAnyConverter::*)(::Il2CppObject*)>(&System::Xml::Schema::XmlAnyConverter::ToSingle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAnyConverter*), "ToSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAnyConverter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlAnyConverter::*)(bool, ::System::Type*)>(&System::Xml::Schema::XmlAnyConverter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAnyConverter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAnyConverter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlAnyConverter::*)(::System::DateTime, ::System::Type*)>(&System::Xml::Schema::XmlAnyConverter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAnyConverter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAnyConverter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlAnyConverter::*)(::System::Decimal, ::System::Type*)>(&System::Xml::Schema::XmlAnyConverter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAnyConverter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAnyConverter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlAnyConverter::*)(double, ::System::Type*)>(&System::Xml::Schema::XmlAnyConverter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAnyConverter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAnyConverter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlAnyConverter::*)(int, ::System::Type*)>(&System::Xml::Schema::XmlAnyConverter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAnyConverter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAnyConverter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlAnyConverter::*)(int64_t, ::System::Type*)>(&System::Xml::Schema::XmlAnyConverter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAnyConverter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAnyConverter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlAnyConverter::*)(::StringW, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlAnyConverter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAnyConverter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType, nsResolver});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAnyConverter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlAnyConverter::*)(::Il2CppObject*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlAnyConverter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAnyConverter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType, nsResolver});
  }
};
