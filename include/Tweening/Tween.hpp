// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: EaseType
#include "GlobalNamespace/EaseType.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: Tweening
namespace Tweening {
  // Forward declaring type: Tween
  class Tween;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Tweening::Tween);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::Tween*, "Tweening", "Tween");
// Type namespace: Tweening
namespace Tweening {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: Tweening.Tween
  // [TokenAttribute] Offset: FFFFFFFF
  class Tween : public ::Il2CppObject {
    public:
    public:
    // public System.Action onStart
    // Size: 0x8
    // Offset: 0x10
    ::System::Action* onStart;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Action onCompleted
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* onCompleted;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Action onKilled
    // Size: 0x8
    // Offset: 0x20
    ::System::Action* onKilled;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // protected System.Single _progress
    // Size: 0x4
    // Offset: 0x28
    float progress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected System.Single _startTime
    // Size: 0x4
    // Offset: 0x2C
    float startTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected System.Single _duration
    // Size: 0x4
    // Offset: 0x30
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected System.Boolean _loop
    // Size: 0x1
    // Offset: 0x34
    bool loop;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: loop and: delay
    char __padding6[0x3] = {};
    // protected System.Single _delay
    // Size: 0x4
    // Offset: 0x38
    float delay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected System.Boolean _isStarted
    // Size: 0x1
    // Offset: 0x3C
    bool isStarted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean _isKilled
    // Size: 0x1
    // Offset: 0x3D
    bool isKilled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isKilled and: easeType
    char __padding9[0x2] = {};
    // protected EaseType _easeType
    // Size: 0x4
    // Offset: 0x40
    ::GlobalNamespace::EaseType easeType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EaseType) == 0x4);
    public:
    // static field const value: static protected System.Single kEpsilon
    static constexpr const float kEpsilon = 0.001;
    // Get static field: static protected System.Single kEpsilon
    static float _get_kEpsilon();
    // Set static field: static protected System.Single kEpsilon
    static void _set_kEpsilon(float value);
    // Get instance field reference: public System.Action onStart
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_onStart();
    // Get instance field reference: public System.Action onCompleted
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_onCompleted();
    // Get instance field reference: public System.Action onKilled
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_onKilled();
    // Get instance field reference: protected System.Single _progress
    [[deprecated("Use field access instead!")]] float& dyn__progress();
    // Get instance field reference: protected System.Single _startTime
    [[deprecated("Use field access instead!")]] float& dyn__startTime();
    // Get instance field reference: protected System.Single _duration
    [[deprecated("Use field access instead!")]] float& dyn__duration();
    // Get instance field reference: protected System.Boolean _loop
    [[deprecated("Use field access instead!")]] bool& dyn__loop();
    // Get instance field reference: protected System.Single _delay
    [[deprecated("Use field access instead!")]] float& dyn__delay();
    // Get instance field reference: protected System.Boolean _isStarted
    [[deprecated("Use field access instead!")]] bool& dyn__isStarted();
    // Get instance field reference: protected System.Boolean _isKilled
    [[deprecated("Use field access instead!")]] bool& dyn__isKilled();
    // Get instance field reference: protected EaseType _easeType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EaseType& dyn__easeType();
    // public System.Boolean get_isStarted()
    // Offset: 0x13CAD48
    bool get_isStarted();
    // public System.Boolean get_isActive()
    // Offset: 0x13CAD50
    bool get_isActive();
    // public System.Boolean get_isComplete()
    // Offset: 0x13CAD80
    bool get_isComplete();
    // public System.Boolean get_isKilled()
    // Offset: 0x13CAD94
    bool get_isKilled();
    // public System.Single get_progress()
    // Offset: 0x13CAD9C
    float get_progress();
    // public System.Single get_startTime()
    // Offset: 0x13CADA4
    float get_startTime();
    // public System.Single get_duration()
    // Offset: 0x13CADAC
    float get_duration();
    // public System.Void set_duration(System.Single value)
    // Offset: 0x13CADB4
    void set_duration(float value);
    // public System.Boolean get_loop()
    // Offset: 0x13CADBC
    bool get_loop();
    // public System.Void set_loop(System.Boolean value)
    // Offset: 0x13CADC4
    void set_loop(bool value);
    // public System.Single get_delay()
    // Offset: 0x13CADD0
    float get_delay();
    // public System.Void set_delay(System.Single value)
    // Offset: 0x13CADD8
    void set_delay(float value);
    // public EaseType get_easeType()
    // Offset: 0x13CADE0
    ::GlobalNamespace::EaseType get_easeType();
    // public System.Void set_easeType(EaseType value)
    // Offset: 0x13CADE8
    void set_easeType(::GlobalNamespace::EaseType value);
    // protected System.Void .ctor()
    // Offset: 0x13CAE20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Tween* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Tweening::Tween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Tween*, creationType>()));
    }
    // public System.Void Kill()
    // Offset: 0x13CADF0
    void Kill();
    // public System.Void Restart(System.Single startTime)
    // Offset: 0x13CADFC
    void Restart(float startTime);
    // public System.Void Resume()
    // Offset: 0x13CAE0C
    void Resume();
    // public System.Void SetStartTimeAndEndTime(System.Single startTime, System.Single endTime)
    // Offset: 0x13CAE14
    void SetStartTimeAndEndTime(float startTime, float endTime);
    // public System.Void Update(System.Single currentTime)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Update(float currentTime);
    // public System.Void Sample(System.Single t)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Sample(float t);
  }; // Tweening.Tween
  #pragma pack(pop)
  static check_size<sizeof(Tween), 64 + sizeof(::GlobalNamespace::EaseType)> __Tweening_TweenSizeCheck;
  static_assert(sizeof(Tween) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Tweening::Tween::get_isStarted
// Il2CppName: get_isStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tweening::Tween::*)()>(&Tweening::Tween::get_isStarted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_isStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_isActive
// Il2CppName: get_isActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tweening::Tween::*)()>(&Tweening::Tween::get_isActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_isActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_isComplete
// Il2CppName: get_isComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tweening::Tween::*)()>(&Tweening::Tween::get_isComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_isComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_isKilled
// Il2CppName: get_isKilled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tweening::Tween::*)()>(&Tweening::Tween::get_isKilled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_isKilled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_progress
// Il2CppName: get_progress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Tweening::Tween::*)()>(&Tweening::Tween::get_progress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_progress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_startTime
// Il2CppName: get_startTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Tweening::Tween::*)()>(&Tweening::Tween::get_startTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_startTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Tweening::Tween::*)()>(&Tweening::Tween::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::set_duration
// Il2CppName: set_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(float)>(&Tweening::Tween::set_duration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "set_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_loop
// Il2CppName: get_loop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tweening::Tween::*)()>(&Tweening::Tween::get_loop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_loop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::set_loop
// Il2CppName: set_loop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(bool)>(&Tweening::Tween::set_loop)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "set_loop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_delay
// Il2CppName: get_delay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Tweening::Tween::*)()>(&Tweening::Tween::get_delay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_delay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::set_delay
// Il2CppName: set_delay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(float)>(&Tweening::Tween::set_delay)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "set_delay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_easeType
// Il2CppName: get_easeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EaseType (Tweening::Tween::*)()>(&Tweening::Tween::get_easeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_easeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::set_easeType
// Il2CppName: set_easeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(::GlobalNamespace::EaseType)>(&Tweening::Tween::set_easeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "EaseType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "set_easeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Tweening::Tween::Kill
// Il2CppName: Kill
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)()>(&Tweening::Tween::Kill)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "Kill", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::Restart
// Il2CppName: Restart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(float)>(&Tweening::Tween::Restart)> {
  static const MethodInfo* get() {
    static auto* startTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "Restart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startTime});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::Resume
// Il2CppName: Resume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)()>(&Tweening::Tween::Resume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "Resume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::SetStartTimeAndEndTime
// Il2CppName: SetStartTimeAndEndTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(float, float)>(&Tweening::Tween::SetStartTimeAndEndTime)> {
  static const MethodInfo* get() {
    static auto* startTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* endTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "SetStartTimeAndEndTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startTime, endTime});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(float)>(&Tweening::Tween::Update)> {
  static const MethodInfo* get() {
    static auto* currentTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentTime});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::Sample
// Il2CppName: Sample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(float)>(&Tweening::Tween::Sample)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "Sample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
