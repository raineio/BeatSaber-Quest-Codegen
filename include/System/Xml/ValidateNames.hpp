// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlCharType
#include "System/Xml/XmlCharType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: ValidateNames
  class ValidateNames;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Xml::ValidateNames);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::ValidateNames*, "System.Xml", "ValidateNames");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.ValidateNames
  // [TokenAttribute] Offset: FFFFFFFF
  class ValidateNames : public ::Il2CppObject {
    public:
    // Get static field: static private System.Xml.XmlCharType xmlCharType
    static System::Xml::XmlCharType _get_xmlCharType();
    // Set static field: static private System.Xml.XmlCharType xmlCharType
    static void _set_xmlCharType(System::Xml::XmlCharType value);
    // static private System.Void .cctor()
    // Offset: 0x1B62428
    static void _cctor();
    // static System.Int32 ParseNCName(System.String s, System.Int32 offset)
    // Offset: 0x1B621E0
    static int ParseNCName(::StringW s, int offset);
    // static System.Int32 ParseQName(System.String s, System.Int32 offset, out System.Int32 colonOffset)
    // Offset: 0x1B6232C
    static int ParseQName(::StringW s, int offset, ByRef<int> colonOffset);
  }; // System.Xml.ValidateNames
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::ValidateNames::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::ValidateNames::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::ValidateNames*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::ValidateNames::ParseNCName
// Il2CppName: ParseNCName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, int)>(&System::Xml::ValidateNames::ParseNCName)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::ValidateNames*), "ParseNCName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offset});
  }
};
// Writing MetadataGetter for method: System::Xml::ValidateNames::ParseQName
// Il2CppName: ParseQName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, int, ByRef<int>)>(&System::Xml::ValidateNames::ParseQName)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* colonOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::ValidateNames*), "ParseQName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offset, colonOffset});
  }
};
