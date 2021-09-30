// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Profiling.ProfilerMarker
#include "Unity/Profiling/ProfilerMarker.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: Unity.Profiling
namespace Unity::Profiling {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Profiling.ProfilerMarker/Unity.Profiling.AutoScope
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: E6F9E4
  struct ProfilerMarker::AutoScope/*, public System::ValueType, public System::IDisposable*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // [NativeDisableUnsafePtrRestrictionAttribute] Offset: 0xE74E54
    // readonly System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: AutoScope
    constexpr AutoScope(System::IntPtr m_Ptr_ = {}) noexcept : m_Ptr{m_Ptr_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get instance field reference: readonly System.IntPtr m_Ptr
    System::IntPtr& dyn_m_Ptr();
    // System.Void .ctor(System.IntPtr markerPtr)
    // Offset: 0x1CAA0CC
    // ABORTED: conflicts with another method.  AutoScope(System::IntPtr markerPtr);
    // public System.Void Dispose()
    // Offset: 0x1CAA110
    void Dispose();
  }; // Unity.Profiling.ProfilerMarker/Unity.Profiling.AutoScope
  #pragma pack(pop)
  static check_size<sizeof(ProfilerMarker::AutoScope), 0 + sizeof(System::IntPtr)> __Unity_Profiling_ProfilerMarker_AutoScopeSizeCheck;
  static_assert(sizeof(ProfilerMarker::AutoScope) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Unity::Profiling::ProfilerMarker::AutoScope, "Unity.Profiling", "ProfilerMarker/AutoScope");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Profiling::ProfilerMarker::AutoScope::AutoScope
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::Profiling::ProfilerMarker::AutoScope::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Profiling::ProfilerMarker::AutoScope::*)()>(&Unity::Profiling::ProfilerMarker::AutoScope::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Profiling::ProfilerMarker::AutoScope), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
