// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.SignalReceiver
#include "UnityEngine/Timeline/SignalReceiver.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: SignalAsset
  class SignalAsset;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.SignalReceiver/EventKeyValue
  class SignalReceiver::EventKeyValue : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.List`1<UnityEngine.Timeline.SignalAsset> m_Signals
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::Timeline::SignalAsset*>* m_Signals;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Timeline::SignalAsset*>*) == 0x8);
    // [CustomSignalEventDrawer] Offset: 0xDD88F0
    // private System.Collections.Generic.List`1<UnityEngine.Events.UnityEvent> m_Events
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::Events::UnityEvent*>* m_Events;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Events::UnityEvent*>*) == 0x8);
    // Creating value type constructor for type: EventKeyValue
    EventKeyValue(System::Collections::Generic::List_1<UnityEngine::Timeline::SignalAsset*>* m_Signals_ = {}, System::Collections::Generic::List_1<UnityEngine::Events::UnityEvent*>* m_Events_ = {}) noexcept : m_Signals{m_Signals_}, m_Events{m_Events_} {}
    // public System.Boolean TryGetValue(UnityEngine.Timeline.SignalAsset key, out UnityEngine.Events.UnityEvent value)
    // Offset: 0x17E63A8
    bool TryGetValue(UnityEngine::Timeline::SignalAsset* key, UnityEngine::Events::UnityEvent*& value);
    // public System.Void Append(UnityEngine.Timeline.SignalAsset key, UnityEngine.Events.UnityEvent value)
    // Offset: 0x17E6588
    void Append(UnityEngine::Timeline::SignalAsset* key, UnityEngine::Events::UnityEvent* value);
    // public System.Void Remove(System.Int32 idx)
    // Offset: 0x17E6BB0
    void Remove(int idx);
    // public System.Void Remove(UnityEngine.Timeline.SignalAsset key)
    // Offset: 0x17E674C
    void Remove(UnityEngine::Timeline::SignalAsset* key);
    // public System.Collections.Generic.List`1<UnityEngine.Timeline.SignalAsset> get_signals()
    // Offset: 0x17E6F88
    System::Collections::Generic::List_1<UnityEngine::Timeline::SignalAsset*>* get_signals();
    // public System.Collections.Generic.List`1<UnityEngine.Events.UnityEvent> get_events()
    // Offset: 0x17E6F90
    System::Collections::Generic::List_1<UnityEngine::Events::UnityEvent*>* get_events();
    // public System.Void .ctor()
    // Offset: 0x17E6EF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalReceiver::EventKeyValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::SignalReceiver::EventKeyValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalReceiver::EventKeyValue*, creationType>()));
    }
  }; // UnityEngine.Timeline.SignalReceiver/EventKeyValue
  #pragma pack(pop)
  static check_size<sizeof(SignalReceiver::EventKeyValue), 24 + sizeof(System::Collections::Generic::List_1<UnityEngine::Events::UnityEvent*>*)> __UnityEngine_Timeline_SignalReceiver_EventKeyValueSizeCheck;
  static_assert(sizeof(SignalReceiver::EventKeyValue) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::SignalReceiver::EventKeyValue*, "UnityEngine.Timeline", "SignalReceiver/EventKeyValue");
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalReceiver::EventKeyValue::TryGetValue
// Il2CppName: TryGetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::SignalReceiver::EventKeyValue::*)(UnityEngine::Timeline::SignalAsset*, UnityEngine::Events::UnityEvent*&)>(&UnityEngine::Timeline::SignalReceiver::EventKeyValue::TryGetValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalReceiver::EventKeyValue*), "TryGetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Timeline::SignalAsset*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Events::UnityEvent*&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalReceiver::EventKeyValue::Append
// Il2CppName: Append
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::SignalReceiver::EventKeyValue::*)(UnityEngine::Timeline::SignalAsset*, UnityEngine::Events::UnityEvent*)>(&UnityEngine::Timeline::SignalReceiver::EventKeyValue::Append)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalReceiver::EventKeyValue*), "Append", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Timeline::SignalAsset*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Events::UnityEvent*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalReceiver::EventKeyValue::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::SignalReceiver::EventKeyValue::*)(int)>(&UnityEngine::Timeline::SignalReceiver::EventKeyValue::Remove)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalReceiver::EventKeyValue*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalReceiver::EventKeyValue::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::SignalReceiver::EventKeyValue::*)(UnityEngine::Timeline::SignalAsset*)>(&UnityEngine::Timeline::SignalReceiver::EventKeyValue::Remove)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalReceiver::EventKeyValue*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Timeline::SignalAsset*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalReceiver::EventKeyValue::get_signals
// Il2CppName: get_signals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::Timeline::SignalAsset*>* (UnityEngine::Timeline::SignalReceiver::EventKeyValue::*)()>(&UnityEngine::Timeline::SignalReceiver::EventKeyValue::get_signals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalReceiver::EventKeyValue*), "get_signals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalReceiver::EventKeyValue::get_events
// Il2CppName: get_events
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::Events::UnityEvent*>* (UnityEngine::Timeline::SignalReceiver::EventKeyValue::*)()>(&UnityEngine::Timeline::SignalReceiver::EventKeyValue::get_events)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalReceiver::EventKeyValue*), "get_events", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalReceiver::EventKeyValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
