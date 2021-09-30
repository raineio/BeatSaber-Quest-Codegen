// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x2A
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.IOAsyncResult
  // [TokenAttribute] Offset: FFFFFFFF
  class IOAsyncResult : public ::Il2CppObject/*, public System::IAsyncResult*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.AsyncCallback async_callback
    // Size: 0x8
    // Offset: 0x10
    System::AsyncCallback* async_callback;
    // Field size check
    static_assert(sizeof(System::AsyncCallback*) == 0x8);
    // private System.Object async_state
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* async_state;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Threading.ManualResetEvent wait_handle
    // Size: 0x8
    // Offset: 0x20
    System::Threading::ManualResetEvent* wait_handle;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    // private System.Boolean completed_synchronously
    // Size: 0x1
    // Offset: 0x28
    bool completed_synchronously;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean completed
    // Size: 0x1
    // Offset: 0x29
    bool completed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator System::IAsyncResult
    operator System::IAsyncResult() noexcept {
      return *reinterpret_cast<System::IAsyncResult*>(this);
    }
    // Get instance field reference: private System.AsyncCallback async_callback
    System::AsyncCallback*& dyn_async_callback();
    // Get instance field reference: private System.Object async_state
    ::Il2CppObject*& dyn_async_state();
    // Get instance field reference: private System.Threading.ManualResetEvent wait_handle
    System::Threading::ManualResetEvent*& dyn_wait_handle();
    // Get instance field reference: private System.Boolean completed_synchronously
    bool& dyn_completed_synchronously();
    // Get instance field reference: private System.Boolean completed
    bool& dyn_completed();
    // public System.AsyncCallback get_AsyncCallback()
    // Offset: 0x156A5A0
    System::AsyncCallback* get_AsyncCallback();
    // public System.Object get_AsyncState()
    // Offset: 0x156A5A8
    ::Il2CppObject* get_AsyncState();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0x156A5B0
    System::Threading::WaitHandle* get_AsyncWaitHandle();
    // public System.Boolean get_CompletedSynchronously()
    // Offset: 0x156A698
    bool get_CompletedSynchronously();
    // protected System.Void set_CompletedSynchronously(System.Boolean value)
    // Offset: 0x156A6A0
    void set_CompletedSynchronously(bool value);
    // public System.Boolean get_IsCompleted()
    // Offset: 0x156A6AC
    bool get_IsCompleted();
    // protected System.Void set_IsCompleted(System.Boolean value)
    // Offset: 0x156A6B4
    void set_IsCompleted(bool value);
    // protected System.Void .ctor(System.AsyncCallback async_callback, System.Object async_state)
    // Offset: 0x156A568
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IOAsyncResult* New_ctor(System::AsyncCallback* async_callback, ::Il2CppObject* async_state) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IOAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IOAsyncResult*, creationType>(async_callback, async_state)));
    }
    // protected System.Void Init(System.AsyncCallback async_callback, System.Object async_state)
    // Offset: 0x156A548
    void Init(System::AsyncCallback* async_callback, ::Il2CppObject* async_state);
    // System.Void CompleteDisposed()
    // Offset: 0xFFFFFFFF
    void CompleteDisposed();
    // protected System.Void .ctor()
    // Offset: 0x156A540
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IOAsyncResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IOAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IOAsyncResult*, creationType>()));
    }
  }; // System.IOAsyncResult
  #pragma pack(pop)
  static check_size<sizeof(IOAsyncResult), 41 + sizeof(bool)> __System_IOAsyncResultSizeCheck;
  static_assert(sizeof(IOAsyncResult) == 0x2A);
}
DEFINE_IL2CPP_ARG_TYPE(System::IOAsyncResult*, "System", "IOAsyncResult");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IOAsyncResult::get_AsyncCallback
// Il2CppName: get_AsyncCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::AsyncCallback* (System::IOAsyncResult::*)()>(&System::IOAsyncResult::get_AsyncCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IOAsyncResult*), "get_AsyncCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IOAsyncResult::get_AsyncState
// Il2CppName: get_AsyncState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::IOAsyncResult::*)()>(&System::IOAsyncResult::get_AsyncState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IOAsyncResult*), "get_AsyncState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IOAsyncResult::get_AsyncWaitHandle
// Il2CppName: get_AsyncWaitHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::WaitHandle* (System::IOAsyncResult::*)()>(&System::IOAsyncResult::get_AsyncWaitHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IOAsyncResult*), "get_AsyncWaitHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IOAsyncResult::get_CompletedSynchronously
// Il2CppName: get_CompletedSynchronously
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IOAsyncResult::*)()>(&System::IOAsyncResult::get_CompletedSynchronously)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IOAsyncResult*), "get_CompletedSynchronously", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IOAsyncResult::set_CompletedSynchronously
// Il2CppName: set_CompletedSynchronously
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IOAsyncResult::*)(bool)>(&System::IOAsyncResult::set_CompletedSynchronously)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IOAsyncResult*), "set_CompletedSynchronously", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IOAsyncResult::get_IsCompleted
// Il2CppName: get_IsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IOAsyncResult::*)()>(&System::IOAsyncResult::get_IsCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IOAsyncResult*), "get_IsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IOAsyncResult::set_IsCompleted
// Il2CppName: set_IsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IOAsyncResult::*)(bool)>(&System::IOAsyncResult::set_IsCompleted)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IOAsyncResult*), "set_IsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IOAsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IOAsyncResult::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IOAsyncResult::*)(System::AsyncCallback*, ::Il2CppObject*)>(&System::IOAsyncResult::Init)> {
  static const MethodInfo* get() {
    static auto* async_callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* async_state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IOAsyncResult*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{async_callback, async_state});
  }
};
// Writing MetadataGetter for method: System::IOAsyncResult::CompleteDisposed
// Il2CppName: CompleteDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IOAsyncResult::*)()>(&System::IOAsyncResult::CompleteDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IOAsyncResult*), "CompleteDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IOAsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
