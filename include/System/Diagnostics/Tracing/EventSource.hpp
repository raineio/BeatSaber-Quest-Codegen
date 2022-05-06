// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventSource
  class EventSource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::EventSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventSource*, "System.Diagnostics.Tracing", "EventSource");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.EventSource
  // [TokenAttribute] Offset: FFFFFFFF
  class EventSource : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get static field: static private System.Byte m_EventSourceExceptionRecurenceCount
    static uint8_t _get_m_EventSourceExceptionRecurenceCount();
    // Set static field: static private System.Byte m_EventSourceExceptionRecurenceCount
    static void _set_m_EventSourceExceptionRecurenceCount(uint8_t value);
    // Get static field: static private readonly System.Byte[] namespaceBytes
    static ::ArrayW<uint8_t> _get_namespaceBytes();
    // Set static field: static private readonly System.Byte[] namespaceBytes
    static void _set_namespaceBytes(::ArrayW<uint8_t> value);
    // Get static field: static private readonly System.Guid AspNetEventSourceGuid
    static ::System::Guid _get_AspNetEventSourceGuid();
    // Set static field: static private readonly System.Guid AspNetEventSourceGuid
    static void _set_AspNetEventSourceGuid(::System::Guid value);
    // static private System.Void .cctor()
    // Offset: 0x195736C
    static void _cctor();
    // public System.Boolean IsEnabled()
    // Offset: 0x19572E8
    bool IsEnabled();
    // public System.Void Dispose()
    // Offset: 0x1957364
    void Dispose();
    // protected System.Void .ctor()
    // Offset: 0x195735C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventSource* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EventSource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventSource*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x19572F0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // protected override System.Void Finalize()
    // Offset: 0x1957368
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.Diagnostics.Tracing.EventSource
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Diagnostics::Tracing::EventSource::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::IsEnabled
// Il2CppName: IsEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::Tracing::EventSource::*)()>(&System::Diagnostics::Tracing::EventSource::IsEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "IsEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSource::*)()>(&System::Diagnostics::Tracing::EventSource::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::Tracing::EventSource::*)()>(&System::Diagnostics::Tracing::EventSource::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSource::*)()>(&System::Diagnostics::Tracing::EventSource::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
