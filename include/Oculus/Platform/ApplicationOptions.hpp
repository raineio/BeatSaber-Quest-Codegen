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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.ApplicationOptions
  class ApplicationOptions : public ::Il2CppObject {
    public:
    // private System.IntPtr Handle
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr Handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: ApplicationOptions
    ApplicationOptions(System::IntPtr Handle_ = {}) noexcept : Handle{Handle_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return Handle;
    }
    // public System.Void SetDeeplinkMessage(System.String value)
    // Offset: 0x1BCB368
    void SetDeeplinkMessage(::Il2CppString* value);
    // static public System.IntPtr op_Explicit(Oculus.Platform.ApplicationOptions options)
    // Offset: 0x1BCAF0C
    // ABORTED: conflicts with another method.  explicit operator System::IntPtr();
    // public System.Void .ctor()
    // Offset: 0x1BCB280
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ApplicationOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::ApplicationOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ApplicationOptions*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x1BCB48C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Oculus.Platform.ApplicationOptions
  #pragma pack(pop)
  static check_size<sizeof(ApplicationOptions), 16 + sizeof(System::IntPtr)> __Oculus_Platform_ApplicationOptionsSizeCheck;
  static_assert(sizeof(ApplicationOptions) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::ApplicationOptions*, "Oculus.Platform", "ApplicationOptions");
// Writing MetadataGetter for method: Oculus::Platform::ApplicationOptions::SetDeeplinkMessage
// Il2CppName: SetDeeplinkMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::ApplicationOptions::*)(::Il2CppString*)>(&Oculus::Platform::ApplicationOptions::SetDeeplinkMessage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::ApplicationOptions*), "SetDeeplinkMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::ApplicationOptions::operator System::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::ApplicationOptions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::ApplicationOptions::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::ApplicationOptions::*)()>(&Oculus::Platform::ApplicationOptions::Finalize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::ApplicationOptions*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
