// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: UserOrdering
  struct UserOrdering;
  // Forward declaring type: TimeWindow
  struct TimeWindow;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: RoomOptions
  class RoomOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::RoomOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RoomOptions*, "Oculus.Platform", "RoomOptions");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.RoomOptions
  // [TokenAttribute] Offset: FFFFFFFF
  class RoomOptions : public ::Il2CppObject {
    public:
    public:
    // private System.IntPtr Handle
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr Handle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return Handle;
    }
    // Get instance field reference: private System.IntPtr Handle
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_Handle();
    // public System.Void .ctor()
    // Offset: 0x2B1AB0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RoomOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::RoomOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RoomOptions*, creationType>()));
    }
    // public System.Void SetDataStore(System.String key, System.String value)
    // Offset: 0x2B1AB84
    void SetDataStore(::StringW key, ::StringW value);
    // public System.Void ClearDataStore()
    // Offset: 0x2B1AC08
    void ClearDataStore();
    // public System.Void SetExcludeRecentlyMet(System.Boolean value)
    // Offset: 0x2B1AC74
    void SetExcludeRecentlyMet(bool value);
    // public System.Void SetMaxUserResults(System.UInt32 value)
    // Offset: 0x2B1ACF0
    void SetMaxUserResults(uint value);
    // public System.Void SetOrdering(Oculus.Platform.UserOrdering value)
    // Offset: 0x2B1AD6C
    void SetOrdering(::Oculus::Platform::UserOrdering value);
    // public System.Void SetRecentlyMetTimeWindow(Oculus.Platform.TimeWindow value)
    // Offset: 0x2B1ADE8
    void SetRecentlyMetTimeWindow(::Oculus::Platform::TimeWindow value);
    // public System.Void SetRoomId(System.UInt64 value)
    // Offset: 0x2B1AE64
    void SetRoomId(uint64_t value);
    // public System.Void SetTurnOffUpdates(System.Boolean value)
    // Offset: 0x2B1AEE0
    void SetTurnOffUpdates(bool value);
    // static public System.IntPtr op_Explicit(Oculus.Platform.RoomOptions options)
    // Offset: 0x2B1AF5C
    // ABORTED: conflicts with another method.  explicit operator ::System::IntPtr();
    // protected override System.Void Finalize()
    // Offset: 0x2B1AFAC
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Oculus.Platform.RoomOptions
  #pragma pack(pop)
  static check_size<sizeof(RoomOptions), 16 + sizeof(::System::IntPtr)> __Oculus_Platform_RoomOptionsSizeCheck;
  static_assert(sizeof(RoomOptions) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::RoomOptions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::RoomOptions::SetDataStore
// Il2CppName: SetDataStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RoomOptions::*)(::StringW, ::StringW)>(&Oculus::Platform::RoomOptions::SetDataStore)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RoomOptions*), "SetDataStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::RoomOptions::ClearDataStore
// Il2CppName: ClearDataStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RoomOptions::*)()>(&Oculus::Platform::RoomOptions::ClearDataStore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RoomOptions*), "ClearDataStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::RoomOptions::SetExcludeRecentlyMet
// Il2CppName: SetExcludeRecentlyMet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RoomOptions::*)(bool)>(&Oculus::Platform::RoomOptions::SetExcludeRecentlyMet)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RoomOptions*), "SetExcludeRecentlyMet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::RoomOptions::SetMaxUserResults
// Il2CppName: SetMaxUserResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RoomOptions::*)(uint)>(&Oculus::Platform::RoomOptions::SetMaxUserResults)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RoomOptions*), "SetMaxUserResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::RoomOptions::SetOrdering
// Il2CppName: SetOrdering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RoomOptions::*)(::Oculus::Platform::UserOrdering)>(&Oculus::Platform::RoomOptions::SetOrdering)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "UserOrdering")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RoomOptions*), "SetOrdering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::RoomOptions::SetRecentlyMetTimeWindow
// Il2CppName: SetRecentlyMetTimeWindow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RoomOptions::*)(::Oculus::Platform::TimeWindow)>(&Oculus::Platform::RoomOptions::SetRecentlyMetTimeWindow)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "TimeWindow")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RoomOptions*), "SetRecentlyMetTimeWindow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::RoomOptions::SetRoomId
// Il2CppName: SetRoomId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RoomOptions::*)(uint64_t)>(&Oculus::Platform::RoomOptions::SetRoomId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RoomOptions*), "SetRoomId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::RoomOptions::SetTurnOffUpdates
// Il2CppName: SetTurnOffUpdates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RoomOptions::*)(bool)>(&Oculus::Platform::RoomOptions::SetTurnOffUpdates)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RoomOptions*), "SetTurnOffUpdates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::RoomOptions::operator ::System::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::RoomOptions::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RoomOptions::*)()>(&Oculus::Platform::RoomOptions::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RoomOptions*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
