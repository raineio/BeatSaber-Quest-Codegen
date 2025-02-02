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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: IXmlNamespaceResolver
  class IXmlNamespaceResolver;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlQualifiedName);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlQualifiedName*, "System.Xml", "XmlQualifiedName");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlQualifiedName
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlQualifiedName : public ::Il2CppObject {
    public:
    // Nested type: ::System::Xml::XmlQualifiedName::HashCodeOfStringDelegate
    class HashCodeOfStringDelegate;
    public:
    // private System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String ns
    // Size: 0x8
    // Offset: 0x18
    ::StringW ns;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 hash
    // Size: 0x4
    // Offset: 0x20
    int hash;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static private System.Xml.XmlQualifiedName/System.Xml.HashCodeOfStringDelegate hashCodeDelegate
    static ::System::Xml::XmlQualifiedName::HashCodeOfStringDelegate* _get_hashCodeDelegate();
    // Set static field: static private System.Xml.XmlQualifiedName/System.Xml.HashCodeOfStringDelegate hashCodeDelegate
    static void _set_hashCodeDelegate(::System::Xml::XmlQualifiedName::HashCodeOfStringDelegate* value);
    // Get static field: static public readonly System.Xml.XmlQualifiedName Empty
    static ::System::Xml::XmlQualifiedName* _get_Empty();
    // Set static field: static public readonly System.Xml.XmlQualifiedName Empty
    static void _set_Empty(::System::Xml::XmlQualifiedName* value);
    // Get instance field reference: private System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: private System.String ns
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ns();
    // Get instance field reference: private System.Int32 hash
    [[deprecated("Use field access instead!")]] int& dyn_hash();
    // public System.String get_Namespace()
    // Offset: 0x163BBF0
    ::StringW get_Namespace();
    // public System.String get_Name()
    // Offset: 0x163BBF8
    ::StringW get_Name();
    // public System.Boolean get_IsEmpty()
    // Offset: 0x1635744
    bool get_IsEmpty();
    // public System.Void .ctor()
    // Offset: 0x163BA90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlQualifiedName* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlQualifiedName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlQualifiedName*, creationType>()));
    }
    // public System.Void .ctor(System.String name)
    // Offset: 0x163BB88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlQualifiedName* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlQualifiedName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlQualifiedName*, creationType>(name)));
    }
    // public System.Void .ctor(System.String name, System.String ns)
    // Offset: 0x163BAEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlQualifiedName* New_ctor(::StringW name, ::StringW ns) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlQualifiedName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlQualifiedName*, creationType>(name, ns)));
    }
    // static private System.Void .cctor()
    // Offset: 0x163C6A0
    static void _cctor();
    // static private System.Xml.XmlQualifiedName/System.Xml.HashCodeOfStringDelegate GetHashCodeDelegate()
    // Offset: 0x163BCE0
    static ::System::Xml::XmlQualifiedName::HashCodeOfStringDelegate* GetHashCodeDelegate();
    // static private System.Boolean IsRandomizedHashingDisabled()
    // Offset: 0x163C4C8
    static bool IsRandomizedHashingDisabled();
    // static private System.Int32 GetHashCodeOfString(System.String s, System.Int32 length, System.Int64 additionalEntropy)
    // Offset: 0x163C4E0
    static int GetHashCodeOfString(::StringW s, int length, int64_t additionalEntropy);
    // System.Void Init(System.String name, System.String ns)
    // Offset: 0x163C4FC
    void Init(::StringW name, ::StringW ns);
    // static System.Xml.XmlQualifiedName Parse(System.String s, System.Xml.IXmlNamespaceResolver nsmgr, out System.String prefix)
    // Offset: 0x163C508
    static ::System::Xml::XmlQualifiedName* Parse(::StringW s, ::System::Xml::IXmlNamespaceResolver* nsmgr, ByRef<::StringW> prefix);
    // public override System.Int32 GetHashCode()
    // Offset: 0x163BC00
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x163C268
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x163C2E0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
  }; // System.Xml.XmlQualifiedName
  #pragma pack(pop)
  static check_size<sizeof(XmlQualifiedName), 32 + sizeof(int)> __System_Xml_XmlQualifiedNameSizeCheck;
  static_assert(sizeof(XmlQualifiedName) == 0x24);
  // static public System.Boolean op_Equality(System.Xml.XmlQualifiedName a, System.Xml.XmlQualifiedName b)
  // Offset: 0x163C45C
  bool operator ==(::System::Xml::XmlQualifiedName* a, ::System::Xml::XmlQualifiedName& b);
  // static public System.Boolean op_Inequality(System.Xml.XmlQualifiedName a, System.Xml.XmlQualifiedName b)
  // Offset: 0x163C3DC
  bool operator !=(::System::Xml::XmlQualifiedName* a, ::System::Xml::XmlQualifiedName& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::get_Namespace
// Il2CppName: get_Namespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlQualifiedName::*)()>(&System::Xml::XmlQualifiedName::get_Namespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlQualifiedName*), "get_Namespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlQualifiedName::*)()>(&System::Xml::XmlQualifiedName::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlQualifiedName*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::get_IsEmpty
// Il2CppName: get_IsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlQualifiedName::*)()>(&System::Xml::XmlQualifiedName::get_IsEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlQualifiedName*), "get_IsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::XmlQualifiedName::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlQualifiedName*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::GetHashCodeDelegate
// Il2CppName: GetHashCodeDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName::HashCodeOfStringDelegate* (*)()>(&System::Xml::XmlQualifiedName::GetHashCodeDelegate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlQualifiedName*), "GetHashCodeDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::IsRandomizedHashingDisabled
// Il2CppName: IsRandomizedHashingDisabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Xml::XmlQualifiedName::IsRandomizedHashingDisabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlQualifiedName*), "IsRandomizedHashingDisabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::GetHashCodeOfString
// Il2CppName: GetHashCodeOfString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, int, int64_t)>(&System::Xml::XmlQualifiedName::GetHashCodeOfString)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* additionalEntropy = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlQualifiedName*), "GetHashCodeOfString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, length, additionalEntropy});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlQualifiedName::*)(::StringW, ::StringW)>(&System::Xml::XmlQualifiedName::Init)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlQualifiedName*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (*)(::StringW, ::System::Xml::IXmlNamespaceResolver*, ByRef<::StringW>)>(&System::Xml::XmlQualifiedName::Parse)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nsmgr = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlQualifiedName*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, nsmgr, prefix});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlQualifiedName::*)()>(&System::Xml::XmlQualifiedName::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlQualifiedName*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlQualifiedName::*)()>(&System::Xml::XmlQualifiedName::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlQualifiedName*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlQualifiedName::*)(::Il2CppObject*)>(&System::Xml::XmlQualifiedName::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlQualifiedName*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
