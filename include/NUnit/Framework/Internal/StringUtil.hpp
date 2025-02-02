// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: StringUtil
  class StringUtil;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::StringUtil);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::StringUtil*, "NUnit.Framework.Internal", "StringUtil");
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.StringUtil
  // [TokenAttribute] Offset: FFFFFFFF
  class StringUtil : public ::Il2CppObject {
    public:
    // static public System.Int32 Compare(System.String strA, System.String strB, System.Boolean ignoreCase)
    // Offset: 0x2AAA4A8
    static int Compare(::StringW strA, ::StringW strB, bool ignoreCase);
    // static public System.Boolean StringsEqual(System.String strA, System.String strB, System.Boolean ignoreCase)
    // Offset: 0x2AAA4B4
    static bool StringsEqual(::StringW strA, ::StringW strB, bool ignoreCase);
  }; // NUnit.Framework.Internal.StringUtil
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::StringUtil::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, ::StringW, bool)>(&NUnit::Framework::Internal::StringUtil::Compare)> {
  static const MethodInfo* get() {
    static auto* strA = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* strB = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ignoreCase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::StringUtil*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{strA, strB, ignoreCase});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::StringUtil::StringsEqual
// Il2CppName: StringsEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, bool)>(&NUnit::Framework::Internal::StringUtil::StringsEqual)> {
  static const MethodInfo* get() {
    static auto* strA = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* strB = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ignoreCase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::StringUtil*), "StringsEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{strA, strB, ignoreCase});
  }
};
