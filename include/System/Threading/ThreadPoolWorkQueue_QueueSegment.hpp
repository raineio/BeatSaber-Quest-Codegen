// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.ThreadPoolWorkQueue
#include "System/Threading/ThreadPoolWorkQueue.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: IThreadPoolWorkItem
  class IThreadPoolWorkItem;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: QueueSegment
  class QueueSegment;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Threading::ThreadPoolWorkQueue::QueueSegment);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadPoolWorkQueue::QueueSegment*, "System.Threading", "ThreadPoolWorkQueue/QueueSegment");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.ThreadPoolWorkQueue/System.Threading.QueueSegment
  // [TokenAttribute] Offset: FFFFFFFF
  class ThreadPoolWorkQueue::QueueSegment : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // readonly System.Threading.IThreadPoolWorkItem[] nodes
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<System::Threading::IThreadPoolWorkItem*> nodes;
    // Field size check
    static_assert(sizeof(::ArrayW<System::Threading::IThreadPoolWorkItem*>) == 0x8);
    // private System.Int32 indexes
    // Size: 0x4
    // Offset: 0x18
    int indexes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: indexes and: Next
    char __padding1[0x4] = {};
    // public System.Threading.ThreadPoolWorkQueue/System.Threading.QueueSegment Next
    // Size: 0x8
    // Offset: 0x20
    System::Threading::ThreadPoolWorkQueue::QueueSegment* Next;
    // Field size check
    static_assert(sizeof(System::Threading::ThreadPoolWorkQueue::QueueSegment*) == 0x8);
    public:
    // Get instance field reference: readonly System.Threading.IThreadPoolWorkItem[] nodes
    ::ArrayW<System::Threading::IThreadPoolWorkItem*>& dyn_nodes();
    // Get instance field reference: private System.Int32 indexes
    int& dyn_indexes();
    // Get instance field reference: public System.Threading.ThreadPoolWorkQueue/System.Threading.QueueSegment Next
    System::Threading::ThreadPoolWorkQueue::QueueSegment*& dyn_Next();
    // private System.Void GetIndexes(out System.Int32 upper, out System.Int32 lower)
    // Offset: 0x19C3A54
    void GetIndexes(ByRef<int> upper, ByRef<int> lower);
    // private System.Boolean CompareExchangeIndexes(ref System.Int32 prevUpper, System.Int32 newUpper, ref System.Int32 prevLower, System.Int32 newLower)
    // Offset: 0x19C3A94
    bool CompareExchangeIndexes(ByRef<int> prevUpper, int newUpper, ByRef<int> prevLower, int newLower);
    // public System.Boolean IsUsedUp()
    // Offset: 0x19C33F8
    bool IsUsedUp();
    // public System.Boolean TryEnqueue(System.Threading.IThreadPoolWorkItem node)
    // Offset: 0x19C2AF8
    bool TryEnqueue(System::Threading::IThreadPoolWorkItem* node);
    // public System.Boolean TryDequeue(out System.Threading.IThreadPoolWorkItem node)
    // Offset: 0x19C32FC
    bool TryDequeue(ByRef<System::Threading::IThreadPoolWorkItem*> node);
    // public System.Void .ctor()
    // Offset: 0x19C23CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreadPoolWorkQueue::QueueSegment* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ThreadPoolWorkQueue::QueueSegment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreadPoolWorkQueue::QueueSegment*, creationType>()));
    }
  }; // System.Threading.ThreadPoolWorkQueue/System.Threading.QueueSegment
  #pragma pack(pop)
  static check_size<sizeof(ThreadPoolWorkQueue::QueueSegment), 32 + sizeof(System::Threading::ThreadPoolWorkQueue::QueueSegment*)> __System_Threading_ThreadPoolWorkQueue_QueueSegmentSizeCheck;
  static_assert(sizeof(ThreadPoolWorkQueue::QueueSegment) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::QueueSegment::GetIndexes
// Il2CppName: GetIndexes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ThreadPoolWorkQueue::QueueSegment::*)(ByRef<int>, ByRef<int>)>(&System::Threading::ThreadPoolWorkQueue::QueueSegment::GetIndexes)> {
  static const MethodInfo* get() {
    static auto* upper = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* lower = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue::QueueSegment*), "GetIndexes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{upper, lower});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::QueueSegment::CompareExchangeIndexes
// Il2CppName: CompareExchangeIndexes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ThreadPoolWorkQueue::QueueSegment::*)(ByRef<int>, int, ByRef<int>, int)>(&System::Threading::ThreadPoolWorkQueue::QueueSegment::CompareExchangeIndexes)> {
  static const MethodInfo* get() {
    static auto* prevUpper = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* newUpper = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* prevLower = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* newLower = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue::QueueSegment*), "CompareExchangeIndexes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prevUpper, newUpper, prevLower, newLower});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::QueueSegment::IsUsedUp
// Il2CppName: IsUsedUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ThreadPoolWorkQueue::QueueSegment::*)()>(&System::Threading::ThreadPoolWorkQueue::QueueSegment::IsUsedUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue::QueueSegment*), "IsUsedUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::QueueSegment::TryEnqueue
// Il2CppName: TryEnqueue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ThreadPoolWorkQueue::QueueSegment::*)(System::Threading::IThreadPoolWorkItem*)>(&System::Threading::ThreadPoolWorkQueue::QueueSegment::TryEnqueue)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Threading", "IThreadPoolWorkItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue::QueueSegment*), "TryEnqueue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::QueueSegment::TryDequeue
// Il2CppName: TryDequeue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ThreadPoolWorkQueue::QueueSegment::*)(ByRef<System::Threading::IThreadPoolWorkItem*>)>(&System::Threading::ThreadPoolWorkQueue::QueueSegment::TryDequeue)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Threading", "IThreadPoolWorkItem")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue::QueueSegment*), "TryDequeue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::QueueSegment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
