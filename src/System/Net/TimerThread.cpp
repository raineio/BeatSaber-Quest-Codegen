// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.TimerThread
#include "System/Net/TimerThread.hpp"
// Including type: System.Net.TimerThread/Queue
#include "System/Net/TimerThread_Queue.hpp"
// Including type: System.Net.TimerThread/Timer
#include "System/Net/TimerThread_Timer.hpp"
// Including type: System.Net.TimerThread/Callback
#include "System/Net/TimerThread_Callback.hpp"
// Including type: System.Net.TimerThread/TimerQueue
#include "System/Net/TimerThread_TimerQueue.hpp"
// Including type: System.Net.TimerThread/InfiniteTimerQueue
#include "System/Net/TimerThread_InfiniteTimerQueue.hpp"
// Including type: System.Net.TimerThread/TimerNode
#include "System/Net/TimerThread_TimerNode.hpp"
// Including type: System.Collections.Generic.LinkedList`1
#include "System/Collections/Generic/LinkedList_1.hpp"
// Including type: System.WeakReference
#include "System/WeakReference.hpp"
// Including type: System.Threading.AutoResetEvent
#include "System/Threading/AutoResetEvent.hpp"
// Including type: System.Threading.ManualResetEvent
#include "System/Threading/ManualResetEvent.hpp"
// Including type: System.Threading.WaitHandle
#include "System/Threading/WaitHandle.hpp"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.LinkedList`1<System.WeakReference> s_Queues
System::Collections::Generic::LinkedList_1<System::WeakReference*>* System::Net::TimerThread::_get_s_Queues() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("TimerThread").WithContext("_get_s_Queues");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::LinkedList_1<System::WeakReference*>*>("System.Net", "TimerThread", "s_Queues"));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.LinkedList`1<System.WeakReference> s_Queues
void System::Net::TimerThread::_set_s_Queues(System::Collections::Generic::LinkedList_1<System::WeakReference*>* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("TimerThread").WithContext("_set_s_Queues");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net", "TimerThread", "s_Queues", value));
}
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.LinkedList`1<System.WeakReference> s_NewQueues
System::Collections::Generic::LinkedList_1<System::WeakReference*>* System::Net::TimerThread::_get_s_NewQueues() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("TimerThread").WithContext("_get_s_NewQueues");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::LinkedList_1<System::WeakReference*>*>("System.Net", "TimerThread", "s_NewQueues"));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.LinkedList`1<System.WeakReference> s_NewQueues
void System::Net::TimerThread::_set_s_NewQueues(System::Collections::Generic::LinkedList_1<System::WeakReference*>* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("TimerThread").WithContext("_set_s_NewQueues");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net", "TimerThread", "s_NewQueues", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 s_ThreadState
int System::Net::TimerThread::_get_s_ThreadState() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("TimerThread").WithContext("_get_s_ThreadState");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Net", "TimerThread", "s_ThreadState"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 s_ThreadState
void System::Net::TimerThread::_set_s_ThreadState(int value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("TimerThread").WithContext("_set_s_ThreadState");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net", "TimerThread", "s_ThreadState", value));
}
// Autogenerated static field getter
// Get static field: static private System.Threading.AutoResetEvent s_ThreadReadyEvent
System::Threading::AutoResetEvent* System::Net::TimerThread::_get_s_ThreadReadyEvent() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("TimerThread").WithContext("_get_s_ThreadReadyEvent");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Threading::AutoResetEvent*>("System.Net", "TimerThread", "s_ThreadReadyEvent"));
}
// Autogenerated static field setter
// Set static field: static private System.Threading.AutoResetEvent s_ThreadReadyEvent
void System::Net::TimerThread::_set_s_ThreadReadyEvent(System::Threading::AutoResetEvent* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("TimerThread").WithContext("_set_s_ThreadReadyEvent");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net", "TimerThread", "s_ThreadReadyEvent", value));
}
// Autogenerated static field getter
// Get static field: static private System.Threading.ManualResetEvent s_ThreadShutdownEvent
System::Threading::ManualResetEvent* System::Net::TimerThread::_get_s_ThreadShutdownEvent() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("TimerThread").WithContext("_get_s_ThreadShutdownEvent");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Threading::ManualResetEvent*>("System.Net", "TimerThread", "s_ThreadShutdownEvent"));
}
// Autogenerated static field setter
// Set static field: static private System.Threading.ManualResetEvent s_ThreadShutdownEvent
void System::Net::TimerThread::_set_s_ThreadShutdownEvent(System::Threading::ManualResetEvent* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("TimerThread").WithContext("_set_s_ThreadShutdownEvent");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net", "TimerThread", "s_ThreadShutdownEvent", value));
}
// Autogenerated static field getter
// Get static field: static private System.Threading.WaitHandle[] s_ThreadEvents
::Array<System::Threading::WaitHandle*>* System::Net::TimerThread::_get_s_ThreadEvents() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("TimerThread").WithContext("_get_s_ThreadEvents");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<System::Threading::WaitHandle*>*>("System.Net", "TimerThread", "s_ThreadEvents"));
}
// Autogenerated static field setter
// Set static field: static private System.Threading.WaitHandle[] s_ThreadEvents
void System::Net::TimerThread::_set_s_ThreadEvents(::Array<System::Threading::WaitHandle*>* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("TimerThread").WithContext("_set_s_ThreadEvents");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net", "TimerThread", "s_ThreadEvents", value));
}
// Autogenerated static field getter
// Get static field: static private System.Collections.Hashtable s_QueuesCache
System::Collections::Hashtable* System::Net::TimerThread::_get_s_QueuesCache() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("TimerThread").WithContext("_get_s_QueuesCache");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Hashtable*>("System.Net", "TimerThread", "s_QueuesCache"));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Hashtable s_QueuesCache
void System::Net::TimerThread::_set_s_QueuesCache(System::Collections::Hashtable* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("TimerThread").WithContext("_set_s_QueuesCache");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net", "TimerThread", "s_QueuesCache", value));
}
// Autogenerated method: System.Net.TimerThread..cctor
void System::Net::TimerThread::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("TimerThread").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "TimerThread", il2cpp_utils::NoArgClass<void>(), ".cctor", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: System.Net.TimerThread.CreateQueue
System::Net::TimerThread::Queue* System::Net::TimerThread::CreateQueue(int durationMilliseconds) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("TimerThread").WithContext("CreateQueue");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "TimerThread", il2cpp_utils::NoArgClass<System::Net::TimerThread::Queue*>(), "CreateQueue", {}, ::il2cpp_utils::ExtractTypes(durationMilliseconds)));
  return ::il2cpp_utils::RunMethodThrow<System::Net::TimerThread::Queue*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, durationMilliseconds);
}
// Autogenerated method: System.Net.TimerThread.StopTimerThread
void System::Net::TimerThread::StopTimerThread() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("TimerThread").WithContext("StopTimerThread");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "TimerThread", il2cpp_utils::NoArgClass<void>(), "StopTimerThread", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: System.Net.TimerThread.OnDomainUnload
void System::Net::TimerThread::OnDomainUnload(::Il2CppObject* sender, System::EventArgs* e) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("TimerThread").WithContext("OnDomainUnload");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "TimerThread", il2cpp_utils::NoArgClass<void>(), "OnDomainUnload", {}, ::il2cpp_utils::ExtractTypes(sender, e)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, sender, e);
}