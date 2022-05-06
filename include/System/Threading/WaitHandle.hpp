// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Microsoft::Win32::SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Forward declaring type: SafeWaitHandle
  class SafeWaitHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Forward declaring namespace: System::Runtime::InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: SafeHandle
  class SafeHandle;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::WaitHandle);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::WaitHandle*, "System.Threading", "WaitHandle");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x29
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Threading.WaitHandle
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1030B1C
  class WaitHandle : public ::System::MarshalByRefObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.IntPtr waitHandle
    // Size: 0x8
    // Offset: 0x18
    ::System::IntPtr waitHandle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // Microsoft.Win32.SafeHandles.SafeWaitHandle safeWaitHandle
    // Size: 0x8
    // Offset: 0x20
    ::Microsoft::Win32::SafeHandles::SafeWaitHandle* safeWaitHandle;
    // Field size check
    static_assert(sizeof(::Microsoft::Win32::SafeHandles::SafeWaitHandle*) == 0x8);
    // System.Boolean hasThreadAffinity
    // Size: 0x1
    // Offset: 0x28
    bool hasThreadAffinity;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // static field const value: static public System.Int32 WaitTimeout
    static constexpr const int WaitTimeout = 258;
    // Get static field: static public System.Int32 WaitTimeout
    static int _get_WaitTimeout();
    // Set static field: static public System.Int32 WaitTimeout
    static void _set_WaitTimeout(int value);
    // static field const value: static private System.Int32 MAX_WAITHANDLES
    static constexpr const int MAX_WAITHANDLES = 64;
    // Get static field: static private System.Int32 MAX_WAITHANDLES
    static int _get_MAX_WAITHANDLES();
    // Set static field: static private System.Int32 MAX_WAITHANDLES
    static void _set_MAX_WAITHANDLES(int value);
    // static field const value: static private System.Int32 WAIT_OBJECT_0
    static constexpr const int WAIT_OBJECT_0 = 0;
    // Get static field: static private System.Int32 WAIT_OBJECT_0
    static int _get_WAIT_OBJECT_0();
    // Set static field: static private System.Int32 WAIT_OBJECT_0
    static void _set_WAIT_OBJECT_0(int value);
    // static field const value: static private System.Int32 WAIT_ABANDONED
    static constexpr const int WAIT_ABANDONED = 128;
    // Get static field: static private System.Int32 WAIT_ABANDONED
    static int _get_WAIT_ABANDONED();
    // Set static field: static private System.Int32 WAIT_ABANDONED
    static void _set_WAIT_ABANDONED(int value);
    // static field const value: static private System.Int32 WAIT_FAILED
    static constexpr const int WAIT_FAILED = 2147483647;
    // Get static field: static private System.Int32 WAIT_FAILED
    static int _get_WAIT_FAILED();
    // Set static field: static private System.Int32 WAIT_FAILED
    static void _set_WAIT_FAILED(int value);
    // static field const value: static private System.Int32 ERROR_TOO_MANY_POSTS
    static constexpr const int ERROR_TOO_MANY_POSTS = 298;
    // Get static field: static private System.Int32 ERROR_TOO_MANY_POSTS
    static int _get_ERROR_TOO_MANY_POSTS();
    // Set static field: static private System.Int32 ERROR_TOO_MANY_POSTS
    static void _set_ERROR_TOO_MANY_POSTS(int value);
    // Get static field: static protected readonly System.IntPtr InvalidHandle
    static ::System::IntPtr _get_InvalidHandle();
    // Set static field: static protected readonly System.IntPtr InvalidHandle
    static void _set_InvalidHandle(::System::IntPtr value);
    // static field const value: static System.Int32 MaxWaitHandles
    static constexpr const int MaxWaitHandles = 64;
    // Get static field: static System.Int32 MaxWaitHandles
    static int _get_MaxWaitHandles();
    // Set static field: static System.Int32 MaxWaitHandles
    static void _set_MaxWaitHandles(int value);
    // Get instance field reference: private System.IntPtr waitHandle
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_waitHandle();
    // Get instance field reference: Microsoft.Win32.SafeHandles.SafeWaitHandle safeWaitHandle
    [[deprecated("Use field access instead!")]] ::Microsoft::Win32::SafeHandles::SafeWaitHandle*& dyn_safeWaitHandle();
    // Get instance field reference: System.Boolean hasThreadAffinity
    [[deprecated("Use field access instead!")]] bool& dyn_hasThreadAffinity();
    // public System.Void set_Handle(System.IntPtr value)
    // Offset: 0x1D37624
    void set_Handle(::System::IntPtr value);
    // public Microsoft.Win32.SafeHandles.SafeWaitHandle get_SafeWaitHandle()
    // Offset: 0x1D37710
    ::Microsoft::Win32::SafeHandles::SafeWaitHandle* get_SafeWaitHandle();
    // public System.Void set_SafeWaitHandle(Microsoft.Win32.SafeHandles.SafeWaitHandle value)
    // Offset: 0x1D377CC
    void set_SafeWaitHandle(::Microsoft::Win32::SafeHandles::SafeWaitHandle* value);
    // static private System.Void .cctor()
    // Offset: 0x1D38634
    static void _cctor();
    // private System.Void Init()
    // Offset: 0x1D375A8
    void Init();
    // System.Void SetHandleInternal(Microsoft.Win32.SafeHandles.SafeWaitHandle handle)
    // Offset: 0x1D3786C
    void SetHandleInternal(::Microsoft::Win32::SafeHandles::SafeWaitHandle* handle);
    // public System.Boolean WaitOne(System.Int32 millisecondsTimeout, System.Boolean exitContext)
    // Offset: 0x1D378A4
    bool WaitOne(int millisecondsTimeout, bool exitContext);
    // public System.Boolean WaitOne(System.TimeSpan timeout, System.Boolean exitContext)
    // Offset: 0x1D379F4
    bool WaitOne(::System::TimeSpan timeout, bool exitContext);
    // public System.Boolean WaitOne()
    // Offset: 0x1D37AFC
    bool WaitOne();
    // public System.Boolean WaitOne(System.Int32 millisecondsTimeout)
    // Offset: 0x1D37B10
    bool WaitOne(int millisecondsTimeout);
    // public System.Boolean WaitOne(System.TimeSpan timeout)
    // Offset: 0x1D37B20
    bool WaitOne(::System::TimeSpan timeout);
    // private System.Boolean WaitOne(System.Int64 timeout, System.Boolean exitContext)
    // Offset: 0x1D37964
    bool WaitOne(int64_t timeout, bool exitContext);
    // static System.Boolean InternalWaitOne(System.Runtime.InteropServices.SafeHandle waitableSafeHandle, System.Int64 millisecondsTimeout, System.Boolean hasThreadAffinity, System.Boolean exitContext)
    // Offset: 0x1D37B30
    static bool InternalWaitOne(::System::Runtime::InteropServices::SafeHandle* waitableSafeHandle, int64_t millisecondsTimeout, bool hasThreadAffinity, bool exitContext);
    // static public System.Int32 WaitAny(System.Threading.WaitHandle[] waitHandles, System.Int32 millisecondsTimeout, System.Boolean exitContext)
    // Offset: 0x1D37DB4
    static int WaitAny(::ArrayW<::System::Threading::WaitHandle*> waitHandles, int millisecondsTimeout, bool exitContext);
    // static public System.Int32 WaitAny(System.Threading.WaitHandle[] waitHandles, System.TimeSpan timeout, System.Boolean exitContext)
    // Offset: 0x1D383B4
    static int WaitAny(::ArrayW<::System::Threading::WaitHandle*> waitHandles, ::System::TimeSpan timeout, bool exitContext);
    // static private System.Void ThrowAbandonedMutexException()
    // Offset: 0x1D37D54
    static void ThrowAbandonedMutexException();
    // static private System.Void ThrowAbandonedMutexException(System.Int32 location, System.Threading.WaitHandle handle)
    // Offset: 0x1D38340
    static void ThrowAbandonedMutexException(int location, ::System::Threading::WaitHandle* handle);
    // public System.Void Close()
    // Offset: 0x1D384E0
    void Close();
    // protected System.Void Dispose(System.Boolean explicitDisposing)
    // Offset: 0x1D38560
    void Dispose(bool explicitDisposing);
    // public System.Void Dispose()
    // Offset: 0x1D385AC
    void Dispose();
    // static private System.Int32 WaitMultiple(System.Threading.WaitHandle[] waitHandles, System.Int32 millisecondsTimeout, System.Boolean exitContext, System.Boolean WaitAll)
    // Offset: 0x1D380C0
    static int WaitMultiple(::ArrayW<::System::Threading::WaitHandle*> waitHandles, int millisecondsTimeout, bool exitContext, bool WaitAll);
    // static private System.Int32 WaitOneNative(System.Runtime.InteropServices.SafeHandle waitableSafeHandle, System.UInt32 millisecondsTimeout, System.Boolean hasThreadAffinity, System.Boolean exitContext)
    // Offset: 0x1D37C44
    static int WaitOneNative(::System::Runtime::InteropServices::SafeHandle* waitableSafeHandle, uint millisecondsTimeout, bool hasThreadAffinity, bool exitContext);
    // static private System.Int32 Wait_internal(System.IntPtr* handles, System.Int32 numHandles, System.Boolean waitAll, System.Int32 ms)
    // Offset: 0x1D3862C
    static int Wait_internal(::System::IntPtr* handles, int numHandles, bool waitAll, int ms);
    // protected System.Void .ctor()
    // Offset: 0x1D37580
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WaitHandle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::WaitHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WaitHandle*, creationType>()));
    }
  }; // System.Threading.WaitHandle
  #pragma pack(pop)
  static check_size<sizeof(WaitHandle), 40 + sizeof(bool)> __System_Threading_WaitHandleSizeCheck;
  static_assert(sizeof(WaitHandle) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::WaitHandle::set_Handle
// Il2CppName: set_Handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::WaitHandle::*)(::System::IntPtr)>(&System::Threading::WaitHandle::set_Handle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), "set_Handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::get_SafeWaitHandle
// Il2CppName: get_SafeWaitHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Microsoft::Win32::SafeHandles::SafeWaitHandle* (System::Threading::WaitHandle::*)()>(&System::Threading::WaitHandle::get_SafeWaitHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), "get_SafeWaitHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::set_SafeWaitHandle
// Il2CppName: set_SafeWaitHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::WaitHandle::*)(::Microsoft::Win32::SafeHandles::SafeWaitHandle*)>(&System::Threading::WaitHandle::set_SafeWaitHandle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Microsoft.Win32.SafeHandles", "SafeWaitHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), "set_SafeWaitHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::WaitHandle::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::WaitHandle::*)()>(&System::Threading::WaitHandle::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::SetHandleInternal
// Il2CppName: SetHandleInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::WaitHandle::*)(::Microsoft::Win32::SafeHandles::SafeWaitHandle*)>(&System::Threading::WaitHandle::SetHandleInternal)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("Microsoft.Win32.SafeHandles", "SafeWaitHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), "SetHandleInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::WaitOne
// Il2CppName: WaitOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::WaitHandle::*)(int, bool)>(&System::Threading::WaitHandle::WaitOne)> {
  static const MethodInfo* get() {
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* exitContext = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), "WaitOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{millisecondsTimeout, exitContext});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::WaitOne
// Il2CppName: WaitOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::WaitHandle::*)(::System::TimeSpan, bool)>(&System::Threading::WaitHandle::WaitOne)> {
  static const MethodInfo* get() {
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    static auto* exitContext = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), "WaitOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeout, exitContext});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::WaitOne
// Il2CppName: WaitOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::WaitHandle::*)()>(&System::Threading::WaitHandle::WaitOne)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), "WaitOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::WaitOne
// Il2CppName: WaitOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::WaitHandle::*)(int)>(&System::Threading::WaitHandle::WaitOne)> {
  static const MethodInfo* get() {
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), "WaitOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{millisecondsTimeout});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::WaitOne
// Il2CppName: WaitOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::WaitHandle::*)(::System::TimeSpan)>(&System::Threading::WaitHandle::WaitOne)> {
  static const MethodInfo* get() {
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), "WaitOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeout});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::WaitOne
// Il2CppName: WaitOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::WaitHandle::*)(int64_t, bool)>(&System::Threading::WaitHandle::WaitOne)> {
  static const MethodInfo* get() {
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* exitContext = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), "WaitOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeout, exitContext});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::InternalWaitOne
// Il2CppName: InternalWaitOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::InteropServices::SafeHandle*, int64_t, bool, bool)>(&System::Threading::WaitHandle::InternalWaitOne)> {
  static const MethodInfo* get() {
    static auto* waitableSafeHandle = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "SafeHandle")->byval_arg;
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* hasThreadAffinity = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* exitContext = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), "InternalWaitOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{waitableSafeHandle, millisecondsTimeout, hasThreadAffinity, exitContext});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::WaitAny
// Il2CppName: WaitAny
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<::System::Threading::WaitHandle*>, int, bool)>(&System::Threading::WaitHandle::WaitAny)> {
  static const MethodInfo* get() {
    static auto* waitHandles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Threading", "WaitHandle"), 1)->byval_arg;
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* exitContext = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), "WaitAny", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{waitHandles, millisecondsTimeout, exitContext});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::WaitAny
// Il2CppName: WaitAny
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<::System::Threading::WaitHandle*>, ::System::TimeSpan, bool)>(&System::Threading::WaitHandle::WaitAny)> {
  static const MethodInfo* get() {
    static auto* waitHandles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Threading", "WaitHandle"), 1)->byval_arg;
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    static auto* exitContext = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), "WaitAny", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{waitHandles, timeout, exitContext});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::ThrowAbandonedMutexException
// Il2CppName: ThrowAbandonedMutexException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::WaitHandle::ThrowAbandonedMutexException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), "ThrowAbandonedMutexException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::ThrowAbandonedMutexException
// Il2CppName: ThrowAbandonedMutexException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::System::Threading::WaitHandle*)>(&System::Threading::WaitHandle::ThrowAbandonedMutexException)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("System.Threading", "WaitHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), "ThrowAbandonedMutexException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location, handle});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::WaitHandle::*)()>(&System::Threading::WaitHandle::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::WaitHandle::*)(bool)>(&System::Threading::WaitHandle::Dispose)> {
  static const MethodInfo* get() {
    static auto* explicitDisposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{explicitDisposing});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::WaitHandle::*)()>(&System::Threading::WaitHandle::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::WaitMultiple
// Il2CppName: WaitMultiple
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<::System::Threading::WaitHandle*>, int, bool, bool)>(&System::Threading::WaitHandle::WaitMultiple)> {
  static const MethodInfo* get() {
    static auto* waitHandles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Threading", "WaitHandle"), 1)->byval_arg;
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* exitContext = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* WaitAll = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), "WaitMultiple", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{waitHandles, millisecondsTimeout, exitContext, WaitAll});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::WaitOneNative
// Il2CppName: WaitOneNative
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Runtime::InteropServices::SafeHandle*, uint, bool, bool)>(&System::Threading::WaitHandle::WaitOneNative)> {
  static const MethodInfo* get() {
    static auto* waitableSafeHandle = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "SafeHandle")->byval_arg;
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* hasThreadAffinity = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* exitContext = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), "WaitOneNative", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{waitableSafeHandle, millisecondsTimeout, hasThreadAffinity, exitContext});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::Wait_internal
// Il2CppName: Wait_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr*, int, bool, int)>(&System::Threading::WaitHandle::Wait_internal)> {
  static const MethodInfo* get() {
    static auto* handles = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "IntPtr"))->byval_arg;
    static auto* numHandles = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* waitAll = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* ms = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitHandle*), "Wait_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handles, numHandles, waitAll, ms});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
