// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: ServiceProvider
  struct ServiceProvider;
  // Forward declaring type: TimeWindow
  struct TimeWindow;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.UserOptions
  class UserOptions : public ::Il2CppObject {
    public:
    // private System.IntPtr Handle
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr Handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: UserOptions
    UserOptions(System::IntPtr Handle_ = {}) noexcept : Handle{Handle_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return Handle;
    }
    // public System.Void SetMaxUsers(System.UInt32 value)
    // Offset: 0x23B0528
    void SetMaxUsers(uint value);
    // public System.Void AddServiceProvider(Oculus.Platform.ServiceProvider value)
    // Offset: 0x23AC678
    void AddServiceProvider(Oculus::Platform::ServiceProvider value);
    // public System.Void ClearServiceProviders()
    // Offset: 0x23B05A4
    void ClearServiceProviders();
    // public System.Void SetTimeWindow(Oculus.Platform.TimeWindow value)
    // Offset: 0x23B0610
    void SetTimeWindow(Oculus::Platform::TimeWindow value);
    // static public System.IntPtr op_Explicit(Oculus.Platform.UserOptions options)
    // Offset: 0x23AC6F4
    // ABORTED: conflicts with another method.  explicit operator System::IntPtr();
    // public System.Void .ctor()
    // Offset: 0x23AC600
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::UserOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserOptions*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x23B068C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Oculus.Platform.UserOptions
  #pragma pack(pop)
  static check_size<sizeof(UserOptions), 16 + sizeof(System::IntPtr)> __Oculus_Platform_UserOptionsSizeCheck;
  static_assert(sizeof(UserOptions) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::UserOptions*, "Oculus.Platform", "UserOptions");
// Writing MetadataGetter for method: Oculus::Platform::UserOptions::SetMaxUsers
// Il2CppName: SetMaxUsers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::UserOptions::*)(uint)>(&Oculus::Platform::UserOptions::SetMaxUsers)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserOptions*), "SetMaxUsers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserOptions::AddServiceProvider
// Il2CppName: AddServiceProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::UserOptions::*)(Oculus::Platform::ServiceProvider)>(&Oculus::Platform::UserOptions::AddServiceProvider)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserOptions*), "AddServiceProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Oculus::Platform::ServiceProvider>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserOptions::ClearServiceProviders
// Il2CppName: ClearServiceProviders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::UserOptions::*)()>(&Oculus::Platform::UserOptions::ClearServiceProviders)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserOptions*), "ClearServiceProviders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserOptions::SetTimeWindow
// Il2CppName: SetTimeWindow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::UserOptions::*)(Oculus::Platform::TimeWindow)>(&Oculus::Platform::UserOptions::SetTimeWindow)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserOptions*), "SetTimeWindow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Oculus::Platform::TimeWindow>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserOptions::operator System::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::UserOptions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::UserOptions::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::UserOptions::*)()>(&Oculus::Platform::UserOptions::Finalize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserOptions*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
