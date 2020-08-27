// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableHandle
  struct PlayableHandle;
  // Forward declaring type: INotification
  class INotification;
  // Forward declaring type: INotificationReceiver
  class INotificationReceiver;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Autogenerated type: UnityEngine.Playables.PlayableOutputHandle
  struct PlayableOutputHandle : public System::ValueType, public System::IEquatable_1<UnityEngine::Playables::PlayableOutputHandle> {
    public:
    // System.IntPtr m_Handle
    // Offset: 0x0
    System::IntPtr m_Handle;
    // System.UInt32 m_Version
    // Offset: 0x8
    uint m_Version;
    // Get static field: static private readonly UnityEngine.Playables.PlayableOutputHandle m_Null
    static UnityEngine::Playables::PlayableOutputHandle _get_m_Null();
    // Set static field: static private readonly UnityEngine.Playables.PlayableOutputHandle m_Null
    static void _set_m_Null(UnityEngine::Playables::PlayableOutputHandle value);
    // Creating value type constructor for type: PlayableOutputHandle
    PlayableOutputHandle(System::IntPtr m_Handle_ = {}, uint m_Version_ = {}) : m_Handle{m_Handle_}, m_Version{m_Version_} {}
    // static public UnityEngine.Playables.PlayableOutputHandle get_Null()
    // Offset: 0x141D004
    static UnityEngine::Playables::PlayableOutputHandle get_Null();
    // System.Boolean IsPlayableOutputOfType()
    // Offset: 0xFFFFFFFF
    template<class T>
    bool IsPlayableOutputOfType() {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<bool>(*this, "IsPlayableOutputOfType", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // static System.Boolean CompareVersion(UnityEngine.Playables.PlayableOutputHandle lhs, UnityEngine.Playables.PlayableOutputHandle rhs)
    // Offset: 0x141D0A4
    static bool CompareVersion(UnityEngine::Playables::PlayableOutputHandle lhs, UnityEngine::Playables::PlayableOutputHandle rhs);
    // System.Boolean IsValid()
    // Offset: 0xA48F38
    bool IsValid();
    // System.Type GetPlayableOutputType()
    // Offset: 0xA48F40
    System::Type* GetPlayableOutputType();
    // System.Void SetReferenceObject(UnityEngine.Object target)
    // Offset: 0xA48F48
    void SetReferenceObject(UnityEngine::Object* target);
    // System.Void SetUserData(UnityEngine.Object target)
    // Offset: 0xA48F50
    void SetUserData(UnityEngine::Object* target);
    // UnityEngine.Playables.PlayableHandle GetSourcePlayable()
    // Offset: 0xA48F58
    UnityEngine::Playables::PlayableHandle GetSourcePlayable();
    // System.Void SetSourcePlayable(UnityEngine.Playables.PlayableHandle target, System.Int32 port)
    // Offset: 0xA48F60
    void SetSourcePlayable(UnityEngine::Playables::PlayableHandle target, int port);
    // System.Int32 GetSourceOutputPort()
    // Offset: 0xA48F68
    int GetSourceOutputPort();
    // System.Void SetWeight(System.Single weight)
    // Offset: 0xA48F70
    void SetWeight(float weight);
    // System.Void PushNotification(UnityEngine.Playables.PlayableHandle origin, UnityEngine.Playables.INotification notification, System.Object context)
    // Offset: 0xA48F78
    void PushNotification(UnityEngine::Playables::PlayableHandle origin, UnityEngine::Playables::INotification* notification, ::Il2CppObject* context);
    // System.Void AddNotificationReceiver(UnityEngine.Playables.INotificationReceiver receiver)
    // Offset: 0xA48F80
    void AddNotificationReceiver(UnityEngine::Playables::INotificationReceiver* receiver);
    // static private System.Void .cctor()
    // Offset: 0x141DAD8
    static void _cctor();
    // static private System.Boolean IsValid_Injected(UnityEngine.Playables.PlayableOutputHandle _unity_self)
    // Offset: 0x141D27C
    static bool IsValid_Injected(UnityEngine::Playables::PlayableOutputHandle& _unity_self);
    // static private System.Type GetPlayableOutputType_Injected(UnityEngine.Playables.PlayableOutputHandle _unity_self)
    // Offset: 0x141D340
    static System::Type* GetPlayableOutputType_Injected(UnityEngine::Playables::PlayableOutputHandle& _unity_self);
    // static private System.Void SetReferenceObject_Injected(UnityEngine.Playables.PlayableOutputHandle _unity_self, UnityEngine.Object target)
    // Offset: 0x141D414
    static void SetReferenceObject_Injected(UnityEngine::Playables::PlayableOutputHandle& _unity_self, UnityEngine::Object* target);
    // static private System.Void SetUserData_Injected(UnityEngine.Playables.PlayableOutputHandle _unity_self, UnityEngine.Object target)
    // Offset: 0x141D4F8
    static void SetUserData_Injected(UnityEngine::Playables::PlayableOutputHandle& _unity_self, UnityEngine::Object* target);
    // static private System.Void GetSourcePlayable_Injected(UnityEngine.Playables.PlayableOutputHandle _unity_self, UnityEngine.Playables.PlayableHandle ret)
    // Offset: 0x141D5E4
    static void GetSourcePlayable_Injected(UnityEngine::Playables::PlayableOutputHandle& _unity_self, UnityEngine::Playables::PlayableHandle& ret);
    // static private System.Void SetSourcePlayable_Injected(UnityEngine.Playables.PlayableOutputHandle _unity_self, UnityEngine.Playables.PlayableHandle target, System.Int32 port)
    // Offset: 0x141D6DC
    static void SetSourcePlayable_Injected(UnityEngine::Playables::PlayableOutputHandle& _unity_self, UnityEngine::Playables::PlayableHandle& target, int port);
    // static private System.Int32 GetSourceOutputPort_Injected(UnityEngine.Playables.PlayableOutputHandle _unity_self)
    // Offset: 0x141D7B8
    static int GetSourceOutputPort_Injected(UnityEngine::Playables::PlayableOutputHandle& _unity_self);
    // static private System.Void SetWeight_Injected(UnityEngine.Playables.PlayableOutputHandle _unity_self, System.Single weight)
    // Offset: 0x141D88C
    static void SetWeight_Injected(UnityEngine::Playables::PlayableOutputHandle& _unity_self, float weight);
    // static private System.Void PushNotification_Injected(UnityEngine.Playables.PlayableOutputHandle _unity_self, UnityEngine.Playables.PlayableHandle origin, UnityEngine.Playables.INotification notification, System.Object context)
    // Offset: 0x141D98C
    static void PushNotification_Injected(UnityEngine::Playables::PlayableOutputHandle& _unity_self, UnityEngine::Playables::PlayableHandle& origin, UnityEngine::Playables::INotification* notification, ::Il2CppObject* context);
    // static private System.Void AddNotificationReceiver_Injected(UnityEngine.Playables.PlayableOutputHandle _unity_self, UnityEngine.Playables.INotificationReceiver receiver)
    // Offset: 0x141DA88
    static void AddNotificationReceiver_Injected(UnityEngine::Playables::PlayableOutputHandle& _unity_self, UnityEngine::Playables::INotificationReceiver* receiver);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA48EEC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object p)
    // Offset: 0xA48F28
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object p)
    bool Equals(::Il2CppObject* p);
    // public System.Boolean Equals(UnityEngine.Playables.PlayableOutputHandle other)
    // Offset: 0xA48F30
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.Playables.PlayableOutputHandle other)
    bool Equals(UnityEngine::Playables::PlayableOutputHandle other);
  }; // UnityEngine.Playables.PlayableOutputHandle
  // static public System.Boolean op_Equality(UnityEngine.Playables.PlayableOutputHandle lhs, UnityEngine.Playables.PlayableOutputHandle rhs)
  // Offset: 0x141CEF8
  inline bool operator ==(const UnityEngine::Playables::PlayableOutputHandle& lhs, const UnityEngine::Playables::PlayableOutputHandle& rhs) {
    return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine.Playables", "PlayableOutputHandle", "op_Equality", lhs, rhs));
  }
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableOutputHandle, "UnityEngine.Playables", "PlayableOutputHandle");
#pragma pack(pop)
