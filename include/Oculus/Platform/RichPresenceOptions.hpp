// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
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
  // Autogenerated type: Oculus.Platform.RichPresenceOptions
  class RichPresenceOptions : public ::Il2CppObject {
    public:
    // private System.IntPtr Handle
    // Offset: 0x10
    System::IntPtr Handle;
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return Handle;
    }
    // public System.Void SetApiName(System.String value)
    // Offset: 0x1143A8C
    void SetApiName(::Il2CppString* value);
    // public System.Void SetArgs(System.String key, System.String value)
    // Offset: 0x1143B08
    void SetArgs(::Il2CppString* key, ::Il2CppString* value);
    // public System.Void ClearArgs()
    // Offset: 0x1143B8C
    void ClearArgs();
    // public System.Void SetCurrentCapacity(System.UInt32 value)
    // Offset: 0x1143BF8
    void SetCurrentCapacity(uint value);
    // public System.Void SetDeeplinkMessageOverride(System.String value)
    // Offset: 0x1143C74
    void SetDeeplinkMessageOverride(::Il2CppString* value);
    // public System.Void SetEndTime(System.DateTime value)
    // Offset: 0x1143CF0
    void SetEndTime(System::DateTime value);
    // public System.Void SetExtraContext(Oculus.Platform.RichPresenceExtraContext value)
    // Offset: 0x1143D6C
    void SetExtraContext(Oculus::Platform::RichPresenceExtraContext value);
    // public System.Void SetIsIdle(System.Boolean value)
    // Offset: 0x1143DE8
    void SetIsIdle(bool value);
    // public System.Void SetIsJoinable(System.Boolean value)
    // Offset: 0x1143E64
    void SetIsJoinable(bool value);
    // public System.Void SetJoinableId(System.String value)
    // Offset: 0x1143EE0
    void SetJoinableId(::Il2CppString* value);
    // public System.Void SetMaxCapacity(System.UInt32 value)
    // Offset: 0x1143F5C
    void SetMaxCapacity(uint value);
    // public System.Void SetStartTime(System.DateTime value)
    // Offset: 0x1143FD8
    void SetStartTime(System::DateTime value);
    // static public System.IntPtr op_Explicit(Oculus.Platform.RichPresenceOptions options)
    // Offset: 0x1143848
    // ABORTED: conflicts with another method.  explicit operator System::IntPtr();
    // public System.Void .ctor()
    // Offset: 0x1143A14
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RichPresenceOptions* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0x1144054
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Oculus.Platform.RichPresenceOptions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::RichPresenceOptions*, "Oculus.Platform", "RichPresenceOptions");
#pragma pack(pop)
