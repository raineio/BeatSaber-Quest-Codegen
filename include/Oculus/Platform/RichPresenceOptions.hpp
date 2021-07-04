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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: RichPresenceExtraContext
  struct RichPresenceExtraContext;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.RichPresenceOptions
  class RichPresenceOptions : public ::Il2CppObject {
    public:
    // private System.IntPtr Handle
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr Handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: RichPresenceOptions
    RichPresenceOptions(System::IntPtr Handle_ = {}) noexcept : Handle{Handle_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return Handle;
    }
    // public System.Void SetApiName(System.String value)
    // Offset: 0x23AD168
    void SetApiName(::Il2CppString* value);
    // public System.Void SetCurrentCapacity(System.UInt32 value)
    // Offset: 0x23AD1E4
    void SetCurrentCapacity(uint value);
    // public System.Void SetDeeplinkMessageOverride(System.String value)
    // Offset: 0x23AD260
    void SetDeeplinkMessageOverride(::Il2CppString* value);
    // public System.Void SetEndTime(System.DateTime value)
    // Offset: 0x23AD2DC
    void SetEndTime(System::DateTime value);
    // public System.Void SetExtraContext(Oculus.Platform.RichPresenceExtraContext value)
    // Offset: 0x23AD358
    void SetExtraContext(Oculus::Platform::RichPresenceExtraContext value);
    // public System.Void SetInstanceId(System.String value)
    // Offset: 0x23AD3D4
    void SetInstanceId(::Il2CppString* value);
    // public System.Void SetIsIdle(System.Boolean value)
    // Offset: 0x23AD450
    void SetIsIdle(bool value);
    // public System.Void SetIsJoinable(System.Boolean value)
    // Offset: 0x23AD4CC
    void SetIsJoinable(bool value);
    // public System.Void SetMaxCapacity(System.UInt32 value)
    // Offset: 0x23AD548
    void SetMaxCapacity(uint value);
    // public System.Void SetStartTime(System.DateTime value)
    // Offset: 0x23AD5C4
    void SetStartTime(System::DateTime value);
    // static public System.IntPtr op_Explicit(Oculus.Platform.RichPresenceOptions options)
    // Offset: 0x23ACF24
    // ABORTED: conflicts with another method.  explicit operator System::IntPtr();
    // public System.Void .ctor()
    // Offset: 0x23AD0F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RichPresenceOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::RichPresenceOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RichPresenceOptions*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x23AD640
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Oculus.Platform.RichPresenceOptions
  #pragma pack(pop)
  static check_size<sizeof(RichPresenceOptions), 16 + sizeof(System::IntPtr)> __Oculus_Platform_RichPresenceOptionsSizeCheck;
  static_assert(sizeof(RichPresenceOptions) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::RichPresenceOptions*, "Oculus.Platform", "RichPresenceOptions");
// Writing MetadataGetter for method: Oculus::Platform::RichPresenceOptions::SetApiName
// Il2CppName: SetApiName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RichPresenceOptions::*)(::Il2CppString*)>(&Oculus::Platform::RichPresenceOptions::SetApiName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RichPresenceOptions*), "SetApiName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::RichPresenceOptions::SetCurrentCapacity
// Il2CppName: SetCurrentCapacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RichPresenceOptions::*)(uint)>(&Oculus::Platform::RichPresenceOptions::SetCurrentCapacity)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RichPresenceOptions*), "SetCurrentCapacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::RichPresenceOptions::SetDeeplinkMessageOverride
// Il2CppName: SetDeeplinkMessageOverride
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RichPresenceOptions::*)(::Il2CppString*)>(&Oculus::Platform::RichPresenceOptions::SetDeeplinkMessageOverride)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RichPresenceOptions*), "SetDeeplinkMessageOverride", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::RichPresenceOptions::SetEndTime
// Il2CppName: SetEndTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RichPresenceOptions::*)(System::DateTime)>(&Oculus::Platform::RichPresenceOptions::SetEndTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RichPresenceOptions*), "SetEndTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::DateTime>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::RichPresenceOptions::SetExtraContext
// Il2CppName: SetExtraContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RichPresenceOptions::*)(Oculus::Platform::RichPresenceExtraContext)>(&Oculus::Platform::RichPresenceOptions::SetExtraContext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RichPresenceOptions*), "SetExtraContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Oculus::Platform::RichPresenceExtraContext>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::RichPresenceOptions::SetInstanceId
// Il2CppName: SetInstanceId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RichPresenceOptions::*)(::Il2CppString*)>(&Oculus::Platform::RichPresenceOptions::SetInstanceId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RichPresenceOptions*), "SetInstanceId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::RichPresenceOptions::SetIsIdle
// Il2CppName: SetIsIdle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RichPresenceOptions::*)(bool)>(&Oculus::Platform::RichPresenceOptions::SetIsIdle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RichPresenceOptions*), "SetIsIdle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::RichPresenceOptions::SetIsJoinable
// Il2CppName: SetIsJoinable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RichPresenceOptions::*)(bool)>(&Oculus::Platform::RichPresenceOptions::SetIsJoinable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RichPresenceOptions*), "SetIsJoinable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::RichPresenceOptions::SetMaxCapacity
// Il2CppName: SetMaxCapacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RichPresenceOptions::*)(uint)>(&Oculus::Platform::RichPresenceOptions::SetMaxCapacity)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RichPresenceOptions*), "SetMaxCapacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::RichPresenceOptions::SetStartTime
// Il2CppName: SetStartTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RichPresenceOptions::*)(System::DateTime)>(&Oculus::Platform::RichPresenceOptions::SetStartTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RichPresenceOptions*), "SetStartTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::DateTime>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::RichPresenceOptions::operator System::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::RichPresenceOptions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::RichPresenceOptions::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RichPresenceOptions::*)()>(&Oculus::Platform::RichPresenceOptions::Finalize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RichPresenceOptions*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
