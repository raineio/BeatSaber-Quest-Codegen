// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.ReaderWriterLockSlim
#include "System/Threading/ReaderWriterLockSlim.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ReaderWriterLockSlim::TimeoutTracker, "System.Threading", "ReaderWriterLockSlim/TimeoutTracker");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Threading.ReaderWriterLockSlim/System.Threading.TimeoutTracker
  // [TokenAttribute] Offset: FFFFFFFF
  struct ReaderWriterLockSlim::TimeoutTracker/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Int32 m_total
    // Size: 0x4
    // Offset: 0x0
    int m_total;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_start
    // Size: 0x4
    // Offset: 0x4
    int m_start;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TimeoutTracker
    constexpr TimeoutTracker(int m_total_ = {}, int m_start_ = {}) noexcept : m_total{m_total_}, m_start{m_start_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Int32 m_total
    [[deprecated("Use field access instead!")]] int& dyn_m_total();
    // Get instance field reference: private System.Int32 m_start
    [[deprecated("Use field access instead!")]] int& dyn_m_start();
    // public System.Int32 get_RemainingMilliseconds()
    // Offset: 0x2A8C104
    int get_RemainingMilliseconds();
    // public System.Boolean get_IsExpired()
    // Offset: 0x2A8B03C
    bool get_IsExpired();
    // public System.Void .ctor(System.Int32 millisecondsTimeout)
    // Offset: 0x2A8ABE4
    TimeoutTracker(int millisecondsTimeout);
  }; // System.Threading.ReaderWriterLockSlim/System.Threading.TimeoutTracker
  #pragma pack(pop)
  static check_size<sizeof(ReaderWriterLockSlim::TimeoutTracker), 4 + sizeof(int)> __System_Threading_ReaderWriterLockSlim_TimeoutTrackerSizeCheck;
  static_assert(sizeof(ReaderWriterLockSlim::TimeoutTracker) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::ReaderWriterLockSlim::TimeoutTracker::get_RemainingMilliseconds
// Il2CppName: get_RemainingMilliseconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Threading::ReaderWriterLockSlim::TimeoutTracker::*)()>(&System::Threading::ReaderWriterLockSlim::TimeoutTracker::get_RemainingMilliseconds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ReaderWriterLockSlim::TimeoutTracker), "get_RemainingMilliseconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ReaderWriterLockSlim::TimeoutTracker::get_IsExpired
// Il2CppName: get_IsExpired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ReaderWriterLockSlim::TimeoutTracker::*)()>(&System::Threading::ReaderWriterLockSlim::TimeoutTracker::get_IsExpired)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ReaderWriterLockSlim::TimeoutTracker), "get_IsExpired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ReaderWriterLockSlim::TimeoutTracker::TimeoutTracker
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
