// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Platform
  class Platform : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Platform
    Platform() noexcept {}
    // Get static field: static private System.Boolean checkedOS
    static bool _get_checkedOS();
    // Set static field: static private System.Boolean checkedOS
    static void _set_checkedOS(bool value);
    // Get static field: static private System.Boolean isMacOS
    static bool _get_isMacOS();
    // Set static field: static private System.Boolean isMacOS
    static void _set_isMacOS(bool value);
    // Get static field: static private System.Boolean isFreeBSD
    static bool _get_isFreeBSD();
    // Set static field: static private System.Boolean isFreeBSD
    static void _set_isFreeBSD(bool value);
    // static private System.Int32 uname(System.IntPtr buf)
    // Offset: 0x15CDA08
    static int uname(System::IntPtr buf);
    // static private System.Void CheckOS()
    // Offset: 0x15CDA88
    static void CheckOS();
    // static public System.Boolean get_IsMacOS()
    // Offset: 0x15CDC54
    static bool get_IsMacOS();
    // static public System.Boolean get_IsFreeBSD()
    // Offset: 0x15CDD3C
    static bool get_IsFreeBSD();
  }; // System.Platform
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Platform*, "System", "Platform");
// Writing MetadataGetter for method: System::Platform::uname
// Il2CppName: uname
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IntPtr)>(&System::Platform::uname)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Platform*), "uname", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: System::Platform::CheckOS
// Il2CppName: CheckOS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Platform::CheckOS)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Platform*), "CheckOS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Platform::get_IsMacOS
// Il2CppName: get_IsMacOS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Platform::get_IsMacOS)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Platform*), "get_IsMacOS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Platform::get_IsFreeBSD
// Il2CppName: get_IsFreeBSD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Platform::get_IsFreeBSD)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Platform*), "get_IsFreeBSD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
