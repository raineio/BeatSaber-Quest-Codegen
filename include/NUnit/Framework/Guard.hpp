// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Guard
  class Guard : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Guard
    Guard() noexcept {}
    // static public System.Void ArgumentNotNull(System.Object value, System.String name)
    // Offset: 0x172E6C4
    static void ArgumentNotNull(::Il2CppObject* value, ::Il2CppString* name);
    // static public System.Void ArgumentNotNullOrEmpty(System.String value, System.String name)
    // Offset: 0x172E778
    static void ArgumentNotNullOrEmpty(::Il2CppString* value, ::Il2CppString* name);
    // static public System.Void ArgumentValid(System.Boolean condition, System.String message, System.String paramName)
    // Offset: 0x172E858
    static void ArgumentValid(bool condition, ::Il2CppString* message, ::Il2CppString* paramName);
  }; // NUnit.Framework.Guard
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Guard*, "NUnit.Framework", "Guard");
// Writing MetadataGetter for method: NUnit::Framework::Guard::ArgumentNotNull
// Il2CppName: ArgumentNotNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppString*)>(&NUnit::Framework::Guard::ArgumentNotNull)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Guard*), "ArgumentNotNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Guard::ArgumentNotNullOrEmpty
// Il2CppName: ArgumentNotNullOrEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Il2CppString*)>(&NUnit::Framework::Guard::ArgumentNotNullOrEmpty)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Guard*), "ArgumentNotNullOrEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Guard::ArgumentValid
// Il2CppName: ArgumentValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::Il2CppString*, ::Il2CppString*)>(&NUnit::Framework::Guard::ArgumentValid)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Guard*), "ArgumentValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
