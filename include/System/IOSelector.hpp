// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: IOSelectorJob
  class IOSelectorJob;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: IOSelector
  class IOSelector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IOSelector);
DEFINE_IL2CPP_ARG_TYPE(::System::IOSelector*, "System", "IOSelector");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IOSelector
  // [TokenAttribute] Offset: FFFFFFFF
  class IOSelector : public ::Il2CppObject {
    public:
    // static public System.Void Add(System.IntPtr handle, System.IOSelectorJob job)
    // Offset: 0x1CF47F0
    static void Add(::System::IntPtr handle, ::System::IOSelectorJob* job);
  }; // System.IOSelector
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IOSelector::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IOSelectorJob*)>(&System::IOSelector::Add)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* job = &::il2cpp_utils::GetClassFromName("System", "IOSelectorJob")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IOSelector*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, job});
  }
};
