// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.GroupPresenceOptions
  // [TokenAttribute] Offset: FFFFFFFF
  class GroupPresenceOptions : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.IntPtr Handle
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr Handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    public:
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return Handle;
    }
    // Get instance field reference: private System.IntPtr Handle
    System::IntPtr& dyn_Handle();
    // public System.Void SetDestinationApiName(System.String value)
    // Offset: 0x16ACA08
    void SetDestinationApiName(::Il2CppString* value);
    // public System.Void SetIsJoinable(System.Boolean value)
    // Offset: 0x16ACA84
    void SetIsJoinable(bool value);
    // public System.Void SetLobbySessionId(System.String value)
    // Offset: 0x16ACB00
    void SetLobbySessionId(::Il2CppString* value);
    // public System.Void SetMatchSessionId(System.String value)
    // Offset: 0x16ACB7C
    void SetMatchSessionId(::Il2CppString* value);
    // static public System.IntPtr op_Explicit(Oculus.Platform.GroupPresenceOptions options)
    // Offset: 0x16AC388
    // ABORTED: conflicts with another method.  explicit operator System::IntPtr();
    // public System.Void .ctor()
    // Offset: 0x16AC990
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GroupPresenceOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::GroupPresenceOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GroupPresenceOptions*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x16ACBF8
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Oculus.Platform.GroupPresenceOptions
  #pragma pack(pop)
  static check_size<sizeof(GroupPresenceOptions), 16 + sizeof(System::IntPtr)> __Oculus_Platform_GroupPresenceOptionsSizeCheck;
  static_assert(sizeof(GroupPresenceOptions) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::GroupPresenceOptions*, "Oculus.Platform", "GroupPresenceOptions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::GroupPresenceOptions::SetDestinationApiName
// Il2CppName: SetDestinationApiName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::GroupPresenceOptions::*)(::Il2CppString*)>(&Oculus::Platform::GroupPresenceOptions::SetDestinationApiName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::GroupPresenceOptions*), "SetDestinationApiName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::GroupPresenceOptions::SetIsJoinable
// Il2CppName: SetIsJoinable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::GroupPresenceOptions::*)(bool)>(&Oculus::Platform::GroupPresenceOptions::SetIsJoinable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::GroupPresenceOptions*), "SetIsJoinable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::GroupPresenceOptions::SetLobbySessionId
// Il2CppName: SetLobbySessionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::GroupPresenceOptions::*)(::Il2CppString*)>(&Oculus::Platform::GroupPresenceOptions::SetLobbySessionId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::GroupPresenceOptions*), "SetLobbySessionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::GroupPresenceOptions::SetMatchSessionId
// Il2CppName: SetMatchSessionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::GroupPresenceOptions::*)(::Il2CppString*)>(&Oculus::Platform::GroupPresenceOptions::SetMatchSessionId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::GroupPresenceOptions*), "SetMatchSessionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::GroupPresenceOptions::operator System::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::GroupPresenceOptions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::GroupPresenceOptions::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::GroupPresenceOptions::*)()>(&Oculus::Platform::GroupPresenceOptions::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::GroupPresenceOptions*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
