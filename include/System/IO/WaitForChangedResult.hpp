// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IO.WatcherChangeTypes
#include "System/IO/WatcherChangeTypes.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: WaitForChangedResult
  struct WaitForChangedResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::IO::WaitForChangedResult, "System.IO", "WaitForChangedResult");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x19
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.IO.WaitForChangedResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct WaitForChangedResult/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.IO.WatcherChangeTypes changeType
    // Size: 0x4
    // Offset: 0x0
    ::System::IO::WatcherChangeTypes changeType;
    // Field size check
    static_assert(sizeof(::System::IO::WatcherChangeTypes) == 0x4);
    // Padding between fields: changeType and: name
    char __padding0[0x4] = {};
    // private System.String name
    // Size: 0x8
    // Offset: 0x8
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String oldName
    // Size: 0x8
    // Offset: 0x10
    ::StringW oldName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean timedOut
    // Size: 0x1
    // Offset: 0x18
    bool timedOut;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: WaitForChangedResult
    constexpr WaitForChangedResult(::System::IO::WatcherChangeTypes changeType_ = {}, ::StringW name_ = {}, ::StringW oldName_ = {}, bool timedOut_ = {}) noexcept : changeType{changeType_}, name{name_}, oldName{oldName_}, timedOut{timedOut_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.IO.WatcherChangeTypes changeType
    [[deprecated("Use field access instead!")]] ::System::IO::WatcherChangeTypes& dyn_changeType();
    // Get instance field reference: private System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: private System.String oldName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_oldName();
    // Get instance field reference: private System.Boolean timedOut
    [[deprecated("Use field access instead!")]] bool& dyn_timedOut();
    // public System.Void set_ChangeType(System.IO.WatcherChangeTypes value)
    // Offset: 0x1CF41EC
    void set_ChangeType(::System::IO::WatcherChangeTypes value);
    // public System.Void set_Name(System.String value)
    // Offset: 0x1CF41F4
    void set_Name(::StringW value);
    // public System.Void set_OldName(System.String value)
    // Offset: 0x1CF41FC
    void set_OldName(::StringW value);
  }; // System.IO.WaitForChangedResult
  #pragma pack(pop)
  static check_size<sizeof(WaitForChangedResult), 24 + sizeof(bool)> __System_IO_WaitForChangedResultSizeCheck;
  static_assert(sizeof(WaitForChangedResult) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::WaitForChangedResult::set_ChangeType
// Il2CppName: set_ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::WaitForChangedResult::*)(::System::IO::WatcherChangeTypes)>(&System::IO::WaitForChangedResult::set_ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.IO", "WatcherChangeTypes")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::WaitForChangedResult), "set_ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::WaitForChangedResult::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::WaitForChangedResult::*)(::StringW)>(&System::IO::WaitForChangedResult::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::WaitForChangedResult), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::WaitForChangedResult::set_OldName
// Il2CppName: set_OldName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::WaitForChangedResult::*)(::StringW)>(&System::IO::WaitForChangedResult::set_OldName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::WaitForChangedResult), "set_OldName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
