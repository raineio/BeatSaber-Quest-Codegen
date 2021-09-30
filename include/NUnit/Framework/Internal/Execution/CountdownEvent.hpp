// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Execution
namespace NUnit::Framework::Internal::Execution {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Execution.CountdownEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class CountdownEvent : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Int32 _initialCount
    // Size: 0x4
    // Offset: 0x10
    int initialCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _remainingCount
    // Size: 0x4
    // Offset: 0x14
    int remainingCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Object _lock
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* lock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Threading.ManualResetEvent _event
    // Size: 0x8
    // Offset: 0x20
    System::Threading::ManualResetEvent* event;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    public:
    // Get instance field reference: private System.Int32 _initialCount
    int& dyn__initialCount();
    // Get instance field reference: private System.Int32 _remainingCount
    int& dyn__remainingCount();
    // Get instance field reference: private System.Object _lock
    ::Il2CppObject*& dyn__lock();
    // Get instance field reference: private System.Threading.ManualResetEvent _event
    System::Threading::ManualResetEvent*& dyn__event();
    // public System.Int32 get_CurrentCount()
    // Offset: 0x193FD54
    int get_CurrentCount();
    // public System.Void .ctor(System.Int32 initialCount)
    // Offset: 0x193FCB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CountdownEvent* New_ctor(int initialCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Execution::CountdownEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CountdownEvent*, creationType>(initialCount)));
    }
    // public System.Void Signal()
    // Offset: 0x193FD5C
    void Signal();
  }; // NUnit.Framework.Internal.Execution.CountdownEvent
  #pragma pack(pop)
  static check_size<sizeof(CountdownEvent), 32 + sizeof(System::Threading::ManualResetEvent*)> __NUnit_Framework_Internal_Execution_CountdownEventSizeCheck;
  static_assert(sizeof(CountdownEvent) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Execution::CountdownEvent*, "NUnit.Framework.Internal.Execution", "CountdownEvent");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Execution::CountdownEvent::get_CurrentCount
// Il2CppName: get_CurrentCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Internal::Execution::CountdownEvent::*)()>(&NUnit::Framework::Internal::Execution::CountdownEvent::get_CurrentCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Execution::CountdownEvent*), "get_CurrentCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Execution::CountdownEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Execution::CountdownEvent::Signal
// Il2CppName: Signal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Execution::CountdownEvent::*)()>(&NUnit::Framework::Internal::Execution::CountdownEvent::Signal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Execution::CountdownEvent*), "Signal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
