// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: Debug
  class Debug;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Diagnostics::Debug);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Debug*, "System.Diagnostics", "Debug");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Debug
  // [TokenAttribute] Offset: FFFFFFFF
  class Debug : public ::Il2CppObject {
    public:
    // static public System.Void Assert(System.Boolean condition)
    // Offset: 0x1A28DFC
    static void Assert_(bool condition);
  }; // System.Diagnostics.Debug
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Debug::Assert_
// Il2CppName: Assert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&System::Diagnostics::Debug::Assert_)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Debug*), "Assert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition});
  }
};
